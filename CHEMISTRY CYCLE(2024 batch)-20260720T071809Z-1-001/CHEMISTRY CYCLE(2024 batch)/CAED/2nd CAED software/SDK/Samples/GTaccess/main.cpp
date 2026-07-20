// $Log: /CurrP-Appx/appxsdk/samples/GTaccess/main.cpp $ 
// 
// 2     2/09/99 5:31p Jedelmas
// Mass Update:  Changing Intergraph string to Unigraphics Solutions.
// Adding $Log: VSS keyword to enable check-in comments to be inserted
// into file.

/*
  DESCRIPTION

  Sample program to enumerate surface bodies in a Part file using SmartView 
  in-process handler. The Client does not have to use Object Linking or Embedding
  to access the OLE for DM Geometry and Topology for Surfaces interfaces.

  Basic steps:
  1. Obtain the CLSID of the Solid Edge Part file (*.par file).
  2. 'CoCreate' the In-process handler for this file.
  3. Obtain the IPeristStorage interface from this handler (it may run the Local Server to get it).
  4. Obtain the Root Storage of this file.
  5. 'Load' the handler with this Root Storage via the IPersistStorage interface.
  6. 'QueryInterface' for the top-level G&T interface -- IDMSurfaceBodies.
  7. Do your stuff (this sample prints out the number of faces in the Bodies found).

  
  
  HISTORY

  Ashok	14-Jun-1998
*/


#include <windows.h>
#include <comdef.h>
#include <iostream.h>
#include <fstream.h>
#include "gtfordm.h"

//  Smart pointer wrappers for G&T interfaces that we use in this sample
_COM_SMARTPTR_TYPEDEF(IDMSurfaceBodies, __uuidof(IDMSurfaceBodies));
_COM_SMARTPTR_TYPEDEF(IDMSurfaceBody, __uuidof(IDMSurfaceBody));
_COM_SMARTPTR_TYPEDEF(IEnumDMSurfaceBodies, __uuidof(IEnumDMSurfaceBodies));
_COM_SMARTPTR_TYPEDEF(IEnumDMFaces, __uuidof(IEnumDMFaces));
_COM_SMARTPTR_TYPEDEF(IDMFace, __uuidof(IDMFace));


// Class for throwing exceptions
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

/*--------------------------------------------------------------------------------------------------------------------------------*/
//  Function to check HRESULT and throw error on failure with
//  wrapper macro that adds the source line number in.
inline void COMCall(int lineNumber, const char *message, HRESULT code)
{
	if (FAILED(code))
		throw COMError(lineNumber, message, code);
}

#define COMCALL(exp, message) COMCall(__LINE__, message, exp)

/*--------------------------------------------------------------------------------------------------------------------------------*/
// Function to start the custom inproc handler and enumerate surface bodies
static void EnumerateBodiesAndFaces(const char *asciiName)
{
	bstr_t fileName = asciiName;

	// get the class from the file and start the inproc handler
    CLSID fileClass;
    COMCALL(GetClassFile(fileName, &fileClass), "getting class of input file");

	IUnknownPtr pServerUnk;
	COMCALL(CoCreateInstance(fileClass, NULL, CLSCTX_INPROC_HANDLER, IID_IUnknown, (LPVOID *)&pServerUnk),
			"creating class object for input file");

	// bring the server (part.exe in your case) to the running state. This is
	// required if the handler needs the server to process an interface call.
	// If the server is not in a running state then an interface call on the server
	// from inside the handler would fail because COM does not automatically run the
	// server for us.
	::OleRun(pServerUnk);

	// get the IPersistStorage interface from the server
	IPersistStoragePtr pPersistStg = pServerUnk;

    
    // open the file as a storage
    IStoragePtr pStorage;
    COMCALL(::StgOpenStorage(fileName, NULL,
                          STGM_SHARE_EXCLUSIVE | STGM_READWRITE,
                          NULL, 0, &pStorage), "opening root storage of input file");
    
    // load the file storage
    COMCALL(pPersistStg->Load(pStorage), "loading the class object with storage");

    // get the IDMSurfaceBodies interface and enumerate bodies in the file
	IDMSurfaceBodiesPtr pBodies = pPersistStg;
	IEnumDMSurfaceBodiesPtr pEnumBodies;
	IDMSurfaceBodyPtr pBody;
	IEnumDMFacesPtr pEnumFaces;
	IDMFacePtr pFace;
	ULONG uBodiesFetched = 0;
	ULONG uFacesFetched = 0;
	int nBodies = 0;
	int nFaces = 0;

 
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
			nFaces++;
		}
		cout << "Body " << nBodies << " has " << nFaces << " faces" << endl;
	}
}

/*--------------------------------------------------------------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cerr << "expect file name as argument" << endl;
		return 0;
	}
	
	bool initOK = false;

	try
	{
		COMCALL(CoInitialize(NULL), "Initialising COM");
		initOK = true;

		EnumerateBodiesAndFaces(argv[1]);
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
		cerr << "unexpected exception" << endl;
	}

	if (initOK)
		CoUninitialize();
	return 0;
}