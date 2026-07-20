

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Mon Apr 02 00:03:40 2007
 */
/* Compiler settings for GTforDM.idl:
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

#ifndef __GTforDM_h__
#define __GTforDM_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDMSurfaceBodies_FWD_DEFINED__
#define __IDMSurfaceBodies_FWD_DEFINED__
typedef interface IDMSurfaceBodies IDMSurfaceBodies;
#endif 	/* __IDMSurfaceBodies_FWD_DEFINED__ */


#ifndef __IDMSurfaceBody_FWD_DEFINED__
#define __IDMSurfaceBody_FWD_DEFINED__
typedef interface IDMSurfaceBody IDMSurfaceBody;
#endif 	/* __IDMSurfaceBody_FWD_DEFINED__ */


#ifndef __IDMShell_FWD_DEFINED__
#define __IDMShell_FWD_DEFINED__
typedef interface IDMShell IDMShell;
#endif 	/* __IDMShell_FWD_DEFINED__ */


#ifndef __IDMFace_FWD_DEFINED__
#define __IDMFace_FWD_DEFINED__
typedef interface IDMFace IDMFace;
#endif 	/* __IDMFace_FWD_DEFINED__ */


#ifndef __IDMLoop_FWD_DEFINED__
#define __IDMLoop_FWD_DEFINED__
typedef interface IDMLoop IDMLoop;
#endif 	/* __IDMLoop_FWD_DEFINED__ */


#ifndef __IDMEdgeUse_FWD_DEFINED__
#define __IDMEdgeUse_FWD_DEFINED__
typedef interface IDMEdgeUse IDMEdgeUse;
#endif 	/* __IDMEdgeUse_FWD_DEFINED__ */


#ifndef __IDMEdge_FWD_DEFINED__
#define __IDMEdge_FWD_DEFINED__
typedef interface IDMEdge IDMEdge;
#endif 	/* __IDMEdge_FWD_DEFINED__ */


#ifndef __IDMVertex_FWD_DEFINED__
#define __IDMVertex_FWD_DEFINED__
typedef interface IDMVertex IDMVertex;
#endif 	/* __IDMVertex_FWD_DEFINED__ */


#ifndef __IDMSurface_FWD_DEFINED__
#define __IDMSurface_FWD_DEFINED__
typedef interface IDMSurface IDMSurface;
#endif 	/* __IDMSurface_FWD_DEFINED__ */


#ifndef __IDMCone_FWD_DEFINED__
#define __IDMCone_FWD_DEFINED__
typedef interface IDMCone IDMCone;
#endif 	/* __IDMCone_FWD_DEFINED__ */


#ifndef __IDMCylinder_FWD_DEFINED__
#define __IDMCylinder_FWD_DEFINED__
typedef interface IDMCylinder IDMCylinder;
#endif 	/* __IDMCylinder_FWD_DEFINED__ */


#ifndef __IDMSphere_FWD_DEFINED__
#define __IDMSphere_FWD_DEFINED__
typedef interface IDMSphere IDMSphere;
#endif 	/* __IDMSphere_FWD_DEFINED__ */


#ifndef __IDMTorus_FWD_DEFINED__
#define __IDMTorus_FWD_DEFINED__
typedef interface IDMTorus IDMTorus;
#endif 	/* __IDMTorus_FWD_DEFINED__ */


#ifndef __IDMBSplineSurface_FWD_DEFINED__
#define __IDMBSplineSurface_FWD_DEFINED__
typedef interface IDMBSplineSurface IDMBSplineSurface;
#endif 	/* __IDMBSplineSurface_FWD_DEFINED__ */


#ifndef __IEnumDMSurfaceBodies_FWD_DEFINED__
#define __IEnumDMSurfaceBodies_FWD_DEFINED__
typedef interface IEnumDMSurfaceBodies IEnumDMSurfaceBodies;
#endif 	/* __IEnumDMSurfaceBodies_FWD_DEFINED__ */


#ifndef __IEnumDMShells_FWD_DEFINED__
#define __IEnumDMShells_FWD_DEFINED__
typedef interface IEnumDMShells IEnumDMShells;
#endif 	/* __IEnumDMShells_FWD_DEFINED__ */


#ifndef __IEnumDMFaces_FWD_DEFINED__
#define __IEnumDMFaces_FWD_DEFINED__
typedef interface IEnumDMFaces IEnumDMFaces;
#endif 	/* __IEnumDMFaces_FWD_DEFINED__ */


#ifndef __IEnumDMLoops_FWD_DEFINED__
#define __IEnumDMLoops_FWD_DEFINED__
typedef interface IEnumDMLoops IEnumDMLoops;
#endif 	/* __IEnumDMLoops_FWD_DEFINED__ */


#ifndef __IEnumDMEdgeUses_FWD_DEFINED__
#define __IEnumDMEdgeUses_FWD_DEFINED__
typedef interface IEnumDMEdgeUses IEnumDMEdgeUses;
#endif 	/* __IEnumDMEdgeUses_FWD_DEFINED__ */


#ifndef __IEnumDMEdges_FWD_DEFINED__
#define __IEnumDMEdges_FWD_DEFINED__
typedef interface IEnumDMEdges IEnumDMEdges;
#endif 	/* __IEnumDMEdges_FWD_DEFINED__ */


#ifndef __IEnumDMVertices_FWD_DEFINED__
#define __IEnumDMVertices_FWD_DEFINED__
typedef interface IEnumDMVertices IEnumDMVertices;
#endif 	/* __IEnumDMVertices_FWD_DEFINED__ */


#ifndef __IDMAlternateSurfaceBody_FWD_DEFINED__
#define __IDMAlternateSurfaceBody_FWD_DEFINED__
typedef interface IDMAlternateSurfaceBody IDMAlternateSurfaceBody;
#endif 	/* __IDMAlternateSurfaceBody_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"
#include "dmroot.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_GTforDM_0000 */
/* [local] */ 

#pragma warning(disable: 4005)
#define TARGET_IS_NT40_OR_LATER 1
#ifndef __WINDOWS_H__
#include <windows.h>
#endif
#ifndef __OBJBASE_H__
#include <objbase.h>
#endif
DEFINE_GUID(IID_IDMSurfaceBodies, 0x0002D208, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMSurfaceBody, 0x0002D209, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMShell, 0x0002D20A, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMFace, 0x0002D20B, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMLoop, 0x0002D20C, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMEdgeUse, 0x0002D20D, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMEdge, 0x0002D20E, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMVertex, 0x0002D20F, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMSurface, 0x0002D210, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMCone, 0x0002D213, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMCylinder, 0x0002D214, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMSphere, 0x0002D215, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMTorus, 0x0002D216, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMBSplineSurface, 0x0002D218, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IEnumDMSurfaceBodies, 0x0002D223, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IEnumDMShells, 0x0002D224, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IEnumDMFaces, 0x0002D225, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IEnumDMLoops, 0x0002D226, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IEnumDMEdgeUses, 0x0002D227, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IEnumDMEdges, 0x0002D228, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IEnumDMVertices, 0x0002D229, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IDMAlternateSurfaceBody, 0x0002D22A, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
typedef /* [unique] */ IDMSurfaceBodies *LPDMSURFACEBODIES;

typedef /* [unique] */ IDMSurfaceBody *LPDMSURFACEBODY;

typedef /* [unique] */ IDMShell *LPDMSHELL;

typedef /* [unique] */ IDMFace *LPDMFACE;

typedef /* [unique] */ IDMLoop *LPDMLOOP;

typedef /* [unique] */ IDMEdgeUse *LPDMEDGEUSE;

typedef /* [unique] */ IDMEdge *LPDMEDGE;

typedef /* [unique] */ IDMVertex *LPDMVERTEX;

typedef /* [unique] */ IDMSurface *LPDMSURFACE;

typedef /* [unique] */ IDMCone *LPDMCONE;

typedef /* [unique] */ IDMCylinder *LPDMCYLINDER;

typedef /* [unique] */ IDMSphere *LPDMSPHERE;

typedef /* [unique] */ IDMTorus *LPDMTORUS;

typedef /* [unique] */ IDMBSplineSurface *LPDMBSPLINESURFACE;

typedef /* [unique] */ IEnumDMSurfaceBodies *LPENUM_DMSURFACEBODIES;

typedef /* [unique] */ IEnumDMShells *LPENUM_DMSHELLS;

typedef /* [unique] */ IEnumDMFaces *LPENUM_DMFACES;

typedef /* [unique] */ IEnumDMLoops *LPENUM_DMLOOPS;

typedef /* [unique] */ IEnumDMEdgeUses *LPENUM_DMEDGEUSES;

typedef /* [unique] */ IEnumDMEdges *LPENUM_DMEDGES;

typedef /* [unique] */ IEnumDMVertices *LPENUM_DMVERTICES;

typedef /* [unique] */ IDMAlternateSurfaceBody *LPDMALTERNATESURFACEBODY;

typedef 
enum tagDMSFGEOMETRYFORM
    {	SFGEOMETRYFORM_CLOSEDUVLOOPS	= 0x1,
	SFGEOMETRYFORM_NOT_CLOSEDUVLOOPS	= 0x2,
	SFGEOMETRYFORM_NURBS	= 0x4,
	SFGEOMETRYFORM_NOT_NURBS	= 0x8
    } 	DMSFGEOMETRYFORM;

typedef 
enum tagDMCVGEOMETRYFORM
    {	CVGEOMETRYFORM_NURBS	= 0x1,
	CVGEOMETRYFORM_NOT_NURBS	= 0x2
    } 	DMCVGEOMETRYFORM;



extern RPC_IF_HANDLE __MIDL_itf_GTforDM_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_GTforDM_0000_v0_0_s_ifspec;

#ifndef __IDMSurfaceBodies_INTERFACE_DEFINED__
#define __IDMSurfaceBodies_INTERFACE_DEFINED__

/* interface IDMSurfaceBodies */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMSurfaceBodies;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D208-0000-0000-C000-000000000046")
    IDMSurfaceBodies : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumSurfaceBodies( 
            /* [out] */ LPENUM_DMSURFACEBODIES *pEnumSurfaceBodies) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMSurfaceBodiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMSurfaceBodies * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMSurfaceBodies * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMSurfaceBodies * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumSurfaceBodies )( 
            IDMSurfaceBodies * This,
            /* [out] */ LPENUM_DMSURFACEBODIES *pEnumSurfaceBodies);
        
        END_INTERFACE
    } IDMSurfaceBodiesVtbl;

    interface IDMSurfaceBodies
    {
        CONST_VTBL struct IDMSurfaceBodiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMSurfaceBodies_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMSurfaceBodies_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMSurfaceBodies_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMSurfaceBodies_EnumSurfaceBodies(This,pEnumSurfaceBodies)	\
    (This)->lpVtbl -> EnumSurfaceBodies(This,pEnumSurfaceBodies)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMSurfaceBodies_EnumSurfaceBodies_Proxy( 
    IDMSurfaceBodies * This,
    /* [out] */ LPENUM_DMSURFACEBODIES *pEnumSurfaceBodies);


void __RPC_STUB IDMSurfaceBodies_EnumSurfaceBodies_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMSurfaceBodies_INTERFACE_DEFINED__ */


#ifndef __IDMSurfaceBody_INTERFACE_DEFINED__
#define __IDMSurfaceBody_INTERFACE_DEFINED__

/* interface IDMSurfaceBody */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMSurfaceBody;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D209-0000-0000-C000-000000000046")
    IDMSurfaceBody : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumShells( 
            /* [out] */ LPENUM_DMSHELLS *pEnumShells) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumFaces( 
            /* [out] */ LPENUM_DMFACES *pEnumFaces) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumEdges( 
            /* [out] */ LPENUM_DMEDGES *pEnumEdges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDocument( 
            /* [out] */ LPDMSURFACEBODIES *pDoc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSolid( 
            /* [out] */ boolean *pIsSolid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVolume( 
            /* [out] */ double *pVolume) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGeometryForm( 
            /* [out] */ DWORD *pForm) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMSurfaceBodyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMSurfaceBody * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMSurfaceBody * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMSurfaceBody * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumShells )( 
            IDMSurfaceBody * This,
            /* [out] */ LPENUM_DMSHELLS *pEnumShells);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFaces )( 
            IDMSurfaceBody * This,
            /* [out] */ LPENUM_DMFACES *pEnumFaces);
        
        HRESULT ( STDMETHODCALLTYPE *EnumEdges )( 
            IDMSurfaceBody * This,
            /* [out] */ LPENUM_DMEDGES *pEnumEdges);
        
        HRESULT ( STDMETHODCALLTYPE *GetDocument )( 
            IDMSurfaceBody * This,
            /* [out] */ LPDMSURFACEBODIES *pDoc);
        
        HRESULT ( STDMETHODCALLTYPE *IsSolid )( 
            IDMSurfaceBody * This,
            /* [out] */ boolean *pIsSolid);
        
        HRESULT ( STDMETHODCALLTYPE *GetRangeBox )( 
            IDMSurfaceBody * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetVolume )( 
            IDMSurfaceBody * This,
            /* [out] */ double *pVolume);
        
        HRESULT ( STDMETHODCALLTYPE *GetGeometryForm )( 
            IDMSurfaceBody * This,
            /* [out] */ DWORD *pForm);
        
        END_INTERFACE
    } IDMSurfaceBodyVtbl;

    interface IDMSurfaceBody
    {
        CONST_VTBL struct IDMSurfaceBodyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMSurfaceBody_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMSurfaceBody_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMSurfaceBody_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMSurfaceBody_EnumShells(This,pEnumShells)	\
    (This)->lpVtbl -> EnumShells(This,pEnumShells)

#define IDMSurfaceBody_EnumFaces(This,pEnumFaces)	\
    (This)->lpVtbl -> EnumFaces(This,pEnumFaces)

#define IDMSurfaceBody_EnumEdges(This,pEnumEdges)	\
    (This)->lpVtbl -> EnumEdges(This,pEnumEdges)

#define IDMSurfaceBody_GetDocument(This,pDoc)	\
    (This)->lpVtbl -> GetDocument(This,pDoc)

#define IDMSurfaceBody_IsSolid(This,pIsSolid)	\
    (This)->lpVtbl -> IsSolid(This,pIsSolid)

#define IDMSurfaceBody_GetRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetRangeBox(This,pMinPoint,pMaxPoint)

#define IDMSurfaceBody_GetVolume(This,pVolume)	\
    (This)->lpVtbl -> GetVolume(This,pVolume)

#define IDMSurfaceBody_GetGeometryForm(This,pForm)	\
    (This)->lpVtbl -> GetGeometryForm(This,pForm)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMSurfaceBody_EnumShells_Proxy( 
    IDMSurfaceBody * This,
    /* [out] */ LPENUM_DMSHELLS *pEnumShells);


void __RPC_STUB IDMSurfaceBody_EnumShells_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurfaceBody_EnumFaces_Proxy( 
    IDMSurfaceBody * This,
    /* [out] */ LPENUM_DMFACES *pEnumFaces);


void __RPC_STUB IDMSurfaceBody_EnumFaces_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurfaceBody_EnumEdges_Proxy( 
    IDMSurfaceBody * This,
    /* [out] */ LPENUM_DMEDGES *pEnumEdges);


void __RPC_STUB IDMSurfaceBody_EnumEdges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurfaceBody_GetDocument_Proxy( 
    IDMSurfaceBody * This,
    /* [out] */ LPDMSURFACEBODIES *pDoc);


void __RPC_STUB IDMSurfaceBody_GetDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurfaceBody_IsSolid_Proxy( 
    IDMSurfaceBody * This,
    /* [out] */ boolean *pIsSolid);


void __RPC_STUB IDMSurfaceBody_IsSolid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurfaceBody_GetRangeBox_Proxy( 
    IDMSurfaceBody * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB IDMSurfaceBody_GetRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurfaceBody_GetVolume_Proxy( 
    IDMSurfaceBody * This,
    /* [out] */ double *pVolume);


void __RPC_STUB IDMSurfaceBody_GetVolume_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurfaceBody_GetGeometryForm_Proxy( 
    IDMSurfaceBody * This,
    /* [out] */ DWORD *pForm);


void __RPC_STUB IDMSurfaceBody_GetGeometryForm_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMSurfaceBody_INTERFACE_DEFINED__ */


#ifndef __IDMShell_INTERFACE_DEFINED__
#define __IDMShell_INTERFACE_DEFINED__

/* interface IDMShell */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMShell;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D20A-0000-0000-C000-000000000046")
    IDMShell : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumFaces( 
            /* [out] */ LPENUM_DMFACES *pEnumFaces) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumEdges( 
            /* [out] */ LPENUM_DMEDGES *pEnumEdges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBody( 
            /* [out] */ LPDMSURFACEBODY *pBody) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsClosed( 
            /* [out] */ boolean *pIsClosed) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsVoid( 
            /* [out] */ boolean *pIsVoid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsPointInside( 
            /* [in] */ double point[ 3 ],
            /* [out] */ boolean *pIsPtInside) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVolume( 
            /* [out] */ double *pVolume) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMShellVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMShell * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMShell * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMShell * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFaces )( 
            IDMShell * This,
            /* [out] */ LPENUM_DMFACES *pEnumFaces);
        
        HRESULT ( STDMETHODCALLTYPE *EnumEdges )( 
            IDMShell * This,
            /* [out] */ LPENUM_DMEDGES *pEnumEdges);
        
        HRESULT ( STDMETHODCALLTYPE *GetBody )( 
            IDMShell * This,
            /* [out] */ LPDMSURFACEBODY *pBody);
        
        HRESULT ( STDMETHODCALLTYPE *IsClosed )( 
            IDMShell * This,
            /* [out] */ boolean *pIsClosed);
        
        HRESULT ( STDMETHODCALLTYPE *IsVoid )( 
            IDMShell * This,
            /* [out] */ boolean *pIsVoid);
        
        HRESULT ( STDMETHODCALLTYPE *IsPointInside )( 
            IDMShell * This,
            /* [in] */ double point[ 3 ],
            /* [out] */ boolean *pIsPtInside);
        
        HRESULT ( STDMETHODCALLTYPE *GetRangeBox )( 
            IDMShell * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetVolume )( 
            IDMShell * This,
            /* [out] */ double *pVolume);
        
        END_INTERFACE
    } IDMShellVtbl;

    interface IDMShell
    {
        CONST_VTBL struct IDMShellVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMShell_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMShell_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMShell_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMShell_EnumFaces(This,pEnumFaces)	\
    (This)->lpVtbl -> EnumFaces(This,pEnumFaces)

#define IDMShell_EnumEdges(This,pEnumEdges)	\
    (This)->lpVtbl -> EnumEdges(This,pEnumEdges)

#define IDMShell_GetBody(This,pBody)	\
    (This)->lpVtbl -> GetBody(This,pBody)

#define IDMShell_IsClosed(This,pIsClosed)	\
    (This)->lpVtbl -> IsClosed(This,pIsClosed)

#define IDMShell_IsVoid(This,pIsVoid)	\
    (This)->lpVtbl -> IsVoid(This,pIsVoid)

#define IDMShell_IsPointInside(This,point,pIsPtInside)	\
    (This)->lpVtbl -> IsPointInside(This,point,pIsPtInside)

#define IDMShell_GetRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetRangeBox(This,pMinPoint,pMaxPoint)

#define IDMShell_GetVolume(This,pVolume)	\
    (This)->lpVtbl -> GetVolume(This,pVolume)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMShell_EnumFaces_Proxy( 
    IDMShell * This,
    /* [out] */ LPENUM_DMFACES *pEnumFaces);


void __RPC_STUB IDMShell_EnumFaces_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMShell_EnumEdges_Proxy( 
    IDMShell * This,
    /* [out] */ LPENUM_DMEDGES *pEnumEdges);


void __RPC_STUB IDMShell_EnumEdges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMShell_GetBody_Proxy( 
    IDMShell * This,
    /* [out] */ LPDMSURFACEBODY *pBody);


void __RPC_STUB IDMShell_GetBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMShell_IsClosed_Proxy( 
    IDMShell * This,
    /* [out] */ boolean *pIsClosed);


void __RPC_STUB IDMShell_IsClosed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMShell_IsVoid_Proxy( 
    IDMShell * This,
    /* [out] */ boolean *pIsVoid);


void __RPC_STUB IDMShell_IsVoid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMShell_IsPointInside_Proxy( 
    IDMShell * This,
    /* [in] */ double point[ 3 ],
    /* [out] */ boolean *pIsPtInside);


void __RPC_STUB IDMShell_IsPointInside_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMShell_GetRangeBox_Proxy( 
    IDMShell * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB IDMShell_GetRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMShell_GetVolume_Proxy( 
    IDMShell * This,
    /* [out] */ double *pVolume);


void __RPC_STUB IDMShell_GetVolume_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMShell_INTERFACE_DEFINED__ */


#ifndef __IDMFace_INTERFACE_DEFINED__
#define __IDMFace_INTERFACE_DEFINED__

/* interface IDMFace */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMFace;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D20B-0000-0000-C000-000000000046")
    IDMFace : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumLoops( 
            /* [out] */ LPENUM_DMLOOPS *pEnumLoops) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumEdges( 
            /* [out] */ LPENUM_DMEDGES *pEnumEdges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumVertices( 
            /* [out] */ LPENUM_DMVERTICES *pEnumVertices) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShell( 
            /* [out] */ LPDMSHELL *pShell) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBody( 
            /* [out] */ LPDMSURFACEBODY *pBody) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsParamReversed( 
            /* [out] */ boolean *pIsReversed) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMFaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMFace * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMFace * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMFace * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumLoops )( 
            IDMFace * This,
            /* [out] */ LPENUM_DMLOOPS *pEnumLoops);
        
        HRESULT ( STDMETHODCALLTYPE *EnumEdges )( 
            IDMFace * This,
            /* [out] */ LPENUM_DMEDGES *pEnumEdges);
        
        HRESULT ( STDMETHODCALLTYPE *EnumVertices )( 
            IDMFace * This,
            /* [out] */ LPENUM_DMVERTICES *pEnumVertices);
        
        HRESULT ( STDMETHODCALLTYPE *GetShell )( 
            IDMFace * This,
            /* [out] */ LPDMSHELL *pShell);
        
        HRESULT ( STDMETHODCALLTYPE *GetBody )( 
            IDMFace * This,
            /* [out] */ LPDMSURFACEBODY *pBody);
        
        HRESULT ( STDMETHODCALLTYPE *IsParamReversed )( 
            IDMFace * This,
            /* [out] */ boolean *pIsReversed);
        
        END_INTERFACE
    } IDMFaceVtbl;

    interface IDMFace
    {
        CONST_VTBL struct IDMFaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMFace_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMFace_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMFace_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMFace_EnumLoops(This,pEnumLoops)	\
    (This)->lpVtbl -> EnumLoops(This,pEnumLoops)

#define IDMFace_EnumEdges(This,pEnumEdges)	\
    (This)->lpVtbl -> EnumEdges(This,pEnumEdges)

#define IDMFace_EnumVertices(This,pEnumVertices)	\
    (This)->lpVtbl -> EnumVertices(This,pEnumVertices)

#define IDMFace_GetShell(This,pShell)	\
    (This)->lpVtbl -> GetShell(This,pShell)

#define IDMFace_GetBody(This,pBody)	\
    (This)->lpVtbl -> GetBody(This,pBody)

#define IDMFace_IsParamReversed(This,pIsReversed)	\
    (This)->lpVtbl -> IsParamReversed(This,pIsReversed)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMFace_EnumLoops_Proxy( 
    IDMFace * This,
    /* [out] */ LPENUM_DMLOOPS *pEnumLoops);


void __RPC_STUB IDMFace_EnumLoops_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMFace_EnumEdges_Proxy( 
    IDMFace * This,
    /* [out] */ LPENUM_DMEDGES *pEnumEdges);


void __RPC_STUB IDMFace_EnumEdges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMFace_EnumVertices_Proxy( 
    IDMFace * This,
    /* [out] */ LPENUM_DMVERTICES *pEnumVertices);


void __RPC_STUB IDMFace_EnumVertices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMFace_GetShell_Proxy( 
    IDMFace * This,
    /* [out] */ LPDMSHELL *pShell);


void __RPC_STUB IDMFace_GetShell_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMFace_GetBody_Proxy( 
    IDMFace * This,
    /* [out] */ LPDMSURFACEBODY *pBody);


void __RPC_STUB IDMFace_GetBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMFace_IsParamReversed_Proxy( 
    IDMFace * This,
    /* [out] */ boolean *pIsReversed);


void __RPC_STUB IDMFace_IsParamReversed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMFace_INTERFACE_DEFINED__ */


#ifndef __IDMLoop_INTERFACE_DEFINED__
#define __IDMLoop_INTERFACE_DEFINED__

/* interface IDMLoop */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMLoop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D20C-0000-0000-C000-000000000046")
    IDMLoop : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumEdgeUses( 
            /* [out] */ LPENUM_DMEDGEUSES *pEnumEdgeUses) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumEdges( 
            /* [out] */ LPENUM_DMEDGES *pEnumEdges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFace( 
            /* [out] */ LPDMFACE *pFace) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsOuterLoop( 
            /* [out] */ boolean *pIsOuter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMLoopVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMLoop * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMLoop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMLoop * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumEdgeUses )( 
            IDMLoop * This,
            /* [out] */ LPENUM_DMEDGEUSES *pEnumEdgeUses);
        
        HRESULT ( STDMETHODCALLTYPE *EnumEdges )( 
            IDMLoop * This,
            /* [out] */ LPENUM_DMEDGES *pEnumEdges);
        
        HRESULT ( STDMETHODCALLTYPE *GetFace )( 
            IDMLoop * This,
            /* [out] */ LPDMFACE *pFace);
        
        HRESULT ( STDMETHODCALLTYPE *IsOuterLoop )( 
            IDMLoop * This,
            /* [out] */ boolean *pIsOuter);
        
        HRESULT ( STDMETHODCALLTYPE *GetRangeBox )( 
            IDMLoop * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        END_INTERFACE
    } IDMLoopVtbl;

    interface IDMLoop
    {
        CONST_VTBL struct IDMLoopVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMLoop_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMLoop_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMLoop_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMLoop_EnumEdgeUses(This,pEnumEdgeUses)	\
    (This)->lpVtbl -> EnumEdgeUses(This,pEnumEdgeUses)

#define IDMLoop_EnumEdges(This,pEnumEdges)	\
    (This)->lpVtbl -> EnumEdges(This,pEnumEdges)

#define IDMLoop_GetFace(This,pFace)	\
    (This)->lpVtbl -> GetFace(This,pFace)

#define IDMLoop_IsOuterLoop(This,pIsOuter)	\
    (This)->lpVtbl -> IsOuterLoop(This,pIsOuter)

#define IDMLoop_GetRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetRangeBox(This,pMinPoint,pMaxPoint)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMLoop_EnumEdgeUses_Proxy( 
    IDMLoop * This,
    /* [out] */ LPENUM_DMEDGEUSES *pEnumEdgeUses);


void __RPC_STUB IDMLoop_EnumEdgeUses_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMLoop_EnumEdges_Proxy( 
    IDMLoop * This,
    /* [out] */ LPENUM_DMEDGES *pEnumEdges);


void __RPC_STUB IDMLoop_EnumEdges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMLoop_GetFace_Proxy( 
    IDMLoop * This,
    /* [out] */ LPDMFACE *pFace);


void __RPC_STUB IDMLoop_GetFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMLoop_IsOuterLoop_Proxy( 
    IDMLoop * This,
    /* [out] */ boolean *pIsOuter);


void __RPC_STUB IDMLoop_IsOuterLoop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMLoop_GetRangeBox_Proxy( 
    IDMLoop * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB IDMLoop_GetRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMLoop_INTERFACE_DEFINED__ */


#ifndef __IDMEdgeUse_INTERFACE_DEFINED__
#define __IDMEdgeUse_INTERFACE_DEFINED__

/* interface IDMEdgeUse */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMEdgeUse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D20D-0000-0000-C000-000000000046")
    IDMEdgeUse : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEdge( 
            /* [out] */ LPDMEDGE *pEdge) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLoop( 
            /* [out] */ LPDMLOOP *pLoop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPartner( 
            /* [out] */ LPDMEDGEUSE *pEdgeUse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNext( 
            /* [out] */ LPDMEDGEUSE *pEdgeUse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPrevious( 
            /* [out] */ LPDMEDGEUSE *pEdgeUse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsOpposedToEdge( 
            /* [out] */ boolean *pIsReversed) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsParamReversed( 
            /* [out] */ boolean *pIsParamReversed) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMEdgeUseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMEdgeUse * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMEdgeUse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMEdgeUse * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEdge )( 
            IDMEdgeUse * This,
            /* [out] */ LPDMEDGE *pEdge);
        
        HRESULT ( STDMETHODCALLTYPE *GetLoop )( 
            IDMEdgeUse * This,
            /* [out] */ LPDMLOOP *pLoop);
        
        HRESULT ( STDMETHODCALLTYPE *GetPartner )( 
            IDMEdgeUse * This,
            /* [out] */ LPDMEDGEUSE *pEdgeUse);
        
        HRESULT ( STDMETHODCALLTYPE *GetNext )( 
            IDMEdgeUse * This,
            /* [out] */ LPDMEDGEUSE *pEdgeUse);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrevious )( 
            IDMEdgeUse * This,
            /* [out] */ LPDMEDGEUSE *pEdgeUse);
        
        HRESULT ( STDMETHODCALLTYPE *IsOpposedToEdge )( 
            IDMEdgeUse * This,
            /* [out] */ boolean *pIsReversed);
        
        HRESULT ( STDMETHODCALLTYPE *IsParamReversed )( 
            IDMEdgeUse * This,
            /* [out] */ boolean *pIsParamReversed);
        
        END_INTERFACE
    } IDMEdgeUseVtbl;

    interface IDMEdgeUse
    {
        CONST_VTBL struct IDMEdgeUseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMEdgeUse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMEdgeUse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMEdgeUse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMEdgeUse_GetEdge(This,pEdge)	\
    (This)->lpVtbl -> GetEdge(This,pEdge)

#define IDMEdgeUse_GetLoop(This,pLoop)	\
    (This)->lpVtbl -> GetLoop(This,pLoop)

#define IDMEdgeUse_GetPartner(This,pEdgeUse)	\
    (This)->lpVtbl -> GetPartner(This,pEdgeUse)

#define IDMEdgeUse_GetNext(This,pEdgeUse)	\
    (This)->lpVtbl -> GetNext(This,pEdgeUse)

#define IDMEdgeUse_GetPrevious(This,pEdgeUse)	\
    (This)->lpVtbl -> GetPrevious(This,pEdgeUse)

#define IDMEdgeUse_IsOpposedToEdge(This,pIsReversed)	\
    (This)->lpVtbl -> IsOpposedToEdge(This,pIsReversed)

#define IDMEdgeUse_IsParamReversed(This,pIsParamReversed)	\
    (This)->lpVtbl -> IsParamReversed(This,pIsParamReversed)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMEdgeUse_GetEdge_Proxy( 
    IDMEdgeUse * This,
    /* [out] */ LPDMEDGE *pEdge);


void __RPC_STUB IDMEdgeUse_GetEdge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMEdgeUse_GetLoop_Proxy( 
    IDMEdgeUse * This,
    /* [out] */ LPDMLOOP *pLoop);


void __RPC_STUB IDMEdgeUse_GetLoop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMEdgeUse_GetPartner_Proxy( 
    IDMEdgeUse * This,
    /* [out] */ LPDMEDGEUSE *pEdgeUse);


void __RPC_STUB IDMEdgeUse_GetPartner_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMEdgeUse_GetNext_Proxy( 
    IDMEdgeUse * This,
    /* [out] */ LPDMEDGEUSE *pEdgeUse);


void __RPC_STUB IDMEdgeUse_GetNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMEdgeUse_GetPrevious_Proxy( 
    IDMEdgeUse * This,
    /* [out] */ LPDMEDGEUSE *pEdgeUse);


void __RPC_STUB IDMEdgeUse_GetPrevious_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMEdgeUse_IsOpposedToEdge_Proxy( 
    IDMEdgeUse * This,
    /* [out] */ boolean *pIsReversed);


void __RPC_STUB IDMEdgeUse_IsOpposedToEdge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMEdgeUse_IsParamReversed_Proxy( 
    IDMEdgeUse * This,
    /* [out] */ boolean *pIsParamReversed);


void __RPC_STUB IDMEdgeUse_IsParamReversed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMEdgeUse_INTERFACE_DEFINED__ */


#ifndef __IDMEdge_INTERFACE_DEFINED__
#define __IDMEdge_INTERFACE_DEFINED__

/* interface IDMEdge */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMEdge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D20E-0000-0000-C000-000000000046")
    IDMEdge : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStartVertex( 
            /* [out] */ LPDMVERTEX *pVertex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEndVertex( 
            /* [out] */ LPDMVERTEX *pVertex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEdgeUses( 
            /* [out] */ ULONG *pNumEdgeUses,
            /* [out] */ LPDMEDGEUSE pEdgeUses[ 2 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFaces( 
            /* [out] */ ULONG *pNumFaces,
            /* [out] */ LPDMFACE pFaces[ 2 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsParamReversed( 
            /* [out] */ boolean *pIsParamReversed) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMEdgeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMEdge * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMEdge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMEdge * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStartVertex )( 
            IDMEdge * This,
            /* [out] */ LPDMVERTEX *pVertex);
        
        HRESULT ( STDMETHODCALLTYPE *GetEndVertex )( 
            IDMEdge * This,
            /* [out] */ LPDMVERTEX *pVertex);
        
        HRESULT ( STDMETHODCALLTYPE *GetEdgeUses )( 
            IDMEdge * This,
            /* [out] */ ULONG *pNumEdgeUses,
            /* [out] */ LPDMEDGEUSE pEdgeUses[ 2 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetFaces )( 
            IDMEdge * This,
            /* [out] */ ULONG *pNumFaces,
            /* [out] */ LPDMFACE pFaces[ 2 ]);
        
        HRESULT ( STDMETHODCALLTYPE *IsParamReversed )( 
            IDMEdge * This,
            /* [out] */ boolean *pIsParamReversed);
        
        END_INTERFACE
    } IDMEdgeVtbl;

    interface IDMEdge
    {
        CONST_VTBL struct IDMEdgeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMEdge_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMEdge_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMEdge_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMEdge_GetStartVertex(This,pVertex)	\
    (This)->lpVtbl -> GetStartVertex(This,pVertex)

#define IDMEdge_GetEndVertex(This,pVertex)	\
    (This)->lpVtbl -> GetEndVertex(This,pVertex)

#define IDMEdge_GetEdgeUses(This,pNumEdgeUses,pEdgeUses)	\
    (This)->lpVtbl -> GetEdgeUses(This,pNumEdgeUses,pEdgeUses)

#define IDMEdge_GetFaces(This,pNumFaces,pFaces)	\
    (This)->lpVtbl -> GetFaces(This,pNumFaces,pFaces)

#define IDMEdge_IsParamReversed(This,pIsParamReversed)	\
    (This)->lpVtbl -> IsParamReversed(This,pIsParamReversed)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMEdge_GetStartVertex_Proxy( 
    IDMEdge * This,
    /* [out] */ LPDMVERTEX *pVertex);


void __RPC_STUB IDMEdge_GetStartVertex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMEdge_GetEndVertex_Proxy( 
    IDMEdge * This,
    /* [out] */ LPDMVERTEX *pVertex);


void __RPC_STUB IDMEdge_GetEndVertex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMEdge_GetEdgeUses_Proxy( 
    IDMEdge * This,
    /* [out] */ ULONG *pNumEdgeUses,
    /* [out] */ LPDMEDGEUSE pEdgeUses[ 2 ]);


void __RPC_STUB IDMEdge_GetEdgeUses_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMEdge_GetFaces_Proxy( 
    IDMEdge * This,
    /* [out] */ ULONG *pNumFaces,
    /* [out] */ LPDMFACE pFaces[ 2 ]);


void __RPC_STUB IDMEdge_GetFaces_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMEdge_IsParamReversed_Proxy( 
    IDMEdge * This,
    /* [out] */ boolean *pIsParamReversed);


void __RPC_STUB IDMEdge_IsParamReversed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMEdge_INTERFACE_DEFINED__ */


#ifndef __IDMVertex_INTERFACE_DEFINED__
#define __IDMVertex_INTERFACE_DEFINED__

/* interface IDMVertex */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMVertex;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D20F-0000-0000-C000-000000000046")
    IDMVertex : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumEdges( 
            /* [out] */ LPENUM_DMEDGES *pEnumEdges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumFaces( 
            /* [out] */ LPENUM_DMFACES *pEnumFaces) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPoint( 
            /* [out] */ double point[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMVertexVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMVertex * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMVertex * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMVertex * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumEdges )( 
            IDMVertex * This,
            /* [out] */ LPENUM_DMEDGES *pEnumEdges);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFaces )( 
            IDMVertex * This,
            /* [out] */ LPENUM_DMFACES *pEnumFaces);
        
        HRESULT ( STDMETHODCALLTYPE *GetPoint )( 
            IDMVertex * This,
            /* [out] */ double point[ 3 ]);
        
        END_INTERFACE
    } IDMVertexVtbl;

    interface IDMVertex
    {
        CONST_VTBL struct IDMVertexVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMVertex_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMVertex_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMVertex_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMVertex_EnumEdges(This,pEnumEdges)	\
    (This)->lpVtbl -> EnumEdges(This,pEnumEdges)

#define IDMVertex_EnumFaces(This,pEnumFaces)	\
    (This)->lpVtbl -> EnumFaces(This,pEnumFaces)

#define IDMVertex_GetPoint(This,point)	\
    (This)->lpVtbl -> GetPoint(This,point)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMVertex_EnumEdges_Proxy( 
    IDMVertex * This,
    /* [out] */ LPENUM_DMEDGES *pEnumEdges);


void __RPC_STUB IDMVertex_EnumEdges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMVertex_EnumFaces_Proxy( 
    IDMVertex * This,
    /* [out] */ LPENUM_DMFACES *pEnumFaces);


void __RPC_STUB IDMVertex_EnumFaces_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMVertex_GetPoint_Proxy( 
    IDMVertex * This,
    /* [out] */ double point[ 3 ]);


void __RPC_STUB IDMVertex_GetPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMVertex_INTERFACE_DEFINED__ */


#ifndef __IDMSurface_INTERFACE_DEFINED__
#define __IDMSurface_INTERFACE_DEFINED__

/* interface IDMSurface */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMSurface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D210-0000-0000-C000-000000000046")
    IDMSurface : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSurfaceType( 
            /* [out] */ IID *pIID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRangeBox( 
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParamRangeRect( 
            /* [out] */ double pMinParam[ 2 ],
            /* [out] */ double pMaxParam[ 2 ]) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetParamAtPoint( 
            /* [in] */ ULONG nPoints,
            /* [in] */ double *pPoints,
            /* [in] */ double *pGuessParams,
            /* [out] */ double *pMaxDeviations,
            /* [out] */ double *pParams,
            /* [out] */ DWORD *pFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPointAtParam( 
            /* [in] */ ULONG nParams,
            /* [in][size_is] */ double *pParams,
            /* [out][size_is] */ double *pPoints) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNormal( 
            /* [in] */ ULONG nParams,
            /* [in][size_is] */ double *pParams,
            /* [out][size_is] */ double *pNormals) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetTangents( 
            /* [in] */ ULONG nParams,
            /* [in] */ double *pParams,
            /* [out] */ double *pUTangents,
            /* [out] */ double *pVTangents) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetCurvatures( 
            /* [in] */ ULONG nParams,
            /* [in] */ double *pParams,
            /* [out] */ double *pMaxTangents,
            /* [out] */ double *pMaxCurvatures,
            /* [out] */ double *pMinCurvatures) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetDerivatives( 
            /* [in] */ ULONG nParams,
            /* [in] */ double *pParams,
            /* [out] */ double *pUPartials,
            /* [out] */ double *pVPartials,
            /* [out] */ double *pUUPartials,
            /* [out] */ double *pUVPartials,
            /* [out] */ double *pVVPartials,
            /* [out] */ double *pUUUPartials,
            /* [out] */ double *pVVVPartials) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsParamOnFace( 
            /* [in] */ ULONG nParams,
            /* [in][size_is] */ double *pParams,
            /* [out][size_is] */ boolean *pIsOnFace) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArea( 
            /* [out] */ double *pArea) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContinuity( 
            /* [out] */ DWORD *nLevel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParamAnomaly( 
            /* [out] */ double pPeriodicityU[ 2 ],
            /* [out] */ double pPeriodicityV[ 2 ],
            /* [out] */ ULONG *pnEndSingularityU,
            /* [out] */ double pSingularityU[ 2 ],
            /* [out] */ ULONG *pnEndSingularityV,
            /* [out] */ double pSingularityV[ 2 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGeometryForm( 
            /* [out] */ DWORD *pForm) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMSurfaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMSurface * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMSurface * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMSurface * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSurfaceType )( 
            IDMSurface * This,
            /* [out] */ IID *pIID);
        
        HRESULT ( STDMETHODCALLTYPE *GetRangeBox )( 
            IDMSurface * This,
            /* [out] */ double pMinPoint[ 3 ],
            /* [out] */ double pMaxPoint[ 3 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetParamRangeRect )( 
            IDMSurface * This,
            /* [out] */ double pMinParam[ 2 ],
            /* [out] */ double pMaxParam[ 2 ]);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetParamAtPoint )( 
            IDMSurface * This,
            /* [in] */ ULONG nPoints,
            /* [in] */ double *pPoints,
            /* [in] */ double *pGuessParams,
            /* [out] */ double *pMaxDeviations,
            /* [out] */ double *pParams,
            /* [out] */ DWORD *pFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetPointAtParam )( 
            IDMSurface * This,
            /* [in] */ ULONG nParams,
            /* [in][size_is] */ double *pParams,
            /* [out][size_is] */ double *pPoints);
        
        HRESULT ( STDMETHODCALLTYPE *GetNormal )( 
            IDMSurface * This,
            /* [in] */ ULONG nParams,
            /* [in][size_is] */ double *pParams,
            /* [out][size_is] */ double *pNormals);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetTangents )( 
            IDMSurface * This,
            /* [in] */ ULONG nParams,
            /* [in] */ double *pParams,
            /* [out] */ double *pUTangents,
            /* [out] */ double *pVTangents);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetCurvatures )( 
            IDMSurface * This,
            /* [in] */ ULONG nParams,
            /* [in] */ double *pParams,
            /* [out] */ double *pMaxTangents,
            /* [out] */ double *pMaxCurvatures,
            /* [out] */ double *pMinCurvatures);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetDerivatives )( 
            IDMSurface * This,
            /* [in] */ ULONG nParams,
            /* [in] */ double *pParams,
            /* [out] */ double *pUPartials,
            /* [out] */ double *pVPartials,
            /* [out] */ double *pUUPartials,
            /* [out] */ double *pUVPartials,
            /* [out] */ double *pVVPartials,
            /* [out] */ double *pUUUPartials,
            /* [out] */ double *pVVVPartials);
        
        HRESULT ( STDMETHODCALLTYPE *IsParamOnFace )( 
            IDMSurface * This,
            /* [in] */ ULONG nParams,
            /* [in][size_is] */ double *pParams,
            /* [out][size_is] */ boolean *pIsOnFace);
        
        HRESULT ( STDMETHODCALLTYPE *GetArea )( 
            IDMSurface * This,
            /* [out] */ double *pArea);
        
        HRESULT ( STDMETHODCALLTYPE *GetContinuity )( 
            IDMSurface * This,
            /* [out] */ DWORD *nLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetParamAnomaly )( 
            IDMSurface * This,
            /* [out] */ double pPeriodicityU[ 2 ],
            /* [out] */ double pPeriodicityV[ 2 ],
            /* [out] */ ULONG *pnEndSingularityU,
            /* [out] */ double pSingularityU[ 2 ],
            /* [out] */ ULONG *pnEndSingularityV,
            /* [out] */ double pSingularityV[ 2 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetGeometryForm )( 
            IDMSurface * This,
            /* [out] */ DWORD *pForm);
        
        END_INTERFACE
    } IDMSurfaceVtbl;

    interface IDMSurface
    {
        CONST_VTBL struct IDMSurfaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMSurface_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMSurface_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMSurface_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMSurface_GetSurfaceType(This,pIID)	\
    (This)->lpVtbl -> GetSurfaceType(This,pIID)

#define IDMSurface_GetRangeBox(This,pMinPoint,pMaxPoint)	\
    (This)->lpVtbl -> GetRangeBox(This,pMinPoint,pMaxPoint)

#define IDMSurface_GetParamRangeRect(This,pMinParam,pMaxParam)	\
    (This)->lpVtbl -> GetParamRangeRect(This,pMinParam,pMaxParam)

#define IDMSurface_GetParamAtPoint(This,nPoints,pPoints,pGuessParams,pMaxDeviations,pParams,pFlags)	\
    (This)->lpVtbl -> GetParamAtPoint(This,nPoints,pPoints,pGuessParams,pMaxDeviations,pParams,pFlags)

#define IDMSurface_GetPointAtParam(This,nParams,pParams,pPoints)	\
    (This)->lpVtbl -> GetPointAtParam(This,nParams,pParams,pPoints)

#define IDMSurface_GetNormal(This,nParams,pParams,pNormals)	\
    (This)->lpVtbl -> GetNormal(This,nParams,pParams,pNormals)

#define IDMSurface_GetTangents(This,nParams,pParams,pUTangents,pVTangents)	\
    (This)->lpVtbl -> GetTangents(This,nParams,pParams,pUTangents,pVTangents)

#define IDMSurface_GetCurvatures(This,nParams,pParams,pMaxTangents,pMaxCurvatures,pMinCurvatures)	\
    (This)->lpVtbl -> GetCurvatures(This,nParams,pParams,pMaxTangents,pMaxCurvatures,pMinCurvatures)

#define IDMSurface_GetDerivatives(This,nParams,pParams,pUPartials,pVPartials,pUUPartials,pUVPartials,pVVPartials,pUUUPartials,pVVVPartials)	\
    (This)->lpVtbl -> GetDerivatives(This,nParams,pParams,pUPartials,pVPartials,pUUPartials,pUVPartials,pVVPartials,pUUUPartials,pVVVPartials)

#define IDMSurface_IsParamOnFace(This,nParams,pParams,pIsOnFace)	\
    (This)->lpVtbl -> IsParamOnFace(This,nParams,pParams,pIsOnFace)

#define IDMSurface_GetArea(This,pArea)	\
    (This)->lpVtbl -> GetArea(This,pArea)

#define IDMSurface_GetContinuity(This,nLevel)	\
    (This)->lpVtbl -> GetContinuity(This,nLevel)

#define IDMSurface_GetParamAnomaly(This,pPeriodicityU,pPeriodicityV,pnEndSingularityU,pSingularityU,pnEndSingularityV,pSingularityV)	\
    (This)->lpVtbl -> GetParamAnomaly(This,pPeriodicityU,pPeriodicityV,pnEndSingularityU,pSingularityU,pnEndSingularityV,pSingularityV)

#define IDMSurface_GetGeometryForm(This,pForm)	\
    (This)->lpVtbl -> GetGeometryForm(This,pForm)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMSurface_GetSurfaceType_Proxy( 
    IDMSurface * This,
    /* [out] */ IID *pIID);


void __RPC_STUB IDMSurface_GetSurfaceType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurface_GetRangeBox_Proxy( 
    IDMSurface * This,
    /* [out] */ double pMinPoint[ 3 ],
    /* [out] */ double pMaxPoint[ 3 ]);


void __RPC_STUB IDMSurface_GetRangeBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurface_GetParamRangeRect_Proxy( 
    IDMSurface * This,
    /* [out] */ double pMinParam[ 2 ],
    /* [out] */ double pMaxParam[ 2 ]);


void __RPC_STUB IDMSurface_GetParamRangeRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IDMSurface_RemoteGetParamAtPoint_Proxy( 
    IDMSurface * This,
    /* [in] */ ULONG nPoints,
    /* [size_is][in] */ double *pPoints,
    /* [in] */ ULONG nGuessParams,
    /* [size_is][in] */ double *pGuessParams,
    /* [in] */ ULONG nMaxDeviations,
    /* [size_is][out] */ double *pMaxDeviations,
    /* [size_is][out] */ double *pParams,
    /* [in] */ ULONG nFlags,
    /* [size_is][out] */ DWORD *pFlags);


void __RPC_STUB IDMSurface_RemoteGetParamAtPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurface_GetPointAtParam_Proxy( 
    IDMSurface * This,
    /* [in] */ ULONG nParams,
    /* [in][size_is] */ double *pParams,
    /* [out][size_is] */ double *pPoints);


void __RPC_STUB IDMSurface_GetPointAtParam_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurface_GetNormal_Proxy( 
    IDMSurface * This,
    /* [in] */ ULONG nParams,
    /* [in][size_is] */ double *pParams,
    /* [out][size_is] */ double *pNormals);


void __RPC_STUB IDMSurface_GetNormal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IDMSurface_RemoteGetTangents_Proxy( 
    IDMSurface * This,
    /* [in] */ ULONG nParams,
    /* [size_is][in] */ double *pParams,
    /* [in] */ ULONG nUTangents,
    /* [size_is][out] */ double *pUTangents,
    /* [in] */ ULONG nVTangents,
    /* [size_is][out] */ double *pVTangents);


void __RPC_STUB IDMSurface_RemoteGetTangents_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IDMSurface_RemoteGetCurvatures_Proxy( 
    IDMSurface * This,
    /* [in] */ ULONG nParams,
    /* [size_is][in] */ double *pParams,
    /* [in] */ ULONG nMaxTangents,
    /* [size_is][out] */ double *pMaxTangents,
    /* [in] */ ULONG nMaxCurvatures,
    /* [size_is][out] */ double *pMaxCurvatures,
    /* [in] */ ULONG nMinCurvatures,
    /* [size_is][out] */ double *pMinCurvatures);


void __RPC_STUB IDMSurface_RemoteGetCurvatures_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IDMSurface_RemoteGetDerivatives_Proxy( 
    IDMSurface * This,
    /* [in] */ ULONG nParams,
    /* [size_is][in] */ double *pParams,
    /* [in] */ ULONG nUPartials,
    /* [size_is][out] */ double *pUPartials,
    /* [in] */ ULONG nVPartials,
    /* [size_is][out] */ double *pVPartials,
    /* [in] */ ULONG nUUPartials,
    /* [size_is][out] */ double *pUUPartials,
    /* [in] */ ULONG nUVPartials,
    /* [size_is][out] */ double *pUVPartials,
    /* [in] */ ULONG nVVPartials,
    /* [size_is][out] */ double *pVVPartials,
    /* [in] */ ULONG nUUUPartials,
    /* [size_is][out] */ double *pUUUPartials,
    /* [in] */ ULONG nVVVPartials,
    /* [size_is][out] */ double *pVVVPartials);


void __RPC_STUB IDMSurface_RemoteGetDerivatives_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurface_IsParamOnFace_Proxy( 
    IDMSurface * This,
    /* [in] */ ULONG nParams,
    /* [in][size_is] */ double *pParams,
    /* [out][size_is] */ boolean *pIsOnFace);


void __RPC_STUB IDMSurface_IsParamOnFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurface_GetArea_Proxy( 
    IDMSurface * This,
    /* [out] */ double *pArea);


void __RPC_STUB IDMSurface_GetArea_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurface_GetContinuity_Proxy( 
    IDMSurface * This,
    /* [out] */ DWORD *nLevel);


void __RPC_STUB IDMSurface_GetContinuity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurface_GetParamAnomaly_Proxy( 
    IDMSurface * This,
    /* [out] */ double pPeriodicityU[ 2 ],
    /* [out] */ double pPeriodicityV[ 2 ],
    /* [out] */ ULONG *pnEndSingularityU,
    /* [out] */ double pSingularityU[ 2 ],
    /* [out] */ ULONG *pnEndSingularityV,
    /* [out] */ double pSingularityV[ 2 ]);


void __RPC_STUB IDMSurface_GetParamAnomaly_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMSurface_GetGeometryForm_Proxy( 
    IDMSurface * This,
    /* [out] */ DWORD *pForm);


void __RPC_STUB IDMSurface_GetGeometryForm_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMSurface_INTERFACE_DEFINED__ */


#ifndef __IDMCone_INTERFACE_DEFINED__
#define __IDMCone_INTERFACE_DEFINED__

/* interface IDMCone */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMCone;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D213-0000-0000-C000-000000000046")
    IDMCone : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetConeData( 
            /* [out] */ double pBasePoint[ 3 ],
            /* [out] */ double pAxisVector[ 3 ],
            /* [out] */ double *pRadius,
            /* [out] */ double *pHalfAngle,
            /* [out] */ boolean *pIsExpanding) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMConeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMCone * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMCone * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMCone * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetConeData )( 
            IDMCone * This,
            /* [out] */ double pBasePoint[ 3 ],
            /* [out] */ double pAxisVector[ 3 ],
            /* [out] */ double *pRadius,
            /* [out] */ double *pHalfAngle,
            /* [out] */ boolean *pIsExpanding);
        
        END_INTERFACE
    } IDMConeVtbl;

    interface IDMCone
    {
        CONST_VTBL struct IDMConeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMCone_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMCone_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMCone_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMCone_GetConeData(This,pBasePoint,pAxisVector,pRadius,pHalfAngle,pIsExpanding)	\
    (This)->lpVtbl -> GetConeData(This,pBasePoint,pAxisVector,pRadius,pHalfAngle,pIsExpanding)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMCone_GetConeData_Proxy( 
    IDMCone * This,
    /* [out] */ double pBasePoint[ 3 ],
    /* [out] */ double pAxisVector[ 3 ],
    /* [out] */ double *pRadius,
    /* [out] */ double *pHalfAngle,
    /* [out] */ boolean *pIsExpanding);


void __RPC_STUB IDMCone_GetConeData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMCone_INTERFACE_DEFINED__ */


#ifndef __IDMCylinder_INTERFACE_DEFINED__
#define __IDMCylinder_INTERFACE_DEFINED__

/* interface IDMCylinder */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMCylinder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D214-0000-0000-C000-000000000046")
    IDMCylinder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCylinderData( 
            /* [out] */ double pBasePoint[ 3 ],
            /* [out] */ double pAxisVector[ 3 ],
            /* [out] */ double *pRadius) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMCylinderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMCylinder * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMCylinder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMCylinder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCylinderData )( 
            IDMCylinder * This,
            /* [out] */ double pBasePoint[ 3 ],
            /* [out] */ double pAxisVector[ 3 ],
            /* [out] */ double *pRadius);
        
        END_INTERFACE
    } IDMCylinderVtbl;

    interface IDMCylinder
    {
        CONST_VTBL struct IDMCylinderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMCylinder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMCylinder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMCylinder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMCylinder_GetCylinderData(This,pBasePoint,pAxisVector,pRadius)	\
    (This)->lpVtbl -> GetCylinderData(This,pBasePoint,pAxisVector,pRadius)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMCylinder_GetCylinderData_Proxy( 
    IDMCylinder * This,
    /* [out] */ double pBasePoint[ 3 ],
    /* [out] */ double pAxisVector[ 3 ],
    /* [out] */ double *pRadius);


void __RPC_STUB IDMCylinder_GetCylinderData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMCylinder_INTERFACE_DEFINED__ */


#ifndef __IDMSphere_INTERFACE_DEFINED__
#define __IDMSphere_INTERFACE_DEFINED__

/* interface IDMSphere */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMSphere;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D215-0000-0000-C000-000000000046")
    IDMSphere : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSphereData( 
            /* [out] */ double pCenterPoint[ 3 ],
            /* [out] */ double *pRadius) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMSphereVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMSphere * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMSphere * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMSphere * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSphereData )( 
            IDMSphere * This,
            /* [out] */ double pCenterPoint[ 3 ],
            /* [out] */ double *pRadius);
        
        END_INTERFACE
    } IDMSphereVtbl;

    interface IDMSphere
    {
        CONST_VTBL struct IDMSphereVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMSphere_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMSphere_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMSphere_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMSphere_GetSphereData(This,pCenterPoint,pRadius)	\
    (This)->lpVtbl -> GetSphereData(This,pCenterPoint,pRadius)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMSphere_GetSphereData_Proxy( 
    IDMSphere * This,
    /* [out] */ double pCenterPoint[ 3 ],
    /* [out] */ double *pRadius);


void __RPC_STUB IDMSphere_GetSphereData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMSphere_INTERFACE_DEFINED__ */


#ifndef __IDMTorus_INTERFACE_DEFINED__
#define __IDMTorus_INTERFACE_DEFINED__

/* interface IDMTorus */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMTorus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D216-0000-0000-C000-000000000046")
    IDMTorus : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTorusData( 
            /* [out] */ double pCenterPoint[ 3 ],
            /* [out] */ double pAxisVector[ 3 ],
            /* [out] */ double *pMajorRadius,
            /* [out] */ double *pMinorRadius) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMTorusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMTorus * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMTorus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMTorus * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTorusData )( 
            IDMTorus * This,
            /* [out] */ double pCenterPoint[ 3 ],
            /* [out] */ double pAxisVector[ 3 ],
            /* [out] */ double *pMajorRadius,
            /* [out] */ double *pMinorRadius);
        
        END_INTERFACE
    } IDMTorusVtbl;

    interface IDMTorus
    {
        CONST_VTBL struct IDMTorusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMTorus_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMTorus_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMTorus_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMTorus_GetTorusData(This,pCenterPoint,pAxisVector,pMajorRadius,pMinorRadius)	\
    (This)->lpVtbl -> GetTorusData(This,pCenterPoint,pAxisVector,pMajorRadius,pMinorRadius)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMTorus_GetTorusData_Proxy( 
    IDMTorus * This,
    /* [out] */ double pCenterPoint[ 3 ],
    /* [out] */ double pAxisVector[ 3 ],
    /* [out] */ double *pMajorRadius,
    /* [out] */ double *pMinorRadius);


void __RPC_STUB IDMTorus_GetTorusData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMTorus_INTERFACE_DEFINED__ */


#ifndef __IDMBSplineSurface_INTERFACE_DEFINED__
#define __IDMBSplineSurface_INTERFACE_DEFINED__

/* interface IDMBSplineSurface */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMBSplineSurface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D218-0000-0000-C000-000000000046")
    IDMBSplineSurface : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBSplineInfo( 
            /* [out] */ ULONG pOrder[ 2 ],
            /* [out] */ ULONG pNumPoles[ 2 ],
            /* [out] */ ULONG pNumKnots[ 2 ],
            /* [out] */ boolean *pIsRational,
            /* [out] */ boolean pIsClosed[ 2 ],
            /* [out] */ boolean pIsPeriodic[ 2 ],
            /* [out] */ boolean *pIsPlanar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBSplineData( 
            /* [in] */ ULONG nPoles,
            /* [in] */ ULONG nKnotsU,
            /* [in] */ ULONG nKnotsV,
            /* [in] */ ULONG nWeights,
            /* [out][size_is] */ double *pPoles,
            /* [out][size_is] */ double *pKnotsU,
            /* [out][size_is] */ double *pKnotsV,
            /* [out][size_is] */ double *pWeights) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMBSplineSurfaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMBSplineSurface * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMBSplineSurface * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMBSplineSurface * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBSplineInfo )( 
            IDMBSplineSurface * This,
            /* [out] */ ULONG pOrder[ 2 ],
            /* [out] */ ULONG pNumPoles[ 2 ],
            /* [out] */ ULONG pNumKnots[ 2 ],
            /* [out] */ boolean *pIsRational,
            /* [out] */ boolean pIsClosed[ 2 ],
            /* [out] */ boolean pIsPeriodic[ 2 ],
            /* [out] */ boolean *pIsPlanar);
        
        HRESULT ( STDMETHODCALLTYPE *GetBSplineData )( 
            IDMBSplineSurface * This,
            /* [in] */ ULONG nPoles,
            /* [in] */ ULONG nKnotsU,
            /* [in] */ ULONG nKnotsV,
            /* [in] */ ULONG nWeights,
            /* [out][size_is] */ double *pPoles,
            /* [out][size_is] */ double *pKnotsU,
            /* [out][size_is] */ double *pKnotsV,
            /* [out][size_is] */ double *pWeights);
        
        END_INTERFACE
    } IDMBSplineSurfaceVtbl;

    interface IDMBSplineSurface
    {
        CONST_VTBL struct IDMBSplineSurfaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMBSplineSurface_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMBSplineSurface_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMBSplineSurface_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMBSplineSurface_GetBSplineInfo(This,pOrder,pNumPoles,pNumKnots,pIsRational,pIsClosed,pIsPeriodic,pIsPlanar)	\
    (This)->lpVtbl -> GetBSplineInfo(This,pOrder,pNumPoles,pNumKnots,pIsRational,pIsClosed,pIsPeriodic,pIsPlanar)

#define IDMBSplineSurface_GetBSplineData(This,nPoles,nKnotsU,nKnotsV,nWeights,pPoles,pKnotsU,pKnotsV,pWeights)	\
    (This)->lpVtbl -> GetBSplineData(This,nPoles,nKnotsU,nKnotsV,nWeights,pPoles,pKnotsU,pKnotsV,pWeights)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMBSplineSurface_GetBSplineInfo_Proxy( 
    IDMBSplineSurface * This,
    /* [out] */ ULONG pOrder[ 2 ],
    /* [out] */ ULONG pNumPoles[ 2 ],
    /* [out] */ ULONG pNumKnots[ 2 ],
    /* [out] */ boolean *pIsRational,
    /* [out] */ boolean pIsClosed[ 2 ],
    /* [out] */ boolean pIsPeriodic[ 2 ],
    /* [out] */ boolean *pIsPlanar);


void __RPC_STUB IDMBSplineSurface_GetBSplineInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDMBSplineSurface_GetBSplineData_Proxy( 
    IDMBSplineSurface * This,
    /* [in] */ ULONG nPoles,
    /* [in] */ ULONG nKnotsU,
    /* [in] */ ULONG nKnotsV,
    /* [in] */ ULONG nWeights,
    /* [out][size_is] */ double *pPoles,
    /* [out][size_is] */ double *pKnotsU,
    /* [out][size_is] */ double *pKnotsV,
    /* [out][size_is] */ double *pWeights);


void __RPC_STUB IDMBSplineSurface_GetBSplineData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMBSplineSurface_INTERFACE_DEFINED__ */


#ifndef __IEnumDMSurfaceBodies_INTERFACE_DEFINED__
#define __IEnumDMSurfaceBodies_INTERFACE_DEFINED__

/* interface IEnumDMSurfaceBodies */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumDMSurfaceBodies;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D223-0000-0000-C000-000000000046")
    IEnumDMSurfaceBodies : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cSurfaceBody,
            /* [out] */ LPDMSURFACEBODY *pSurfaceBody,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cCurves) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ LPENUM_DMSURFACEBODIES *pEnumSurfaceBodies) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDMSurfaceBodiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDMSurfaceBodies * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDMSurfaceBodies * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDMSurfaceBodies * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDMSurfaceBodies * This,
            /* [in] */ ULONG cSurfaceBody,
            /* [out] */ LPDMSURFACEBODY *pSurfaceBody,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumDMSurfaceBodies * This,
            /* [in] */ ULONG cCurves);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumDMSurfaceBodies * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumDMSurfaceBodies * This,
            /* [out] */ LPENUM_DMSURFACEBODIES *pEnumSurfaceBodies);
        
        END_INTERFACE
    } IEnumDMSurfaceBodiesVtbl;

    interface IEnumDMSurfaceBodies
    {
        CONST_VTBL struct IEnumDMSurfaceBodiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDMSurfaceBodies_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumDMSurfaceBodies_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumDMSurfaceBodies_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumDMSurfaceBodies_Next(This,cSurfaceBody,pSurfaceBody,pcFetched)	\
    (This)->lpVtbl -> Next(This,cSurfaceBody,pSurfaceBody,pcFetched)

#define IEnumDMSurfaceBodies_Skip(This,cCurves)	\
    (This)->lpVtbl -> Skip(This,cCurves)

#define IEnumDMSurfaceBodies_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumDMSurfaceBodies_Clone(This,pEnumSurfaceBodies)	\
    (This)->lpVtbl -> Clone(This,pEnumSurfaceBodies)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMSurfaceBodies_RemoteNext_Proxy( 
    IEnumDMSurfaceBodies * This,
    /* [in] */ ULONG cSurfaceBody,
    /* [length_is][size_is][out] */ LPDMSURFACEBODY *pSurfaceBody,
    /* [out] */ ULONG *pcFetched);


void __RPC_STUB IEnumDMSurfaceBodies_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMSurfaceBodies_Skip_Proxy( 
    IEnumDMSurfaceBodies * This,
    /* [in] */ ULONG cCurves);


void __RPC_STUB IEnumDMSurfaceBodies_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMSurfaceBodies_Reset_Proxy( 
    IEnumDMSurfaceBodies * This);


void __RPC_STUB IEnumDMSurfaceBodies_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMSurfaceBodies_Clone_Proxy( 
    IEnumDMSurfaceBodies * This,
    /* [out] */ LPENUM_DMSURFACEBODIES *pEnumSurfaceBodies);


void __RPC_STUB IEnumDMSurfaceBodies_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumDMSurfaceBodies_INTERFACE_DEFINED__ */


#ifndef __IEnumDMShells_INTERFACE_DEFINED__
#define __IEnumDMShells_INTERFACE_DEFINED__

/* interface IEnumDMShells */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumDMShells;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D224-0000-0000-C000-000000000046")
    IEnumDMShells : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cShells,
            /* [out] */ LPDMSHELL *pShell,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cShells) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ LPENUM_DMSHELLS *pEnumShells) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDMShellsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDMShells * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDMShells * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDMShells * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDMShells * This,
            /* [in] */ ULONG cShells,
            /* [out] */ LPDMSHELL *pShell,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumDMShells * This,
            /* [in] */ ULONG cShells);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumDMShells * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumDMShells * This,
            /* [out] */ LPENUM_DMSHELLS *pEnumShells);
        
        END_INTERFACE
    } IEnumDMShellsVtbl;

    interface IEnumDMShells
    {
        CONST_VTBL struct IEnumDMShellsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDMShells_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumDMShells_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumDMShells_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumDMShells_Next(This,cShells,pShell,pcFetched)	\
    (This)->lpVtbl -> Next(This,cShells,pShell,pcFetched)

#define IEnumDMShells_Skip(This,cShells)	\
    (This)->lpVtbl -> Skip(This,cShells)

#define IEnumDMShells_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumDMShells_Clone(This,pEnumShells)	\
    (This)->lpVtbl -> Clone(This,pEnumShells)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMShells_RemoteNext_Proxy( 
    IEnumDMShells * This,
    /* [in] */ ULONG cShells,
    /* [length_is][size_is][out] */ LPDMSHELL *pShell,
    /* [out] */ ULONG *pcFetched);


void __RPC_STUB IEnumDMShells_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMShells_Skip_Proxy( 
    IEnumDMShells * This,
    /* [in] */ ULONG cShells);


void __RPC_STUB IEnumDMShells_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMShells_Reset_Proxy( 
    IEnumDMShells * This);


void __RPC_STUB IEnumDMShells_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMShells_Clone_Proxy( 
    IEnumDMShells * This,
    /* [out] */ LPENUM_DMSHELLS *pEnumShells);


void __RPC_STUB IEnumDMShells_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumDMShells_INTERFACE_DEFINED__ */


#ifndef __IEnumDMFaces_INTERFACE_DEFINED__
#define __IEnumDMFaces_INTERFACE_DEFINED__

/* interface IEnumDMFaces */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumDMFaces;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D225-0000-0000-C000-000000000046")
    IEnumDMFaces : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cFaces,
            /* [out] */ LPDMFACE *pFace,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cFaces) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ LPENUM_DMFACES *pEnumFaces) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDMFacesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDMFaces * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDMFaces * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDMFaces * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDMFaces * This,
            /* [in] */ ULONG cFaces,
            /* [out] */ LPDMFACE *pFace,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumDMFaces * This,
            /* [in] */ ULONG cFaces);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumDMFaces * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumDMFaces * This,
            /* [out] */ LPENUM_DMFACES *pEnumFaces);
        
        END_INTERFACE
    } IEnumDMFacesVtbl;

    interface IEnumDMFaces
    {
        CONST_VTBL struct IEnumDMFacesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDMFaces_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumDMFaces_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumDMFaces_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumDMFaces_Next(This,cFaces,pFace,pcFetched)	\
    (This)->lpVtbl -> Next(This,cFaces,pFace,pcFetched)

#define IEnumDMFaces_Skip(This,cFaces)	\
    (This)->lpVtbl -> Skip(This,cFaces)

#define IEnumDMFaces_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumDMFaces_Clone(This,pEnumFaces)	\
    (This)->lpVtbl -> Clone(This,pEnumFaces)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMFaces_RemoteNext_Proxy( 
    IEnumDMFaces * This,
    /* [in] */ ULONG cFaces,
    /* [length_is][size_is][out] */ LPDMFACE *pFace,
    /* [out] */ ULONG *pcFetched);


void __RPC_STUB IEnumDMFaces_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMFaces_Skip_Proxy( 
    IEnumDMFaces * This,
    /* [in] */ ULONG cFaces);


void __RPC_STUB IEnumDMFaces_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMFaces_Reset_Proxy( 
    IEnumDMFaces * This);


void __RPC_STUB IEnumDMFaces_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMFaces_Clone_Proxy( 
    IEnumDMFaces * This,
    /* [out] */ LPENUM_DMFACES *pEnumFaces);


void __RPC_STUB IEnumDMFaces_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumDMFaces_INTERFACE_DEFINED__ */


#ifndef __IEnumDMLoops_INTERFACE_DEFINED__
#define __IEnumDMLoops_INTERFACE_DEFINED__

/* interface IEnumDMLoops */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumDMLoops;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D226-0000-0000-C000-000000000046")
    IEnumDMLoops : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cEdge,
            /* [out] */ LPDMLOOP *pLoop,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cLoops) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ LPENUM_DMLOOPS *pEnumLoops) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDMLoopsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDMLoops * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDMLoops * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDMLoops * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDMLoops * This,
            /* [in] */ ULONG cEdge,
            /* [out] */ LPDMLOOP *pLoop,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumDMLoops * This,
            /* [in] */ ULONG cLoops);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumDMLoops * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumDMLoops * This,
            /* [out] */ LPENUM_DMLOOPS *pEnumLoops);
        
        END_INTERFACE
    } IEnumDMLoopsVtbl;

    interface IEnumDMLoops
    {
        CONST_VTBL struct IEnumDMLoopsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDMLoops_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumDMLoops_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumDMLoops_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumDMLoops_Next(This,cEdge,pLoop,pcFetched)	\
    (This)->lpVtbl -> Next(This,cEdge,pLoop,pcFetched)

#define IEnumDMLoops_Skip(This,cLoops)	\
    (This)->lpVtbl -> Skip(This,cLoops)

#define IEnumDMLoops_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumDMLoops_Clone(This,pEnumLoops)	\
    (This)->lpVtbl -> Clone(This,pEnumLoops)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMLoops_RemoteNext_Proxy( 
    IEnumDMLoops * This,
    /* [in] */ ULONG cEdge,
    /* [length_is][size_is][out] */ LPDMLOOP *pLoop,
    /* [out] */ ULONG *pcFetched);


void __RPC_STUB IEnumDMLoops_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMLoops_Skip_Proxy( 
    IEnumDMLoops * This,
    /* [in] */ ULONG cLoops);


void __RPC_STUB IEnumDMLoops_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMLoops_Reset_Proxy( 
    IEnumDMLoops * This);


void __RPC_STUB IEnumDMLoops_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMLoops_Clone_Proxy( 
    IEnumDMLoops * This,
    /* [out] */ LPENUM_DMLOOPS *pEnumLoops);


void __RPC_STUB IEnumDMLoops_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumDMLoops_INTERFACE_DEFINED__ */


#ifndef __IEnumDMEdgeUses_INTERFACE_DEFINED__
#define __IEnumDMEdgeUses_INTERFACE_DEFINED__

/* interface IEnumDMEdgeUses */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumDMEdgeUses;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D227-0000-0000-C000-000000000046")
    IEnumDMEdgeUses : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cEdgeUse,
            /* [out] */ LPDMEDGEUSE *pEdgeUse,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cEdgeUses) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ LPENUM_DMEDGEUSES *pEnumEdgeUses) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDMEdgeUsesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDMEdgeUses * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDMEdgeUses * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDMEdgeUses * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDMEdgeUses * This,
            /* [in] */ ULONG cEdgeUse,
            /* [out] */ LPDMEDGEUSE *pEdgeUse,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumDMEdgeUses * This,
            /* [in] */ ULONG cEdgeUses);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumDMEdgeUses * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumDMEdgeUses * This,
            /* [out] */ LPENUM_DMEDGEUSES *pEnumEdgeUses);
        
        END_INTERFACE
    } IEnumDMEdgeUsesVtbl;

    interface IEnumDMEdgeUses
    {
        CONST_VTBL struct IEnumDMEdgeUsesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDMEdgeUses_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumDMEdgeUses_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumDMEdgeUses_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumDMEdgeUses_Next(This,cEdgeUse,pEdgeUse,pcFetched)	\
    (This)->lpVtbl -> Next(This,cEdgeUse,pEdgeUse,pcFetched)

#define IEnumDMEdgeUses_Skip(This,cEdgeUses)	\
    (This)->lpVtbl -> Skip(This,cEdgeUses)

#define IEnumDMEdgeUses_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumDMEdgeUses_Clone(This,pEnumEdgeUses)	\
    (This)->lpVtbl -> Clone(This,pEnumEdgeUses)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMEdgeUses_RemoteNext_Proxy( 
    IEnumDMEdgeUses * This,
    /* [in] */ ULONG cEdgeUse,
    /* [length_is][size_is][out] */ LPDMEDGEUSE *pEdgeUse,
    /* [out] */ ULONG *pcFetched);


void __RPC_STUB IEnumDMEdgeUses_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMEdgeUses_Skip_Proxy( 
    IEnumDMEdgeUses * This,
    /* [in] */ ULONG cEdgeUses);


void __RPC_STUB IEnumDMEdgeUses_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMEdgeUses_Reset_Proxy( 
    IEnumDMEdgeUses * This);


void __RPC_STUB IEnumDMEdgeUses_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMEdgeUses_Clone_Proxy( 
    IEnumDMEdgeUses * This,
    /* [out] */ LPENUM_DMEDGEUSES *pEnumEdgeUses);


void __RPC_STUB IEnumDMEdgeUses_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumDMEdgeUses_INTERFACE_DEFINED__ */


#ifndef __IEnumDMEdges_INTERFACE_DEFINED__
#define __IEnumDMEdges_INTERFACE_DEFINED__

/* interface IEnumDMEdges */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumDMEdges;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D228-0000-0000-C000-000000000046")
    IEnumDMEdges : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cEdge,
            /* [out] */ LPDMEDGE *pEdge,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cEdges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ LPENUM_DMEDGES *pEnumEdges) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDMEdgesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDMEdges * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDMEdges * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDMEdges * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDMEdges * This,
            /* [in] */ ULONG cEdge,
            /* [out] */ LPDMEDGE *pEdge,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumDMEdges * This,
            /* [in] */ ULONG cEdges);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumDMEdges * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumDMEdges * This,
            /* [out] */ LPENUM_DMEDGES *pEnumEdges);
        
        END_INTERFACE
    } IEnumDMEdgesVtbl;

    interface IEnumDMEdges
    {
        CONST_VTBL struct IEnumDMEdgesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDMEdges_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumDMEdges_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumDMEdges_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumDMEdges_Next(This,cEdge,pEdge,pcFetched)	\
    (This)->lpVtbl -> Next(This,cEdge,pEdge,pcFetched)

#define IEnumDMEdges_Skip(This,cEdges)	\
    (This)->lpVtbl -> Skip(This,cEdges)

#define IEnumDMEdges_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumDMEdges_Clone(This,pEnumEdges)	\
    (This)->lpVtbl -> Clone(This,pEnumEdges)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMEdges_RemoteNext_Proxy( 
    IEnumDMEdges * This,
    /* [in] */ ULONG cEdge,
    /* [length_is][size_is][out] */ LPDMEDGE *pEdge,
    /* [out] */ ULONG *pcFetched);


void __RPC_STUB IEnumDMEdges_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMEdges_Skip_Proxy( 
    IEnumDMEdges * This,
    /* [in] */ ULONG cEdges);


void __RPC_STUB IEnumDMEdges_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMEdges_Reset_Proxy( 
    IEnumDMEdges * This);


void __RPC_STUB IEnumDMEdges_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMEdges_Clone_Proxy( 
    IEnumDMEdges * This,
    /* [out] */ LPENUM_DMEDGES *pEnumEdges);


void __RPC_STUB IEnumDMEdges_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumDMEdges_INTERFACE_DEFINED__ */


#ifndef __IEnumDMVertices_INTERFACE_DEFINED__
#define __IEnumDMVertices_INTERFACE_DEFINED__

/* interface IEnumDMVertices */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumDMVertices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D229-0000-0000-C000-000000000046")
    IEnumDMVertices : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cVertices,
            /* [out] */ LPDMVERTEX *pVertex,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cVertices) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ LPENUM_DMVERTICES *pEnumVertices) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDMVerticesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDMVertices * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDMVertices * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDMVertices * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDMVertices * This,
            /* [in] */ ULONG cVertices,
            /* [out] */ LPDMVERTEX *pVertex,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumDMVertices * This,
            /* [in] */ ULONG cVertices);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumDMVertices * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumDMVertices * This,
            /* [out] */ LPENUM_DMVERTICES *pEnumVertices);
        
        END_INTERFACE
    } IEnumDMVerticesVtbl;

    interface IEnumDMVertices
    {
        CONST_VTBL struct IEnumDMVerticesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDMVertices_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumDMVertices_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumDMVertices_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumDMVertices_Next(This,cVertices,pVertex,pcFetched)	\
    (This)->lpVtbl -> Next(This,cVertices,pVertex,pcFetched)

#define IEnumDMVertices_Skip(This,cVertices)	\
    (This)->lpVtbl -> Skip(This,cVertices)

#define IEnumDMVertices_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumDMVertices_Clone(This,pEnumVertices)	\
    (This)->lpVtbl -> Clone(This,pEnumVertices)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMVertices_RemoteNext_Proxy( 
    IEnumDMVertices * This,
    /* [in] */ ULONG cVertices,
    /* [length_is][size_is][out] */ LPDMVERTEX *pVertex,
    /* [out] */ ULONG *pcFetched);


void __RPC_STUB IEnumDMVertices_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMVertices_Skip_Proxy( 
    IEnumDMVertices * This,
    /* [in] */ ULONG cVertices);


void __RPC_STUB IEnumDMVertices_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMVertices_Reset_Proxy( 
    IEnumDMVertices * This);


void __RPC_STUB IEnumDMVertices_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDMVertices_Clone_Proxy( 
    IEnumDMVertices * This,
    /* [out] */ LPENUM_DMVERTICES *pEnumVertices);


void __RPC_STUB IEnumDMVertices_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumDMVertices_INTERFACE_DEFINED__ */


#ifndef __IDMAlternateSurfaceBody_INTERFACE_DEFINED__
#define __IDMAlternateSurfaceBody_INTERFACE_DEFINED__

/* interface IDMAlternateSurfaceBody */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDMAlternateSurfaceBody;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002D22A-0000-0000-C000-000000000046")
    IDMAlternateSurfaceBody : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAlternateBody( 
            /* [in] */ DWORD alternateForm,
            /* [out] */ LPDMSURFACEBODY *ppAltBody) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDMAlternateSurfaceBodyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDMAlternateSurfaceBody * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDMAlternateSurfaceBody * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDMAlternateSurfaceBody * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAlternateBody )( 
            IDMAlternateSurfaceBody * This,
            /* [in] */ DWORD alternateForm,
            /* [out] */ LPDMSURFACEBODY *ppAltBody);
        
        END_INTERFACE
    } IDMAlternateSurfaceBodyVtbl;

    interface IDMAlternateSurfaceBody
    {
        CONST_VTBL struct IDMAlternateSurfaceBodyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDMAlternateSurfaceBody_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDMAlternateSurfaceBody_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDMAlternateSurfaceBody_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDMAlternateSurfaceBody_GetAlternateBody(This,alternateForm,ppAltBody)	\
    (This)->lpVtbl -> GetAlternateBody(This,alternateForm,ppAltBody)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDMAlternateSurfaceBody_GetAlternateBody_Proxy( 
    IDMAlternateSurfaceBody * This,
    /* [in] */ DWORD alternateForm,
    /* [out] */ LPDMSURFACEBODY *ppAltBody);


void __RPC_STUB IDMAlternateSurfaceBody_GetAlternateBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDMAlternateSurfaceBody_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* [local] */ HRESULT STDMETHODCALLTYPE IDMSurface_GetParamAtPoint_Proxy( 
    IDMSurface * This,
    /* [in] */ ULONG nPoints,
    /* [in] */ double *pPoints,
    /* [in] */ double *pGuessParams,
    /* [out] */ double *pMaxDeviations,
    /* [out] */ double *pParams,
    /* [out] */ DWORD *pFlags);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IDMSurface_GetParamAtPoint_Stub( 
    IDMSurface * This,
    /* [in] */ ULONG nPoints,
    /* [size_is][in] */ double *pPoints,
    /* [in] */ ULONG nGuessParams,
    /* [size_is][in] */ double *pGuessParams,
    /* [in] */ ULONG nMaxDeviations,
    /* [size_is][out] */ double *pMaxDeviations,
    /* [size_is][out] */ double *pParams,
    /* [in] */ ULONG nFlags,
    /* [size_is][out] */ DWORD *pFlags);

/* [local] */ HRESULT STDMETHODCALLTYPE IDMSurface_GetTangents_Proxy( 
    IDMSurface * This,
    /* [in] */ ULONG nParams,
    /* [in] */ double *pParams,
    /* [out] */ double *pUTangents,
    /* [out] */ double *pVTangents);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IDMSurface_GetTangents_Stub( 
    IDMSurface * This,
    /* [in] */ ULONG nParams,
    /* [size_is][in] */ double *pParams,
    /* [in] */ ULONG nUTangents,
    /* [size_is][out] */ double *pUTangents,
    /* [in] */ ULONG nVTangents,
    /* [size_is][out] */ double *pVTangents);

/* [local] */ HRESULT STDMETHODCALLTYPE IDMSurface_GetCurvatures_Proxy( 
    IDMSurface * This,
    /* [in] */ ULONG nParams,
    /* [in] */ double *pParams,
    /* [out] */ double *pMaxTangents,
    /* [out] */ double *pMaxCurvatures,
    /* [out] */ double *pMinCurvatures);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IDMSurface_GetCurvatures_Stub( 
    IDMSurface * This,
    /* [in] */ ULONG nParams,
    /* [size_is][in] */ double *pParams,
    /* [in] */ ULONG nMaxTangents,
    /* [size_is][out] */ double *pMaxTangents,
    /* [in] */ ULONG nMaxCurvatures,
    /* [size_is][out] */ double *pMaxCurvatures,
    /* [in] */ ULONG nMinCurvatures,
    /* [size_is][out] */ double *pMinCurvatures);

/* [local] */ HRESULT STDMETHODCALLTYPE IDMSurface_GetDerivatives_Proxy( 
    IDMSurface * This,
    /* [in] */ ULONG nParams,
    /* [in] */ double *pParams,
    /* [out] */ double *pUPartials,
    /* [out] */ double *pVPartials,
    /* [out] */ double *pUUPartials,
    /* [out] */ double *pUVPartials,
    /* [out] */ double *pVVPartials,
    /* [out] */ double *pUUUPartials,
    /* [out] */ double *pVVVPartials);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IDMSurface_GetDerivatives_Stub( 
    IDMSurface * This,
    /* [in] */ ULONG nParams,
    /* [size_is][in] */ double *pParams,
    /* [in] */ ULONG nUPartials,
    /* [size_is][out] */ double *pUPartials,
    /* [in] */ ULONG nVPartials,
    /* [size_is][out] */ double *pVPartials,
    /* [in] */ ULONG nUUPartials,
    /* [size_is][out] */ double *pUUPartials,
    /* [in] */ ULONG nUVPartials,
    /* [size_is][out] */ double *pUVPartials,
    /* [in] */ ULONG nVVPartials,
    /* [size_is][out] */ double *pVVPartials,
    /* [in] */ ULONG nUUUPartials,
    /* [size_is][out] */ double *pUUUPartials,
    /* [in] */ ULONG nVVVPartials,
    /* [size_is][out] */ double *pVVVPartials);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumDMSurfaceBodies_Next_Proxy( 
    IEnumDMSurfaceBodies * This,
    /* [in] */ ULONG cSurfaceBody,
    /* [out] */ LPDMSURFACEBODY *pSurfaceBody,
    /* [out] */ ULONG *pcFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMSurfaceBodies_Next_Stub( 
    IEnumDMSurfaceBodies * This,
    /* [in] */ ULONG cSurfaceBody,
    /* [length_is][size_is][out] */ LPDMSURFACEBODY *pSurfaceBody,
    /* [out] */ ULONG *pcFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumDMShells_Next_Proxy( 
    IEnumDMShells * This,
    /* [in] */ ULONG cShells,
    /* [out] */ LPDMSHELL *pShell,
    /* [out] */ ULONG *pcFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMShells_Next_Stub( 
    IEnumDMShells * This,
    /* [in] */ ULONG cShells,
    /* [length_is][size_is][out] */ LPDMSHELL *pShell,
    /* [out] */ ULONG *pcFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumDMFaces_Next_Proxy( 
    IEnumDMFaces * This,
    /* [in] */ ULONG cFaces,
    /* [out] */ LPDMFACE *pFace,
    /* [out] */ ULONG *pcFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMFaces_Next_Stub( 
    IEnumDMFaces * This,
    /* [in] */ ULONG cFaces,
    /* [length_is][size_is][out] */ LPDMFACE *pFace,
    /* [out] */ ULONG *pcFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumDMLoops_Next_Proxy( 
    IEnumDMLoops * This,
    /* [in] */ ULONG cEdge,
    /* [out] */ LPDMLOOP *pLoop,
    /* [out] */ ULONG *pcFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMLoops_Next_Stub( 
    IEnumDMLoops * This,
    /* [in] */ ULONG cEdge,
    /* [length_is][size_is][out] */ LPDMLOOP *pLoop,
    /* [out] */ ULONG *pcFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumDMEdgeUses_Next_Proxy( 
    IEnumDMEdgeUses * This,
    /* [in] */ ULONG cEdgeUse,
    /* [out] */ LPDMEDGEUSE *pEdgeUse,
    /* [out] */ ULONG *pcFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMEdgeUses_Next_Stub( 
    IEnumDMEdgeUses * This,
    /* [in] */ ULONG cEdgeUse,
    /* [length_is][size_is][out] */ LPDMEDGEUSE *pEdgeUse,
    /* [out] */ ULONG *pcFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumDMEdges_Next_Proxy( 
    IEnumDMEdges * This,
    /* [in] */ ULONG cEdge,
    /* [out] */ LPDMEDGE *pEdge,
    /* [out] */ ULONG *pcFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMEdges_Next_Stub( 
    IEnumDMEdges * This,
    /* [in] */ ULONG cEdge,
    /* [length_is][size_is][out] */ LPDMEDGE *pEdge,
    /* [out] */ ULONG *pcFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumDMVertices_Next_Proxy( 
    IEnumDMVertices * This,
    /* [in] */ ULONG cVertices,
    /* [out] */ LPDMVERTEX *pVertex,
    /* [out] */ ULONG *pcFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumDMVertices_Next_Stub( 
    IEnumDMVertices * This,
    /* [in] */ ULONG cVertices,
    /* [length_is][size_is][out] */ LPDMVERTEX *pVertex,
    /* [out] */ ULONG *pcFetched);



/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


