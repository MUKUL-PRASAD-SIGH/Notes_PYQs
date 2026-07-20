/*
  DESCRIPTION

  Sample C++ program to query the assembly structure of a Solid Edge assembly file using
  Geometry and Structure (G&S) COM interfaces. This sample demonstrates how to :

  1. Launch the Solid Edge server to load a Solid Edge Assembly (.asm) file.
  2. Traverse the assembly structure that consists of sub-assembly and part occurrence objects.
  3. Obtain the surface body from a part occurrence's definition and traverse its Brep G&T structure.
  4. Create an element-proxy object that uniquely identifies a topological element (face/edge/vertex)
     occuring anywhere in the assembly.
  5. Obtain a persistent identifier (reference key) to any object in the assembly.
  6. Bind back to the object in the assembly given its reference key.
  7. Get other useful information from these objects like transformation matrix, definition document etc.

  This sample was originally written to test and validate the results returned by the Solid Edge server.
  So at several places you see the sample using some interface methods as a means to check the sanity of the
  the results obtained from some other methods. This is not someting a typical client would be interested
  in doing but it does illustrate the usage of these interfaces.

  This sample outputs the assembly tree as indented ascii text on the console window. It also
  outputs the count of surface bodies and faces in each part occurrence.

  HISTORY

  Ashok	27-Sep-1999

/*--------------------------------------------------------------------------------------------------------------------------------*/

#include <windows.h>
#include <comdef.h>
#include <iostream.h>
#include <fstream.h>
#include "DMRoot.h"
#include "gtfordm.h"
#include "gsfordm.h"

#define COMCALL(exp, message) COMCall(__LINE__, message, exp)

// smart pointer wrappers for the G&T and G&S interfaces we care about
_COM_SMARTPTR_TYPEDEF(IDMReference, __uuidof(IDMReference));
_COM_SMARTPTR_TYPEDEF(IDMReferenceKey, __uuidof(IDMReferenceKey));

_COM_SMARTPTR_TYPEDEF(IDMSurfaceBodies, __uuidof(IDMSurfaceBodies));
_COM_SMARTPTR_TYPEDEF(IDMSurfaceBody, __uuidof(IDMSurfaceBody));
_COM_SMARTPTR_TYPEDEF(IEnumDMSurfaceBodies, __uuidof(IEnumDMSurfaceBodies));
_COM_SMARTPTR_TYPEDEF(IEnumDMFaces, __uuidof(IEnumDMFaces));
_COM_SMARTPTR_TYPEDEF(IDMFace, __uuidof(IDMFace));

_COM_SMARTPTR_TYPEDEF(IDMComponentDefinitions, __uuidof(IDMComponentDefinitions));
_COM_SMARTPTR_TYPEDEF(IDMComponentDefinition, __uuidof(IDMComponentDefinition));
_COM_SMARTPTR_TYPEDEF(IDMComponentOccurrence, __uuidof(IDMComponentOccurrence));
_COM_SMARTPTR_TYPEDEF(IDMElementProxy, __uuidof(IDMElementProxy));
_COM_SMARTPTR_TYPEDEF(IEnumDMComponentDefinitions, __uuidof(IEnumDMComponentDefinitions));
_COM_SMARTPTR_TYPEDEF(IEnumDMComponentOccurrences, __uuidof(IEnumDMComponentOccurrences));

// local functions declaration
static void TraverseAssembly(const char *asciiName);
static void WalkOccurrenceTree(LPENUM_DMCOMPONENTOCCURRENCES pEnumOccs);
static void WalkOccurrenceGAndT(LPDMCOMPONENTOCCURRENCE pOcc, LPDMSURFACEBODIES pBodies, int nIndent);
static void WorkElementProxy(LPDMCOMPONENTOCCURRENCE pOcc,ULONG ulKeySize, BYTE* pbKey);


// local class for throwing exceptions
class COMError
{
public:
	COMError(int line, const char *message, HRESULT code)
	{
		strcpy(m_Message, message);
		m_Code = code;
		m_Line = line;
	}
	char m_Message[256];
	int m_Line;
	HRESULT m_Code;
};

//  inline function to check HRESULT and throw error on failure with
//  wrapper macro that adds the source line number in.
inline void COMCall(int lineNumber, const char *message, HRESULT code)
{
	if (FAILED(code))
		throw COMError(lineNumber, message, code);
}

/*--------------------------------------------------------------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cerr << "Expect Solid Edge Part or Assmebly file name as argument" << endl;
		return 0;
	}
	
	bool initOK = false;

	try
	{
		COMCALL(CoInitialize(NULL), "Initialising COM");
		initOK = true;

		TraverseAssembly(argv[1]);
	}

	catch (COMError &e)
	{
		cerr << "COM error: " << hex << e.m_Code << dec << " Line: " << e.m_Line << " : " << e.m_Message << endl;
	}
	catch (_com_error &_e)
	{
		cerr << "_com_error: " << hex << _e.Error() << endl;
	}
	catch (...)
	{
		cerr << "Unexpected exception" << endl;
	}

	if (initOK)
		CoUninitialize();
	return 0;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/
static void TraverseAssembly(const char *asciiName)
{
	bstr_t fileName = asciiName;

	// get the class from the file and start the inproc handler
    CLSID fileClass;
    COMCALL(GetClassFile(fileName, &fileClass), "getting class of input file");

	IUnknownPtr pServerUnk;

	COMCALL(CoCreateInstance(fileClass, NULL, CLSCTX_LOCAL_SERVER, IID_IUnknown, (LPVOID *)&pServerUnk),
			"creating class object for input file");

//	IPersistFilePtr pPersistFile = pServerUnk;

//	COMCALL(pPersistFile->Load(fileName, STGM_SHARE_EXCLUSIVE | STGM_READWRITE), "loading file");

	//PR 2040196: Found that pPersistFile->Load() is not working always. Therefore, Calling explicitly StgOpenStorage() and 
	// loading the storage instead of calling on pPersistFile. 
	// This works for all types of SE files released/baselined etc.
	// get the IPersistStorage interface from the server
	IPersistStoragePtr pPersistStg = pServerUnk;
    
    // open the file as a storage
    IStoragePtr pStorage;
    COMCALL(::StgOpenStorage(fileName, NULL,
                          STGM_SHARE_EXCLUSIVE | STGM_READWRITE,
                          NULL, 0, &pStorage), "opening root storage of input file");
    
    // load the file storage
    COMCALL(pPersistStg->Load(pStorage), "loading the class object with storage");


	// get the one and only component definition from the Solid Edge Assembly document
	IDMComponentDefinitionsPtr pCompDefs = pServerUnk;
	IEnumDMComponentDefinitionsPtr pEnumCompDefs;
	IDMComponentDefinitionPtr pCompDef;
	IEnumDMComponentOccurrencesPtr pEnumOccs;
	ULONG ulNumFetched = 0;

	COMCALL(pCompDefs->EnumComponentDefinitions(&pEnumCompDefs), "getting component defn enumerator");

	COMCALL(pEnumCompDefs->Next(1, &pCompDef, &ulNumFetched), "getting first component defn");

	// Get enumerator of the top level occurrences in the assembly definition and walk the tree
	COMCALL(pCompDef->EnumOccurrences(&pEnumOccs), "getting top occurrences enumerator");

	if(pEnumOccs)
		WalkOccurrenceTree(pEnumOccs);

}

/*--------------------------------------------------------------------------------------------------------------------------------*/
static void WalkOccurrenceTree(LPENUM_DMCOMPONENTOCCURRENCES pEnumOccs)
{
	IDMComponentOccurrencePtr pOcc;
	IDMReferenceKeyPtr pRefKey;
	ULONG ulNumFetched = 0;
	ULONG ulKeySize = 0;
	BYTE* pbKey = NULL;
	static int nIndent = 0;

	// This function hits each occurrence object enumerated by the input enumerator. For each
	// occurrence:
	//   - We get its reference key and try binding back to the occurrence from the top level
	//     assembly document.
	//   - We determine whether its a part or a sub-assembly occurrence. If its a part we call
	//     a function to traverse the part brep. If sub-assembly we call this function
	//     recursively to walk down this occurrence's sub-tree.

	nIndent++;

	COMCALL(pEnumOccs->Next(1, &pOcc, &ulNumFetched), "getting occurrence");

	while(pOcc)
	{
		IDMComponentDefinitionPtr pCompDef;
		
		COMCALL(pOcc->GetDefinition(&pCompDef), "getting occurrence's definition");

		IDMSurfaceBodiesPtr pBodies = pCompDef;

		if(pBodies)
		{
			for(int i=1; i<nIndent; i++)
				cout << "    ";
			cout << "Part occurrence at level " << nIndent << endl;

			WalkOccurrenceGAndT(pOcc, pBodies, nIndent);
		}	
		else
		{
			for(int i=1; i<nIndent; i++)
				cout << "    ";
			cout << "Assembly occurrence at level " << nIndent << endl;
			
		}

		// Get the occurrence's ref key
		pRefKey = pOcc;

		COMCALL(pRefKey->GetKeySize (&ulKeySize), "getting occurrence's key size");

		if(pbKey)
		{
			delete pbKey;
			pbKey = NULL;
		}
		pbKey = new BYTE[ulKeySize];
		// TBD: throw insufficient memory exception if pbkey is NULL

		COMCALL(pRefKey->GetKey(ulKeySize, pbKey), "getting occurrence's key");

		// bind back the key 
		IDMComponentDefinitionPtr pCtxDef;
		IUnknownPtr pDocUnk;
		IDMReferencePtr pRef;
		IDMComponentOccurrencePtr pBoundOcc;
		COMCALL(pOcc->GetContextDefinition(&pCtxDef), "getting context definition");
		COMCALL(pCtxDef->GetDocument(&pDocUnk), "getting context's document");
		pRef = pDocUnk;
		COMCALL(pRef->BindKeyToInterface (IID_IDMComponentOccurrence, ulKeySize,
                                              pbKey, (LPVOID*) &pBoundOcc), "binding occurrence's key to interface");

		// Validation check: Check if bound back to the same occurrence
		if(pBoundOcc != pOcc)
			cout << "ERROR: Bound occurrence does not match original" << endl;

		// Enumerate sub-occurrences under the current occurrence
		IEnumDMComponentOccurrencesPtr pEnumSubOccs;
		COMCALL(pOcc->EnumSubOccurrences(&pEnumSubOccs), "getting sub-occurrences enumerator");

		// Recurse down the occurrence tree
		if(pEnumSubOccs)
			WalkOccurrenceTree(pEnumSubOccs);
		

		COMCALL(pEnumOccs->Next(1, &pOcc, &ulNumFetched), "getting occurrence");
	}

	nIndent--;

	if(pbKey)
	{
		delete pbKey;
		pbKey = NULL;
	}
}

/*--------------------------------------------------------------------------------------------------------------------------------*/
static void WalkOccurrenceGAndT(LPDMCOMPONENTOCCURRENCE pOcc, LPDMSURFACEBODIES pBodies, int nIndent)
{
	IEnumDMSurfaceBodiesPtr pEnumBodies;
	IDMSurfaceBodyPtr pBody;
	IEnumDMFacesPtr pEnumFaces;
	IDMFacePtr pFace;
	ULONG uBodiesFetched = 0;
	ULONG uFacesFetched = 0;
	int nBodies = 0;
	int nFaces = 0;
	IDMReferenceKeyPtr pRefKey;
	ULONG ulNumFetched = 0;
	ULONG ulKeySize = 0;
	BYTE* pbKey = NULL;
 
	// In this function we enumerate all the bodies in the input part occurrence's definition and
	// then, enumerate all the faces on each body. We also obtain the reference key for each face.
	// This key is relative to the native document (.prt file) where the face is defined.
	// Finally we call a function that creates an element proxy for each face.

    COMCALL(pBodies->EnumSurfaceBodies(&pEnumBodies), "getting surface bodies enumerator");

	for(nBodies = 0, nFaces = 0, COMCALL(pEnumBodies->Next(1, &pBody, &uBodiesFetched), "getting first body");
		uBodiesFetched == 1;
		COMCALL(pEnumBodies->Next(1, &pBody, &uBodiesFetched), "getting next body"))
	{
		nBodies++;

		COMCALL(pBody->EnumFaces(&pEnumFaces), "getting Faces enumerator");

		for(nFaces = 0, COMCALL(pEnumFaces->Next(1, &pFace, &uFacesFetched), "getting first face");
			uFacesFetched == 1;
			COMCALL(pEnumFaces->Next(1, &pFace, &uFacesFetched), "getting next face"))
		{
			// Get the face's's ref key
			pRefKey = pFace;

			COMCALL(pRefKey->GetKeySize (&ulKeySize), "getting face's key size");

			if(pbKey)
			{
				delete pbKey;
				pbKey = NULL;
			}
			pbKey = new BYTE[ulKeySize];
			// TBD: throw insufficient memory exception if pbkey is NULL

			COMCALL(pRefKey->GetKey(ulKeySize, pbKey), "getting face's key");

			// call function that creates an element proxy and demonstrates the use of various
			// methods on it which at the same time serve to validate the object
			WorkElementProxy(pOcc, ulKeySize, pbKey);

			nFaces++;
		}

		for(int i=1; i<nIndent+1; i++)
				cout << "    ";
		cout << "Body " << nBodies << " has " << nFaces << " faces" << endl;

	}

	if(pbKey)
	{
		delete pbKey;
		pbKey = NULL;
	}
}

/*--------------------------------------------------------------------------------------------------------------------------------*/
static void WorkElementProxy(LPDMCOMPONENTOCCURRENCE pOcc,ULONG ulKeySize, BYTE* pbKey)
{
	IDMReferenceKeyPtr pRefKey;
	ULONG ulKeySize2 = 0;
	BYTE* pbKey2 = NULL;
	IDMElementProxyPtr pElemProxy;
	IDMComponentOccurrencePtr pTmpOcc;
	IDMComponentDefinitionPtr pCompDef;
	IUnknownPtr pDocUnk;
	IDMReferencePtr pRef;
	double matrix1[16];
	double matrix2[16];

	// Create the element proxy. The element proxy lives in the top level assembly document and
	// references the native element (untransformed) living in the part document
	COMCALL(pOcc->CreateElementProxy(ulKeySize, pbKey, &pElemProxy), "creating element proxy");

	// Get the occurrece back from the element proxy (no practical value here except
	// to validate the api)
	COMCALL(pElemProxy->GetOccurrence(&pTmpOcc), "getting occurrence defn. owning element proxy");

	// Validation check: the transformation matrices of the proxy and its immediate owner
	// occurrence should be the same. This also validates the occurrence returned by the
	// previous call.
	COMCALL(pTmpOcc->GetTransformation(matrix1), "getting transformation matrix for occurrence");

	COMCALL(pElemProxy->GetTransformation(matrix2), "getting transformation matrix for element proxy");

	if(memcmp(matrix1, matrix2, 16*sizeof(double)) != 0)
		cout << "ERROR: Occurrence matrix is different from element proxy's matrix" << endl;

	if(pbKey2)
	{
		delete pbKey2;
		pbKey2 = NULL;
	}

	// Get the native element pointed to by the proxy. Then get its reference key. This key is
	// relative to the part document where the native object is defined.
	// Validation check: the key obtained from the native element should be the same as the key
	// passed into this function
	COMCALL(pElemProxy->GetNativeObject(IID_IDMReferenceKey, (LPVOID *)&pRefKey), "getting native object referenced by proxy");
	COMCALL(pRefKey->GetKeySize(&ulKeySize2), "getting native object's key size");

	if(ulKeySize != ulKeySize2)
		cout << "ERROR: Native object key size different from original object's key size" << endl;

	pbKey2 = new BYTE[ulKeySize2];
	// TBD: throw insufficient memory exception if pbkey is NULL
			
	COMCALL(pRefKey->GetKey(ulKeySize2, pbKey2), "getting native object's key");

	if(memcmp(pbKey, pbKey2, ulKeySize) !=0 )
		cout << "ERROR: Native object key different from original face's key" << endl;

	// Get the  proxy's reference key and the use this key to bind back to the proxy
	// starting from the top level assembly document. We then validate the bound proxy
	// by comparing its ref-key with that of the proxy created earlier in this function.
	// Remember, we cannot directly compare their COM interface pointers as there is no
	// guarantee that runtime identity is maintained for an element proxy. 
	pRefKey = pElemProxy;

	COMCALL(pRefKey->GetKeySize(&ulKeySize2), "getting element proxy's key size");

	if(pbKey2)
	{
		delete pbKey2;
		pbKey2 = NULL;
	}
	pbKey2 = new BYTE[ulKeySize2];
	// TBD: throw insufficient memory exception if pbkey is NULL
			
	COMCALL(pRefKey->GetKey(ulKeySize2, pbKey2), "getting element proxy's key");

	// get the top assembly context definition object (the context in which the input occurrence "occurs")
	COMCALL(pOcc->GetContextDefinition(&pCompDef), "getting occurrence's context definition");

	// get the document object corresponding to the top assembly definition.
	COMCALL(pCompDef->GetDocument(&pDocUnk), "getting top context document");

	// get the IDMReference interface on the assembly document
	pRef = pDocUnk;

	// bind to object given its reference key relative to its document
	COMCALL(pRef->BindKeyToInterface (IID_IDMElementProxy, ulKeySize2,
                                              pbKey2, (LPVOID*) &pElemProxy), "binding element proxy's key to interface");

	// Verify the binding by performing a cyclic check; that is, get the native object from the
	// bound proxy, then get its reference key and verify it matches the input key

	COMCALL(pElemProxy->GetNativeObject(IID_IDMReferenceKey, (LPVOID *)&pRefKey), "getting native object referenced by proxy");

	COMCALL(pRefKey->GetKeySize(&ulKeySize2), "getting native object's key size");

	if(ulKeySize != ulKeySize2)
		cout << "ERROR: Native object key size different from original object's key size" << endl;

	if(pbKey2)
	{
		delete pbKey2;
		pbKey2 = NULL;
	}
	pbKey2 = new BYTE[ulKeySize2];
	// TBD: throw insufficient memory exception if pbkey is NULL
			
	COMCALL(pRefKey->GetKey(ulKeySize2, pbKey2), "getting native object's key");

	if(memcmp(pbKey, pbKey2, ulKeySize) !=0 )
		cout << "ERROR: Native object key different from original face's key" << endl;

	if(pbKey2)
	{
		delete pbKey2;
		pbKey2 = NULL;
	}
}

