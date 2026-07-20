

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Mon Apr 02 00:03:43 2007
 */
/* Compiler settings for GSforDM.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __GSforDM_h__
#define __GSforDM_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDMComponentDefinitions_FWD_DEFINED__
#define __IDMComponentDefinitions_FWD_DEFINED__
typedef interface IDMComponentDefinitions IDMComponentDefinitions;
#endif 	/* __IDMComponentDefinitions_FWD_DEFINED__ */


#ifndef __IDMComponentDefinition_FWD_DEFINED__
#define __IDMComponentDefinition_FWD_DEFINED__
typedef interface IDMComponentDefinition IDMComponentDefinition;
#endif 	/* __IDMComponentDefinition_FWD_DEFINED__ */


#ifndef __IDMComponentOccurrence_FWD_DEFINED__
#define __IDMComponentOccurrence_FWD_DEFINED__
typedef interface IDMComponentOccurrence IDMComponentOccurrence;
#endif 	/* __IDMComponentOccurrence_FWD_DEFINED__ */


#ifndef __IDMElementProxy_FWD_DEFINED__
#define __IDMElementProxy_FWD_DEFINED__
typedef interface IDMElementProxy IDMElementProxy;
#endif 	/* __IDMElementProxy_FWD_DEFINED__ */


#ifndef __IEnumDMComponentDefinitions_FWD_DEFINED__
#define __IEnumDMComponentDefinitions_FWD_DEFINED__
typedef interface IEnumDMComponentDefinitions IEnumDMComponentDefinitions;
#endif 	/* __IEnumDMComponentDefinitions_FWD_DEFINED__ */


#ifndef __IEnumDMComponentOccurrences_FWD_DEFINED__
#define __IEnumDMComponentOccurrences_FWD_DEFINED__
typedef interface IEnumDMComponentOccurrences IEnumDMComponentOccurrences;
#endif 	/* __IEnumDMComponentOccurrences_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_GSforDM_0000 */
/* [local] */ 

#pragma warning(disable: 4005)
#define TARGET_IS_NT40_OR_LATER 1
#ifndef __WINDOWS_H__
#include <windows.h>
#endif
#ifndef __OBJBASE_H__
#include <objbase.h>
#endif
DEFINE_GUID(IID_IDMComponentDefinitions, 0x0002D240, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMComponentDefinition, 0x0002D241, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMComponentOccurrence, 0x0002D242, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMElementProxy, 0x0002D243, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IEnumDMComponentDefinitions, 0x0002D244, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IEnumDMComponentOccurrences, 0x0002D245, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
typedef /* [unique] */ IDMComponentDefinitions *LPDMCOMPONENTDEFINITIONS;

typedef /* [unique] */ IDMComponentDefinition *LPDMCOMPONENTDEFINITION;

typedef /* [unique] */ IDMComponentOccurrence *LPDMCOMPONENTOCCURRENCE;

typedef /* [unique] */ IDMElementProxy *LPDMELEMENTPROXY;

typedef /* [unique] */ IEnumDMComponentDefinitions *LPENUM_DMCOMPONENTDEFINITIONS;

typedef /* [unique] */ IEnumDMComponentOccurrences *LPENUM_DMCOMPONENTOCCURRENCES;



extern RPC_IF_HANDLE __MIDL_itf_GSforDM_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_GSforDM_0000_v0_0_s_ifspec;

#ifndef __IDMComponentDefinitions_INTERFACE_DEFINED__
#define __IDMComponentDefinitions_INTERFACE_DEFINED__

/* interface IDMComponentDefinitions */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMComponentDefinitions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D240-0000-0000-C000-000000000046")
    IDMComponentDefinitions : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumComponentDefinitions( 
            /* [out] */ LPENUM_DMCOMPONENTDEFINITIONS *ppEnumCompDefs) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMComponentDefinitionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMComponentDefinitions * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMComponentDefinitions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMComponentDefinitions * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumComponentDefinitions )( 
            IDMComponentDefinitions * This,
            /* [out] */ LPENUM_DMCOMPONENTDEFINITIONS *ppEnumCompDefs);
        
        END_INTERFACE
    } IDMComponentDefinitionsVtbl;

    interface IDMComponentDefinitions
    {
        CONST_VTBL struct IDMComponentDefinitionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMComponentDefinitions_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMComponentDefinitions_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMComponentDefinitions_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMComponentDefinitions_EnumComponentDefinitions(This,ppEnumCompDefs)	\
    (This)->lpVtbl -> EnumComponentDefinitions(This,ppEnumCompDefs)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMComponentDefinitions_EnumComponentDefinitions_Proxy( 
    IDMComponentDefinitions * This,
    /* [out] */ LPENUM_DMCOMPONENTDEFINITIONS *ppEnumCompDefs);


void __RPC_STUB IDMComponentDefinitions_EnumComponentDefinitions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMComponentDefinitions_INTERFACE_DEFINED__ */


#ifndef __IDMComponentDefinition_INTERFACE_DEFINED__
#define __IDMComponentDefinition_INTERFACE_DEFINED__

/* interface IDMComponentDefinition */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMComponentDefinition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D241-0000-0000-C000-000000000046")
    IDMComponentDefinition : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumOccurrences( 
            /* [out] */ LPENUM_DMCOMPONENTOCCURRENCES *ppEnumCompOccs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDocument( 
            /* [out] */ LPUNKNOWN *ppDocUnk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsPseudo( 
            /* [out] */ boolean *pbIsPseudo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTrueDefinition( 
            /* [out] */ LPDMCOMPONENTDEFINITION *ppTrueDef) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMComponentDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMComponentDefinition * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMComponentDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMComponentDefinition * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumOccurrences )( 
            IDMComponentDefinition * This,
            /* [out] */ LPENUM_DMCOMPONENTOCCURRENCES *ppEnumCompOccs);
        
        HRESULT ( STDMETHODCALLTYPE *GetDocument )( 
            IDMComponentDefinition * This,
            /* [out] */ LPUNKNOWN *ppDocUnk);
        
        HRESULT ( STDMETHODCALLTYPE *IsPseudo )( 
            IDMComponentDefinition * This,
            /* [out] */ boolean *pbIsPseudo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrueDefinition )( 
            IDMComponentDefinition * This,
            /* [out] */ LPDMCOMPONENTDEFINITION *ppTrueDef);
        
        END_INTERFACE
    } IDMComponentDefinitionVtbl;

    interface IDMComponentDefinition
    {
        CONST_VTBL struct IDMComponentDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMComponentDefinition_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMComponentDefinition_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMComponentDefinition_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMComponentDefinition_EnumOccurrences(This,ppEnumCompOccs)	\
    (This)->lpVtbl -> EnumOccurrences(This,ppEnumCompOccs)

#define IDMComponentDefinition_GetDocument(This,ppDocUnk)	\
    (This)->lpVtbl -> GetDocument(This,ppDocUnk)

#define IDMComponentDefinition_IsPseudo(This,pbIsPseudo)	\
    (This)->lpVtbl -> IsPseudo(This,pbIsPseudo)

#define IDMComponentDefinition_GetTrueDefinition(This,ppTrueDef)	\
    (This)->lpVtbl -> GetTrueDefinition(This,ppTrueDef)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMComponentDefinition_EnumOccurrences_Proxy( 
    IDMComponentDefinition * This,
    /* [out] */ LPENUM_DMCOMPONENTOCCURRENCES *ppEnumCompOccs);


void __RPC_STUB IDMComponentDefinition_EnumOccurrences_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMComponentDefinition_GetDocument_Proxy( 
    IDMComponentDefinition * This,
    /* [out] */ LPUNKNOWN *ppDocUnk);


void __RPC_STUB IDMComponentDefinition_GetDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMComponentDefinition_IsPseudo_Proxy( 
    IDMComponentDefinition * This,
    /* [out] */ boolean *pbIsPseudo);


void __RPC_STUB IDMComponentDefinition_IsPseudo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMComponentDefinition_GetTrueDefinition_Proxy( 
    IDMComponentDefinition * This,
    /* [out] */ LPDMCOMPONENTDEFINITION *ppTrueDef);


void __RPC_STUB IDMComponentDefinition_GetTrueDefinition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMComponentDefinition_INTERFACE_DEFINED__ */


#ifndef __IDMComponentOccurrence_INTERFACE_DEFINED__
#define __IDMComponentOccurrence_INTERFACE_DEFINED__

/* interface IDMComponentOccurrence */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMComponentOccurrence;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D242-0000-0000-C000-000000000046")
    IDMComponentOccurrence : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContextDefinition( 
            /* [out] */ LPDMCOMPONENTDEFINITION *ppCtxDef) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefinition( 
            /* [out] */ LPDMCOMPONENTDEFINITION *ppDef) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParentOccurrence( 
            /* [out] */ LPDMCOMPONENTOCCURRENCE *ppParentOcc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumSubOccurrences( 
            /* [out] */ LPENUM_DMCOMPONENTOCCURRENCES *ppEnumSubOccs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTransformation( 
            /* [out] */ double Matrix[ 16 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateElementProxy( 
            /* [in] */ ULONG cbKeySize,
            /* [size_is][in] */ BYTE *pKey,
            /* [out] */ LPDMELEMENTPROXY *ppElemProxy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PutTransformation( 
            /* [in] */ double Matrix[ 16 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMComponentOccurrenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMComponentOccurrence * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMComponentOccurrence * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMComponentOccurrence * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContextDefinition )( 
            IDMComponentOccurrence * This,
            /* [out] */ LPDMCOMPONENTDEFINITION *ppCtxDef);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefinition )( 
            IDMComponentOccurrence * This,
            /* [out] */ LPDMCOMPONENTDEFINITION *ppDef);
        
        HRESULT ( STDMETHODCALLTYPE *GetParentOccurrence )( 
            IDMComponentOccurrence * This,
            /* [out] */ LPDMCOMPONENTOCCURRENCE *ppParentOcc);
        
        HRESULT ( STDMETHODCALLTYPE *EnumSubOccurrences )( 
            IDMComponentOccurrence * This,
            /* [out] */ LPENUM_DMCOMPONENTOCCURRENCES *ppEnumSubOccs);
        
        HRESULT ( STDMETHODCALLTYPE *GetTransformation )( 
            IDMComponentOccurrence * This,
            /* [out] */ double Matrix[ 16 ]);
        
        HRESULT ( STDMETHODCALLTYPE *CreateElementProxy )( 
            IDMComponentOccurrence * This,
            /* [in] */ ULONG cbKeySize,
            /* [size_is][in] */ BYTE *pKey,
            /* [out] */ LPDMELEMENTPROXY *ppElemProxy);
        
        HRESULT ( STDMETHODCALLTYPE *PutTransformation )( 
            IDMComponentOccurrence * This,
            /* [in] */ double Matrix[ 16 ]);
        
        END_INTERFACE
    } IDMComponentOccurrenceVtbl;

    interface IDMComponentOccurrence
    {
        CONST_VTBL struct IDMComponentOccurrenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMComponentOccurrence_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMComponentOccurrence_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMComponentOccurrence_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMComponentOccurrence_GetContextDefinition(This,ppCtxDef)	\
    (This)->lpVtbl -> GetContextDefinition(This,ppCtxDef)

#define IDMComponentOccurrence_GetDefinition(This,ppDef)	\
    (This)->lpVtbl -> GetDefinition(This,ppDef)

#define IDMComponentOccurrence_GetParentOccurrence(This,ppParentOcc)	\
    (This)->lpVtbl -> GetParentOccurrence(This,ppParentOcc)

#define IDMComponentOccurrence_EnumSubOccurrences(This,ppEnumSubOccs)	\
    (This)->lpVtbl -> EnumSubOccurrences(This,ppEnumSubOccs)

#define IDMComponentOccurrence_GetTransformation(This,Matrix)	\
    (This)->lpVtbl -> GetTransformation(This,Matrix)

#define IDMComponentOccurrence_CreateElementProxy(This,cbKeySize,pKey,ppElemProxy)	\
    (This)->lpVtbl -> CreateElementProxy(This,cbKeySize,pKey,ppElemProxy)

#define IDMComponentOccurrence_PutTransformation(This,Matrix)	\
    (This)->lpVtbl -> PutTransformation(This,Matrix)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMComponentOccurrence_GetContextDefinition_Proxy( 
    IDMComponentOccurrence * This,
    /* [out] */ LPDMCOMPONENTDEFINITION *ppCtxDef);


void __RPC_STUB IDMComponentOccurrence_GetContextDefinition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMComponentOccurrence_GetDefinition_Proxy( 
    IDMComponentOccurrence * This,
    /* [out] */ LPDMCOMPONENTDEFINITION *ppDef);


void __RPC_STUB IDMComponentOccurrence_GetDefinition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMComponentOccurrence_GetParentOccurrence_Proxy( 
    IDMComponentOccurrence * This,
    /* [out] */ LPDMCOMPONENTOCCURRENCE *ppParentOcc);


void __RPC_STUB IDMComponentOccurrence_GetParentOccurrence_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMComponentOccurrence_EnumSubOccurrences_Proxy( 
    IDMComponentOccurrence * This,
    /* [out] */ LPENUM_DMCOMPONENTOCCURRENCES *ppEnumSubOccs);


void __RPC_STUB IDMComponentOccurrence_EnumSubOccurrences_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMComponentOccurrence_GetTransformation_Proxy( 
    IDMComponentOccurrence * This,
    /* [out] */ double Matrix[ 16 ]);


void __RPC_STUB IDMComponentOccurrence_GetTransformation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMComponentOccurrence_CreateElementProxy_Proxy( 
    IDMComponentOccurrence * This,
    /* [in] */ ULONG cbKeySize,
    /* [size_is][in] */ BYTE *pKey,
    /* [out] */ LPDMELEMENTPROXY *ppElemProxy);


void __RPC_STUB IDMComponentOccurrence_CreateElementProxy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMComponentOccurrence_PutTransformation_Proxy( 
    IDMComponentOccurrence * This,
    /* [in] */ double Matrix[ 16 ]);


void __RPC_STUB IDMComponentOccurrence_PutTransformation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMComponentOccurrence_INTERFACE_DEFINED__ */


#ifndef __IDMElementProxy_INTERFACE_DEFINED__
#define __IDMElementProxy_INTERFACE_DEFINED__

/* interface IDMElementProxy */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMElementProxy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D243-0000-0000-C000-000000000046")
    IDMElementProxy : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNativeObject( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTransformation( 
            /* [out] */ double Matrix[ 16 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOccurrence( 
            /* [out] */ LPDMCOMPONENTOCCURRENCE *ppOcc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PutTransformation( 
            /* [in] */ double Matrix[ 16 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMElementProxyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMElementProxy * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMElementProxy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMElementProxy * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNativeObject )( 
            IDMElementProxy * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetTransformation )( 
            IDMElementProxy * This,
            /* [out] */ double Matrix[ 16 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetOccurrence )( 
            IDMElementProxy * This,
            /* [out] */ LPDMCOMPONENTOCCURRENCE *ppOcc);
        
        HRESULT ( STDMETHODCALLTYPE *PutTransformation )( 
            IDMElementProxy * This,
            /* [in] */ double Matrix[ 16 ]);
        
        END_INTERFACE
    } IDMElementProxyVtbl;

    interface IDMElementProxy
    {
        CONST_VTBL struct IDMElementProxyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMElementProxy_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMElementProxy_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMElementProxy_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMElementProxy_GetNativeObject(This,riid,ppvObject)	\
    (This)->lpVtbl -> GetNativeObject(This,riid,ppvObject)

#define IDMElementProxy_GetTransformation(This,Matrix)	\
    (This)->lpVtbl -> GetTransformation(This,Matrix)

#define IDMElementProxy_GetOccurrence(This,ppOcc)	\
    (This)->lpVtbl -> GetOccurrence(This,ppOcc)

#define IDMElementProxy_PutTransformation(This,Matrix)	\
    (This)->lpVtbl -> PutTransformation(This,Matrix)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMElementProxy_GetNativeObject_Proxy( 
    IDMElementProxy * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void **ppvObject);


void __RPC_STUB IDMElementProxy_GetNativeObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMElementProxy_GetTransformation_Proxy( 
    IDMElementProxy * This,
    /* [out] */ double Matrix[ 16 ]);


void __RPC_STUB IDMElementProxy_GetTransformation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMElementProxy_GetOccurrence_Proxy( 
    IDMElementProxy * This,
    /* [out] */ LPDMCOMPONENTOCCURRENCE *ppOcc);


void __RPC_STUB IDMElementProxy_GetOccurrence_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMElementProxy_PutTransformation_Proxy( 
    IDMElementProxy * This,
    /* [in] */ double Matrix[ 16 ]);


void __RPC_STUB IDMElementProxy_PutTransformation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMElementProxy_INTERFACE_DEFINED__ */


#ifndef __IEnumDMComponentDefinitions_INTERFACE_DEFINED__
#define __IEnumDMComponentDefinitions_INTERFACE_DEFINED__

/* interface IEnumDMComponentDefinitions */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumDMComponentDefinitions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D244-0000-0000-C000-000000000046")
    IEnumDMComponentDefinitions : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cCompDefs,
            /* [out] */ IDMComponentDefinition **rgelt,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cCompDefs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ LPENUM_DMCOMPONENTDEFINITIONS *ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDMComponentDefinitionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDMComponentDefinitions * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDMComponentDefinitions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDMComponentDefinitions * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDMComponentDefinitions * This,
            /* [in] */ ULONG cCompDefs,
            /* [out] */ IDMComponentDefinition **rgelt,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumDMComponentDefinitions * This,
            /* [in] */ ULONG cCompDefs);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumDMComponentDefinitions * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumDMComponentDefinitions * This,
            /* [out] */ LPENUM_DMCOMPONENTDEFINITIONS *ppEnum);
        
        END_INTERFACE
    } IEnumDMComponentDefinitionsVtbl;

    interface IEnumDMComponentDefinitions
    {
        CONST_VTBL struct IEnumDMComponentDefinitionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDMComponentDefinitions_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumDMComponentDefinitions_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumDMComponentDefinitions_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumDMComponentDefinitions_Next(This,cCompDefs,rgelt,pcFetched)	\
    (This)->lpVtbl -> Next(This,cCompDefs,rgelt,pcFetched)

#define IEnumDMComponentDefinitions_Skip(This,cCompDefs)	\
    (This)->lpVtbl -> Skip(This,cCompDefs)

#define IEnumDMComponentDefinitions_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumDMComponentDefinitions_Clone(This,ppEnum)	\
    (This)->lpVtbl -> Clone(This,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMComponentDefinitions_RemoteNext_Proxy( 
    IEnumDMComponentDefinitions * This,
    /* [in] */ ULONG cCompDefs,
    /* [length_is][size_is][out] */ IDMComponentDefinition **rgelt,
    /* [out] */ ULONG *pcFetched);


void __RPC_STUB IEnumDMComponentDefinitions_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMComponentDefinitions_Skip_Proxy( 
    IEnumDMComponentDefinitions * This,
    /* [in] */ ULONG cCompDefs);


void __RPC_STUB IEnumDMComponentDefinitions_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMComponentDefinitions_Reset_Proxy( 
    IEnumDMComponentDefinitions * This);


void __RPC_STUB IEnumDMComponentDefinitions_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMComponentDefinitions_Clone_Proxy( 
    IEnumDMComponentDefinitions * This,
    /* [out] */ LPENUM_DMCOMPONENTDEFINITIONS *ppEnum);


void __RPC_STUB IEnumDMComponentDefinitions_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumDMComponentDefinitions_INTERFACE_DEFINED__ */


#ifndef __IEnumDMComponentOccurrences_INTERFACE_DEFINED__
#define __IEnumDMComponentOccurrences_INTERFACE_DEFINED__

/* interface IEnumDMComponentOccurrences */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumDMComponentOccurrences;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D245-0000-0000-C000-000000000046")
    IEnumDMComponentOccurrences : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cCompOccs,
            /* [out] */ IDMComponentOccurrence **rgelt,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cCompOccs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ LPENUM_DMCOMPONENTOCCURRENCES *ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDMComponentOccurrencesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDMComponentOccurrences * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDMComponentOccurrences * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDMComponentOccurrences * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDMComponentOccurrences * This,
            /* [in] */ ULONG cCompOccs,
            /* [out] */ IDMComponentOccurrence **rgelt,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumDMComponentOccurrences * This,
            /* [in] */ ULONG cCompOccs);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumDMComponentOccurrences * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumDMComponentOccurrences * This,
            /* [out] */ LPENUM_DMCOMPONENTOCCURRENCES *ppEnum);
        
        END_INTERFACE
    } IEnumDMComponentOccurrencesVtbl;

    interface IEnumDMComponentOccurrences
    {
        CONST_VTBL struct IEnumDMComponentOccurrencesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDMComponentOccurrences_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumDMComponentOccurrences_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumDMComponentOccurrences_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumDMComponentOccurrences_Next(This,cCompOccs,rgelt,pcFetched)	\
    (This)->lpVtbl -> Next(This,cCompOccs,rgelt,pcFetched)

#define IEnumDMComponentOccurrences_Skip(This,cCompOccs)	\
    (This)->lpVtbl -> Skip(This,cCompOccs)

#define IEnumDMComponentOccurrences_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumDMComponentOccurrences_Clone(This,ppEnum)	\
    (This)->lpVtbl -> Clone(This,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMComponentOccurrences_RemoteNext_Proxy( 
    IEnumDMComponentOccurrences * This,
    /* [in] */ ULONG cCompOccs,
    /* [length_is][size_is][out] */ IDMComponentOccurrence **rgelt,
    /* [out] */ ULONG *pcFetched);


void __RPC_STUB IEnumDMComponentOccurrences_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMComponentOccurrences_Skip_Proxy( 
    IEnumDMComponentOccurrences * This,
    /* [in] */ ULONG cCompOccs);


void __RPC_STUB IEnumDMComponentOccurrences_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMComponentOccurrences_Reset_Proxy( 
    IEnumDMComponentOccurrences * This);


void __RPC_STUB IEnumDMComponentOccurrences_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMComponentOccurrences_Clone_Proxy( 
    IEnumDMComponentOccurrences * This,
    /* [out] */ LPENUM_DMCOMPONENTOCCURRENCES *ppEnum);


void __RPC_STUB IEnumDMComponentOccurrences_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumDMComponentOccurrences_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumDMComponentDefinitions_Next_Proxy( 
    IEnumDMComponentDefinitions * This,
    /* [in] */ ULONG cCompDefs,
    /* [out] */ IDMComponentDefinition **rgelt,
    /* [out] */ ULONG *pcFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMComponentDefinitions_Next_Stub( 
    IEnumDMComponentDefinitions * This,
    /* [in] */ ULONG cCompDefs,
    /* [length_is][size_is][out] */ IDMComponentDefinition **rgelt,
    /* [out] */ ULONG *pcFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumDMComponentOccurrences_Next_Proxy( 
    IEnumDMComponentOccurrences * This,
    /* [in] */ ULONG cCompOccs,
    /* [out] */ IDMComponentOccurrence **rgelt,
    /* [out] */ ULONG *pcFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMComponentOccurrences_Next_Stub( 
    IEnumDMComponentOccurrences * This,
    /* [in] */ ULONG cCompOccs,
    /* [length_is][size_is][out] */ IDMComponentOccurrence **rgelt,
    /* [out] */ ULONG *pcFetched);



/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


