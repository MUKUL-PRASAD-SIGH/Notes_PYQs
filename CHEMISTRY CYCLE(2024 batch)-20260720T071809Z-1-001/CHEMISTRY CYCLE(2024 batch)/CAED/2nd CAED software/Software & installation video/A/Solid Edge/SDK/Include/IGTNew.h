

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Mon Apr 02 00:03:46 2007
 */
/* Compiler settings for SEMarshal.idl:
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

#ifndef __IGTNew_h__
#define __IGTNew_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISECurveBody_FWD_DEFINED__
#define __ISECurveBody_FWD_DEFINED__
typedef interface ISECurveBody ISECurveBody;
#endif 	/* __ISECurveBody_FWD_DEFINED__ */


#ifndef __ISECurvePath_FWD_DEFINED__
#define __ISECurvePath_FWD_DEFINED__
typedef interface ISECurvePath ISECurvePath;
#endif 	/* __ISECurvePath_FWD_DEFINED__ */


#ifndef __ISEShell_FWD_DEFINED__
#define __ISEShell_FWD_DEFINED__
typedef interface ISEShell ISEShell;
#endif 	/* __ISEShell_FWD_DEFINED__ */


#ifndef __ISECurve_FWD_DEFINED__
#define __ISECurve_FWD_DEFINED__
typedef interface ISECurve ISECurve;
#endif 	/* __ISECurve_FWD_DEFINED__ */


#ifndef __ISESurfaceBody_FWD_DEFINED__
#define __ISESurfaceBody_FWD_DEFINED__
typedef interface ISESurfaceBody ISESurfaceBody;
#endif 	/* __ISESurfaceBody_FWD_DEFINED__ */


#ifndef __ISESurfaceBody2_FWD_DEFINED__
#define __ISESurfaceBody2_FWD_DEFINED__
typedef interface ISESurfaceBody2 ISESurfaceBody2;
#endif 	/* __ISESurfaceBody2_FWD_DEFINED__ */


#ifndef __ISESurfaceBody3_FWD_DEFINED__
#define __ISESurfaceBody3_FWD_DEFINED__
typedef interface ISESurfaceBody3 ISESurfaceBody3;
#endif 	/* __ISESurfaceBody3_FWD_DEFINED__ */


#ifndef __ISESurfaceBody4_FWD_DEFINED__
#define __ISESurfaceBody4_FWD_DEFINED__
typedef interface ISESurfaceBody4 ISESurfaceBody4;
#endif 	/* __ISESurfaceBody4_FWD_DEFINED__ */


#ifndef __ISESurfaceBody5_FWD_DEFINED__
#define __ISESurfaceBody5_FWD_DEFINED__
typedef interface ISESurfaceBody5 ISESurfaceBody5;
#endif 	/* __ISESurfaceBody5_FWD_DEFINED__ */


#ifndef __ISEFace_FWD_DEFINED__
#define __ISEFace_FWD_DEFINED__
typedef interface ISEFace ISEFace;
#endif 	/* __ISEFace_FWD_DEFINED__ */


#ifndef __ISEFace2_FWD_DEFINED__
#define __ISEFace2_FWD_DEFINED__
typedef interface ISEFace2 ISEFace2;
#endif 	/* __ISEFace2_FWD_DEFINED__ */


#ifndef __ISEFace3_FWD_DEFINED__
#define __ISEFace3_FWD_DEFINED__
typedef interface ISEFace3 ISEFace3;
#endif 	/* __ISEFace3_FWD_DEFINED__ */


#ifndef __ISEFace4_FWD_DEFINED__
#define __ISEFace4_FWD_DEFINED__
typedef interface ISEFace4 ISEFace4;
#endif 	/* __ISEFace4_FWD_DEFINED__ */


#ifndef __ISEEdge_FWD_DEFINED__
#define __ISEEdge_FWD_DEFINED__
typedef interface ISEEdge ISEEdge;
#endif 	/* __ISEEdge_FWD_DEFINED__ */


#ifndef __ISEEdge2_FWD_DEFINED__
#define __ISEEdge2_FWD_DEFINED__
typedef interface ISEEdge2 ISEEdge2;
#endif 	/* __ISEEdge2_FWD_DEFINED__ */


#ifndef __ISELoop_FWD_DEFINED__
#define __ISELoop_FWD_DEFINED__
typedef interface ISELoop ISELoop;
#endif 	/* __ISELoop_FWD_DEFINED__ */


#ifndef __ISELoop2_FWD_DEFINED__
#define __ISELoop2_FWD_DEFINED__
typedef interface ISELoop2 ISELoop2;
#endif 	/* __ISELoop2_FWD_DEFINED__ */


#ifndef __ISEEdgeUse_FWD_DEFINED__
#define __ISEEdgeUse_FWD_DEFINED__
typedef interface ISEEdgeUse ISEEdgeUse;
#endif 	/* __ISEEdgeUse_FWD_DEFINED__ */


#ifndef __ISEEdgeUse2_FWD_DEFINED__
#define __ISEEdgeUse2_FWD_DEFINED__
typedef interface ISEEdgeUse2 ISEEdgeUse2;
#endif 	/* __ISEEdgeUse2_FWD_DEFINED__ */


#ifndef __ISEComponentDefinition_FWD_DEFINED__
#define __ISEComponentDefinition_FWD_DEFINED__
typedef interface ISEComponentDefinition ISEComponentDefinition;
#endif 	/* __ISEComponentDefinition_FWD_DEFINED__ */


#ifndef __ISEComponentOccurrence_FWD_DEFINED__
#define __ISEComponentOccurrence_FWD_DEFINED__
typedef interface ISEComponentOccurrence ISEComponentOccurrence;
#endif 	/* __ISEComponentOccurrence_FWD_DEFINED__ */


#ifndef __ISEComponentDefinition2_FWD_DEFINED__
#define __ISEComponentDefinition2_FWD_DEFINED__
typedef interface ISEComponentDefinition2 ISEComponentDefinition2;
#endif 	/* __ISEComponentDefinition2_FWD_DEFINED__ */


#ifndef __ISEComponentOccurrence2_FWD_DEFINED__
#define __ISEComponentOccurrence2_FWD_DEFINED__
typedef interface ISEComponentOccurrence2 ISEComponentOccurrence2;
#endif 	/* __ISEComponentOccurrence2_FWD_DEFINED__ */


#ifndef __ISEAssemblyBody_FWD_DEFINED__
#define __ISEAssemblyBody_FWD_DEFINED__
typedef interface ISEAssemblyBody ISEAssemblyBody;
#endif 	/* __ISEAssemblyBody_FWD_DEFINED__ */


#ifndef __IEnumSEAssemblyBodies_FWD_DEFINED__
#define __IEnumSEAssemblyBodies_FWD_DEFINED__
typedef interface IEnumSEAssemblyBodies IEnumSEAssemblyBodies;
#endif 	/* __IEnumSEAssemblyBodies_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"
#include "gtfordm.h"
#include "gsfordm.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_SEMarshal_0000 */
/* [local] */ 

#pragma warning(disable: 4005)
#define TARGET_IS_NT40_OR_LATER 1
#ifndef __WINDOWS_H__
#include <windows.h>
#endif
#ifndef __OBJBASE_H__
#include <objbase.h>
#endif
DEFINE_GUID(IID_ISECurveBody, 0x3233f13, 0x64eb, 0x4c99, 0x85, 0xe6, 0x9e, 0xe1, 0x95, 0x9a, 0x63, 0x15);
DEFINE_GUID(IID_ISECurvePath, 0x499f004a, 0xc995, 0x45b9, 0x8c, 0xab, 0x2f, 0xcc, 0xbc, 0x49, 0xa0, 0xfd);
DEFINE_GUID(IID_ISEShell, 0x6899f8f2, 0x90eb, 0x4e28, 0xb6, 0xa4, 0x3e, 0xa7, 0x7f, 0x6f, 0x1a, 0x93);
DEFINE_GUID(IID_ISECurve, 0xaada9398, 0x2ee2, 0x4041, 0x8f, 0x87, 0xdd, 0x6f, 0x38, 0x23, 0x50, 0x3b);
DEFINE_GUID(IID_ISESurfaceBody, 0x712815e, 0xd31a, 0x11d1, 0xbe, 0xc8, 0x8, 0x0, 0x36, 0xd7, 0xb3, 0x2);
DEFINE_GUID(IID_ISESurfaceBody2, 0x9de673c1, 0x7b54, 0x11d3, 0x97, 0x34, 0x0, 0x60, 0x97, 0x38, 0x28, 0xb5);
DEFINE_GUID(IID_ISESurfaceBody3, 0x687b9bee, 0xd1e1, 0x4d77, 0x90, 0x72, 0xd8, 0xd0, 0x10, 0xb7, 0x7d, 0x8e);
DEFINE_GUID(IID_ISESurfaceBody4, 0x5bda9a1e, 0x6418, 0x4880, 0x8a, 0x2b, 0xc3, 0xff, 0x79, 0x41, 0x11, 0xaf);
DEFINE_GUID(IID_ISESurfaceBody5, 0x36f47b59, 0x1853, 0x4170, 0xb8, 0xa, 0xac, 0xfa, 0xb4, 0x1, 0x38, 0xde);
DEFINE_GUID(IID_ISEFace, 0xb03b890e, 0xf3dd, 0x11d1, 0xbe, 0xc9, 0x8, 0x0, 0x36, 0xd7, 0xb3, 0x2);
DEFINE_GUID(IID_ISEFace2, 0x9de673c0, 0x7b54, 0x11d3, 0x97, 0x34, 0x0, 0x60, 0x97, 0x38, 0x28, 0xb5);
DEFINE_GUID(IID_ISEFace3, 0x5270701e, 0x1067, 0x4bb2, 0x97, 0x4, 0xa4, 0xa0, 0xed, 0xfb, 0xc5, 0x59);
DEFINE_GUID(IID_ISEFace4, 0xf746707b, 0x7c6e, 0x476f, 0xbb, 0x21, 0xab, 0x2, 0xde, 0x24, 0x5e, 0x2b);
DEFINE_GUID(IID_ISEEdge,0xcdfd024c, 0xf3dd, 0x11d1, 0xbe, 0xc9, 0x8, 0x0, 0x36, 0xd7, 0xb3, 0x2);
DEFINE_GUID(IID_ISEEdge2, 0x8bdddca9, 0x140, 0x47c7, 0xbc, 0x25, 0x2a, 0x5d, 0x68, 0x7d, 0xac, 0x9f);
DEFINE_GUID(IID_ISELoop, 0x80a06bec, 0x39d2, 0x40a2, 0x87, 0x60, 0x33, 0xf7, 0x51, 0x29, 0x4a, 0x8);
DEFINE_GUID(IID_ISELoop2, 0xcd10403a, 0x85dc, 0x46d8, 0xb0, 0xd5, 0xdb, 0xee, 0x39, 0x2, 0x53, 0x10);
DEFINE_GUID(IID_ISEEdgeUse, 0x49c40e77, 0x3f01, 0x4a24, 0x97, 0x47, 0xfe, 0xbd, 0x69, 0xde, 0xc9, 0x95);
DEFINE_GUID(IID_ISEEdgeUse2, 0x8f466d92, 0xf1b9, 0x4929, 0x86, 0xa0, 0xb4, 0xf8, 0xf5, 0x6c, 0x85, 0xc8);
DEFINE_GUID(IID_ISEComponentDefinition,0xaf17f175, 0x93a6, 0x11d3, 0xa3, 0xe2, 0x0, 0x4, 0xac, 0x96, 0x95, 0xbb);
DEFINE_GUID(IID_ISEComponentOccurrence,0xaf17f176, 0x93a6, 0x11d3, 0xa3, 0xe2, 0x0, 0x4, 0xac, 0x96, 0x95, 0xbb);
DEFINE_GUID(IID_ISEComponentDefinition2,0x2b4dfa3a, 0x3f2a, 0x45f6, 0xb5, 0x40, 0xa7, 0x78, 0xd9, 0x1d, 0xd8, 0x2a);
DEFINE_GUID(IID_ISEComponentOccurrence2,0x35d71da6, 0x9ae5, 0x461a, 0x89, 0x5b, 0x73, 0xb5, 0xed, 0x57, 0x99, 0x5e);
DEFINE_GUID(IID_IEnumSEAssemblyBodies, 0x71624f92, 0xa9a7, 0x497b, 0x9b, 0x6f, 0x8, 0xac, 0x68, 0x94, 0xc4, 0xe2);
DEFINE_GUID(IID_ISEAssemblyBody, 0x50d9aadf, 0x7ff8, 0x4f6e, 0x97, 0x5, 0x37, 0xd2, 0xdf, 0x16, 0x44, 0x3f);
typedef /* [unique] */ ISECurveBody *LPSECURVEBODY;

typedef /* [unique] */ ISECurvePath *LPSECURVEPATH;

typedef /* [unique] */ ISEShell *LPSESHELL;

typedef /* [unique] */ ISECurve *LPSECURVE;

typedef /* [unique] */ ISESurfaceBody *LPSESURFACEBODY;

typedef /* [unique] */ ISESurfaceBody2 *LPSESURFACEBODY2;

typedef /* [unique] */ ISESurfaceBody3 *LPSESURFACEBODY3;

typedef /* [unique] */ ISESurfaceBody4 *LPSESURFACEBODY4;

typedef /* [unique] */ ISESurfaceBody5 *LPSESURFACEBODY5;

typedef /* [unique] */ ISEFace *LPSEFACE;

typedef /* [unique] */ ISEFace2 *LPSEFACE2;

typedef /* [unique] */ ISEFace3 *LPSEFACE3;

typedef /* [unique] */ ISEFace4 *LPSEFACE4;

typedef /* [unique] */ ISEEdge *LPSEEDGE;

typedef /* [unique] */ ISEEdge2 *LPSEEDGE2;

typedef /* [unique] */ ISELoop *LPSELOOP;

typedef /* [unique] */ ISELoop2 *LPSELOOP2;

typedef /* [unique] */ ISEEdgeUse *LPSEEDGEUSE;

typedef /* [unique] */ ISEEdgeUse2 *LPSEEDGEUSE2;

typedef /* [unique] */ ISEComponentDefinition *LPSECOMPONENTDEFINITION;

typedef /* [unique] */ ISEComponentOccurrence *LPSECOMPONENTOCCURRENCE;

typedef /* [unique] */ ISEComponentDefinition2 *LPSECOMPONENTDEFINITION2;

typedef /* [unique] */ ISEComponentOccurrence2 *LPSECOMPONENTOCCURRENCE2;

typedef /* [unique] */ IEnumSEAssemblyBodies *LPENUM_SEASSEMBLYBODIES;

typedef /* [unique] */ ISEAssemblyBody *LPSEASSEMBLYBODY;

typedef 
enum tagSEComponentCountOption
    {	IMMEDIATE_OCCURRENCES	= 0,
	IMMEDIATE_PART_OCCURRENCES	= IMMEDIATE_OCCURRENCES + 1,
	IMMEDIATE_UNIQUE_OCCURRENCES	= IMMEDIATE_PART_OCCURRENCES + 1,
	IMMEDIATE_UNIQUE_PART_OCCURRENCES	= IMMEDIATE_UNIQUE_OCCURRENCES + 1,
	ALL_OCCURRENCES_ESTIMATE	= IMMEDIATE_UNIQUE_PART_OCCURRENCES + 1,
	ALL_UNIQUE_OCCURRENCES_ESTIMATE	= ALL_OCCURRENCES_ESTIMATE + 1,
	ALL_OCCURRENCES	= ALL_UNIQUE_OCCURRENCES_ESTIMATE + 1,
	ALL_UNIQUE_OCCURRENCES	= ALL_OCCURRENCES + 1,
	ALL_PART_OCCURRENCES	= ALL_UNIQUE_OCCURRENCES + 1,
	ALL_UNIQUE_PART_OCCURRENCES	= ALL_PART_OCCURRENCES + 1
    } 	SECOMPONENTCOUNTOPTION;

#ifndef __UVISUAL_H__
typedef struct tagSEMaterial
    {
    float m_DiffuseColor[ 3 ];
    float m_AmbientColor[ 3 ];
    float m_SpecularColor[ 3 ];
    float m_EmissionColor[ 3 ];
    float m_Shininess;
    float m_Opacity;
    } 	SEMATERIAL;

#endif

//////////////////SE-Custom interface on Curve Body: (ISECurveBody)////////////////////////////////////////
// 1. GetExactRangeBox: Returns the exact minimum and maximum points of this Curve Body
//    'pMinPoint' is an array of three doubles containing the minimum point.
//    'pMaxPoint' is an array of three doubles containing the maximum point.
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0000_v0_0_s_ifspec;

#ifndef __ISECurveBody_INTERFACE_DEFINED__
#define __ISECurveBody_INTERFACE_DEFINED__

/* interface ISECurveBody */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISECurveBody;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("95CCEE8C-B034-4f7a-8FB6-394F5007BC76")
    ISECurveBody : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExactRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECurveBodyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECurveBody * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECurveBody * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECurveBody * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExactRangeBox )( 
            ISECurveBody * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        END_INTERFACE
    } ISECurveBodyVtbl;

    interface ISECurveBody
    {
        CONST_VTBL struct ISECurveBodyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECurveBody_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECurveBody_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECurveBody_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECurveBody_GetExactRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetExactRangeBox(This,pMinPoint,pMaxPoint)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISECurveBody_GetExactRangeBox_Proxy( 
    ISECurveBody * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB ISECurveBody_GetExactRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECurveBody_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0148 */
/* [local] */ 

//////////////////SE-Custom interface on Curve Path: (ISECurvePath)////////////////////////////////////////
// 1. GetExactRangeBox: Returns the exact minimum and maximum points of this Curve Path
//    'pMinPoint' is an array of three doubles containing the minimum point.
//    'pMaxPoint' is an array of three doubles containing the maximum point.
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0148_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0148_v0_0_s_ifspec;

#ifndef __ISECurvePath_INTERFACE_DEFINED__
#define __ISECurvePath_INTERFACE_DEFINED__

/* interface ISECurvePath */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISECurvePath;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BA37DDEE-83AE-48f2-803F-62CA6A4D6F05")
    ISECurvePath : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExactRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECurvePathVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECurvePath * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECurvePath * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECurvePath * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExactRangeBox )( 
            ISECurvePath * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        END_INTERFACE
    } ISECurvePathVtbl;

    interface ISECurvePath
    {
        CONST_VTBL struct ISECurvePathVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECurvePath_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECurvePath_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECurvePath_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECurvePath_GetExactRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetExactRangeBox(This,pMinPoint,pMaxPoint)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISECurvePath_GetExactRangeBox_Proxy( 
    ISECurvePath * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB ISECurvePath_GetExactRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECurvePath_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0149 */
/* [local] */ 

//////////////////SE-Custom interface on Shell: (ISEShell)////////////////////////////////////////
// 1. GetExactRangeBox: Returns the exact minimum and maximum points of this Shell
//    'pMinPoint' is an array of three doubles containing the minimum point.
//    'pMaxPoint' is an array of three doubles containing the maximum point.
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0149_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0149_v0_0_s_ifspec;

#ifndef __ISEShell_INTERFACE_DEFINED__
#define __ISEShell_INTERFACE_DEFINED__

/* interface ISEShell */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEShell;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("51527A35-5CA4-45ce-95EF-AF27B48574ED")
    ISEShell : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExactRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEShellVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEShell * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEShell * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEShell * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExactRangeBox )( 
            ISEShell * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        END_INTERFACE
    } ISEShellVtbl;

    interface ISEShell
    {
        CONST_VTBL struct ISEShellVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEShell_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEShell_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEShell_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEShell_GetExactRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetExactRangeBox(This,pMinPoint,pMaxPoint)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEShell_GetExactRangeBox_Proxy( 
    ISEShell * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB ISEShell_GetExactRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEShell_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0150 */
/* [local] */ 

//////////////////SE-Custom interface on Curve: (ISECurve)////////////////////////////////////////
// 1. GetExactRangeBox: Returns the exact minimum and maximum points of this Curve
//    'pMinPoint' is an array of three doubles containing the minimum point.
//    'pMaxPoint' is an array of three doubles containing the maximum point.
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0150_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0150_v0_0_s_ifspec;

#ifndef __ISECurve_INTERFACE_DEFINED__
#define __ISECurve_INTERFACE_DEFINED__

/* interface ISECurve */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISECurve;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F0A768B9-CF4C-4bd8-A008-E709697725D3")
    ISECurve : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExactRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECurveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECurve * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECurve * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECurve * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExactRangeBox )( 
            ISECurve * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        END_INTERFACE
    } ISECurveVtbl;

    interface ISECurve
    {
        CONST_VTBL struct ISECurveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECurve_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECurve_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECurve_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECurve_GetExactRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetExactRangeBox(This,pMinPoint,pMaxPoint)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISECurve_GetExactRangeBox_Proxy( 
    ISECurve * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB ISECurve_GetExactRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECurve_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0151 */
/* [local] */ 

//////////////////SE-Custom interface on Surface Body: (ISESurfaceBody)///////////////////////////////////////////
// 1. EnumVertices: Returns the total number of unique vertices on this Surface Body. The
//    enumerator is over IDMVertex, the OLEforDM interface.
// 2. GetFacets: Returns the facetted version of this Surface Body, where the facet-triangular
//    plane is guaranteed to be within a maximum-distance of ChordHeightTol from the surface.
//    'nFacetCount' is the number of facet-triangles with 'ppPoints' being the flat array consisting
//    of nFacetCount*3*3 doubles, where each triangle is output as 3 triplets for each of its vertices.
//    The memory has been allocated using CoTaskMemAlloc (and MUST be freed by the caller using CoTaskMemFree).
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0151_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0151_v0_0_s_ifspec;

#ifndef __ISESurfaceBody_INTERFACE_DEFINED__
#define __ISESurfaceBody_INTERFACE_DEFINED__

/* interface ISESurfaceBody */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISESurfaceBody;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0712815E-D31A-11d1-BEC8-080036D7B302")
    ISESurfaceBody : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumVertices( 
            /* [out] */ LPENUM_DMVERTICES *ppEnumVertices) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFacets( 
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nFacetCount,
            /* [size_is][size_is][out] */ double **ppPoints) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISESurfaceBodyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISESurfaceBody * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISESurfaceBody * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISESurfaceBody * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumVertices )( 
            ISESurfaceBody * This,
            /* [out] */ LPENUM_DMVERTICES *ppEnumVertices);
        
        HRESULT ( STDMETHODCALLTYPE *GetFacets )( 
            ISESurfaceBody * This,
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nFacetCount,
            /* [size_is][size_is][out] */ double **ppPoints);
        
        END_INTERFACE
    } ISESurfaceBodyVtbl;

    interface ISESurfaceBody
    {
        CONST_VTBL struct ISESurfaceBodyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISESurfaceBody_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISESurfaceBody_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISESurfaceBody_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISESurfaceBody_EnumVertices(This,ppEnumVertices)	\
    (This)->lpVtbl -> EnumVertices(This,ppEnumVertices)

#define ISESurfaceBody_GetFacets(This,ChordHeightTol,nFacetCount,ppPoints)	\
    (This)->lpVtbl -> GetFacets(This,ChordHeightTol,nFacetCount,ppPoints)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISESurfaceBody_EnumVertices_Proxy( 
    ISESurfaceBody * This,
    /* [out] */ LPENUM_DMVERTICES *ppEnumVertices);


void __RPC_STUB ISESurfaceBody_EnumVertices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISESurfaceBody_GetFacets_Proxy( 
    ISESurfaceBody * This,
    /* [in] */ double ChordHeightTol,
    /* [out] */ long *nFacetCount,
    /* [size_is][size_is][out] */ double **ppPoints);


void __RPC_STUB ISESurfaceBody_GetFacets_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISESurfaceBody_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0152 */
/* [local] */ 

//////////////////SE-Custom interface on Surface Body: (ISESurfaceBody2)////////////////////////////////////////
// 1. GetFacetsWithNormals: Returns the facetted version of this Surface Body with normals at each vertex,
//    where the facet-triangular plane is guaranteed to be within a maximum-distance of ChordHeightTol from the surface.
//    'nFacetCount' is the number of facet-triangles with 'ppPoints' and 'ppNormals being the flat arrays consisting
//    of nFacetCount*3*3 doubles, where each triangle is output as 3 triplets for each of its vertices.
//    The memory has been allocated using CoTaskMemAlloc (and MUST be freed by the caller using CoTaskMemFree).
// 2. GetEntityFromParasolID: Given the persistant parasolid ID of a topological entity (face/edge/vertex) belonging to
//    this Surface Body, this method returns the desired interface on the G&T object corresponding to that entity.
//    It is to be noted that this method may not succeed or return erroneous result if the body was modified since
//    the time the client obtained the parasolid ID (input to this method) from the body.
// 3. GetParasolIDFromEntity: This method, which is the counterpart of the method GetEntityFromParsolID, returns the
//    persistant parasolid ID of the input G&T entity contained in this Surface Body.
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0152_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0152_v0_0_s_ifspec;

#ifndef __ISESurfaceBody2_INTERFACE_DEFINED__
#define __ISESurfaceBody2_INTERFACE_DEFINED__

/* interface ISESurfaceBody2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISESurfaceBody2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DE673C1-7B54-11d3-9734-0060973828B5")
    ISESurfaceBody2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFacetsWithNormals( 
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nFacetCount,
            /* [size_is][size_is][out] */ double **ppPoints,
            /* [size_is][size_is][out] */ double **ppNormals) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEntityFromParasolID( 
            /* [in] */ int nID,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParasolIDFromEntity( 
            /* [in] */ LPUNKNOWN pEntityUnk,
            /* [out] */ int *pnID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISESurfaceBody2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISESurfaceBody2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISESurfaceBody2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISESurfaceBody2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFacetsWithNormals )( 
            ISESurfaceBody2 * This,
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nFacetCount,
            /* [size_is][size_is][out] */ double **ppPoints,
            /* [size_is][size_is][out] */ double **ppNormals);
        
        HRESULT ( STDMETHODCALLTYPE *GetEntityFromParasolID )( 
            ISESurfaceBody2 * This,
            /* [in] */ int nID,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetParasolIDFromEntity )( 
            ISESurfaceBody2 * This,
            /* [in] */ LPUNKNOWN pEntityUnk,
            /* [out] */ int *pnID);
        
        END_INTERFACE
    } ISESurfaceBody2Vtbl;

    interface ISESurfaceBody2
    {
        CONST_VTBL struct ISESurfaceBody2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISESurfaceBody2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISESurfaceBody2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISESurfaceBody2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISESurfaceBody2_GetFacetsWithNormals(This,ChordHeightTol,nFacetCount,ppPoints,ppNormals)	\
    (This)->lpVtbl -> GetFacetsWithNormals(This,ChordHeightTol,nFacetCount,ppPoints,ppNormals)

#define ISESurfaceBody2_GetEntityFromParasolID(This,nID,riid,ppvObject)	\
    (This)->lpVtbl -> GetEntityFromParasolID(This,nID,riid,ppvObject)

#define ISESurfaceBody2_GetParasolIDFromEntity(This,pEntityUnk,pnID)	\
    (This)->lpVtbl -> GetParasolIDFromEntity(This,pEntityUnk,pnID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISESurfaceBody2_GetFacetsWithNormals_Proxy( 
    ISESurfaceBody2 * This,
    /* [in] */ double ChordHeightTol,
    /* [out] */ long *nFacetCount,
    /* [size_is][size_is][out] */ double **ppPoints,
    /* [size_is][size_is][out] */ double **ppNormals);


void __RPC_STUB ISESurfaceBody2_GetFacetsWithNormals_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISESurfaceBody2_GetEntityFromParasolID_Proxy( 
    ISESurfaceBody2 * This,
    /* [in] */ int nID,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void **ppvObject);


void __RPC_STUB ISESurfaceBody2_GetEntityFromParasolID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISESurfaceBody2_GetParasolIDFromEntity_Proxy( 
    ISESurfaceBody2 * This,
    /* [in] */ LPUNKNOWN pEntityUnk,
    /* [out] */ int *pnID);


void __RPC_STUB ISESurfaceBody2_GetParasolIDFromEntity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISESurfaceBody2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0153 */
/* [local] */ 

//////////////////SE-Custom interface on Surface Body: (ISESurfaceBody3)////////////////////////////////////////
// 1. GetFacetsWithNormalsAndTextureCoords: Returns the facetted version of this Surface Body with normals and uv
//    texture coordinates at each vertex, where the facet-triangular plane is guaranteed to be within a maximum-distance
//    of ChordHeightTol from the surface. 'nFacetCount' is the number of facet-triangles with 'ppPoints' and 'ppNormals'
//    being the flat arrays consisting of nFacetCount*3*3 doubles, where each triangle is output as 3 triplets for each
//    of its vertices. 'ppTexCoords' is a flat array consisting of nFacetCount*3*2 doubles, where each triangle is output
//    as 3 uv pairs for each of its vertices. The memory has been allocated using CoTaskMemAlloc (and MUST be freed by
//    the caller using CoTaskMemFree).
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0153_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0153_v0_0_s_ifspec;

#ifndef __ISESurfaceBody3_INTERFACE_DEFINED__
#define __ISESurfaceBody3_INTERFACE_DEFINED__

/* interface ISESurfaceBody3 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISESurfaceBody3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("687B9BEE-D1E1-4d77-9072-D8D010B77D8E")
    ISESurfaceBody3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFacetsWithNormalsAndTextureCoords( 
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nFacetCount,
            /* [size_is][size_is][out] */ double **ppPoints,
            /* [size_is][size_is][out] */ double **ppNormals,
            /* [size_is][size_is][out] */ double **ppTexCoords,
            /* [size_is][size_is][out] */ long **ppStyleIDs,
            /* [size_is][size_is][out] */ long **ppFaceIDs) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISESurfaceBody3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISESurfaceBody3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISESurfaceBody3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISESurfaceBody3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFacetsWithNormalsAndTextureCoords )( 
            ISESurfaceBody3 * This,
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nFacetCount,
            /* [size_is][size_is][out] */ double **ppPoints,
            /* [size_is][size_is][out] */ double **ppNormals,
            /* [size_is][size_is][out] */ double **ppTexCoords,
            /* [size_is][size_is][out] */ long **ppStyleIDs,
            /* [size_is][size_is][out] */ long **ppFaceIDs);
        
        END_INTERFACE
    } ISESurfaceBody3Vtbl;

    interface ISESurfaceBody3
    {
        CONST_VTBL struct ISESurfaceBody3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISESurfaceBody3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISESurfaceBody3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISESurfaceBody3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISESurfaceBody3_GetFacetsWithNormalsAndTextureCoords(This,ChordHeightTol,nFacetCount,ppPoints,ppNormals,ppTexCoords,ppStyleIDs,ppFaceIDs)	\
    (This)->lpVtbl -> GetFacetsWithNormalsAndTextureCoords(This,ChordHeightTol,nFacetCount,ppPoints,ppNormals,ppTexCoords,ppStyleIDs,ppFaceIDs)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISESurfaceBody3_GetFacetsWithNormalsAndTextureCoords_Proxy( 
    ISESurfaceBody3 * This,
    /* [in] */ double ChordHeightTol,
    /* [out] */ long *nFacetCount,
    /* [size_is][size_is][out] */ double **ppPoints,
    /* [size_is][size_is][out] */ double **ppNormals,
    /* [size_is][size_is][out] */ double **ppTexCoords,
    /* [size_is][size_is][out] */ long **ppStyleIDs,
    /* [size_is][size_is][out] */ long **ppFaceIDs);


void __RPC_STUB ISESurfaceBody3_GetFacetsWithNormalsAndTextureCoords_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISESurfaceBody3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0154 */
/* [local] */ 

//////////////////SE-Custom interface on Surface Body: (ISESurfaceBody4)////////////////////////////////////////
// 1. GetExactRangeBox: Returns the exact minimum and maximum points of this Surface Body
//    'pMinPoint' is an array of three doubles containing the minimum point.
//    'pMaxPoint' is an array of three doubles containing the maximum point.
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0154_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0154_v0_0_s_ifspec;

#ifndef __ISESurfaceBody4_INTERFACE_DEFINED__
#define __ISESurfaceBody4_INTERFACE_DEFINED__

/* interface ISESurfaceBody4 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISESurfaceBody4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43C68C58-5FE8-4d44-B08C-0BF3F61770BB")
    ISESurfaceBody4 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExactRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISESurfaceBody4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISESurfaceBody4 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISESurfaceBody4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISESurfaceBody4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExactRangeBox )( 
            ISESurfaceBody4 * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        END_INTERFACE
    } ISESurfaceBody4Vtbl;

    interface ISESurfaceBody4
    {
        CONST_VTBL struct ISESurfaceBody4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISESurfaceBody4_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISESurfaceBody4_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISESurfaceBody4_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISESurfaceBody4_GetExactRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetExactRangeBox(This,pMinPoint,pMaxPoint)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISESurfaceBody4_GetExactRangeBox_Proxy( 
    ISESurfaceBody4 * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB ISESurfaceBody4_GetExactRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISESurfaceBody4_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0155 */
/* [local] */ 

//////////////////SE-Custom interface on Surface Body: (ISESurfaceBody5)////////////////////////////////////////
// 1. SetBodyOverride: To set or unset override property on the Surface body
// 2. IsBodyOverriden: Returns whether the Surface body is overriden or not
//    It returns true if the surface body participates in a assembly feature/pipe
//    or frame etc.
// 3. GetOccurrenceObject: Returns the corresponding object of the body
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0155_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0155_v0_0_s_ifspec;

#ifndef __ISESurfaceBody5_INTERFACE_DEFINED__
#define __ISESurfaceBody5_INTERFACE_DEFINED__

/* interface ISESurfaceBody5 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISESurfaceBody5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0EE63671-CEA7-4de3-BF1D-0E5D2A992D75")
    ISESurfaceBody5 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBodyOverride( 
            /* [in] */ boolean bSet) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsBodyOverriden( 
            /* [out] */ boolean *pBodyOverriden) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOccurrenceObject( 
            /* [out] */ LPUNKNOWN *ppOcc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSimplifiedBody( 
            /* [out] */ boolean *pSimplifiedBody) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSimplifiedBody( 
            /* [in] */ boolean bSet) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISESurfaceBody5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISESurfaceBody5 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISESurfaceBody5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISESurfaceBody5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetBodyOverride )( 
            ISESurfaceBody5 * This,
            /* [in] */ boolean bSet);
        
        HRESULT ( STDMETHODCALLTYPE *IsBodyOverriden )( 
            ISESurfaceBody5 * This,
            /* [out] */ boolean *pBodyOverriden);
        
        HRESULT ( STDMETHODCALLTYPE *GetOccurrenceObject )( 
            ISESurfaceBody5 * This,
            /* [out] */ LPUNKNOWN *ppOcc);
        
        HRESULT ( STDMETHODCALLTYPE *IsSimplifiedBody )( 
            ISESurfaceBody5 * This,
            /* [out] */ boolean *pSimplifiedBody);
        
        HRESULT ( STDMETHODCALLTYPE *SetSimplifiedBody )( 
            ISESurfaceBody5 * This,
            /* [in] */ boolean bSet);
        
        END_INTERFACE
    } ISESurfaceBody5Vtbl;

    interface ISESurfaceBody5
    {
        CONST_VTBL struct ISESurfaceBody5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISESurfaceBody5_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISESurfaceBody5_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISESurfaceBody5_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISESurfaceBody5_SetBodyOverride(This,bSet)	\
    (This)->lpVtbl -> SetBodyOverride(This,bSet)

#define ISESurfaceBody5_IsBodyOverriden(This,pBodyOverriden)	\
    (This)->lpVtbl -> IsBodyOverriden(This,pBodyOverriden)

#define ISESurfaceBody5_GetOccurrenceObject(This,ppOcc)	\
    (This)->lpVtbl -> GetOccurrenceObject(This,ppOcc)

#define ISESurfaceBody5_IsSimplifiedBody(This,pSimplifiedBody)	\
    (This)->lpVtbl -> IsSimplifiedBody(This,pSimplifiedBody)

#define ISESurfaceBody5_SetSimplifiedBody(This,bSet)	\
    (This)->lpVtbl -> SetSimplifiedBody(This,bSet)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISESurfaceBody5_SetBodyOverride_Proxy( 
    ISESurfaceBody5 * This,
    /* [in] */ boolean bSet);


void __RPC_STUB ISESurfaceBody5_SetBodyOverride_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISESurfaceBody5_IsBodyOverriden_Proxy( 
    ISESurfaceBody5 * This,
    /* [out] */ boolean *pBodyOverriden);


void __RPC_STUB ISESurfaceBody5_IsBodyOverriden_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISESurfaceBody5_GetOccurrenceObject_Proxy( 
    ISESurfaceBody5 * This,
    /* [out] */ LPUNKNOWN *ppOcc);


void __RPC_STUB ISESurfaceBody5_GetOccurrenceObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISESurfaceBody5_IsSimplifiedBody_Proxy( 
    ISESurfaceBody5 * This,
    /* [out] */ boolean *pSimplifiedBody);


void __RPC_STUB ISESurfaceBody5_IsSimplifiedBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISESurfaceBody5_SetSimplifiedBody_Proxy( 
    ISESurfaceBody5 * This,
    /* [in] */ boolean bSet);


void __RPC_STUB ISESurfaceBody5_SetSimplifiedBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISESurfaceBody5_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0156 */
/* [local] */ 

//////////////////SE-Custom interface on Face: (ISEFace)////////////////////////////////////////////////////
// 1. GetFacets: Returns the facetted version of this Face, where the facet-triangular
//    plane is guaranteed to be within a maximum-distance of ChordHeightTol from the surface.
//    'nFacetCount' is the number of facet-triangles with 'ppPoints' being the flat array consisting
//    of nFacetCount*3*3 doubles, where each triangle is output as 3 triplets for each of its vertices.
//    The memory has been allocated using CoTaskMemAlloc (and MUST be freed by the caller using CoTaskMemFree).
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0156_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0156_v0_0_s_ifspec;

#ifndef __ISEFace_INTERFACE_DEFINED__
#define __ISEFace_INTERFACE_DEFINED__

/* interface ISEFace */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEFace;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B03B890E-F3DD-11d1-BEC9-080036D7B302")
    ISEFace : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFacets( 
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nFacetCount,
            /* [size_is][size_is][out] */ double **ppPoints) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEFaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEFace * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEFace * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEFace * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFacets )( 
            ISEFace * This,
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nFacetCount,
            /* [size_is][size_is][out] */ double **ppPoints);
        
        END_INTERFACE
    } ISEFaceVtbl;

    interface ISEFace
    {
        CONST_VTBL struct ISEFaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEFace_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEFace_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEFace_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEFace_GetFacets(This,ChordHeightTol,nFacetCount,ppPoints)	\
    (This)->lpVtbl -> GetFacets(This,ChordHeightTol,nFacetCount,ppPoints)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEFace_GetFacets_Proxy( 
    ISEFace * This,
    /* [in] */ double ChordHeightTol,
    /* [out] */ long *nFacetCount,
    /* [size_is][size_is][out] */ double **ppPoints);


void __RPC_STUB ISEFace_GetFacets_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEFace_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0157 */
/* [local] */ 

//////////////////SE-Custom interface on Face: (ISEFace2)////////////////////////////////////////
// 1. GetFacetsWithNormals: Returns the facetted version of this Face with normals at each vertex,
//    where the facet-triangular plane is guaranteed to be within a maximum-distance of ChordHeightTol from the surface.
//    'nFacetCount' is the number of facet-triangles with 'ppPoints' and 'ppNormals being the flat arrays consisting
//    of nFacetCount*3*3 doubles, where each triangle is output as 3 triplets for each of its vertices.
//    The memory has been allocated using CoTaskMemAlloc (and MUST be freed by the caller using CoTaskMemFree).
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0157_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0157_v0_0_s_ifspec;

#ifndef __ISEFace2_INTERFACE_DEFINED__
#define __ISEFace2_INTERFACE_DEFINED__

/* interface ISEFace2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEFace2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DE673C0-7B54-11d3-9734-0060973828B5")
    ISEFace2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFacetsWithNormals( 
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nFacetCount,
            /* [size_is][size_is][out] */ double **ppPoints,
            /* [size_is][size_is][out] */ double **ppNormals) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEFace2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEFace2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEFace2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEFace2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFacetsWithNormals )( 
            ISEFace2 * This,
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nFacetCount,
            /* [size_is][size_is][out] */ double **ppPoints,
            /* [size_is][size_is][out] */ double **ppNormals);
        
        END_INTERFACE
    } ISEFace2Vtbl;

    interface ISEFace2
    {
        CONST_VTBL struct ISEFace2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEFace2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEFace2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEFace2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEFace2_GetFacetsWithNormals(This,ChordHeightTol,nFacetCount,ppPoints,ppNormals)	\
    (This)->lpVtbl -> GetFacetsWithNormals(This,ChordHeightTol,nFacetCount,ppPoints,ppNormals)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEFace2_GetFacetsWithNormals_Proxy( 
    ISEFace2 * This,
    /* [in] */ double ChordHeightTol,
    /* [out] */ long *nFacetCount,
    /* [size_is][size_is][out] */ double **ppPoints,
    /* [size_is][size_is][out] */ double **ppNormals);


void __RPC_STUB ISEFace2_GetFacetsWithNormals_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEFace2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0158 */
/* [local] */ 

//////////////////SE-Custom interface on Face: (ISEFace3)////////////////////////////////////////
// 1. GetFacetsWithNormalsAndTextureCoords: Returns the facetted version of this Surface Body with normals and uv
//    texture coordinates at each vertex, where the facet-triangular plane is guaranteed to be within a maximum-distance
//    of ChordHeightTol from the surface. 'nFacetCount' is the number of facet-triangles with 'ppPoints' and 'ppNormals'
//    being the flat arrays consisting of nFacetCount*3*3 doubles, where each triangle is output as 3 triplets for each
//    of its vertices. 'ppTexCoords' is a flat array consisting of nFacetCount*3*2 doubles, where each triangle is output
//    as 3 uv pairs for each of its vertices. The memory has been allocated using CoTaskMemAlloc (and MUST be freed by
//    the caller using CoTaskMemFree).
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0158_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0158_v0_0_s_ifspec;

#ifndef __ISEFace3_INTERFACE_DEFINED__
#define __ISEFace3_INTERFACE_DEFINED__

/* interface ISEFace3 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEFace3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5270701E-1067-4bb2-9704-A4A0EDFBC559")
    ISEFace3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFacetsWithNormalsAndTextureCoords( 
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nFacetCount,
            /* [size_is][size_is][out] */ double **ppPoints,
            /* [size_is][size_is][out] */ double **ppNormals,
            /* [size_is][size_is][out] */ double **ppTexCoords) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEFace3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEFace3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEFace3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEFace3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFacetsWithNormalsAndTextureCoords )( 
            ISEFace3 * This,
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nFacetCount,
            /* [size_is][size_is][out] */ double **ppPoints,
            /* [size_is][size_is][out] */ double **ppNormals,
            /* [size_is][size_is][out] */ double **ppTexCoords);
        
        END_INTERFACE
    } ISEFace3Vtbl;

    interface ISEFace3
    {
        CONST_VTBL struct ISEFace3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEFace3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEFace3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEFace3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEFace3_GetFacetsWithNormalsAndTextureCoords(This,ChordHeightTol,nFacetCount,ppPoints,ppNormals,ppTexCoords)	\
    (This)->lpVtbl -> GetFacetsWithNormalsAndTextureCoords(This,ChordHeightTol,nFacetCount,ppPoints,ppNormals,ppTexCoords)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEFace3_GetFacetsWithNormalsAndTextureCoords_Proxy( 
    ISEFace3 * This,
    /* [in] */ double ChordHeightTol,
    /* [out] */ long *nFacetCount,
    /* [size_is][size_is][out] */ double **ppPoints,
    /* [size_is][size_is][out] */ double **ppNormals,
    /* [size_is][size_is][out] */ double **ppTexCoords);


void __RPC_STUB ISEFace3_GetFacetsWithNormalsAndTextureCoords_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEFace3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0159 */
/* [local] */ 

//////////////////SE-Custom interface on Face: (ISEFace4)////////////////////////////////////////
// 1. GetExactRangeBox: Returns the exact minimum and maximum points of this Face
//    'pMinPoint' is an array of three doubles containing the minimum point.
//    'pMaxPoint' is an array of three doubles containing the maximum point.
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0159_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0159_v0_0_s_ifspec;

#ifndef __ISEFace4_INTERFACE_DEFINED__
#define __ISEFace4_INTERFACE_DEFINED__

/* interface ISEFace4 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEFace4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("17B378D2-1671-4b1d-8E77-7BD498A43FCA")
    ISEFace4 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExactRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEFace4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEFace4 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEFace4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEFace4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExactRangeBox )( 
            ISEFace4 * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        END_INTERFACE
    } ISEFace4Vtbl;

    interface ISEFace4
    {
        CONST_VTBL struct ISEFace4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEFace4_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEFace4_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEFace4_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEFace4_GetExactRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetExactRangeBox(This,pMinPoint,pMaxPoint)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEFace4_GetExactRangeBox_Proxy( 
    ISEFace4 * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB ISEFace4_GetExactRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEFace4_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0160 */
/* [local] */ 

//////////////////SE-Custom interface on Edge: (ISEEdge)////////////////////////////////////////////////////
// 1. GetStrokes: Returns the stroked or polyline version of this Edge, where each of the segments
//    is guaranteed to be within a maximum-distance of ChordHeightTol from the curve of the Edge.
//    'nStrokeCount' is the number of points in the polyline with 'ppPoints' being the array consisting
//    of nStrokeCount*3 doubles.  The parameters on the Edge-curve at which each of these points
//    are evaluated is returned in 'ppParams'. Either of these arrays,  'ppPoints' or 'ppParams' can
//    NULL (when that particular output is not desired by the caller).
//    The memory has been allocated using CoTaskMemAlloc (and MUST be freed by the caller using CoTaskMemFree).
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0160_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0160_v0_0_s_ifspec;

#ifndef __ISEEdge_INTERFACE_DEFINED__
#define __ISEEdge_INTERFACE_DEFINED__

/* interface ISEEdge */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEEdge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CDFD024C-F3DD-11d1-BEC9-080036D7B302")
    ISEEdge : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStrokes( 
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nStrokeCount,
            /* [size_is][size_is][out] */ double **ppPoints,
            /* [size_is][size_is][out] */ double **ppParams) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEEdgeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEEdge * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEEdge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEEdge * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStrokes )( 
            ISEEdge * This,
            /* [in] */ double ChordHeightTol,
            /* [out] */ long *nStrokeCount,
            /* [size_is][size_is][out] */ double **ppPoints,
            /* [size_is][size_is][out] */ double **ppParams);
        
        END_INTERFACE
    } ISEEdgeVtbl;

    interface ISEEdge
    {
        CONST_VTBL struct ISEEdgeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEEdge_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEEdge_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEEdge_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEEdge_GetStrokes(This,ChordHeightTol,nStrokeCount,ppPoints,ppParams)	\
    (This)->lpVtbl -> GetStrokes(This,ChordHeightTol,nStrokeCount,ppPoints,ppParams)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEEdge_GetStrokes_Proxy( 
    ISEEdge * This,
    /* [in] */ double ChordHeightTol,
    /* [out] */ long *nStrokeCount,
    /* [size_is][size_is][out] */ double **ppPoints,
    /* [size_is][size_is][out] */ double **ppParams);


void __RPC_STUB ISEEdge_GetStrokes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEEdge_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0161 */
/* [local] */ 

//////////////////SE-Custom interface on Edge: (ISEEdge2)////////////////////////////////////////
// 1. GetExactRangeBox: Returns the exact minimum and maximum points of this Edge
//    'pMinPoint' is an array of three doubles containing the minimum point.
//    'pMaxPoint' is an array of three doubles containing the maximum point.
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0161_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0161_v0_0_s_ifspec;

#ifndef __ISEEdge2_INTERFACE_DEFINED__
#define __ISEEdge2_INTERFACE_DEFINED__

/* interface ISEEdge2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEEdge2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DC529C93-F335-43b7-85FA-DFAA8E1C6A19")
    ISEEdge2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExactRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEEdge2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEEdge2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEEdge2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEEdge2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExactRangeBox )( 
            ISEEdge2 * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        END_INTERFACE
    } ISEEdge2Vtbl;

    interface ISEEdge2
    {
        CONST_VTBL struct ISEEdge2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEEdge2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEEdge2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEEdge2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEEdge2_GetExactRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetExactRangeBox(This,pMinPoint,pMaxPoint)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEEdge2_GetExactRangeBox_Proxy( 
    ISEEdge2 * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB ISEEdge2_GetExactRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEEdge2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0162 */
/* [local] */ 

//////////////////SE-Custom interface on Loop: (ISELoop)////////////////////////////////////////////////////
// 1. EnumEdgeUses2: Enumerates all the EdgeUses that make up the Loop. In addition to enumerating the
//    EdgeUses as in IDMLoop::EnumEdgeUses, this method also enumerates 2D-only EdgeUses that represent
//    an isoparametric UV segment of a surface with a degenerate boundary. Some EdgeUses in this enumeration
//    may return true for method ISEEdgeUse::IsDegenerateBoundary.
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0162_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0162_v0_0_s_ifspec;

#ifndef __ISELoop_INTERFACE_DEFINED__
#define __ISELoop_INTERFACE_DEFINED__

/* interface ISELoop */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISELoop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("80A06BEC-39D2-40a2-8760-33F751294A08")
    ISELoop : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumEdgeUses2( 
            /* [out] */ LPENUM_DMEDGEUSES *pEnumEdgeUses) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISELoopVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISELoop * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISELoop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISELoop * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumEdgeUses2 )( 
            ISELoop * This,
            /* [out] */ LPENUM_DMEDGEUSES *pEnumEdgeUses);
        
        END_INTERFACE
    } ISELoopVtbl;

    interface ISELoop
    {
        CONST_VTBL struct ISELoopVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISELoop_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISELoop_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISELoop_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISELoop_EnumEdgeUses2(This,pEnumEdgeUses)	\
    (This)->lpVtbl -> EnumEdgeUses2(This,pEnumEdgeUses)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISELoop_EnumEdgeUses2_Proxy( 
    ISELoop * This,
    /* [out] */ LPENUM_DMEDGEUSES *pEnumEdgeUses);


void __RPC_STUB ISELoop_EnumEdgeUses2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISELoop_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0163 */
/* [local] */ 

//////////////////SE-Custom interface on Loop: (ISELoop2)////////////////////////////////////////
// 1. GetExactRangeBox: Returns the exact minimum and maximum points of this Loop
//    'pMinPoint' is an array of three doubles containing the minimum point.
//    'pMaxPoint' is an array of three doubles containing the maximum point.
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0163_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0163_v0_0_s_ifspec;

#ifndef __ISELoop2_INTERFACE_DEFINED__
#define __ISELoop2_INTERFACE_DEFINED__

/* interface ISELoop2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISELoop2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A5107603-D999-4ee0-A4A1-5515280C64D6")
    ISELoop2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExactRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISELoop2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISELoop2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISELoop2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISELoop2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExactRangeBox )( 
            ISELoop2 * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        END_INTERFACE
    } ISELoop2Vtbl;

    interface ISELoop2
    {
        CONST_VTBL struct ISELoop2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISELoop2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISELoop2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISELoop2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISELoop2_GetExactRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetExactRangeBox(This,pMinPoint,pMaxPoint)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISELoop2_GetExactRangeBox_Proxy( 
    ISELoop2 * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB ISELoop2_GetExactRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISELoop2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0164 */
/* [local] */ 

//////////////////SE-Custom interface on EdgeUse: (ISEEdgeUse)////////////////////////////////////////////////////
// 1. IsDegenerateBoundary: Returns a boolean flag indicating if the EdgeUse is a 2D-only entity that
//	 represents an isoparametric UV segment of a surface with a degenerate boundary. One example is the
//	 NURBS representation of a cone where the apex is a degenerate boundary. EdgeUses that return true
//	 for IsDegenerateBoundary will not have an associated Edge or partner EdgeUse.
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0164_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0164_v0_0_s_ifspec;

#ifndef __ISEEdgeUse_INTERFACE_DEFINED__
#define __ISEEdgeUse_INTERFACE_DEFINED__

/* interface ISEEdgeUse */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEEdgeUse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49C40E77-3F01-4a24-9747-FEBD69DEC995")
    ISEEdgeUse : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsDegenerateBoundary( 
            /* [out] */ boolean *pIsDegenerateBoundary) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEEdgeUseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEEdgeUse * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEEdgeUse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEEdgeUse * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsDegenerateBoundary )( 
            ISEEdgeUse * This,
            /* [out] */ boolean *pIsDegenerateBoundary);
        
        END_INTERFACE
    } ISEEdgeUseVtbl;

    interface ISEEdgeUse
    {
        CONST_VTBL struct ISEEdgeUseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEEdgeUse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEEdgeUse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEEdgeUse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEEdgeUse_IsDegenerateBoundary(This,pIsDegenerateBoundary)	\
    (This)->lpVtbl -> IsDegenerateBoundary(This,pIsDegenerateBoundary)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEEdgeUse_IsDegenerateBoundary_Proxy( 
    ISEEdgeUse * This,
    /* [out] */ boolean *pIsDegenerateBoundary);


void __RPC_STUB ISEEdgeUse_IsDegenerateBoundary_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEEdgeUse_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0165 */
/* [local] */ 

//////////////////SE-Custom interface on EdgeUse: (ISEEdgeUse2)////////////////////////////////////////
// 1. GetExactRangeBox: Returns the exact minimum and maximum points of this EdgeUse
//    'pMinPoint' is an array of three doubles containing the minimum point.
//    'pMaxPoint' is an array of three doubles containing the maximum point.
///////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0165_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0165_v0_0_s_ifspec;

#ifndef __ISEEdgeUse2_INTERFACE_DEFINED__
#define __ISEEdgeUse2_INTERFACE_DEFINED__

/* interface ISEEdgeUse2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEEdgeUse2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D77DBA4-3CE6-492d-8F0C-EB1226051775")
    ISEEdgeUse2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExactRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEEdgeUse2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEEdgeUse2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEEdgeUse2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEEdgeUse2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExactRangeBox )( 
            ISEEdgeUse2 * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        END_INTERFACE
    } ISEEdgeUse2Vtbl;

    interface ISEEdgeUse2
    {
        CONST_VTBL struct ISEEdgeUse2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEEdgeUse2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEEdgeUse2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEEdgeUse2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEEdgeUse2_GetExactRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetExactRangeBox(This,pMinPoint,pMaxPoint)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEEdgeUse2_GetExactRangeBox_Proxy( 
    ISEEdgeUse2 * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB ISEEdgeUse2_GetExactRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEEdgeUse2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0166 */
/* [local] */ 

//////////////////SE-Custom interface on Component Definition: (ISEComponentDefinition)////////////////////////////////////////////////////
// 1. GetName: Returns the name of the component definition. Caller needs to free the output string using CoTaskMemFree.
// 2. GetFileName: Returns the name of the Solid Edge document associated with this component definition.
//    Caller needs to free the output string using CoTaskMemFree.
// 3. GetRangeBox: Returns the 3D extent of the component definition.
// 4. GetComponentCount: Gets the number of occurrences contained by an assembly component definition.
//    Caller specifies an enum of type SECOMPONENTCOUNTOPTION that can have one of the following values:
//    ALL_OCCURRENCES_ESTIMATE - to get an approximate estimate of the grand total of all occurrences contained in definition
//    ALL_UNIQUE_OCCURRENCES_ESTIMATE - to get an approximate estimate of the grand total of all unique occurrences contained in definition
//    ALL_OCCURRENCES - to get the precise grand total of all occurrences contained in definition
//    ALL_UNIQUE_OCCURRENCES - to get the precise grand total of all unique occurrences contained in definition
//    ALL_PART_OCCURRENCES - to get the precise grand total of all part occurrences contained in definition
//    ALL_UNIQUE_PART_OCCURRENCES - to get the precise grand total of all unique part occurrences contained in definition
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0166_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0166_v0_0_s_ifspec;

#ifndef __ISEComponentDefinition_INTERFACE_DEFINED__
#define __ISEComponentDefinition_INTERFACE_DEFINED__

/* interface ISEComponentDefinition */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEComponentDefinition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF17F175-93A6-11d3-A3E2-0004AC9695BB")
    ISEComponentDefinition : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [string][out] */ OLECHAR **ppwszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [string][out] */ OLECHAR **ppwszFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRangeBox( 
            /* [out] */ double daMinPoint[ 3 ],
            /* [out] */ double daMaxPoint[ 3 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetComponentCount( 
            /* [in] */ SECOMPONENTCOUNTOPTION eOption,
            /* [out] */ long *nCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEComponentDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEComponentDefinition * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEComponentDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEComponentDefinition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            ISEComponentDefinition * This,
            /* [string][out] */ OLECHAR **ppwszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            ISEComponentDefinition * This,
            /* [string][out] */ OLECHAR **ppwszFileName);
        
        HRESULT ( STDMETHODCALLTYPE *GetRangeBox )( 
            ISEComponentDefinition * This,
            /* [out] */ double daMinPoint[ 3 ],
            /* [out] */ double daMaxPoint[ 3 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetComponentCount )( 
            ISEComponentDefinition * This,
            /* [in] */ SECOMPONENTCOUNTOPTION eOption,
            /* [out] */ long *nCount);
        
        END_INTERFACE
    } ISEComponentDefinitionVtbl;

    interface ISEComponentDefinition
    {
        CONST_VTBL struct ISEComponentDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEComponentDefinition_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEComponentDefinition_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEComponentDefinition_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEComponentDefinition_GetName(This,ppwszName)	\
    (This)->lpVtbl -> GetName(This,ppwszName)

#define ISEComponentDefinition_GetFileName(This,ppwszFileName)	\
    (This)->lpVtbl -> GetFileName(This,ppwszFileName)

#define ISEComponentDefinition_GetRangeBox(This,daMinPoint,daMaxPoint)	\
    (This)->lpVtbl -> GetRangeBox(This,daMinPoint,daMaxPoint)

#define ISEComponentDefinition_GetComponentCount(This,eOption,nCount)	\
    (This)->lpVtbl -> GetComponentCount(This,eOption,nCount)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEComponentDefinition_GetName_Proxy( 
    ISEComponentDefinition * This,
    /* [string][out] */ OLECHAR **ppwszName);


void __RPC_STUB ISEComponentDefinition_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEComponentDefinition_GetFileName_Proxy( 
    ISEComponentDefinition * This,
    /* [string][out] */ OLECHAR **ppwszFileName);


void __RPC_STUB ISEComponentDefinition_GetFileName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEComponentDefinition_GetRangeBox_Proxy( 
    ISEComponentDefinition * This,
    /* [out] */ double daMinPoint[ 3 ],
    /* [out] */ double daMaxPoint[ 3 ]);


void __RPC_STUB ISEComponentDefinition_GetRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEComponentDefinition_GetComponentCount_Proxy( 
    ISEComponentDefinition * This,
    /* [in] */ SECOMPONENTCOUNTOPTION eOption,
    /* [out] */ long *nCount);


void __RPC_STUB ISEComponentDefinition_GetComponentCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEComponentDefinition_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_SEMarshal_0167 */
/* [local] */ 

//////////////////SE-Custom interface on Component Occurrence: (ISEComponentOccurrence)////////////////////////////////////////////////////
// 1. GetName: Returns the name of the component occurrence. Caller needs to free the output string using CoTaskMemFree.
// 2. GetFileName: Returns the name of the Solid Edge document containing this occurrence's definition.
//    Caller needs to free the output string using CoTaskMemFree.
// 3. GetRangeBox: Returns the 3D extent of the component occurrence.
// 4. GetComponentCount: Gets the number of occurrences contained below this component occurrece.
//    Caller specifies an enum of type SECOMPONENTCOUNTOPTION that can have one of the following values:
//    IMMEDIATE_OCCURRENCES - to get the number of first level occurrences below this occurrence
//    IMMEDIATE_PART_OCCURRENCES - to get the number of first level part occurrences below this occurrence
//    IMMEDIATE_UNIQUE_OCCURRENCES - to get the number of first level unique occurrences below this occurrence
//    IMMEDIATE_UNIQUE_PART_OCCURRENCES - to get the number of first level unique part occurrences below this occurrence
//    ALL_OCCURRENCES_ESTIMATE - to get an estimated grand total of all occurrences below this occurrence
//    ALL_UNIQUE_OCCURRENCES_ESTIMATE - to get an estimated grand total of all unique occurrences below this occurrence
//    ALL_OCCURRENCES - to get the actual grand total of all occurrences below this occurrence
//    ALL_UNIQUE_OCCURRENCES - to get the actual grand total of all unique occurrences below this occurrence
//    ALL_PART_OCCURRENCES - to get the actual grand total of all part occurrences below this occurrence
//    ALL_UNIQUE_PART_OCCURRENCES - to get the actual grand total of all unique part occurrences below this occurrence
// 5. IsAssembly: Returns a boolean flag indicating whether this occurrence is a part occurrence.
// 6. GetMaterial: Returns color related information of the occurrence in the structure declared in this header.
//    This method applies only to part occurrences. Also NOTE, the color info can be extracted only from SE assemblies
//    saved in or after version 7. This function returns S_FALSE if it cannot access this information.
// 7. ThisAsOccurrence: It is a read-only property. It returns the corresponding occurrence object
//    of the sub-occurrence from the sub-assembly document.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0167_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SEMarshal_0167_v0_0_s_ifspec;

#ifndef __ISEComponentOccurrence_INTERFACE_DEFINED__
#define __ISEComponentOccurrence_INTERFACE_DEFINED__

/* interface ISEComponentOccurrence */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEComponentOccurrence;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF17F176-93A6-11d3-A3E2-0004AC9695BB")
    ISEComponentOccurrence : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [string][out] */ OLECHAR **ppwszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [string][out] */ OLECHAR **ppwszFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRangeBox( 
            /* [out] */ double daMinPoint[ 3 ],
            /* [out] */ double daMaxPoint[ 3 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetComponentCount( 
            /* [in] */ SECOMPONENTCOUNTOPTION eOption,
            /* [out] */ long *nCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAssembly( 
            /* [out] */ boolean *pIsAssembly) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaterial( 
            /* [out] */ SEMATERIAL *pMaterial) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ThisAsOccurrence( 
            /* [out] */ LPUNKNOWN *ppThisAsOccurrence) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEComponentOccurrenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEComponentOccurrence * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEComponentOccurrence * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEComponentOccurrence * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            ISEComponentOccurrence * This,
            /* [string][out] */ OLECHAR **ppwszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            ISEComponentOccurrence * This,
            /* [string][out] */ OLECHAR **ppwszFileName);
        
        HRESULT ( STDMETHODCALLTYPE *GetRangeBox )( 
            ISEComponentOccurrence * This,
            /* [out] */ double daMinPoint[ 3 ],
            /* [out] */ double daMaxPoint[ 3 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetComponentCount )( 
            ISEComponentOccurrence * This,
            /* [in] */ SECOMPONENTCOUNTOPTION eOption,
            /* [out] */ long *nCount);
        
        HRESULT ( STDMETHODCALLTYPE *IsAssembly )( 
            ISEComponentOccurrence * This,
            /* [out] */ boolean *pIsAssembly);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaterial )( 
            ISEComponentOccurrence * This,
            /* [out] */ SEMATERIAL *pMaterial);
        
        HRESULT ( STDMETHODCALLTYPE *ThisAsOccurrence )( 
            ISEComponentOccurrence * This,
            /* [out] */ LPUNKNOWN *ppThisAsOccurrence);
        
        END_INTERFACE
    } ISEComponentOccurrenceVtbl;

    interface ISEComponentOccurrence
    {
        CONST_VTBL struct ISEComponentOccurrenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEComponentOccurrence_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEComponentOccurrence_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEComponentOccurrence_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEComponentOccurrence_GetName(This,ppwszName)	\
    (This)->lpVtbl -> GetName(This,ppwszName)

#define ISEComponentOccurrence_GetFileName(This,ppwszFileName)	\
    (This)->lpVtbl -> GetFileName(This,ppwszFileName)

#define ISEComponentOccurrence_GetRangeBox(This,daMinPoint,daMaxPoint)	\
    (This)->lpVtbl -> GetRangeBox(This,daMinPoint,daMaxPoint)

#define ISEComponentOccurrence_GetComponentCount(This,eOption,nCount)	\
    (This)->lpVtbl -> GetComponentCount(This,eOption,nCount)

#define ISEComponentOccurrence_IsAssembly(This,pIsAssembly)	\
    (This)->lpVtbl -> IsAssembly(This,pIsAssembly)

#define ISEComponentOccurrence_GetMaterial(This,pMaterial)	\
    (This)->lpVtbl -> GetMaterial(This,pMaterial)

#define ISEComponentOccurrence_ThisAsOccurrence(This,ppThisAsOccurrence)	\
    (This)->lpVtbl -> ThisAsOccurrence(This,ppThisAsOccurrence)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEComponentOccurrence_GetName_Proxy( 
    ISEComponentOccurrence * This,
    /* [string][out] */ OLECHAR **ppwszName);


void __RPC_STUB ISEComponentOccurrence_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEComponentOccurrence_GetFileName_Proxy( 
    ISEComponentOccurrence * This,
    /* [string][out] */ OLECHAR **ppwszFileName);


void __RPC_STUB ISEComponentOccurrence_GetFileName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEComponentOccurrence_GetRangeBox_Proxy( 
    ISEComponentOccurrence * This,
    /* [out] */ double daMinPoint[ 3 ],
    /* [out] */ double daMaxPoint[ 3 ]);


void __RPC_STUB ISEComponentOccurrence_GetRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEComponentOccurrence_GetComponentCount_Proxy( 
    ISEComponentOccurrence * This,
    /* [in] */ SECOMPONENTCOUNTOPTION eOption,
    /* [out] */ long *nCount);


void __RPC_STUB ISEComponentOccurrence_GetComponentCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEComponentOccurrence_IsAssembly_Proxy( 
    ISEComponentOccurrence * This,
    /* [out] */ boolean *pIsAssembly);


void __RPC_STUB ISEComponentOccurrence_IsAssembly_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEComponentOccurrence_GetMaterial_Proxy( 
    ISEComponentOccurrence * This,
    /* [out] */ SEMATERIAL *pMaterial);


void __RPC_STUB ISEComponentOccurrence_GetMaterial_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEComponentOccurrence_ThisAsOccurrence_Proxy( 
    ISEComponentOccurrence * This,
    /* [out] */ LPUNKNOWN *ppThisAsOccurrence);


void __RPC_STUB ISEComponentOccurrence_ThisAsOccurrence_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEComponentOccurrence_INTERFACE_DEFINED__ */


#ifndef __ISEComponentDefinition2_INTERFACE_DEFINED__
#define __ISEComponentDefinition2_INTERFACE_DEFINED__

/* interface ISEComponentDefinition2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEComponentDefinition2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2B4DFA3A-3F2A-45f6-B540-A778D91DD82A")
    ISEComponentDefinition2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumAssemblyBodies( 
            /* [out] */ LPENUM_SEASSEMBLYBODIES *ppEnumAsmBodies) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEComponentDefinition2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEComponentDefinition2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEComponentDefinition2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEComponentDefinition2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAssemblyBodies )( 
            ISEComponentDefinition2 * This,
            /* [out] */ LPENUM_SEASSEMBLYBODIES *ppEnumAsmBodies);
        
        END_INTERFACE
    } ISEComponentDefinition2Vtbl;

    interface ISEComponentDefinition2
    {
        CONST_VTBL struct ISEComponentDefinition2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEComponentDefinition2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEComponentDefinition2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEComponentDefinition2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEComponentDefinition2_EnumAssemblyBodies(This,ppEnumAsmBodies)	\
    (This)->lpVtbl -> EnumAssemblyBodies(This,ppEnumAsmBodies)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEComponentDefinition2_EnumAssemblyBodies_Proxy( 
    ISEComponentDefinition2 * This,
    /* [out] */ LPENUM_SEASSEMBLYBODIES *ppEnumAsmBodies);


void __RPC_STUB ISEComponentDefinition2_EnumAssemblyBodies_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEComponentDefinition2_INTERFACE_DEFINED__ */


#ifndef __ISEComponentOccurrence2_INTERFACE_DEFINED__
#define __ISEComponentOccurrence2_INTERFACE_DEFINED__

/* interface ISEComponentOccurrence2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEComponentOccurrence2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35D71DA6-9AE5-461a-895B-73B5ED57995E")
    ISEComponentOccurrence2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumSubAssemblyBodies( 
            /* [out] */ LPENUM_SEASSEMBLYBODIES *ppEnumAsmBodies) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEComponentOccurrence2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEComponentOccurrence2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEComponentOccurrence2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEComponentOccurrence2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumSubAssemblyBodies )( 
            ISEComponentOccurrence2 * This,
            /* [out] */ LPENUM_SEASSEMBLYBODIES *ppEnumAsmBodies);
        
        END_INTERFACE
    } ISEComponentOccurrence2Vtbl;

    interface ISEComponentOccurrence2
    {
        CONST_VTBL struct ISEComponentOccurrence2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEComponentOccurrence2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEComponentOccurrence2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEComponentOccurrence2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEComponentOccurrence2_EnumSubAssemblyBodies(This,ppEnumAsmBodies)	\
    (This)->lpVtbl -> EnumSubAssemblyBodies(This,ppEnumAsmBodies)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEComponentOccurrence2_EnumSubAssemblyBodies_Proxy( 
    ISEComponentOccurrence2 * This,
    /* [out] */ LPENUM_SEASSEMBLYBODIES *ppEnumAsmBodies);


void __RPC_STUB ISEComponentOccurrence2_EnumSubAssemblyBodies_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEComponentOccurrence2_INTERFACE_DEFINED__ */


#ifndef __ISEAssemblyBody_INTERFACE_DEFINED__
#define __ISEAssemblyBody_INTERFACE_DEFINED__

/* interface ISEAssemblyBody */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISEAssemblyBody;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("50D9AADF-7FF8-4f6e-9705-37D2DF16443F")
    ISEAssemblyBody : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContextDefinition( 
            /* [out] */ LPDMCOMPONENTDEFINITION *ppCtxDef) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTransformation( 
            /* [out] */ double Matrix[ 16 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateElementProxy( 
            /* [in] */ ULONG cbKeySize,
            /* [size_is][in] */ BYTE *pKey,
            /* [out] */ LPDMELEMENTPROXY *ppElemProxy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PutTransformation( 
            /* [in] */ double Matrix[ 16 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [string][out] */ OLECHAR **ppwszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRangeBox( 
            /* [out] */ double daMinPoint[ 3 ],
            /* [out] */ double daMaxPoint[ 3 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaterial( 
            /* [out] */ SEMATERIAL *pMaterial) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBody( 
            /* [out] */ LPDMSURFACEBODY *ppBody) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ThisAsAssemblyBody( 
            /* [out] */ LPUNKNOWN *ppThisAsAssemblyBody) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParentAssemblyBody( 
            /* [out] */ LPUNKNOWN *ppUnknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEAssemblyBodyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEAssemblyBody * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEAssemblyBody * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEAssemblyBody * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContextDefinition )( 
            ISEAssemblyBody * This,
            /* [out] */ LPDMCOMPONENTDEFINITION *ppCtxDef);
        
        HRESULT ( STDMETHODCALLTYPE *GetTransformation )( 
            ISEAssemblyBody * This,
            /* [out] */ double Matrix[ 16 ]);
        
        HRESULT ( STDMETHODCALLTYPE *CreateElementProxy )( 
            ISEAssemblyBody * This,
            /* [in] */ ULONG cbKeySize,
            /* [size_is][in] */ BYTE *pKey,
            /* [out] */ LPDMELEMENTPROXY *ppElemProxy);
        
        HRESULT ( STDMETHODCALLTYPE *PutTransformation )( 
            ISEAssemblyBody * This,
            /* [in] */ double Matrix[ 16 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            ISEAssemblyBody * This,
            /* [string][out] */ OLECHAR **ppwszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetRangeBox )( 
            ISEAssemblyBody * This,
            /* [out] */ double daMinPoint[ 3 ],
            /* [out] */ double daMaxPoint[ 3 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaterial )( 
            ISEAssemblyBody * This,
            /* [out] */ SEMATERIAL *pMaterial);
        
        HRESULT ( STDMETHODCALLTYPE *GetBody )( 
            ISEAssemblyBody * This,
            /* [out] */ LPDMSURFACEBODY *ppBody);
        
        HRESULT ( STDMETHODCALLTYPE *ThisAsAssemblyBody )( 
            ISEAssemblyBody * This,
            /* [out] */ LPUNKNOWN *ppThisAsAssemblyBody);
        
        HRESULT ( STDMETHODCALLTYPE *GetParentAssemblyBody )( 
            ISEAssemblyBody * This,
            /* [out] */ LPUNKNOWN *ppUnknown);
        
        END_INTERFACE
    } ISEAssemblyBodyVtbl;

    interface ISEAssemblyBody
    {
        CONST_VTBL struct ISEAssemblyBodyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEAssemblyBody_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEAssemblyBody_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEAssemblyBody_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEAssemblyBody_GetContextDefinition(This,ppCtxDef)	\
    (This)->lpVtbl -> GetContextDefinition(This,ppCtxDef)

#define ISEAssemblyBody_GetTransformation(This,Matrix)	\
    (This)->lpVtbl -> GetTransformation(This,Matrix)

#define ISEAssemblyBody_CreateElementProxy(This,cbKeySize,pKey,ppElemProxy)	\
    (This)->lpVtbl -> CreateElementProxy(This,cbKeySize,pKey,ppElemProxy)

#define ISEAssemblyBody_PutTransformation(This,Matrix)	\
    (This)->lpVtbl -> PutTransformation(This,Matrix)

#define ISEAssemblyBody_GetName(This,ppwszName)	\
    (This)->lpVtbl -> GetName(This,ppwszName)

#define ISEAssemblyBody_GetRangeBox(This,daMinPoint,daMaxPoint)	\
    (This)->lpVtbl -> GetRangeBox(This,daMinPoint,daMaxPoint)

#define ISEAssemblyBody_GetMaterial(This,pMaterial)	\
    (This)->lpVtbl -> GetMaterial(This,pMaterial)

#define ISEAssemblyBody_GetBody(This,ppBody)	\
    (This)->lpVtbl -> GetBody(This,ppBody)

#define ISEAssemblyBody_ThisAsAssemblyBody(This,ppThisAsAssemblyBody)	\
    (This)->lpVtbl -> ThisAsAssemblyBody(This,ppThisAsAssemblyBody)

#define ISEAssemblyBody_GetParentAssemblyBody(This,ppUnknown)	\
    (This)->lpVtbl -> GetParentAssemblyBody(This,ppUnknown)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISEAssemblyBody_GetContextDefinition_Proxy( 
    ISEAssemblyBody * This,
    /* [out] */ LPDMCOMPONENTDEFINITION *ppCtxDef);


void __RPC_STUB ISEAssemblyBody_GetContextDefinition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEAssemblyBody_GetTransformation_Proxy( 
    ISEAssemblyBody * This,
    /* [out] */ double Matrix[ 16 ]);


void __RPC_STUB ISEAssemblyBody_GetTransformation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEAssemblyBody_CreateElementProxy_Proxy( 
    ISEAssemblyBody * This,
    /* [in] */ ULONG cbKeySize,
    /* [size_is][in] */ BYTE *pKey,
    /* [out] */ LPDMELEMENTPROXY *ppElemProxy);


void __RPC_STUB ISEAssemblyBody_CreateElementProxy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEAssemblyBody_PutTransformation_Proxy( 
    ISEAssemblyBody * This,
    /* [in] */ double Matrix[ 16 ]);


void __RPC_STUB ISEAssemblyBody_PutTransformation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEAssemblyBody_GetName_Proxy( 
    ISEAssemblyBody * This,
    /* [string][out] */ OLECHAR **ppwszName);


void __RPC_STUB ISEAssemblyBody_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEAssemblyBody_GetRangeBox_Proxy( 
    ISEAssemblyBody * This,
    /* [out] */ double daMinPoint[ 3 ],
    /* [out] */ double daMaxPoint[ 3 ]);


void __RPC_STUB ISEAssemblyBody_GetRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEAssemblyBody_GetMaterial_Proxy( 
    ISEAssemblyBody * This,
    /* [out] */ SEMATERIAL *pMaterial);


void __RPC_STUB ISEAssemblyBody_GetMaterial_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEAssemblyBody_GetBody_Proxy( 
    ISEAssemblyBody * This,
    /* [out] */ LPDMSURFACEBODY *ppBody);


void __RPC_STUB ISEAssemblyBody_GetBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEAssemblyBody_ThisAsAssemblyBody_Proxy( 
    ISEAssemblyBody * This,
    /* [out] */ LPUNKNOWN *ppThisAsAssemblyBody);


void __RPC_STUB ISEAssemblyBody_ThisAsAssemblyBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISEAssemblyBody_GetParentAssemblyBody_Proxy( 
    ISEAssemblyBody * This,
    /* [out] */ LPUNKNOWN *ppUnknown);


void __RPC_STUB ISEAssemblyBody_GetParentAssemblyBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEAssemblyBody_INTERFACE_DEFINED__ */


#ifndef __IEnumSEAssemblyBodies_INTERFACE_DEFINED__
#define __IEnumSEAssemblyBodies_INTERFACE_DEFINED__

/* interface IEnumSEAssemblyBodies */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumSEAssemblyBodies;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("71624F92-A9A7-497b-9B6F-08AC6894C4E2")
    IEnumSEAssemblyBodies : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cBodies,
            /* [out] */ ISEAssemblyBody **rgelt,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SkipBodies( 
            /* [in] */ ULONG cBodies) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetEnum( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ LPENUM_SEASSEMBLYBODIES *ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumSEAssemblyBodiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSEAssemblyBodies * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSEAssemblyBodies * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSEAssemblyBodies * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSEAssemblyBodies * This,
            /* [in] */ ULONG cBodies,
            /* [out] */ ISEAssemblyBody **rgelt,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *SkipBodies )( 
            IEnumSEAssemblyBodies * This,
            /* [in] */ ULONG cBodies);
        
        HRESULT ( STDMETHODCALLTYPE *ResetEnum )( 
            IEnumSEAssemblyBodies * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSEAssemblyBodies * This,
            /* [out] */ LPENUM_SEASSEMBLYBODIES *ppEnum);
        
        END_INTERFACE
    } IEnumSEAssemblyBodiesVtbl;

    interface IEnumSEAssemblyBodies
    {
        CONST_VTBL struct IEnumSEAssemblyBodiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSEAssemblyBodies_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumSEAssemblyBodies_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumSEAssemblyBodies_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumSEAssemblyBodies_Next(This,cBodies,rgelt,pcFetched)	\
    (This)->lpVtbl -> Next(This,cBodies,rgelt,pcFetched)

#define IEnumSEAssemblyBodies_SkipBodies(This,cBodies)	\
    (This)->lpVtbl -> SkipBodies(This,cBodies)

#define IEnumSEAssemblyBodies_ResetEnum(This)	\
    (This)->lpVtbl -> ResetEnum(This)

#define IEnumSEAssemblyBodies_Clone(This,ppEnum)	\
    (This)->lpVtbl -> Clone(This,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumSEAssemblyBodies_RemoteNext_Proxy( 
    IEnumSEAssemblyBodies * This,
    /* [in] */ ULONG cBodies,
    /* [length_is][size_is][out] */ ISEAssemblyBody **rgelt,
    /* [out] */ ULONG *pcFetched);


void __RPC_STUB IEnumSEAssemblyBodies_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumSEAssemblyBodies_SkipBodies_Proxy( 
    IEnumSEAssemblyBodies * This,
    /* [in] */ ULONG cBodies);


void __RPC_STUB IEnumSEAssemblyBodies_SkipBodies_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumSEAssemblyBodies_ResetEnum_Proxy( 
    IEnumSEAssemblyBodies * This);


void __RPC_STUB IEnumSEAssemblyBodies_ResetEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumSEAssemblyBodies_Clone_Proxy( 
    IEnumSEAssemblyBodies * This,
    /* [out] */ LPENUM_SEASSEMBLYBODIES *ppEnum);


void __RPC_STUB IEnumSEAssemblyBodies_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumSEAssemblyBodies_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumSEAssemblyBodies_Next_Proxy( 
    IEnumSEAssemblyBodies * This,
    /* [in] */ ULONG cBodies,
    /* [out] */ ISEAssemblyBody **rgelt,
    /* [out] */ ULONG *pcFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumSEAssemblyBodies_Next_Stub( 
    IEnumSEAssemblyBodies * This,
    /* [in] */ ULONG cBodies,
    /* [length_is][size_is][out] */ ISEAssemblyBody **rgelt,
    /* [out] */ ULONG *pcFetched);



/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


