

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Mon Jan 09 02:54:40 2006
 */
/* Compiler settings for addins.idl:
    Oicf, W1, Zp8, env=Win64 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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

#ifndef __addins_h__
#define __addins_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISECommandWindowEvents_FWD_DEFINED__
#define __ISECommandWindowEvents_FWD_DEFINED__
typedef interface ISECommandWindowEvents ISECommandWindowEvents;
#endif 	/* __ISECommandWindowEvents_FWD_DEFINED__ */


#ifndef __Environment_FWD_DEFINED__
#define __Environment_FWD_DEFINED__
typedef interface Environment Environment;
#endif 	/* __Environment_FWD_DEFINED__ */


#ifndef __CommandBars_FWD_DEFINED__
#define __CommandBars_FWD_DEFINED__
typedef interface CommandBars CommandBars;
#endif 	/* __CommandBars_FWD_DEFINED__ */


#ifndef __CommandBar_FWD_DEFINED__
#define __CommandBar_FWD_DEFINED__
typedef interface CommandBar CommandBar;
#endif 	/* __CommandBar_FWD_DEFINED__ */


#ifndef __CommandBarControls_FWD_DEFINED__
#define __CommandBarControls_FWD_DEFINED__
typedef interface CommandBarControls CommandBarControls;
#endif 	/* __CommandBarControls_FWD_DEFINED__ */


#ifndef __CommandBarControl_FWD_DEFINED__
#define __CommandBarControl_FWD_DEFINED__
typedef interface CommandBarControl CommandBarControl;
#endif 	/* __CommandBarControl_FWD_DEFINED__ */


#ifndef __CommandBarPopup_FWD_DEFINED__
#define __CommandBarPopup_FWD_DEFINED__
typedef interface CommandBarPopup CommandBarPopup;
#endif 	/* __CommandBarPopup_FWD_DEFINED__ */


#ifndef __CommandBarButton_FWD_DEFINED__
#define __CommandBarButton_FWD_DEFINED__
typedef interface CommandBarButton CommandBarButton;
#endif 	/* __CommandBarButton_FWD_DEFINED__ */


#ifndef __AddIns_FWD_DEFINED__
#define __AddIns_FWD_DEFINED__
typedef interface AddIns AddIns;
#endif 	/* __AddIns_FWD_DEFINED__ */


#ifndef __AddIn_FWD_DEFINED__
#define __AddIn_FWD_DEFINED__
typedef interface AddIn AddIn;
#endif 	/* __AddIn_FWD_DEFINED__ */


#ifndef __Accelerators_FWD_DEFINED__
#define __Accelerators_FWD_DEFINED__
typedef interface Accelerators Accelerators;
#endif 	/* __Accelerators_FWD_DEFINED__ */


#ifndef __Accelerator_FWD_DEFINED__
#define __Accelerator_FWD_DEFINED__
typedef interface Accelerator Accelerator;
#endif 	/* __Accelerator_FWD_DEFINED__ */


#ifndef __KeyBinding_FWD_DEFINED__
#define __KeyBinding_FWD_DEFINED__
typedef interface KeyBinding KeyBinding;
#endif 	/* __KeyBinding_FWD_DEFINED__ */


#ifndef __ISEIGLDisplayEvents_FWD_DEFINED__
#define __ISEIGLDisplayEvents_FWD_DEFINED__
typedef interface ISEIGLDisplayEvents ISEIGLDisplayEvents;
#endif 	/* __ISEIGLDisplayEvents_FWD_DEFINED__ */


#ifndef __ISEhDCDisplayEvents_FWD_DEFINED__
#define __ISEhDCDisplayEvents_FWD_DEFINED__
typedef interface ISEhDCDisplayEvents ISEhDCDisplayEvents;
#endif 	/* __ISEhDCDisplayEvents_FWD_DEFINED__ */


#ifndef __ISEFileUIEvents_FWD_DEFINED__
#define __ISEFileUIEvents_FWD_DEFINED__
typedef interface ISEFileUIEvents ISEFileUIEvents;
#endif 	/* __ISEFileUIEvents_FWD_DEFINED__ */


#ifndef __ISENewFileUIEvents_FWD_DEFINED__
#define __ISENewFileUIEvents_FWD_DEFINED__
typedef interface ISENewFileUIEvents ISENewFileUIEvents;
#endif 	/* __ISENewFileUIEvents_FWD_DEFINED__ */


#ifndef __ISEDocumentEvents_FWD_DEFINED__
#define __ISEDocumentEvents_FWD_DEFINED__
typedef interface ISEDocumentEvents ISEDocumentEvents;
#endif 	/* __ISEDocumentEvents_FWD_DEFINED__ */


#ifndef __ISEModelRecomputeEvents_FWD_DEFINED__
#define __ISEModelRecomputeEvents_FWD_DEFINED__
typedef interface ISEModelRecomputeEvents ISEModelRecomputeEvents;
#endif 	/* __ISEModelRecomputeEvents_FWD_DEFINED__ */


#ifndef __ISEApplicationEvents_FWD_DEFINED__
#define __ISEApplicationEvents_FWD_DEFINED__
typedef interface ISEApplicationEvents ISEApplicationEvents;
#endif 	/* __ISEApplicationEvents_FWD_DEFINED__ */


#ifndef __ISEApplicationV8AfterDocumentOpenEvent_FWD_DEFINED__
#define __ISEApplicationV8AfterDocumentOpenEvent_FWD_DEFINED__
typedef interface ISEApplicationV8AfterDocumentOpenEvent ISEApplicationV8AfterDocumentOpenEvent;
#endif 	/* __ISEApplicationV8AfterDocumentOpenEvent_FWD_DEFINED__ */


#ifndef __ISEApplicationWindowEvents_FWD_DEFINED__
#define __ISEApplicationWindowEvents_FWD_DEFINED__
typedef interface ISEApplicationWindowEvents ISEApplicationWindowEvents;
#endif 	/* __ISEApplicationWindowEvents_FWD_DEFINED__ */


#ifndef __ISEViewEvents_FWD_DEFINED__
#define __ISEViewEvents_FWD_DEFINED__
typedef interface ISEViewEvents ISEViewEvents;
#endif 	/* __ISEViewEvents_FWD_DEFINED__ */


#ifndef __ISECommandBarButtonEvents_FWD_DEFINED__
#define __ISECommandBarButtonEvents_FWD_DEFINED__
typedef interface ISECommandBarButtonEvents ISECommandBarButtonEvents;
#endif 	/* __ISECommandBarButtonEvents_FWD_DEFINED__ */


#ifndef __ISEAddInEvents_FWD_DEFINED__
#define __ISEAddInEvents_FWD_DEFINED__
typedef interface ISEAddInEvents ISEAddInEvents;
#endif 	/* __ISEAddInEvents_FWD_DEFINED__ */


#ifndef __ISEAssemblyRecomputeEvents_FWD_DEFINED__
#define __ISEAssemblyRecomputeEvents_FWD_DEFINED__
typedef interface ISEAssemblyRecomputeEvents ISEAssemblyRecomputeEvents;
#endif 	/* __ISEAssemblyRecomputeEvents_FWD_DEFINED__ */


#ifndef __ISEFamilyOfPartsEvents_FWD_DEFINED__
#define __ISEFamilyOfPartsEvents_FWD_DEFINED__
typedef interface ISEFamilyOfPartsEvents ISEFamilyOfPartsEvents;
#endif 	/* __ISEFamilyOfPartsEvents_FWD_DEFINED__ */


#ifndef __ISEFamilyOfPartsExEvents_FWD_DEFINED__
#define __ISEFamilyOfPartsExEvents_FWD_DEFINED__
typedef interface ISEFamilyOfPartsExEvents ISEFamilyOfPartsExEvents;
#endif 	/* __ISEFamilyOfPartsExEvents_FWD_DEFINED__ */


#ifndef __ISEDividePartEvents_FWD_DEFINED__
#define __ISEDividePartEvents_FWD_DEFINED__
typedef interface ISEDividePartEvents ISEDividePartEvents;
#endif 	/* __ISEDividePartEvents_FWD_DEFINED__ */


#ifndef __ISEFeatureLibraryEvents_FWD_DEFINED__
#define __ISEFeatureLibraryEvents_FWD_DEFINED__
typedef interface ISEFeatureLibraryEvents ISEFeatureLibraryEvents;
#endif 	/* __ISEFeatureLibraryEvents_FWD_DEFINED__ */


#ifndef __ISEDrawingViewEvents_FWD_DEFINED__
#define __ISEDrawingViewEvents_FWD_DEFINED__
typedef interface ISEDrawingViewEvents ISEDrawingViewEvents;
#endif 	/* __ISEDrawingViewEvents_FWD_DEFINED__ */


#ifndef __ISEPartsListEvents_FWD_DEFINED__
#define __ISEPartsListEvents_FWD_DEFINED__
typedef interface ISEPartsListEvents ISEPartsListEvents;
#endif 	/* __ISEPartsListEvents_FWD_DEFINED__ */


#ifndef __ISEShortCutMenuEvents_FWD_DEFINED__
#define __ISEShortCutMenuEvents_FWD_DEFINED__
typedef interface ISEShortCutMenuEvents ISEShortCutMenuEvents;
#endif 	/* __ISEShortCutMenuEvents_FWD_DEFINED__ */


#ifndef __DISEhDCDisplayEvents_FWD_DEFINED__
#define __DISEhDCDisplayEvents_FWD_DEFINED__
typedef interface DISEhDCDisplayEvents DISEhDCDisplayEvents;
#endif 	/* __DISEhDCDisplayEvents_FWD_DEFINED__ */


#ifndef __DISEFileUIEvents_FWD_DEFINED__
#define __DISEFileUIEvents_FWD_DEFINED__
typedef interface DISEFileUIEvents DISEFileUIEvents;
#endif 	/* __DISEFileUIEvents_FWD_DEFINED__ */


#ifndef __DISEDocumentEvents_FWD_DEFINED__
#define __DISEDocumentEvents_FWD_DEFINED__
typedef interface DISEDocumentEvents DISEDocumentEvents;
#endif 	/* __DISEDocumentEvents_FWD_DEFINED__ */


#ifndef __DISEApplicationEvents_FWD_DEFINED__
#define __DISEApplicationEvents_FWD_DEFINED__
typedef interface DISEApplicationEvents DISEApplicationEvents;
#endif 	/* __DISEApplicationEvents_FWD_DEFINED__ */


#ifndef __DISEApplicationWindowEvents_FWD_DEFINED__
#define __DISEApplicationWindowEvents_FWD_DEFINED__
typedef interface DISEApplicationWindowEvents DISEApplicationWindowEvents;
#endif 	/* __DISEApplicationWindowEvents_FWD_DEFINED__ */


#ifndef __DISEViewEvents_FWD_DEFINED__
#define __DISEViewEvents_FWD_DEFINED__
typedef interface DISEViewEvents DISEViewEvents;
#endif 	/* __DISEViewEvents_FWD_DEFINED__ */


#ifndef __ISECommandBar_FWD_DEFINED__
#define __ISECommandBar_FWD_DEFINED__
typedef interface ISECommandBar ISECommandBar;
#endif 	/* __ISECommandBar_FWD_DEFINED__ */


#ifndef __ISECommandBarControl_FWD_DEFINED__
#define __ISECommandBarControl_FWD_DEFINED__
typedef interface ISECommandBarControl ISECommandBarControl;
#endif 	/* __ISECommandBarControl_FWD_DEFINED__ */


#ifndef __ISECommandBarControls_FWD_DEFINED__
#define __ISECommandBarControls_FWD_DEFINED__
typedef interface ISECommandBarControls ISECommandBarControls;
#endif 	/* __ISECommandBarControls_FWD_DEFINED__ */


#ifndef __ISECommandBarPopup_FWD_DEFINED__
#define __ISECommandBarPopup_FWD_DEFINED__
typedef interface ISECommandBarPopup ISECommandBarPopup;
#endif 	/* __ISECommandBarPopup_FWD_DEFINED__ */


#ifndef __DISECommandBarButtonEvents_FWD_DEFINED__
#define __DISECommandBarButtonEvents_FWD_DEFINED__
typedef interface DISECommandBarButtonEvents DISECommandBarButtonEvents;
#endif 	/* __DISECommandBarButtonEvents_FWD_DEFINED__ */


#ifndef __ISECommandBarButton_FWD_DEFINED__
#define __ISECommandBarButton_FWD_DEFINED__
typedef interface ISECommandBarButton ISECommandBarButton;
#endif 	/* __ISECommandBarButton_FWD_DEFINED__ */


#ifndef __ISECommandBars_FWD_DEFINED__
#define __ISECommandBars_FWD_DEFINED__
typedef interface ISECommandBars ISECommandBars;
#endif 	/* __ISECommandBars_FWD_DEFINED__ */


#ifndef __ISEKeyBinding_FWD_DEFINED__
#define __ISEKeyBinding_FWD_DEFINED__
typedef interface ISEKeyBinding ISEKeyBinding;
#endif 	/* __ISEKeyBinding_FWD_DEFINED__ */


#ifndef __ISEAccelerator_FWD_DEFINED__
#define __ISEAccelerator_FWD_DEFINED__
typedef interface ISEAccelerator ISEAccelerator;
#endif 	/* __ISEAccelerator_FWD_DEFINED__ */


#ifndef __ISEAccelerators_FWD_DEFINED__
#define __ISEAccelerators_FWD_DEFINED__
typedef interface ISEAccelerators ISEAccelerators;
#endif 	/* __ISEAccelerators_FWD_DEFINED__ */


#ifndef __ISEMouse_FWD_DEFINED__
#define __ISEMouse_FWD_DEFINED__
typedef interface ISEMouse ISEMouse;
#endif 	/* __ISEMouse_FWD_DEFINED__ */


#ifndef __ISEMouseEx_FWD_DEFINED__
#define __ISEMouseEx_FWD_DEFINED__
typedef interface ISEMouseEx ISEMouseEx;
#endif 	/* __ISEMouseEx_FWD_DEFINED__ */


#ifndef __ISEMouseEvents_FWD_DEFINED__
#define __ISEMouseEvents_FWD_DEFINED__
typedef interface ISEMouseEvents ISEMouseEvents;
#endif 	/* __ISEMouseEvents_FWD_DEFINED__ */


#ifndef __DISEMouseEvents_FWD_DEFINED__
#define __DISEMouseEvents_FWD_DEFINED__
typedef interface DISEMouseEvents DISEMouseEvents;
#endif 	/* __DISEMouseEvents_FWD_DEFINED__ */


#ifndef __ISELocateFilterEvents_FWD_DEFINED__
#define __ISELocateFilterEvents_FWD_DEFINED__
typedef interface ISELocateFilterEvents ISELocateFilterEvents;
#endif 	/* __ISELocateFilterEvents_FWD_DEFINED__ */


#ifndef __DISECommandWindowEvents_FWD_DEFINED__
#define __DISECommandWindowEvents_FWD_DEFINED__
typedef interface DISECommandWindowEvents DISECommandWindowEvents;
#endif 	/* __DISECommandWindowEvents_FWD_DEFINED__ */


#ifndef __ISECommand_FWD_DEFINED__
#define __ISECommand_FWD_DEFINED__
typedef interface ISECommand ISECommand;
#endif 	/* __ISECommand_FWD_DEFINED__ */


#ifndef __ISECommandEvents_FWD_DEFINED__
#define __ISECommandEvents_FWD_DEFINED__
typedef interface ISECommandEvents ISECommandEvents;
#endif 	/* __ISECommandEvents_FWD_DEFINED__ */


#ifndef __DISECommandEvents_FWD_DEFINED__
#define __DISECommandEvents_FWD_DEFINED__
typedef interface DISECommandEvents DISECommandEvents;
#endif 	/* __DISECommandEvents_FWD_DEFINED__ */


#ifndef __DISEAddInEvents_FWD_DEFINED__
#define __DISEAddInEvents_FWD_DEFINED__
typedef interface DISEAddInEvents DISEAddInEvents;
#endif 	/* __DISEAddInEvents_FWD_DEFINED__ */


#ifndef __ISEAddIn_FWD_DEFINED__
#define __ISEAddIn_FWD_DEFINED__
typedef interface ISEAddIn ISEAddIn;
#endif 	/* __ISEAddIn_FWD_DEFINED__ */


#ifndef __ISEAddIns_FWD_DEFINED__
#define __ISEAddIns_FWD_DEFINED__
typedef interface ISEAddIns ISEAddIns;
#endif 	/* __ISEAddIns_FWD_DEFINED__ */


#ifndef __ISolidEdgeAddIn_FWD_DEFINED__
#define __ISolidEdgeAddIn_FWD_DEFINED__
typedef interface ISolidEdgeAddIn ISolidEdgeAddIn;
#endif 	/* __ISolidEdgeAddIn_FWD_DEFINED__ */


#ifndef __ISolidEdgeBar_FWD_DEFINED__
#define __ISolidEdgeBar_FWD_DEFINED__
typedef interface ISolidEdgeBar ISolidEdgeBar;
#endif 	/* __ISolidEdgeBar_FWD_DEFINED__ */


#ifndef __ISolidEdgeRibbonBar_FWD_DEFINED__
#define __ISolidEdgeRibbonBar_FWD_DEFINED__
typedef interface ISolidEdgeRibbonBar ISolidEdgeRibbonBar;
#endif 	/* __ISolidEdgeRibbonBar_FWD_DEFINED__ */


#ifndef __DISEMouse_FWD_DEFINED__
#define __DISEMouse_FWD_DEFINED__
typedef interface DISEMouse DISEMouse;
#endif 	/* __DISEMouse_FWD_DEFINED__ */


#ifndef __DISECommand_FWD_DEFINED__
#define __DISECommand_FWD_DEFINED__
typedef interface DISECommand DISECommand;
#endif 	/* __DISECommand_FWD_DEFINED__ */


#ifndef __GLDisplayEvents_FWD_DEFINED__
#define __GLDisplayEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class GLDisplayEvents GLDisplayEvents;
#else
typedef struct GLDisplayEvents GLDisplayEvents;
#endif /* __cplusplus */

#endif 	/* __GLDisplayEvents_FWD_DEFINED__ */


#ifndef __DisplayEvents_FWD_DEFINED__
#define __DisplayEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class DisplayEvents DisplayEvents;
#else
typedef struct DisplayEvents DisplayEvents;
#endif /* __cplusplus */

#endif 	/* __DisplayEvents_FWD_DEFINED__ */


#ifndef __FileUIEvents_FWD_DEFINED__
#define __FileUIEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class FileUIEvents FileUIEvents;
#else
typedef struct FileUIEvents FileUIEvents;
#endif /* __cplusplus */

#endif 	/* __FileUIEvents_FWD_DEFINED__ */


#ifndef __NewFileUIEvents_FWD_DEFINED__
#define __NewFileUIEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class NewFileUIEvents NewFileUIEvents;
#else
typedef struct NewFileUIEvents NewFileUIEvents;
#endif /* __cplusplus */

#endif 	/* __NewFileUIEvents_FWD_DEFINED__ */


#ifndef __DocumentEvents_FWD_DEFINED__
#define __DocumentEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class DocumentEvents DocumentEvents;
#else
typedef struct DocumentEvents DocumentEvents;
#endif /* __cplusplus */

#endif 	/* __DocumentEvents_FWD_DEFINED__ */


#ifndef __ModelRecomputeEvents_FWD_DEFINED__
#define __ModelRecomputeEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class ModelRecomputeEvents ModelRecomputeEvents;
#else
typedef struct ModelRecomputeEvents ModelRecomputeEvents;
#endif /* __cplusplus */

#endif 	/* __ModelRecomputeEvents_FWD_DEFINED__ */


#ifndef __ApplicationV8DocumentOpenEvent_FWD_DEFINED__
#define __ApplicationV8DocumentOpenEvent_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplicationV8DocumentOpenEvent ApplicationV8DocumentOpenEvent;
#else
typedef struct ApplicationV8DocumentOpenEvent ApplicationV8DocumentOpenEvent;
#endif /* __cplusplus */

#endif 	/* __ApplicationV8DocumentOpenEvent_FWD_DEFINED__ */


#ifndef __ApplicationEvents_FWD_DEFINED__
#define __ApplicationEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplicationEvents ApplicationEvents;
#else
typedef struct ApplicationEvents ApplicationEvents;
#endif /* __cplusplus */

#endif 	/* __ApplicationEvents_FWD_DEFINED__ */


#ifndef __ApplicationWindowEvents_FWD_DEFINED__
#define __ApplicationWindowEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplicationWindowEvents ApplicationWindowEvents;
#else
typedef struct ApplicationWindowEvents ApplicationWindowEvents;
#endif /* __cplusplus */

#endif 	/* __ApplicationWindowEvents_FWD_DEFINED__ */


#ifndef __ViewEvents_FWD_DEFINED__
#define __ViewEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class ViewEvents ViewEvents;
#else
typedef struct ViewEvents ViewEvents;
#endif /* __cplusplus */

#endif 	/* __ViewEvents_FWD_DEFINED__ */


#ifndef __CommandBarButtonEvents_FWD_DEFINED__
#define __CommandBarButtonEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class CommandBarButtonEvents CommandBarButtonEvents;
#else
typedef struct CommandBarButtonEvents CommandBarButtonEvents;
#endif /* __cplusplus */

#endif 	/* __CommandBarButtonEvents_FWD_DEFINED__ */


#ifndef __Mouse_FWD_DEFINED__
#define __Mouse_FWD_DEFINED__

#ifdef __cplusplus
typedef class Mouse Mouse;
#else
typedef struct Mouse Mouse;
#endif /* __cplusplus */

#endif 	/* __Mouse_FWD_DEFINED__ */


#ifndef __CommandWindow_FWD_DEFINED__
#define __CommandWindow_FWD_DEFINED__

#ifdef __cplusplus
typedef class CommandWindow CommandWindow;
#else
typedef struct CommandWindow CommandWindow;
#endif /* __cplusplus */

#endif 	/* __CommandWindow_FWD_DEFINED__ */


#ifndef __Command_FWD_DEFINED__
#define __Command_FWD_DEFINED__

#ifdef __cplusplus
typedef class Command Command;
#else
typedef struct Command Command;
#endif /* __cplusplus */

#endif 	/* __Command_FWD_DEFINED__ */


#ifndef __AddInEvents_FWD_DEFINED__
#define __AddInEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class AddInEvents AddInEvents;
#else
typedef struct AddInEvents AddInEvents;
#endif /* __cplusplus */

#endif 	/* __AddInEvents_FWD_DEFINED__ */


#ifndef __AssemblyRecomputeEvents_FWD_DEFINED__
#define __AssemblyRecomputeEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class AssemblyRecomputeEvents AssemblyRecomputeEvents;
#else
typedef struct AssemblyRecomputeEvents AssemblyRecomputeEvents;
#endif /* __cplusplus */

#endif 	/* __AssemblyRecomputeEvents_FWD_DEFINED__ */


#ifndef __FamilyOfPartsEvents_FWD_DEFINED__
#define __FamilyOfPartsEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class FamilyOfPartsEvents FamilyOfPartsEvents;
#else
typedef struct FamilyOfPartsEvents FamilyOfPartsEvents;
#endif /* __cplusplus */

#endif 	/* __FamilyOfPartsEvents_FWD_DEFINED__ */


#ifndef __FamilyOfPartsExEvents_FWD_DEFINED__
#define __FamilyOfPartsExEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class FamilyOfPartsExEvents FamilyOfPartsExEvents;
#else
typedef struct FamilyOfPartsExEvents FamilyOfPartsExEvents;
#endif /* __cplusplus */

#endif 	/* __FamilyOfPartsExEvents_FWD_DEFINED__ */


#ifndef __DividePartEvents_FWD_DEFINED__
#define __DividePartEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class DividePartEvents DividePartEvents;
#else
typedef struct DividePartEvents DividePartEvents;
#endif /* __cplusplus */

#endif 	/* __DividePartEvents_FWD_DEFINED__ */


#ifndef __FeatureLibraryEvents_FWD_DEFINED__
#define __FeatureLibraryEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class FeatureLibraryEvents FeatureLibraryEvents;
#else
typedef struct FeatureLibraryEvents FeatureLibraryEvents;
#endif /* __cplusplus */

#endif 	/* __FeatureLibraryEvents_FWD_DEFINED__ */


#ifndef __DrawingViewEvents_FWD_DEFINED__
#define __DrawingViewEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class DrawingViewEvents DrawingViewEvents;
#else
typedef struct DrawingViewEvents DrawingViewEvents;
#endif /* __cplusplus */

#endif 	/* __DrawingViewEvents_FWD_DEFINED__ */


#ifndef __PartsListEvents_FWD_DEFINED__
#define __PartsListEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class PartsListEvents PartsListEvents;
#else
typedef struct PartsListEvents PartsListEvents;
#endif /* __cplusplus */

#endif 	/* __PartsListEvents_FWD_DEFINED__ */


#ifndef __ShortcutMenuEvents_FWD_DEFINED__
#define __ShortcutMenuEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShortcutMenuEvents ShortcutMenuEvents;
#else
typedef struct ShortcutMenuEvents ShortcutMenuEvents;
#endif /* __cplusplus */

#endif 	/* __ShortcutMenuEvents_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "dispcnst.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_addins_0000 */
/* [local] */ 

#pragma warning(disable: 4005)
#define TARGET_IS_NT40_OR_LATER 1
#pragma once
#pragma once

////////////////////////////Common Includes////////////////////////////////////

#ifndef __WINDOWS_H__
#include <windows.h>
#endif
#ifndef __OBJBASE_H__
#include <objbase.h>
#endif

//////////////////////////////////Typedefs/////////////////////////////////////

typedef /* [unique] */ ISEViewEvents *LPISEVIEWEVENTS;

typedef /* [unique] */ /* dispinterface DISEViewEvents */
/* [helpstring][helpcontext][nonextensible][uuid] */ 

*LPDISEVIEWEVENTS;

typedef /* [unique] */ /* dispinterface DISEhDCDisplayEvents */
/* [helpstring][helpcontext][nonextensible][uuid] */ 

*LPDISEHDCDISPLAYEVENTS;

typedef /* [unique] */ ISEFileUIEvents *LPISEFILEUIEVENTS;

typedef /* [unique] */ /* dispinterface DISEFileUIEvents */
/* [helpstring][helpcontext][nonextensible][uuid] */ 

*LPDISEFILEUIEVENTS;

typedef /* [unique] */ ISENewFileUIEvents *LPISENEWFILEUIEVENTS;

typedef /* [unique] */ ISEModelRecomputeEvents *LPISEMODELRECOMPUTEEVENTS;

typedef /* [unique] */ ISEDocumentEvents *LPISEDOCUMENTEVENTS;

typedef /* [unique] */ /* dispinterface DISEDocumentEvents */
/* [helpstring][helpcontext][nonextensible][uuid] */ 

*LPDISEDOCUMENTEVENTS;

typedef /* [unique] */ ISEAssemblyRecomputeEvents *LPISEASSEMBLYRECOMPUTEEVENTS;


////////////////////////////Interface Definitions//////////////////////////////



extern RPC_IF_HANDLE __MIDL_itf_addins_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_addins_0000_v0_0_s_ifspec;

#ifndef __ISECommandWindowEvents_INTERFACE_DEFINED__
#define __ISECommandWindowEvents_INTERFACE_DEFINED__

/* interface ISECommandWindowEvents */
/* [hidden][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISECommandWindowEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8460FFD7-2A24-11d1-BA2E-080036230602")
    ISECommandWindowEvents : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE WindowProc( 
            /* [in] */ LPDISPATCH pTheDoc,
            /* [in] */ LPDISPATCH pTheView,
            /* [in] */ UINT nMsg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [retval][out] */ LRESULT *lResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECommandWindowEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECommandWindowEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECommandWindowEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECommandWindowEvents * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WindowProc )( 
            ISECommandWindowEvents * This,
            /* [in] */ LPDISPATCH pTheDoc,
            /* [in] */ LPDISPATCH pTheView,
            /* [in] */ UINT nMsg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [retval][out] */ LRESULT *lResult);
        
        END_INTERFACE
    } ISECommandWindowEventsVtbl;

    interface ISECommandWindowEvents
    {
        CONST_VTBL struct ISECommandWindowEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECommandWindowEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECommandWindowEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECommandWindowEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECommandWindowEvents_WindowProc(This,pTheDoc,pTheView,nMsg,wParam,lParam,lResult)	\
    (This)->lpVtbl -> WindowProc(This,pTheDoc,pTheView,nMsg,wParam,lParam,lResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE ISECommandWindowEvents_WindowProc_Proxy( 
    ISECommandWindowEvents * This,
    /* [in] */ LPDISPATCH pTheDoc,
    /* [in] */ LPDISPATCH pTheView,
    /* [in] */ UINT nMsg,
    /* [in] */ WPARAM wParam,
    /* [in] */ LPARAM lParam,
    /* [retval][out] */ LRESULT *lResult);


void __RPC_STUB ISECommandWindowEvents_WindowProc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECommandWindowEvents_INTERFACE_DEFINED__ */



#ifndef __ADDINSLib_LIBRARY_DEFINED__
#define __ADDINSLib_LIBRARY_DEFINED__

/* library ADDINSLib */
/* [helpfile][helpstring][version][uuid] */ 






























///////////////////////////////ISEhDCDisplayEvents///////////////////
///////////////////////////////ISEhDCDisplayEvents///////////////////
///////////////////////////////ISEFileUIEvents///////////////////
///////////////////////////////ISENewFileUIEvents///////////////////
///////////////////////////////ISEDocumentEvents///////////////////
///////////////////////////////ISEModelRecomputeEvents/////////////////////////////////
/////////////////////////////////ISEApplicationEvents///////////////////////////////////
/////////////////////////////////ISEApplicationEvents///////////////////////////////////
/////////////////////////////////ISEApplicationWindowEvents///////////////////////////////////
/////////////////////////////////ISEViewEvents///////////////////////////////////
////////////////////////////////ISECommandBarButtonEvents///////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
////////////////////////////////ISEAddInEvents///////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
///////////////////////////////ISEAssemblyRecomputeEvents/////////////////////////////////
////////////////////////////////DISEhDCDisplayEvents//////////////////////////////////
////////////////////////////////DISEFileUIEvents//////////////////////////////////
////////////////////////////////DISEDocumentEvents//////////////////////////////////
DEFINE_GUID(DIID_DISEModelRecomputeEvents,   0x6A89DFD2, 0x9E7D, 0x11d1, 0xAE, 0xCC, 0x08, 0x00, 0x36, 0x16, 0xCE, 0x02);
////////////////////////////////DISEApplicationEvents///////////////////////////////////
////////////////////////////////DISEApplicationWindowEvents///////////////////////////////////
////////////////////////////////DISEViewEvents///////////////////////////////////
////////////////////////////////ISECommandBar///////////////////////////////////
////////////////////////////////ISECommandBarControl///////////////////////////////////
////////////////////////////////ISECommandBarControls///////////////////////////////////
////////////////////////////////ISECommandBarPopUp///////////////////////////////////
////////////////////////////////DISECommandBarButtonEvents///////////////////////////////////
////////////////////////////////ISECommandBarButton///////////////////////////////////
////////////////////////////////ISECommandBars///////////////////////////////////
////////////////////////////////ISEAccelerators///////////////////////////////////
////////////////////////////////ISEAccelerator///////////////////////////////////
////////////////////////////////ISEAccelerators///////////////////////////////////
////////////////////////////////DISEAddInEvents///////////////////////////////////
////////////////////////////////ISEAddIns///////////////////////////////////
////////////////////////////////ISolidEdgeAddin///////////////////////////////////
////////////////////////////////ISolidEdgeBar///////////////////////////////////
////////////////////////////////ISolidEdgeRibbonBar///////////////////////////////////
////////////////////////////////dispinterfaces///////////////////////////////////
////////////////////////////////Coclasses///////////////////////////////////

EXTERN_C const IID LIBID_ADDINSLib;

#ifndef __Environment_DISPINTERFACE_DEFINED__
#define __Environment_DISPINTERFACE_DEFINED__

/* dispinterface Environment */
/* [uuid] */ 


EXTERN_C const IID DIID_Environment;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("024091D0-2BDB-11CE-8E45-08003601BBD5")
    Environment : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct EnvironmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Environment * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Environment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Environment * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Environment * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Environment * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Environment * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Environment * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } EnvironmentVtbl;

    interface Environment
    {
        CONST_VTBL struct EnvironmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Environment_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define Environment_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define Environment_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define Environment_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define Environment_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define Environment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define Environment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __Environment_DISPINTERFACE_DEFINED__ */


#ifndef __CommandBars_DISPINTERFACE_DEFINED__
#define __CommandBars_DISPINTERFACE_DEFINED__

/* dispinterface CommandBars */
/* [helpcontext][helpstring][nonextensible][uuid] */ 


EXTERN_C const IID DIID_CommandBars;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1d3da501-9bff-11d1-ba96-080036230602")
    CommandBars : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct CommandBarsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            CommandBars * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            CommandBars * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            CommandBars * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            CommandBars * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            CommandBars * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            CommandBars * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            CommandBars * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } CommandBarsVtbl;

    interface CommandBars
    {
        CONST_VTBL struct CommandBarsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define CommandBars_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define CommandBars_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define CommandBars_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define CommandBars_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define CommandBars_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define CommandBars_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define CommandBars_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __CommandBars_DISPINTERFACE_DEFINED__ */


#ifndef __CommandBar_DISPINTERFACE_DEFINED__
#define __CommandBar_DISPINTERFACE_DEFINED__

/* dispinterface CommandBar */
/* [helpcontext][helpstring][nonextensible][uuid] */ 


EXTERN_C const IID DIID_CommandBar;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1d3da502-9bff-11d1-ba96-080036230602")
    CommandBar : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct CommandBarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            CommandBar * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            CommandBar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            CommandBar * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            CommandBar * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            CommandBar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            CommandBar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            CommandBar * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } CommandBarVtbl;

    interface CommandBar
    {
        CONST_VTBL struct CommandBarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define CommandBar_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define CommandBar_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define CommandBar_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define CommandBar_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define CommandBar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define CommandBar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define CommandBar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __CommandBar_DISPINTERFACE_DEFINED__ */


#ifndef __CommandBarControls_DISPINTERFACE_DEFINED__
#define __CommandBarControls_DISPINTERFACE_DEFINED__

/* dispinterface CommandBarControls */
/* [helpcontext][helpstring][uuid] */ 


EXTERN_C const IID DIID_CommandBarControls;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1d3da503-9bff-11d1-ba96-080036230602")
    CommandBarControls : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct CommandBarControlsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            CommandBarControls * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            CommandBarControls * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            CommandBarControls * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            CommandBarControls * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            CommandBarControls * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            CommandBarControls * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            CommandBarControls * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } CommandBarControlsVtbl;

    interface CommandBarControls
    {
        CONST_VTBL struct CommandBarControlsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define CommandBarControls_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define CommandBarControls_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define CommandBarControls_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define CommandBarControls_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define CommandBarControls_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define CommandBarControls_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define CommandBarControls_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __CommandBarControls_DISPINTERFACE_DEFINED__ */


#ifndef __CommandBarControl_DISPINTERFACE_DEFINED__
#define __CommandBarControl_DISPINTERFACE_DEFINED__

/* dispinterface CommandBarControl */
/* [helpcontext][helpstring][uuid] */ 


EXTERN_C const IID DIID_CommandBarControl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("59de959f-9ca6-11d1-ba97-080036230602")
    CommandBarControl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct CommandBarControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            CommandBarControl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            CommandBarControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            CommandBarControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            CommandBarControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            CommandBarControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            CommandBarControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            CommandBarControl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } CommandBarControlVtbl;

    interface CommandBarControl
    {
        CONST_VTBL struct CommandBarControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define CommandBarControl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define CommandBarControl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define CommandBarControl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define CommandBarControl_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define CommandBarControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define CommandBarControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define CommandBarControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __CommandBarControl_DISPINTERFACE_DEFINED__ */


#ifndef __CommandBarPopup_DISPINTERFACE_DEFINED__
#define __CommandBarPopup_DISPINTERFACE_DEFINED__

/* dispinterface CommandBarPopup */
/* [helpcontext][helpstring][uuid] */ 


EXTERN_C const IID DIID_CommandBarPopup;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1d3da504-9bff-11d1-ba96-080036230602")
    CommandBarPopup : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct CommandBarPopupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            CommandBarPopup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            CommandBarPopup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            CommandBarPopup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            CommandBarPopup * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            CommandBarPopup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            CommandBarPopup * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            CommandBarPopup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } CommandBarPopupVtbl;

    interface CommandBarPopup
    {
        CONST_VTBL struct CommandBarPopupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define CommandBarPopup_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define CommandBarPopup_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define CommandBarPopup_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define CommandBarPopup_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define CommandBarPopup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define CommandBarPopup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define CommandBarPopup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __CommandBarPopup_DISPINTERFACE_DEFINED__ */


#ifndef __CommandBarButton_DISPINTERFACE_DEFINED__
#define __CommandBarButton_DISPINTERFACE_DEFINED__

/* dispinterface CommandBarButton */
/* [helpcontext][helpstring][uuid] */ 


EXTERN_C const IID DIID_CommandBarButton;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1d3da505-9bff-11d1-ba96-080036230602")
    CommandBarButton : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct CommandBarButtonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            CommandBarButton * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            CommandBarButton * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            CommandBarButton * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            CommandBarButton * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            CommandBarButton * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            CommandBarButton * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            CommandBarButton * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } CommandBarButtonVtbl;

    interface CommandBarButton
    {
        CONST_VTBL struct CommandBarButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define CommandBarButton_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define CommandBarButton_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define CommandBarButton_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define CommandBarButton_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define CommandBarButton_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define CommandBarButton_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define CommandBarButton_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __CommandBarButton_DISPINTERFACE_DEFINED__ */


#ifndef __AddIns_DISPINTERFACE_DEFINED__
#define __AddIns_DISPINTERFACE_DEFINED__

/* dispinterface AddIns */
/* [helpcontext][helpstring][nonextensible][uuid] */ 


EXTERN_C const IID DIID_AddIns;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A50D497A-288A-11d2-B586-080036E8B802")
    AddIns : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct AddInsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            AddIns * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            AddIns * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            AddIns * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            AddIns * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            AddIns * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            AddIns * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            AddIns * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } AddInsVtbl;

    interface AddIns
    {
        CONST_VTBL struct AddInsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define AddIns_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define AddIns_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define AddIns_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define AddIns_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define AddIns_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define AddIns_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define AddIns_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __AddIns_DISPINTERFACE_DEFINED__ */


#ifndef __AddIn_DISPINTERFACE_DEFINED__
#define __AddIn_DISPINTERFACE_DEFINED__

/* dispinterface AddIn */
/* [helpcontext][helpstring][nonextensible][uuid] */ 


EXTERN_C const IID DIID_AddIn;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A50D497D-288A-11d2-B586-080036E8B802")
    AddIn : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct AddInVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            AddIn * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            AddIn * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            AddIn * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            AddIn * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            AddIn * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            AddIn * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            AddIn * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } AddInVtbl;

    interface AddIn
    {
        CONST_VTBL struct AddInVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define AddIn_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define AddIn_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define AddIn_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define AddIn_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define AddIn_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define AddIn_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define AddIn_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __AddIn_DISPINTERFACE_DEFINED__ */


#ifndef __Accelerators_DISPINTERFACE_DEFINED__
#define __Accelerators_DISPINTERFACE_DEFINED__

/* dispinterface Accelerators */
/* [helpstring][helpcontext][uuid] */ 


EXTERN_C const IID DIID_Accelerators;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("E0FEC934-E01F-47c1-8B08-DAE756CB973F")
    Accelerators : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct AcceleratorsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Accelerators * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Accelerators * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Accelerators * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Accelerators * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Accelerators * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Accelerators * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Accelerators * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } AcceleratorsVtbl;

    interface Accelerators
    {
        CONST_VTBL struct AcceleratorsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Accelerators_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define Accelerators_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define Accelerators_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define Accelerators_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define Accelerators_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define Accelerators_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define Accelerators_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __Accelerators_DISPINTERFACE_DEFINED__ */


#ifndef __Accelerator_DISPINTERFACE_DEFINED__
#define __Accelerator_DISPINTERFACE_DEFINED__

/* dispinterface Accelerator */
/* [helpstring][helpcontext][uuid] */ 


EXTERN_C const IID DIID_Accelerator;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("56271F1E-7387-46c1-A78D-0CA381997917")
    Accelerator : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct AcceleratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Accelerator * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Accelerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Accelerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Accelerator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Accelerator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Accelerator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Accelerator * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } AcceleratorVtbl;

    interface Accelerator
    {
        CONST_VTBL struct AcceleratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Accelerator_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define Accelerator_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define Accelerator_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define Accelerator_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define Accelerator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define Accelerator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define Accelerator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __Accelerator_DISPINTERFACE_DEFINED__ */


#ifndef __KeyBinding_DISPINTERFACE_DEFINED__
#define __KeyBinding_DISPINTERFACE_DEFINED__

/* dispinterface KeyBinding */
/* [helpstring][helpcontext][uuid] */ 


EXTERN_C const IID DIID_KeyBinding;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7524FAC6-48F8-4d07-A048-48E49DA21713")
    KeyBinding : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct KeyBindingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            KeyBinding * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            KeyBinding * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            KeyBinding * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            KeyBinding * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            KeyBinding * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            KeyBinding * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            KeyBinding * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } KeyBindingVtbl;

    interface KeyBinding
    {
        CONST_VTBL struct KeyBindingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define KeyBinding_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define KeyBinding_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define KeyBinding_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define KeyBinding_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define KeyBinding_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define KeyBinding_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define KeyBinding_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __KeyBinding_DISPINTERFACE_DEFINED__ */


#ifndef __ISEIGLDisplayEvents_INTERFACE_DEFINED__
#define __ISEIGLDisplayEvents_INTERFACE_DEFINED__

/* interface ISEIGLDisplayEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEIGLDisplayEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("177AFED7-CBF3-11d2-9230-00C04F79BE98")
    ISEIGLDisplayEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeginDisplay( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE EndDisplay( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeginIGLMainDisplay( 
            /* [in] */ LPUNKNOWN pGL) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE EndIGLMainDisplay( 
            /* [in] */ LPUNKNOWN pIGL) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEIGLDisplayEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEIGLDisplayEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEIGLDisplayEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEIGLDisplayEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeginDisplay )( 
            ISEIGLDisplayEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *EndDisplay )( 
            ISEIGLDisplayEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeginIGLMainDisplay )( 
            ISEIGLDisplayEvents * This,
            /* [in] */ LPUNKNOWN pGL);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *EndIGLMainDisplay )( 
            ISEIGLDisplayEvents * This,
            /* [in] */ LPUNKNOWN pIGL);
        
        END_INTERFACE
    } ISEIGLDisplayEventsVtbl;

    interface ISEIGLDisplayEvents
    {
        CONST_VTBL struct ISEIGLDisplayEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEIGLDisplayEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEIGLDisplayEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEIGLDisplayEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEIGLDisplayEvents_BeginDisplay(This)	\
    (This)->lpVtbl -> BeginDisplay(This)

#define ISEIGLDisplayEvents_EndDisplay(This)	\
    (This)->lpVtbl -> EndDisplay(This)

#define ISEIGLDisplayEvents_BeginIGLMainDisplay(This,pGL)	\
    (This)->lpVtbl -> BeginIGLMainDisplay(This,pGL)

#define ISEIGLDisplayEvents_EndIGLMainDisplay(This,pIGL)	\
    (This)->lpVtbl -> EndIGLMainDisplay(This,pIGL)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEIGLDisplayEvents_BeginDisplay_Proxy( 
    ISEIGLDisplayEvents * This);


void __RPC_STUB ISEIGLDisplayEvents_BeginDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEIGLDisplayEvents_EndDisplay_Proxy( 
    ISEIGLDisplayEvents * This);


void __RPC_STUB ISEIGLDisplayEvents_EndDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEIGLDisplayEvents_BeginIGLMainDisplay_Proxy( 
    ISEIGLDisplayEvents * This,
    /* [in] */ LPUNKNOWN pGL);


void __RPC_STUB ISEIGLDisplayEvents_BeginIGLMainDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEIGLDisplayEvents_EndIGLMainDisplay_Proxy( 
    ISEIGLDisplayEvents * This,
    /* [in] */ LPUNKNOWN pIGL);


void __RPC_STUB ISEIGLDisplayEvents_EndIGLMainDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEIGLDisplayEvents_INTERFACE_DEFINED__ */


#ifndef __ISEhDCDisplayEvents_INTERFACE_DEFINED__
#define __ISEhDCDisplayEvents_INTERFACE_DEFINED__

/* interface ISEhDCDisplayEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEhDCDisplayEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("791849E1-A4AA-11d1-AECC-08003616CE02")
    ISEhDCDisplayEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeginDisplay( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE EndDisplay( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeginhDCMainDisplay( 
            /* [in] */ long hDC,
            /* [size_is][in] */ double *ModelToDC,
            /* [size_is][in] */ long *Rect) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE EndhDCMainDisplay( 
            /* [in] */ long hDC,
            /* [size_is][in] */ double *ModelToDC,
            /* [size_is][in] */ long *Rect) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEhDCDisplayEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEhDCDisplayEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEhDCDisplayEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEhDCDisplayEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeginDisplay )( 
            ISEhDCDisplayEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *EndDisplay )( 
            ISEhDCDisplayEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeginhDCMainDisplay )( 
            ISEhDCDisplayEvents * This,
            /* [in] */ long hDC,
            /* [size_is][in] */ double *ModelToDC,
            /* [size_is][in] */ long *Rect);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *EndhDCMainDisplay )( 
            ISEhDCDisplayEvents * This,
            /* [in] */ long hDC,
            /* [size_is][in] */ double *ModelToDC,
            /* [size_is][in] */ long *Rect);
        
        END_INTERFACE
    } ISEhDCDisplayEventsVtbl;

    interface ISEhDCDisplayEvents
    {
        CONST_VTBL struct ISEhDCDisplayEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEhDCDisplayEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEhDCDisplayEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEhDCDisplayEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEhDCDisplayEvents_BeginDisplay(This)	\
    (This)->lpVtbl -> BeginDisplay(This)

#define ISEhDCDisplayEvents_EndDisplay(This)	\
    (This)->lpVtbl -> EndDisplay(This)

#define ISEhDCDisplayEvents_BeginhDCMainDisplay(This,hDC,ModelToDC,Rect)	\
    (This)->lpVtbl -> BeginhDCMainDisplay(This,hDC,ModelToDC,Rect)

#define ISEhDCDisplayEvents_EndhDCMainDisplay(This,hDC,ModelToDC,Rect)	\
    (This)->lpVtbl -> EndhDCMainDisplay(This,hDC,ModelToDC,Rect)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEhDCDisplayEvents_BeginDisplay_Proxy( 
    ISEhDCDisplayEvents * This);


void __RPC_STUB ISEhDCDisplayEvents_BeginDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEhDCDisplayEvents_EndDisplay_Proxy( 
    ISEhDCDisplayEvents * This);


void __RPC_STUB ISEhDCDisplayEvents_EndDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEhDCDisplayEvents_BeginhDCMainDisplay_Proxy( 
    ISEhDCDisplayEvents * This,
    /* [in] */ long hDC,
    /* [size_is][in] */ double *ModelToDC,
    /* [size_is][in] */ long *Rect);


void __RPC_STUB ISEhDCDisplayEvents_BeginhDCMainDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEhDCDisplayEvents_EndhDCMainDisplay_Proxy( 
    ISEhDCDisplayEvents * This,
    /* [in] */ long hDC,
    /* [size_is][in] */ double *ModelToDC,
    /* [size_is][in] */ long *Rect);


void __RPC_STUB ISEhDCDisplayEvents_EndhDCMainDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEhDCDisplayEvents_INTERFACE_DEFINED__ */


#ifndef __ISEFileUIEvents_INTERFACE_DEFINED__
#define __ISEFileUIEvents_INTERFACE_DEFINED__

/* interface ISEFileUIEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEFileUIEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ECC667A1-A4AA-11d1-AECC-08003616CE02")
    ISEFileUIEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE OnFileOpenUI( 
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE OnFileSaveAsUI( 
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE OnFileNewUI( 
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE OnFileSaveAsImageUI( 
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle,
            /* [out][in] */ long *Width,
            /* [out][in] */ long *Height,
            /* [out][in] */ SeImageQualityType *ImageQuality) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE OnPlacePartUI( 
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE OnCreateInPlacePartUI( 
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle,
            /* [out] */ BSTR *Template) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEFileUIEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEFileUIEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEFileUIEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEFileUIEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *OnFileOpenUI )( 
            ISEFileUIEvents * This,
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *OnFileSaveAsUI )( 
            ISEFileUIEvents * This,
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *OnFileNewUI )( 
            ISEFileUIEvents * This,
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *OnFileSaveAsImageUI )( 
            ISEFileUIEvents * This,
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle,
            /* [out][in] */ long *Width,
            /* [out][in] */ long *Height,
            /* [out][in] */ SeImageQualityType *ImageQuality);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *OnPlacePartUI )( 
            ISEFileUIEvents * This,
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *OnCreateInPlacePartUI )( 
            ISEFileUIEvents * This,
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle,
            /* [out] */ BSTR *Template);
        
        END_INTERFACE
    } ISEFileUIEventsVtbl;

    interface ISEFileUIEvents
    {
        CONST_VTBL struct ISEFileUIEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEFileUIEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEFileUIEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEFileUIEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEFileUIEvents_OnFileOpenUI(This,FileName,AppendToTitle)	\
    (This)->lpVtbl -> OnFileOpenUI(This,FileName,AppendToTitle)

#define ISEFileUIEvents_OnFileSaveAsUI(This,FileName,AppendToTitle)	\
    (This)->lpVtbl -> OnFileSaveAsUI(This,FileName,AppendToTitle)

#define ISEFileUIEvents_OnFileNewUI(This,FileName,AppendToTitle)	\
    (This)->lpVtbl -> OnFileNewUI(This,FileName,AppendToTitle)

#define ISEFileUIEvents_OnFileSaveAsImageUI(This,FileName,AppendToTitle,Width,Height,ImageQuality)	\
    (This)->lpVtbl -> OnFileSaveAsImageUI(This,FileName,AppendToTitle,Width,Height,ImageQuality)

#define ISEFileUIEvents_OnPlacePartUI(This,FileName,AppendToTitle)	\
    (This)->lpVtbl -> OnPlacePartUI(This,FileName,AppendToTitle)

#define ISEFileUIEvents_OnCreateInPlacePartUI(This,FileName,AppendToTitle,Template)	\
    (This)->lpVtbl -> OnCreateInPlacePartUI(This,FileName,AppendToTitle,Template)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFileUIEvents_OnFileOpenUI_Proxy( 
    ISEFileUIEvents * This,
    /* [out] */ BSTR *FileName,
    /* [out] */ BSTR *AppendToTitle);


void __RPC_STUB ISEFileUIEvents_OnFileOpenUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFileUIEvents_OnFileSaveAsUI_Proxy( 
    ISEFileUIEvents * This,
    /* [out] */ BSTR *FileName,
    /* [out] */ BSTR *AppendToTitle);


void __RPC_STUB ISEFileUIEvents_OnFileSaveAsUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFileUIEvents_OnFileNewUI_Proxy( 
    ISEFileUIEvents * This,
    /* [out] */ BSTR *FileName,
    /* [out] */ BSTR *AppendToTitle);


void __RPC_STUB ISEFileUIEvents_OnFileNewUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFileUIEvents_OnFileSaveAsImageUI_Proxy( 
    ISEFileUIEvents * This,
    /* [out] */ BSTR *FileName,
    /* [out] */ BSTR *AppendToTitle,
    /* [out][in] */ long *Width,
    /* [out][in] */ long *Height,
    /* [out][in] */ SeImageQualityType *ImageQuality);


void __RPC_STUB ISEFileUIEvents_OnFileSaveAsImageUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFileUIEvents_OnPlacePartUI_Proxy( 
    ISEFileUIEvents * This,
    /* [out] */ BSTR *FileName,
    /* [out] */ BSTR *AppendToTitle);


void __RPC_STUB ISEFileUIEvents_OnPlacePartUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFileUIEvents_OnCreateInPlacePartUI_Proxy( 
    ISEFileUIEvents * This,
    /* [out] */ BSTR *FileName,
    /* [out] */ BSTR *AppendToTitle,
    /* [out] */ BSTR *Template);


void __RPC_STUB ISEFileUIEvents_OnCreateInPlacePartUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEFileUIEvents_INTERFACE_DEFINED__ */


#ifndef __ISENewFileUIEvents_INTERFACE_DEFINED__
#define __ISENewFileUIEvents_INTERFACE_DEFINED__

/* interface ISENewFileUIEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISENewFileUIEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("768A88A7-C417-453a-A70C-FA292379C148")
    ISENewFileUIEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE OnNewFileUI( 
            /* [in] */ DocumentTypeConstants DocumentType,
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISENewFileUIEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISENewFileUIEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISENewFileUIEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISENewFileUIEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *OnNewFileUI )( 
            ISENewFileUIEvents * This,
            /* [in] */ DocumentTypeConstants DocumentType,
            /* [out] */ BSTR *FileName,
            /* [out] */ BSTR *AppendToTitle);
        
        END_INTERFACE
    } ISENewFileUIEventsVtbl;

    interface ISENewFileUIEvents
    {
        CONST_VTBL struct ISENewFileUIEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISENewFileUIEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISENewFileUIEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISENewFileUIEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISENewFileUIEvents_OnNewFileUI(This,DocumentType,FileName,AppendToTitle)	\
    (This)->lpVtbl -> OnNewFileUI(This,DocumentType,FileName,AppendToTitle)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISENewFileUIEvents_OnNewFileUI_Proxy( 
    ISENewFileUIEvents * This,
    /* [in] */ DocumentTypeConstants DocumentType,
    /* [out] */ BSTR *FileName,
    /* [out] */ BSTR *AppendToTitle);


void __RPC_STUB ISENewFileUIEvents_OnNewFileUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISENewFileUIEvents_INTERFACE_DEFINED__ */


#ifndef __ISEDocumentEvents_INTERFACE_DEFINED__
#define __ISEDocumentEvents_INTERFACE_DEFINED__

/* interface ISEDocumentEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEDocumentEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0EA0D1F1-A199-11d1-AECC-08003616CE02")
    ISEDocumentEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeClose( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeSave( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterSave( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SelectSetChanged( 
            IDispatch *SelectSet) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEDocumentEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEDocumentEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEDocumentEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEDocumentEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeClose )( 
            ISEDocumentEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeSave )( 
            ISEDocumentEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterSave )( 
            ISEDocumentEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SelectSetChanged )( 
            ISEDocumentEvents * This,
            IDispatch *SelectSet);
        
        END_INTERFACE
    } ISEDocumentEventsVtbl;

    interface ISEDocumentEvents
    {
        CONST_VTBL struct ISEDocumentEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEDocumentEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEDocumentEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEDocumentEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEDocumentEvents_BeforeClose(This)	\
    (This)->lpVtbl -> BeforeClose(This)

#define ISEDocumentEvents_BeforeSave(This)	\
    (This)->lpVtbl -> BeforeSave(This)

#define ISEDocumentEvents_AfterSave(This)	\
    (This)->lpVtbl -> AfterSave(This)

#define ISEDocumentEvents_SelectSetChanged(This,SelectSet)	\
    (This)->lpVtbl -> SelectSetChanged(This,SelectSet)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEDocumentEvents_BeforeClose_Proxy( 
    ISEDocumentEvents * This);


void __RPC_STUB ISEDocumentEvents_BeforeClose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEDocumentEvents_BeforeSave_Proxy( 
    ISEDocumentEvents * This);


void __RPC_STUB ISEDocumentEvents_BeforeSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEDocumentEvents_AfterSave_Proxy( 
    ISEDocumentEvents * This);


void __RPC_STUB ISEDocumentEvents_AfterSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEDocumentEvents_SelectSetChanged_Proxy( 
    ISEDocumentEvents * This,
    IDispatch *SelectSet);


void __RPC_STUB ISEDocumentEvents_SelectSetChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEDocumentEvents_INTERFACE_DEFINED__ */


#ifndef __ISEModelRecomputeEvents_INTERFACE_DEFINED__
#define __ISEModelRecomputeEvents_INTERFACE_DEFINED__

/* interface ISEModelRecomputeEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEModelRecomputeEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6A89DFD1-9E7D-11d1-AECC-08003616CE02")
    ISEModelRecomputeEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeRecompute( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterFeatureIsAdded( 
            /* [in] */ SeFeatureAddFlag AddFlag,
            /* [in] */ IDispatch *Feature) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeFeatureIsDeleted( 
            /* [in] */ SeFeatureDeleteFlag DeleteFlag,
            /* [in] */ IDispatch *Feature) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterFeatureIsModified( 
            /* [in] */ SeFeatureModifyFlag ModifyFlag,
            /* [in] */ IDispatch *Feature) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterRecompute( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeModelIsDeleted( 
            /* [in] */ IDispatch *Model) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEModelRecomputeEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEModelRecomputeEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEModelRecomputeEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEModelRecomputeEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeRecompute )( 
            ISEModelRecomputeEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterFeatureIsAdded )( 
            ISEModelRecomputeEvents * This,
            /* [in] */ SeFeatureAddFlag AddFlag,
            /* [in] */ IDispatch *Feature);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeFeatureIsDeleted )( 
            ISEModelRecomputeEvents * This,
            /* [in] */ SeFeatureDeleteFlag DeleteFlag,
            /* [in] */ IDispatch *Feature);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterFeatureIsModified )( 
            ISEModelRecomputeEvents * This,
            /* [in] */ SeFeatureModifyFlag ModifyFlag,
            /* [in] */ IDispatch *Feature);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterRecompute )( 
            ISEModelRecomputeEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeModelIsDeleted )( 
            ISEModelRecomputeEvents * This,
            /* [in] */ IDispatch *Model);
        
        END_INTERFACE
    } ISEModelRecomputeEventsVtbl;

    interface ISEModelRecomputeEvents
    {
        CONST_VTBL struct ISEModelRecomputeEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEModelRecomputeEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEModelRecomputeEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEModelRecomputeEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEModelRecomputeEvents_BeforeRecompute(This)	\
    (This)->lpVtbl -> BeforeRecompute(This)

#define ISEModelRecomputeEvents_AfterFeatureIsAdded(This,AddFlag,Feature)	\
    (This)->lpVtbl -> AfterFeatureIsAdded(This,AddFlag,Feature)

#define ISEModelRecomputeEvents_BeforeFeatureIsDeleted(This,DeleteFlag,Feature)	\
    (This)->lpVtbl -> BeforeFeatureIsDeleted(This,DeleteFlag,Feature)

#define ISEModelRecomputeEvents_AfterFeatureIsModified(This,ModifyFlag,Feature)	\
    (This)->lpVtbl -> AfterFeatureIsModified(This,ModifyFlag,Feature)

#define ISEModelRecomputeEvents_AfterRecompute(This)	\
    (This)->lpVtbl -> AfterRecompute(This)

#define ISEModelRecomputeEvents_BeforeModelIsDeleted(This,Model)	\
    (This)->lpVtbl -> BeforeModelIsDeleted(This,Model)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEModelRecomputeEvents_BeforeRecompute_Proxy( 
    ISEModelRecomputeEvents * This);


void __RPC_STUB ISEModelRecomputeEvents_BeforeRecompute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEModelRecomputeEvents_AfterFeatureIsAdded_Proxy( 
    ISEModelRecomputeEvents * This,
    /* [in] */ SeFeatureAddFlag AddFlag,
    /* [in] */ IDispatch *Feature);


void __RPC_STUB ISEModelRecomputeEvents_AfterFeatureIsAdded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEModelRecomputeEvents_BeforeFeatureIsDeleted_Proxy( 
    ISEModelRecomputeEvents * This,
    /* [in] */ SeFeatureDeleteFlag DeleteFlag,
    /* [in] */ IDispatch *Feature);


void __RPC_STUB ISEModelRecomputeEvents_BeforeFeatureIsDeleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEModelRecomputeEvents_AfterFeatureIsModified_Proxy( 
    ISEModelRecomputeEvents * This,
    /* [in] */ SeFeatureModifyFlag ModifyFlag,
    /* [in] */ IDispatch *Feature);


void __RPC_STUB ISEModelRecomputeEvents_AfterFeatureIsModified_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEModelRecomputeEvents_AfterRecompute_Proxy( 
    ISEModelRecomputeEvents * This);


void __RPC_STUB ISEModelRecomputeEvents_AfterRecompute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEModelRecomputeEvents_BeforeModelIsDeleted_Proxy( 
    ISEModelRecomputeEvents * This,
    /* [in] */ IDispatch *Model);


void __RPC_STUB ISEModelRecomputeEvents_BeforeModelIsDeleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEModelRecomputeEvents_INTERFACE_DEFINED__ */


#ifndef __ISEApplicationEvents_INTERFACE_DEFINED__
#define __ISEApplicationEvents_INTERFACE_DEFINED__

/* interface ISEApplicationEvents */
/* [oleautomation][hidden][helpstring][helpcontext][uuid][object] */ 


EXTERN_C const IID IID_ISEApplicationEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("90223887-09CD-11d1-BA07-080036230602")
    ISEApplicationEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterActiveDocumentChange( 
            /* [in] */ IDispatch *theDocument) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterCommandRun( 
            long theCommandID) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterDocumentOpen( 
            /* [in] */ IDispatch *theDocument) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterDocumentPrint( 
            /* [in] */ IDispatch *theDocument,
            /* [in] */ long hDC,
            /* [size_is][in] */ double *ModelToDC,
            /* [size_is][in] */ long *Rect) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterDocumentSave( 
            /* [in] */ IDispatch *theDocument) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterEnvironmentActivate( 
            /* [in] */ IDispatch *theEnvironment) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterNewDocumentOpen( 
            /* [in] */ IDispatch *theDocument) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterNewWindow( 
            /* [in] */ IDispatch *theWindow) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterWindowActivate( 
            /* [in] */ IDispatch *theWindow) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeCommandRun( 
            long theCommandID) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeDocumentClose( 
            /* [in] */ IDispatch *theDocument) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeDocumentPrint( 
            /* [in] */ IDispatch *theDocument,
            /* [in] */ long hDC,
            /* [size_is][in] */ double *ModelToDC,
            /* [size_is][in] */ long *Rect) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeEnvironmentDeactivate( 
            /* [in] */ IDispatch *theEnvironment) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeWindowDeactivate( 
            /* [in] */ IDispatch *theWindow) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeQuit( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeDocumentSave( 
            /* [in] */ IDispatch *theDocument) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEApplicationEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEApplicationEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEApplicationEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEApplicationEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterActiveDocumentChange )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theDocument);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterCommandRun )( 
            ISEApplicationEvents * This,
            long theCommandID);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterDocumentOpen )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theDocument);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterDocumentPrint )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theDocument,
            /* [in] */ long hDC,
            /* [size_is][in] */ double *ModelToDC,
            /* [size_is][in] */ long *Rect);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterDocumentSave )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theDocument);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterEnvironmentActivate )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theEnvironment);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterNewDocumentOpen )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theDocument);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterNewWindow )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theWindow);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterWindowActivate )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theWindow);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeCommandRun )( 
            ISEApplicationEvents * This,
            long theCommandID);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeDocumentClose )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theDocument);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeDocumentPrint )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theDocument,
            /* [in] */ long hDC,
            /* [size_is][in] */ double *ModelToDC,
            /* [size_is][in] */ long *Rect);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeEnvironmentDeactivate )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theEnvironment);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeWindowDeactivate )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theWindow);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeQuit )( 
            ISEApplicationEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeDocumentSave )( 
            ISEApplicationEvents * This,
            /* [in] */ IDispatch *theDocument);
        
        END_INTERFACE
    } ISEApplicationEventsVtbl;

    interface ISEApplicationEvents
    {
        CONST_VTBL struct ISEApplicationEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEApplicationEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEApplicationEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEApplicationEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEApplicationEvents_AfterActiveDocumentChange(This,theDocument)	\
    (This)->lpVtbl -> AfterActiveDocumentChange(This,theDocument)

#define ISEApplicationEvents_AfterCommandRun(This,theCommandID)	\
    (This)->lpVtbl -> AfterCommandRun(This,theCommandID)

#define ISEApplicationEvents_AfterDocumentOpen(This,theDocument)	\
    (This)->lpVtbl -> AfterDocumentOpen(This,theDocument)

#define ISEApplicationEvents_AfterDocumentPrint(This,theDocument,hDC,ModelToDC,Rect)	\
    (This)->lpVtbl -> AfterDocumentPrint(This,theDocument,hDC,ModelToDC,Rect)

#define ISEApplicationEvents_AfterDocumentSave(This,theDocument)	\
    (This)->lpVtbl -> AfterDocumentSave(This,theDocument)

#define ISEApplicationEvents_AfterEnvironmentActivate(This,theEnvironment)	\
    (This)->lpVtbl -> AfterEnvironmentActivate(This,theEnvironment)

#define ISEApplicationEvents_AfterNewDocumentOpen(This,theDocument)	\
    (This)->lpVtbl -> AfterNewDocumentOpen(This,theDocument)

#define ISEApplicationEvents_AfterNewWindow(This,theWindow)	\
    (This)->lpVtbl -> AfterNewWindow(This,theWindow)

#define ISEApplicationEvents_AfterWindowActivate(This,theWindow)	\
    (This)->lpVtbl -> AfterWindowActivate(This,theWindow)

#define ISEApplicationEvents_BeforeCommandRun(This,theCommandID)	\
    (This)->lpVtbl -> BeforeCommandRun(This,theCommandID)

#define ISEApplicationEvents_BeforeDocumentClose(This,theDocument)	\
    (This)->lpVtbl -> BeforeDocumentClose(This,theDocument)

#define ISEApplicationEvents_BeforeDocumentPrint(This,theDocument,hDC,ModelToDC,Rect)	\
    (This)->lpVtbl -> BeforeDocumentPrint(This,theDocument,hDC,ModelToDC,Rect)

#define ISEApplicationEvents_BeforeEnvironmentDeactivate(This,theEnvironment)	\
    (This)->lpVtbl -> BeforeEnvironmentDeactivate(This,theEnvironment)

#define ISEApplicationEvents_BeforeWindowDeactivate(This,theWindow)	\
    (This)->lpVtbl -> BeforeWindowDeactivate(This,theWindow)

#define ISEApplicationEvents_BeforeQuit(This)	\
    (This)->lpVtbl -> BeforeQuit(This)

#define ISEApplicationEvents_BeforeDocumentSave(This,theDocument)	\
    (This)->lpVtbl -> BeforeDocumentSave(This,theDocument)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_AfterActiveDocumentChange_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theDocument);


void __RPC_STUB ISEApplicationEvents_AfterActiveDocumentChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_AfterCommandRun_Proxy( 
    ISEApplicationEvents * This,
    long theCommandID);


void __RPC_STUB ISEApplicationEvents_AfterCommandRun_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_AfterDocumentOpen_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theDocument);


void __RPC_STUB ISEApplicationEvents_AfterDocumentOpen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_AfterDocumentPrint_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theDocument,
    /* [in] */ long hDC,
    /* [size_is][in] */ double *ModelToDC,
    /* [size_is][in] */ long *Rect);


void __RPC_STUB ISEApplicationEvents_AfterDocumentPrint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_AfterDocumentSave_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theDocument);


void __RPC_STUB ISEApplicationEvents_AfterDocumentSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_AfterEnvironmentActivate_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theEnvironment);


void __RPC_STUB ISEApplicationEvents_AfterEnvironmentActivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_AfterNewDocumentOpen_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theDocument);


void __RPC_STUB ISEApplicationEvents_AfterNewDocumentOpen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_AfterNewWindow_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theWindow);


void __RPC_STUB ISEApplicationEvents_AfterNewWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_AfterWindowActivate_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theWindow);


void __RPC_STUB ISEApplicationEvents_AfterWindowActivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_BeforeCommandRun_Proxy( 
    ISEApplicationEvents * This,
    long theCommandID);


void __RPC_STUB ISEApplicationEvents_BeforeCommandRun_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_BeforeDocumentClose_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theDocument);


void __RPC_STUB ISEApplicationEvents_BeforeDocumentClose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_BeforeDocumentPrint_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theDocument,
    /* [in] */ long hDC,
    /* [size_is][in] */ double *ModelToDC,
    /* [size_is][in] */ long *Rect);


void __RPC_STUB ISEApplicationEvents_BeforeDocumentPrint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_BeforeEnvironmentDeactivate_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theEnvironment);


void __RPC_STUB ISEApplicationEvents_BeforeEnvironmentDeactivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_BeforeWindowDeactivate_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theWindow);


void __RPC_STUB ISEApplicationEvents_BeforeWindowDeactivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_BeforeQuit_Proxy( 
    ISEApplicationEvents * This);


void __RPC_STUB ISEApplicationEvents_BeforeQuit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationEvents_BeforeDocumentSave_Proxy( 
    ISEApplicationEvents * This,
    /* [in] */ IDispatch *theDocument);


void __RPC_STUB ISEApplicationEvents_BeforeDocumentSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEApplicationEvents_INTERFACE_DEFINED__ */


#ifndef __ISEApplicationV8AfterDocumentOpenEvent_INTERFACE_DEFINED__
#define __ISEApplicationV8AfterDocumentOpenEvent_INTERFACE_DEFINED__

/* interface ISEApplicationV8AfterDocumentOpenEvent */
/* [oleautomation][hidden][helpstring][helpcontext][uuid][object] */ 


EXTERN_C const IID IID_ISEApplicationV8AfterDocumentOpenEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7CD4B08C-FD20-4dde-8B3B-19D4DB129EDE")
    ISEApplicationV8AfterDocumentOpenEvent : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterDocumentOpen( 
            /* [in] */ IDispatch *theDocument) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEApplicationV8AfterDocumentOpenEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEApplicationV8AfterDocumentOpenEvent * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEApplicationV8AfterDocumentOpenEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEApplicationV8AfterDocumentOpenEvent * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterDocumentOpen )( 
            ISEApplicationV8AfterDocumentOpenEvent * This,
            /* [in] */ IDispatch *theDocument);
        
        END_INTERFACE
    } ISEApplicationV8AfterDocumentOpenEventVtbl;

    interface ISEApplicationV8AfterDocumentOpenEvent
    {
        CONST_VTBL struct ISEApplicationV8AfterDocumentOpenEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEApplicationV8AfterDocumentOpenEvent_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEApplicationV8AfterDocumentOpenEvent_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEApplicationV8AfterDocumentOpenEvent_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEApplicationV8AfterDocumentOpenEvent_AfterDocumentOpen(This,theDocument)	\
    (This)->lpVtbl -> AfterDocumentOpen(This,theDocument)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEApplicationV8AfterDocumentOpenEvent_AfterDocumentOpen_Proxy( 
    ISEApplicationV8AfterDocumentOpenEvent * This,
    /* [in] */ IDispatch *theDocument);


void __RPC_STUB ISEApplicationV8AfterDocumentOpenEvent_AfterDocumentOpen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEApplicationV8AfterDocumentOpenEvent_INTERFACE_DEFINED__ */


#ifndef __ISEApplicationWindowEvents_INTERFACE_DEFINED__
#define __ISEApplicationWindowEvents_INTERFACE_DEFINED__

/* interface ISEApplicationWindowEvents */
/* [oleautomation][hidden][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISEApplicationWindowEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("25045F7B-965C-11d1-BA90-080036230602")
    ISEApplicationWindowEvents : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE WindowProc( 
            /* [in] */ long hWnd,
            /* [in] */ long nMsg,
            /* [in] */ long wParam,
            /* [in] */ long lParam) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEApplicationWindowEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEApplicationWindowEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEApplicationWindowEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEApplicationWindowEvents * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WindowProc )( 
            ISEApplicationWindowEvents * This,
            /* [in] */ long hWnd,
            /* [in] */ long nMsg,
            /* [in] */ long wParam,
            /* [in] */ long lParam);
        
        END_INTERFACE
    } ISEApplicationWindowEventsVtbl;

    interface ISEApplicationWindowEvents
    {
        CONST_VTBL struct ISEApplicationWindowEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEApplicationWindowEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEApplicationWindowEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEApplicationWindowEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEApplicationWindowEvents_WindowProc(This,hWnd,nMsg,wParam,lParam)	\
    (This)->lpVtbl -> WindowProc(This,hWnd,nMsg,wParam,lParam)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE ISEApplicationWindowEvents_WindowProc_Proxy( 
    ISEApplicationWindowEvents * This,
    /* [in] */ long hWnd,
    /* [in] */ long nMsg,
    /* [in] */ long wParam,
    /* [in] */ long lParam);


void __RPC_STUB ISEApplicationWindowEvents_WindowProc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEApplicationWindowEvents_INTERFACE_DEFINED__ */


#ifndef __ISEViewEvents_INTERFACE_DEFINED__
#define __ISEViewEvents_INTERFACE_DEFINED__

/* interface ISEViewEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEViewEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5BDAAD31-966B-11d1-AECB-08003616CE02")
    ISEViewEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Changed( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Destroyed( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE StyleChanged( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEViewEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEViewEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEViewEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEViewEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Changed )( 
            ISEViewEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Destroyed )( 
            ISEViewEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *StyleChanged )( 
            ISEViewEvents * This);
        
        END_INTERFACE
    } ISEViewEventsVtbl;

    interface ISEViewEvents
    {
        CONST_VTBL struct ISEViewEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEViewEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEViewEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEViewEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEViewEvents_Changed(This)	\
    (This)->lpVtbl -> Changed(This)

#define ISEViewEvents_Destroyed(This)	\
    (This)->lpVtbl -> Destroyed(This)

#define ISEViewEvents_StyleChanged(This)	\
    (This)->lpVtbl -> StyleChanged(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEViewEvents_Changed_Proxy( 
    ISEViewEvents * This);


void __RPC_STUB ISEViewEvents_Changed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEViewEvents_Destroyed_Proxy( 
    ISEViewEvents * This);


void __RPC_STUB ISEViewEvents_Destroyed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEViewEvents_StyleChanged_Proxy( 
    ISEViewEvents * This);


void __RPC_STUB ISEViewEvents_StyleChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEViewEvents_INTERFACE_DEFINED__ */


#ifndef __ISECommandBarButtonEvents_INTERFACE_DEFINED__
#define __ISECommandBarButtonEvents_INTERFACE_DEFINED__

/* interface ISECommandBarButtonEvents */
/* [oleautomation][hidden][helpstring][helpcontext][uuid][object] */ 


EXTERN_C const IID IID_ISECommandBarButtonEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A1831F0-9DA4-11d1-BA98-080036230602")
    ISECommandBarButtonEvents : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Click( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Help( 
            /* [in] */ long hFrameWnd,
            /* [in] */ long HelpCommandID) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE UpdateUI( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECommandBarButtonEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECommandBarButtonEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECommandBarButtonEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECommandBarButtonEvents * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Click )( 
            ISECommandBarButtonEvents * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Help )( 
            ISECommandBarButtonEvents * This,
            /* [in] */ long hFrameWnd,
            /* [in] */ long HelpCommandID);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateUI )( 
            ISECommandBarButtonEvents * This);
        
        END_INTERFACE
    } ISECommandBarButtonEventsVtbl;

    interface ISECommandBarButtonEvents
    {
        CONST_VTBL struct ISECommandBarButtonEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECommandBarButtonEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECommandBarButtonEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECommandBarButtonEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECommandBarButtonEvents_Click(This)	\
    (This)->lpVtbl -> Click(This)

#define ISECommandBarButtonEvents_Help(This,hFrameWnd,HelpCommandID)	\
    (This)->lpVtbl -> Help(This,hFrameWnd,HelpCommandID)

#define ISECommandBarButtonEvents_UpdateUI(This)	\
    (This)->lpVtbl -> UpdateUI(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISECommandBarButtonEvents_Click_Proxy( 
    ISECommandBarButtonEvents * This);


void __RPC_STUB ISECommandBarButtonEvents_Click_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISECommandBarButtonEvents_Help_Proxy( 
    ISECommandBarButtonEvents * This,
    /* [in] */ long hFrameWnd,
    /* [in] */ long HelpCommandID);


void __RPC_STUB ISECommandBarButtonEvents_Help_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISECommandBarButtonEvents_UpdateUI_Proxy( 
    ISECommandBarButtonEvents * This);


void __RPC_STUB ISECommandBarButtonEvents_UpdateUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECommandBarButtonEvents_INTERFACE_DEFINED__ */


#ifndef __ISEAddInEvents_INTERFACE_DEFINED__
#define __ISEAddInEvents_INTERFACE_DEFINED__

/* interface ISEAddInEvents */
/* [oleautomation][hidden][helpstring][helpcontext][uuid][object] */ 


EXTERN_C const IID IID_ISEAddInEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F539244-4816-11d2-B5AC-080036E8B802")
    ISEAddInEvents : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE OnCommand( 
            /* [in] */ long CommandID) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE OnCommandHelp( 
            /* [in] */ long hFrameWnd,
            /* [in] */ long HelpCommandID,
            /* [in] */ long CommandID) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE OnCommandUpdateUI( 
            /* [in] */ long CommandID,
            /* [out][in] */ long *CommandFlags,
            /* [out] */ BSTR *MenuItemText,
            /* [out][in] */ long *BitmapID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEAddInEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEAddInEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEAddInEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEAddInEvents * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnCommand )( 
            ISEAddInEvents * This,
            /* [in] */ long CommandID);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnCommandHelp )( 
            ISEAddInEvents * This,
            /* [in] */ long hFrameWnd,
            /* [in] */ long HelpCommandID,
            /* [in] */ long CommandID);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnCommandUpdateUI )( 
            ISEAddInEvents * This,
            /* [in] */ long CommandID,
            /* [out][in] */ long *CommandFlags,
            /* [out] */ BSTR *MenuItemText,
            /* [out][in] */ long *BitmapID);
        
        END_INTERFACE
    } ISEAddInEventsVtbl;

    interface ISEAddInEvents
    {
        CONST_VTBL struct ISEAddInEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEAddInEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEAddInEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEAddInEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEAddInEvents_OnCommand(This,CommandID)	\
    (This)->lpVtbl -> OnCommand(This,CommandID)

#define ISEAddInEvents_OnCommandHelp(This,hFrameWnd,HelpCommandID,CommandID)	\
    (This)->lpVtbl -> OnCommandHelp(This,hFrameWnd,HelpCommandID,CommandID)

#define ISEAddInEvents_OnCommandUpdateUI(This,CommandID,CommandFlags,MenuItemText,BitmapID)	\
    (This)->lpVtbl -> OnCommandUpdateUI(This,CommandID,CommandFlags,MenuItemText,BitmapID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISEAddInEvents_OnCommand_Proxy( 
    ISEAddInEvents * This,
    /* [in] */ long CommandID);


void __RPC_STUB ISEAddInEvents_OnCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISEAddInEvents_OnCommandHelp_Proxy( 
    ISEAddInEvents * This,
    /* [in] */ long hFrameWnd,
    /* [in] */ long HelpCommandID,
    /* [in] */ long CommandID);


void __RPC_STUB ISEAddInEvents_OnCommandHelp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISEAddInEvents_OnCommandUpdateUI_Proxy( 
    ISEAddInEvents * This,
    /* [in] */ long CommandID,
    /* [out][in] */ long *CommandFlags,
    /* [out] */ BSTR *MenuItemText,
    /* [out][in] */ long *BitmapID);


void __RPC_STUB ISEAddInEvents_OnCommandUpdateUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEAddInEvents_INTERFACE_DEFINED__ */


#ifndef __ISEAssemblyRecomputeEvents_INTERFACE_DEFINED__
#define __ISEAssemblyRecomputeEvents_INTERFACE_DEFINED__

/* interface ISEAssemblyRecomputeEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEAssemblyRecomputeEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F865F7BD-8D49-11d3-A3E6-0004AC969A5D")
    ISEAssemblyRecomputeEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeRecompute( 
            /* [in] */ IDispatch *theDocument) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterRecompute( 
            /* [in] */ IDispatch *theDocument) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterAdd( 
            /* [in] */ IDispatch *theDocument,
            /* [in] */ IDispatch *Object,
            ObjectType Type) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeDelete( 
            /* [in] */ IDispatch *theDocument,
            /* [in] */ IDispatch *Object,
            ObjectType Type) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterModify( 
            /* [in] */ IDispatch *theDocument,
            /* [in] */ IDispatch *Object,
            ObjectType Type,
            seAssemblyEventConstants ModifyType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEAssemblyRecomputeEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEAssemblyRecomputeEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEAssemblyRecomputeEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEAssemblyRecomputeEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeRecompute )( 
            ISEAssemblyRecomputeEvents * This,
            /* [in] */ IDispatch *theDocument);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterRecompute )( 
            ISEAssemblyRecomputeEvents * This,
            /* [in] */ IDispatch *theDocument);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterAdd )( 
            ISEAssemblyRecomputeEvents * This,
            /* [in] */ IDispatch *theDocument,
            /* [in] */ IDispatch *Object,
            ObjectType Type);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeDelete )( 
            ISEAssemblyRecomputeEvents * This,
            /* [in] */ IDispatch *theDocument,
            /* [in] */ IDispatch *Object,
            ObjectType Type);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterModify )( 
            ISEAssemblyRecomputeEvents * This,
            /* [in] */ IDispatch *theDocument,
            /* [in] */ IDispatch *Object,
            ObjectType Type,
            seAssemblyEventConstants ModifyType);
        
        END_INTERFACE
    } ISEAssemblyRecomputeEventsVtbl;

    interface ISEAssemblyRecomputeEvents
    {
        CONST_VTBL struct ISEAssemblyRecomputeEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEAssemblyRecomputeEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEAssemblyRecomputeEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEAssemblyRecomputeEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEAssemblyRecomputeEvents_BeforeRecompute(This,theDocument)	\
    (This)->lpVtbl -> BeforeRecompute(This,theDocument)

#define ISEAssemblyRecomputeEvents_AfterRecompute(This,theDocument)	\
    (This)->lpVtbl -> AfterRecompute(This,theDocument)

#define ISEAssemblyRecomputeEvents_AfterAdd(This,theDocument,Object,Type)	\
    (This)->lpVtbl -> AfterAdd(This,theDocument,Object,Type)

#define ISEAssemblyRecomputeEvents_BeforeDelete(This,theDocument,Object,Type)	\
    (This)->lpVtbl -> BeforeDelete(This,theDocument,Object,Type)

#define ISEAssemblyRecomputeEvents_AfterModify(This,theDocument,Object,Type,ModifyType)	\
    (This)->lpVtbl -> AfterModify(This,theDocument,Object,Type,ModifyType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEAssemblyRecomputeEvents_BeforeRecompute_Proxy( 
    ISEAssemblyRecomputeEvents * This,
    /* [in] */ IDispatch *theDocument);


void __RPC_STUB ISEAssemblyRecomputeEvents_BeforeRecompute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEAssemblyRecomputeEvents_AfterRecompute_Proxy( 
    ISEAssemblyRecomputeEvents * This,
    /* [in] */ IDispatch *theDocument);


void __RPC_STUB ISEAssemblyRecomputeEvents_AfterRecompute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEAssemblyRecomputeEvents_AfterAdd_Proxy( 
    ISEAssemblyRecomputeEvents * This,
    /* [in] */ IDispatch *theDocument,
    /* [in] */ IDispatch *Object,
    ObjectType Type);


void __RPC_STUB ISEAssemblyRecomputeEvents_AfterAdd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEAssemblyRecomputeEvents_BeforeDelete_Proxy( 
    ISEAssemblyRecomputeEvents * This,
    /* [in] */ IDispatch *theDocument,
    /* [in] */ IDispatch *Object,
    ObjectType Type);


void __RPC_STUB ISEAssemblyRecomputeEvents_BeforeDelete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEAssemblyRecomputeEvents_AfterModify_Proxy( 
    ISEAssemblyRecomputeEvents * This,
    /* [in] */ IDispatch *theDocument,
    /* [in] */ IDispatch *Object,
    ObjectType Type,
    seAssemblyEventConstants ModifyType);


void __RPC_STUB ISEAssemblyRecomputeEvents_AfterModify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEAssemblyRecomputeEvents_INTERFACE_DEFINED__ */


#ifndef __ISEFamilyOfPartsEvents_INTERFACE_DEFINED__
#define __ISEFamilyOfPartsEvents_INTERFACE_DEFINED__

/* interface ISEFamilyOfPartsEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEFamilyOfPartsEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A054F88B-9C75-11d3-A3F0-0004AC969A5D")
    ISEFamilyOfPartsEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterMemberDocumentCreated( 
            /* [in] */ IDispatch *theMember) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterMemberDocumentRenamed( 
            /* [in] */ IDispatch *theMember,
            /* [in] */ BSTR OldName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeMemberDocumentDeleted( 
            /* [in] */ IDispatch *theMember) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEFamilyOfPartsEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEFamilyOfPartsEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEFamilyOfPartsEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEFamilyOfPartsEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterMemberDocumentCreated )( 
            ISEFamilyOfPartsEvents * This,
            /* [in] */ IDispatch *theMember);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterMemberDocumentRenamed )( 
            ISEFamilyOfPartsEvents * This,
            /* [in] */ IDispatch *theMember,
            /* [in] */ BSTR OldName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeMemberDocumentDeleted )( 
            ISEFamilyOfPartsEvents * This,
            /* [in] */ IDispatch *theMember);
        
        END_INTERFACE
    } ISEFamilyOfPartsEventsVtbl;

    interface ISEFamilyOfPartsEvents
    {
        CONST_VTBL struct ISEFamilyOfPartsEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEFamilyOfPartsEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEFamilyOfPartsEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEFamilyOfPartsEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEFamilyOfPartsEvents_AfterMemberDocumentCreated(This,theMember)	\
    (This)->lpVtbl -> AfterMemberDocumentCreated(This,theMember)

#define ISEFamilyOfPartsEvents_AfterMemberDocumentRenamed(This,theMember,OldName)	\
    (This)->lpVtbl -> AfterMemberDocumentRenamed(This,theMember,OldName)

#define ISEFamilyOfPartsEvents_BeforeMemberDocumentDeleted(This,theMember)	\
    (This)->lpVtbl -> BeforeMemberDocumentDeleted(This,theMember)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFamilyOfPartsEvents_AfterMemberDocumentCreated_Proxy( 
    ISEFamilyOfPartsEvents * This,
    /* [in] */ IDispatch *theMember);


void __RPC_STUB ISEFamilyOfPartsEvents_AfterMemberDocumentCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFamilyOfPartsEvents_AfterMemberDocumentRenamed_Proxy( 
    ISEFamilyOfPartsEvents * This,
    /* [in] */ IDispatch *theMember,
    /* [in] */ BSTR OldName);


void __RPC_STUB ISEFamilyOfPartsEvents_AfterMemberDocumentRenamed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFamilyOfPartsEvents_BeforeMemberDocumentDeleted_Proxy( 
    ISEFamilyOfPartsEvents * This,
    /* [in] */ IDispatch *theMember);


void __RPC_STUB ISEFamilyOfPartsEvents_BeforeMemberDocumentDeleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEFamilyOfPartsEvents_INTERFACE_DEFINED__ */


#ifndef __ISEFamilyOfPartsExEvents_INTERFACE_DEFINED__
#define __ISEFamilyOfPartsExEvents_INTERFACE_DEFINED__

/* interface ISEFamilyOfPartsExEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEFamilyOfPartsExEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD8A8F60-B2AF-4bfd-A106-99D3717A7650")
    ISEFamilyOfPartsExEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterMemberDocumentCreated( 
            /* [in] */ IDispatch *theMember,
            /* [in] */ VARIANT_BOOL DocumentExists) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterMemberDocumentRenamed( 
            /* [in] */ IDispatch *theMember,
            /* [in] */ BSTR OldName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeMemberDocumentDeleted( 
            /* [in] */ IDispatch *theMember) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEFamilyOfPartsExEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEFamilyOfPartsExEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEFamilyOfPartsExEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEFamilyOfPartsExEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterMemberDocumentCreated )( 
            ISEFamilyOfPartsExEvents * This,
            /* [in] */ IDispatch *theMember,
            /* [in] */ VARIANT_BOOL DocumentExists);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterMemberDocumentRenamed )( 
            ISEFamilyOfPartsExEvents * This,
            /* [in] */ IDispatch *theMember,
            /* [in] */ BSTR OldName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeMemberDocumentDeleted )( 
            ISEFamilyOfPartsExEvents * This,
            /* [in] */ IDispatch *theMember);
        
        END_INTERFACE
    } ISEFamilyOfPartsExEventsVtbl;

    interface ISEFamilyOfPartsExEvents
    {
        CONST_VTBL struct ISEFamilyOfPartsExEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEFamilyOfPartsExEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEFamilyOfPartsExEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEFamilyOfPartsExEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEFamilyOfPartsExEvents_AfterMemberDocumentCreated(This,theMember,DocumentExists)	\
    (This)->lpVtbl -> AfterMemberDocumentCreated(This,theMember,DocumentExists)

#define ISEFamilyOfPartsExEvents_AfterMemberDocumentRenamed(This,theMember,OldName)	\
    (This)->lpVtbl -> AfterMemberDocumentRenamed(This,theMember,OldName)

#define ISEFamilyOfPartsExEvents_BeforeMemberDocumentDeleted(This,theMember)	\
    (This)->lpVtbl -> BeforeMemberDocumentDeleted(This,theMember)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFamilyOfPartsExEvents_AfterMemberDocumentCreated_Proxy( 
    ISEFamilyOfPartsExEvents * This,
    /* [in] */ IDispatch *theMember,
    /* [in] */ VARIANT_BOOL DocumentExists);


void __RPC_STUB ISEFamilyOfPartsExEvents_AfterMemberDocumentCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFamilyOfPartsExEvents_AfterMemberDocumentRenamed_Proxy( 
    ISEFamilyOfPartsExEvents * This,
    /* [in] */ IDispatch *theMember,
    /* [in] */ BSTR OldName);


void __RPC_STUB ISEFamilyOfPartsExEvents_AfterMemberDocumentRenamed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFamilyOfPartsExEvents_BeforeMemberDocumentDeleted_Proxy( 
    ISEFamilyOfPartsExEvents * This,
    /* [in] */ IDispatch *theMember);


void __RPC_STUB ISEFamilyOfPartsExEvents_BeforeMemberDocumentDeleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEFamilyOfPartsExEvents_INTERFACE_DEFINED__ */


#ifndef __ISEDividePartEvents_INTERFACE_DEFINED__
#define __ISEDividePartEvents_INTERFACE_DEFINED__

/* interface ISEDividePartEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEDividePartEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("03A58A85-9CFB-11d3-A3F0-0004AC969A5D")
    ISEDividePartEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterDividePartDocumentCreated( 
            /* [in] */ IDispatch *theMember) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterDividePartDocumentRenamed( 
            /* [in] */ IDispatch *theMember,
            /* [in] */ BSTR OldName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BeforeDividePartDocumentDeleted( 
            /* [in] */ IDispatch *theMember) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEDividePartEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEDividePartEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEDividePartEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEDividePartEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterDividePartDocumentCreated )( 
            ISEDividePartEvents * This,
            /* [in] */ IDispatch *theMember);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterDividePartDocumentRenamed )( 
            ISEDividePartEvents * This,
            /* [in] */ IDispatch *theMember,
            /* [in] */ BSTR OldName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BeforeDividePartDocumentDeleted )( 
            ISEDividePartEvents * This,
            /* [in] */ IDispatch *theMember);
        
        END_INTERFACE
    } ISEDividePartEventsVtbl;

    interface ISEDividePartEvents
    {
        CONST_VTBL struct ISEDividePartEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEDividePartEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEDividePartEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEDividePartEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEDividePartEvents_AfterDividePartDocumentCreated(This,theMember)	\
    (This)->lpVtbl -> AfterDividePartDocumentCreated(This,theMember)

#define ISEDividePartEvents_AfterDividePartDocumentRenamed(This,theMember,OldName)	\
    (This)->lpVtbl -> AfterDividePartDocumentRenamed(This,theMember,OldName)

#define ISEDividePartEvents_BeforeDividePartDocumentDeleted(This,theMember)	\
    (This)->lpVtbl -> BeforeDividePartDocumentDeleted(This,theMember)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEDividePartEvents_AfterDividePartDocumentCreated_Proxy( 
    ISEDividePartEvents * This,
    /* [in] */ IDispatch *theMember);


void __RPC_STUB ISEDividePartEvents_AfterDividePartDocumentCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEDividePartEvents_AfterDividePartDocumentRenamed_Proxy( 
    ISEDividePartEvents * This,
    /* [in] */ IDispatch *theMember,
    /* [in] */ BSTR OldName);


void __RPC_STUB ISEDividePartEvents_AfterDividePartDocumentRenamed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEDividePartEvents_BeforeDividePartDocumentDeleted_Proxy( 
    ISEDividePartEvents * This,
    /* [in] */ IDispatch *theMember);


void __RPC_STUB ISEDividePartEvents_BeforeDividePartDocumentDeleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEDividePartEvents_INTERFACE_DEFINED__ */


#ifndef __ISEFeatureLibraryEvents_INTERFACE_DEFINED__
#define __ISEFeatureLibraryEvents_INTERFACE_DEFINED__

/* interface ISEFeatureLibraryEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEFeatureLibraryEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EBF71669-ACF0-11d3-A3F3-0004AC969A5D")
    ISEFeatureLibraryEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterFeatureLibraryDocumentCreated( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterFeatureLibraryDocumentRenamed( 
            /* [in] */ BSTR NewName,
            /* [in] */ BSTR OldName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterFeatureLibraryDocumentDeleted( 
            /* [in] */ BSTR Name) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEFeatureLibraryEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEFeatureLibraryEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEFeatureLibraryEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEFeatureLibraryEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterFeatureLibraryDocumentCreated )( 
            ISEFeatureLibraryEvents * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterFeatureLibraryDocumentRenamed )( 
            ISEFeatureLibraryEvents * This,
            /* [in] */ BSTR NewName,
            /* [in] */ BSTR OldName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterFeatureLibraryDocumentDeleted )( 
            ISEFeatureLibraryEvents * This,
            /* [in] */ BSTR Name);
        
        END_INTERFACE
    } ISEFeatureLibraryEventsVtbl;

    interface ISEFeatureLibraryEvents
    {
        CONST_VTBL struct ISEFeatureLibraryEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEFeatureLibraryEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEFeatureLibraryEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEFeatureLibraryEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEFeatureLibraryEvents_AfterFeatureLibraryDocumentCreated(This,Name)	\
    (This)->lpVtbl -> AfterFeatureLibraryDocumentCreated(This,Name)

#define ISEFeatureLibraryEvents_AfterFeatureLibraryDocumentRenamed(This,NewName,OldName)	\
    (This)->lpVtbl -> AfterFeatureLibraryDocumentRenamed(This,NewName,OldName)

#define ISEFeatureLibraryEvents_AfterFeatureLibraryDocumentDeleted(This,Name)	\
    (This)->lpVtbl -> AfterFeatureLibraryDocumentDeleted(This,Name)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFeatureLibraryEvents_AfterFeatureLibraryDocumentCreated_Proxy( 
    ISEFeatureLibraryEvents * This,
    /* [in] */ BSTR Name);


void __RPC_STUB ISEFeatureLibraryEvents_AfterFeatureLibraryDocumentCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFeatureLibraryEvents_AfterFeatureLibraryDocumentRenamed_Proxy( 
    ISEFeatureLibraryEvents * This,
    /* [in] */ BSTR NewName,
    /* [in] */ BSTR OldName);


void __RPC_STUB ISEFeatureLibraryEvents_AfterFeatureLibraryDocumentRenamed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEFeatureLibraryEvents_AfterFeatureLibraryDocumentDeleted_Proxy( 
    ISEFeatureLibraryEvents * This,
    /* [in] */ BSTR Name);


void __RPC_STUB ISEFeatureLibraryEvents_AfterFeatureLibraryDocumentDeleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEFeatureLibraryEvents_INTERFACE_DEFINED__ */


#ifndef __ISEDrawingViewEvents_INTERFACE_DEFINED__
#define __ISEDrawingViewEvents_INTERFACE_DEFINED__

/* interface ISEDrawingViewEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEDrawingViewEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2D93AEEE-3B14-11d4-A4D3-0004AC9695CB")
    ISEDrawingViewEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterUpdate( 
            /* [in] */ IDispatch *DrawingView) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEDrawingViewEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEDrawingViewEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEDrawingViewEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEDrawingViewEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterUpdate )( 
            ISEDrawingViewEvents * This,
            /* [in] */ IDispatch *DrawingView);
        
        END_INTERFACE
    } ISEDrawingViewEventsVtbl;

    interface ISEDrawingViewEvents
    {
        CONST_VTBL struct ISEDrawingViewEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEDrawingViewEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEDrawingViewEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEDrawingViewEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEDrawingViewEvents_AfterUpdate(This,DrawingView)	\
    (This)->lpVtbl -> AfterUpdate(This,DrawingView)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEDrawingViewEvents_AfterUpdate_Proxy( 
    ISEDrawingViewEvents * This,
    /* [in] */ IDispatch *DrawingView);


void __RPC_STUB ISEDrawingViewEvents_AfterUpdate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEDrawingViewEvents_INTERFACE_DEFINED__ */


#ifndef __ISEPartsListEvents_INTERFACE_DEFINED__
#define __ISEPartsListEvents_INTERFACE_DEFINED__

/* interface ISEPartsListEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEPartsListEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("21EE3696-5BCC-4815-8A40-209EF7D3EEE4")
    ISEPartsListEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AfterUpdate( 
            /* [in] */ IDispatch *PartsList) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEPartsListEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEPartsListEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEPartsListEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEPartsListEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AfterUpdate )( 
            ISEPartsListEvents * This,
            /* [in] */ IDispatch *PartsList);
        
        END_INTERFACE
    } ISEPartsListEventsVtbl;

    interface ISEPartsListEvents
    {
        CONST_VTBL struct ISEPartsListEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEPartsListEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEPartsListEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEPartsListEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEPartsListEvents_AfterUpdate(This,PartsList)	\
    (This)->lpVtbl -> AfterUpdate(This,PartsList)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEPartsListEvents_AfterUpdate_Proxy( 
    ISEPartsListEvents * This,
    /* [in] */ IDispatch *PartsList);


void __RPC_STUB ISEPartsListEvents_AfterUpdate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEPartsListEvents_INTERFACE_DEFINED__ */


#ifndef __ISEShortCutMenuEvents_INTERFACE_DEFINED__
#define __ISEShortCutMenuEvents_INTERFACE_DEFINED__

/* interface ISEShortCutMenuEvents */
/* [oleautomation][hidden][helpstring][helpcontext][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISEShortCutMenuEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("906F7A2E-AC43-409d-9933-C9A88B930C99")
    ISEShortCutMenuEvents : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE BuildMenu( 
            /* [in] */ BSTR EnvCatID,
            /* [in] */ ShortCutMenuContextConstants Context,
            /* [in] */ LPDISPATCH pGraphicDispatch,
            /* [out] */ SAFEARRAY * *MenuStrings,
            /* [out] */ SAFEARRAY * *CommandIds) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEShortCutMenuEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEShortCutMenuEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEShortCutMenuEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEShortCutMenuEvents * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *BuildMenu )( 
            ISEShortCutMenuEvents * This,
            /* [in] */ BSTR EnvCatID,
            /* [in] */ ShortCutMenuContextConstants Context,
            /* [in] */ LPDISPATCH pGraphicDispatch,
            /* [out] */ SAFEARRAY * *MenuStrings,
            /* [out] */ SAFEARRAY * *CommandIds);
        
        END_INTERFACE
    } ISEShortCutMenuEventsVtbl;

    interface ISEShortCutMenuEvents
    {
        CONST_VTBL struct ISEShortCutMenuEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEShortCutMenuEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEShortCutMenuEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEShortCutMenuEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEShortCutMenuEvents_BuildMenu(This,EnvCatID,Context,pGraphicDispatch,MenuStrings,CommandIds)	\
    (This)->lpVtbl -> BuildMenu(This,EnvCatID,Context,pGraphicDispatch,MenuStrings,CommandIds)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEShortCutMenuEvents_BuildMenu_Proxy( 
    ISEShortCutMenuEvents * This,
    /* [in] */ BSTR EnvCatID,
    /* [in] */ ShortCutMenuContextConstants Context,
    /* [in] */ LPDISPATCH pGraphicDispatch,
    /* [out] */ SAFEARRAY * *MenuStrings,
    /* [out] */ SAFEARRAY * *CommandIds);


void __RPC_STUB ISEShortCutMenuEvents_BuildMenu_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEShortCutMenuEvents_INTERFACE_DEFINED__ */


#ifndef __DISEhDCDisplayEvents_DISPINTERFACE_DEFINED__
#define __DISEhDCDisplayEvents_DISPINTERFACE_DEFINED__

/* dispinterface DISEhDCDisplayEvents */
/* [helpstring][helpcontext][nonextensible][uuid] */ 


EXTERN_C const IID DIID_DISEhDCDisplayEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("791849E2-A4AA-11d1-AECC-08003616CE02")
    DISEhDCDisplayEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISEhDCDisplayEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISEhDCDisplayEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISEhDCDisplayEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISEhDCDisplayEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISEhDCDisplayEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISEhDCDisplayEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISEhDCDisplayEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISEhDCDisplayEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISEhDCDisplayEventsVtbl;

    interface DISEhDCDisplayEvents
    {
        CONST_VTBL struct DISEhDCDisplayEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISEhDCDisplayEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISEhDCDisplayEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISEhDCDisplayEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISEhDCDisplayEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISEhDCDisplayEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISEhDCDisplayEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISEhDCDisplayEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISEhDCDisplayEvents_DISPINTERFACE_DEFINED__ */


#ifndef __DISEFileUIEvents_DISPINTERFACE_DEFINED__
#define __DISEFileUIEvents_DISPINTERFACE_DEFINED__

/* dispinterface DISEFileUIEvents */
/* [helpstring][helpcontext][nonextensible][uuid] */ 


EXTERN_C const IID DIID_DISEFileUIEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("ECC667A2-A4AA-11d1-AECC-08003616CE02")
    DISEFileUIEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISEFileUIEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISEFileUIEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISEFileUIEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISEFileUIEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISEFileUIEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISEFileUIEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISEFileUIEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISEFileUIEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISEFileUIEventsVtbl;

    interface DISEFileUIEvents
    {
        CONST_VTBL struct DISEFileUIEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISEFileUIEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISEFileUIEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISEFileUIEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISEFileUIEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISEFileUIEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISEFileUIEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISEFileUIEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISEFileUIEvents_DISPINTERFACE_DEFINED__ */


#ifndef __DISEDocumentEvents_DISPINTERFACE_DEFINED__
#define __DISEDocumentEvents_DISPINTERFACE_DEFINED__

/* dispinterface DISEDocumentEvents */
/* [helpstring][helpcontext][nonextensible][uuid] */ 


EXTERN_C const IID DIID_DISEDocumentEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0EA0D1F2-A199-11d1-AECC-08003616CE02")
    DISEDocumentEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISEDocumentEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISEDocumentEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISEDocumentEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISEDocumentEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISEDocumentEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISEDocumentEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISEDocumentEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISEDocumentEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISEDocumentEventsVtbl;

    interface DISEDocumentEvents
    {
        CONST_VTBL struct DISEDocumentEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISEDocumentEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISEDocumentEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISEDocumentEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISEDocumentEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISEDocumentEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISEDocumentEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISEDocumentEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISEDocumentEvents_DISPINTERFACE_DEFINED__ */


#ifndef __DISEApplicationEvents_DISPINTERFACE_DEFINED__
#define __DISEApplicationEvents_DISPINTERFACE_DEFINED__

/* dispinterface DISEApplicationEvents */
/* [helpstring][helpcontext][nonextensible][uuid] */ 


EXTERN_C const IID DIID_DISEApplicationEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("5E23ED5B-64E5-11d1-BA6B-080036230602")
    DISEApplicationEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISEApplicationEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISEApplicationEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISEApplicationEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISEApplicationEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISEApplicationEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISEApplicationEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISEApplicationEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISEApplicationEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISEApplicationEventsVtbl;

    interface DISEApplicationEvents
    {
        CONST_VTBL struct DISEApplicationEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISEApplicationEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISEApplicationEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISEApplicationEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISEApplicationEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISEApplicationEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISEApplicationEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISEApplicationEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISEApplicationEvents_DISPINTERFACE_DEFINED__ */


#ifndef __DISEApplicationWindowEvents_DISPINTERFACE_DEFINED__
#define __DISEApplicationWindowEvents_DISPINTERFACE_DEFINED__

/* dispinterface DISEApplicationWindowEvents */
/* [helpcontext][helpstring][nonextensible][uuid] */ 


EXTERN_C const IID DIID_DISEApplicationWindowEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("25045F7D-965C-11d1-BA90-080036230602")
    DISEApplicationWindowEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISEApplicationWindowEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISEApplicationWindowEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISEApplicationWindowEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISEApplicationWindowEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISEApplicationWindowEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISEApplicationWindowEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISEApplicationWindowEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISEApplicationWindowEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISEApplicationWindowEventsVtbl;

    interface DISEApplicationWindowEvents
    {
        CONST_VTBL struct DISEApplicationWindowEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISEApplicationWindowEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISEApplicationWindowEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISEApplicationWindowEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISEApplicationWindowEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISEApplicationWindowEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISEApplicationWindowEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISEApplicationWindowEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISEApplicationWindowEvents_DISPINTERFACE_DEFINED__ */


#ifndef __DISEViewEvents_DISPINTERFACE_DEFINED__
#define __DISEViewEvents_DISPINTERFACE_DEFINED__

/* dispinterface DISEViewEvents */
/* [helpstring][helpcontext][nonextensible][uuid] */ 


EXTERN_C const IID DIID_DISEViewEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("5BDAAD32-966B-11d1-AECB-08003616CE02")
    DISEViewEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISEViewEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISEViewEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISEViewEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISEViewEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISEViewEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISEViewEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISEViewEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISEViewEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISEViewEventsVtbl;

    interface DISEViewEvents
    {
        CONST_VTBL struct DISEViewEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISEViewEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISEViewEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISEViewEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISEViewEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISEViewEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISEViewEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISEViewEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISEViewEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISECommandBar_INTERFACE_DEFINED__
#define __ISECommandBar_INTERFACE_DEFINED__

/* interface ISECommandBar */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISECommandBar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A1831F2-9DA4-11d1-BA98-080036230602")
    ISECommandBar : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IDispatch **Application) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_BuiltIn( 
            /* [retval][out] */ VARIANT_BOOL *BuiltIn) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Controls( 
            /* [retval][out] */ CommandBarControls	**CommandBarControls) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Enabled) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ long *Height) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ long Height) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Index( 
            /* [retval][out] */ long *Index) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [retval][out] */ long *Left) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Left( 
            /* [in] */ long Left) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_NameLocal( 
            /* [retval][out] */ BSTR *NameLocal) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_NameLocal( 
            /* [in] */ BSTR NameLocal) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ Environment	**Parent) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ SeBarPosition *Position) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ SeBarPosition Position) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [retval][out] */ long *Top) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Top( 
            /* [in] */ long Top) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ SeBarType *Type) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *Visible) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL Visible) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ long *Width) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ long Width) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE FindControl( 
            /* [optional][in] */ VARIANT Type,
            /* [optional][in] */ VARIANT Id,
            /* [optional][in] */ VARIANT Tag,
            /* [optional][in] */ VARIANT Visible,
            /* [optional][in] */ VARIANT Recursive,
            /* [retval][out] */ CommandBarControl	**CommandBarControl) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ShowPopup( 
            /* [optional][in] */ VARIANT x,
            /* [optional][in] */ VARIANT y) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECommandBarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECommandBar * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECommandBar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECommandBar * This);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ISECommandBar * This,
            /* [retval][out] */ IDispatch **Application);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuiltIn )( 
            ISECommandBar * This,
            /* [retval][out] */ VARIANT_BOOL *BuiltIn);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Controls )( 
            ISECommandBar * This,
            /* [retval][out] */ CommandBarControls	**CommandBarControls);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ISECommandBar * This,
            /* [retval][out] */ VARIANT_BOOL *Enabled);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            ISECommandBar * This,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            ISECommandBar * This,
            /* [retval][out] */ long *Height);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            ISECommandBar * This,
            /* [in] */ long Height);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Index )( 
            ISECommandBar * This,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Left )( 
            ISECommandBar * This,
            /* [retval][out] */ long *Left);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Left )( 
            ISECommandBar * This,
            /* [in] */ long Left);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISECommandBar * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NameLocal )( 
            ISECommandBar * This,
            /* [retval][out] */ BSTR *NameLocal);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NameLocal )( 
            ISECommandBar * This,
            /* [in] */ BSTR NameLocal);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ISECommandBar * This,
            /* [retval][out] */ Environment	**Parent);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ISECommandBar * This,
            /* [retval][out] */ SeBarPosition *Position);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            ISECommandBar * This,
            /* [in] */ SeBarPosition Position);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Top )( 
            ISECommandBar * This,
            /* [retval][out] */ long *Top);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Top )( 
            ISECommandBar * This,
            /* [in] */ long Top);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISECommandBar * This,
            /* [retval][out] */ SeBarType *Type);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ISECommandBar * This,
            /* [retval][out] */ VARIANT_BOOL *Visible);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            ISECommandBar * This,
            /* [in] */ VARIANT_BOOL Visible);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            ISECommandBar * This,
            /* [retval][out] */ long *Width);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            ISECommandBar * This,
            /* [in] */ long Width);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ISECommandBar * This);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *FindControl )( 
            ISECommandBar * This,
            /* [optional][in] */ VARIANT Type,
            /* [optional][in] */ VARIANT Id,
            /* [optional][in] */ VARIANT Tag,
            /* [optional][in] */ VARIANT Visible,
            /* [optional][in] */ VARIANT Recursive,
            /* [retval][out] */ CommandBarControl	**CommandBarControl);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            ISECommandBar * This);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *ShowPopup )( 
            ISECommandBar * This,
            /* [optional][in] */ VARIANT x,
            /* [optional][in] */ VARIANT y);
        
        END_INTERFACE
    } ISECommandBarVtbl;

    interface ISECommandBar
    {
        CONST_VTBL struct ISECommandBarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECommandBar_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECommandBar_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECommandBar_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECommandBar_get_Application(This,Application)	\
    (This)->lpVtbl -> get_Application(This,Application)

#define ISECommandBar_get_BuiltIn(This,BuiltIn)	\
    (This)->lpVtbl -> get_BuiltIn(This,BuiltIn)

#define ISECommandBar_get_Controls(This,CommandBarControls)	\
    (This)->lpVtbl -> get_Controls(This,CommandBarControls)

#define ISECommandBar_get_Enabled(This,Enabled)	\
    (This)->lpVtbl -> get_Enabled(This,Enabled)

#define ISECommandBar_put_Enabled(This,Enabled)	\
    (This)->lpVtbl -> put_Enabled(This,Enabled)

#define ISECommandBar_get_Height(This,Height)	\
    (This)->lpVtbl -> get_Height(This,Height)

#define ISECommandBar_put_Height(This,Height)	\
    (This)->lpVtbl -> put_Height(This,Height)

#define ISECommandBar_get_Index(This,Index)	\
    (This)->lpVtbl -> get_Index(This,Index)

#define ISECommandBar_get_Left(This,Left)	\
    (This)->lpVtbl -> get_Left(This,Left)

#define ISECommandBar_put_Left(This,Left)	\
    (This)->lpVtbl -> put_Left(This,Left)

#define ISECommandBar_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define ISECommandBar_get_NameLocal(This,NameLocal)	\
    (This)->lpVtbl -> get_NameLocal(This,NameLocal)

#define ISECommandBar_put_NameLocal(This,NameLocal)	\
    (This)->lpVtbl -> put_NameLocal(This,NameLocal)

#define ISECommandBar_get_Parent(This,Parent)	\
    (This)->lpVtbl -> get_Parent(This,Parent)

#define ISECommandBar_get_Position(This,Position)	\
    (This)->lpVtbl -> get_Position(This,Position)

#define ISECommandBar_put_Position(This,Position)	\
    (This)->lpVtbl -> put_Position(This,Position)

#define ISECommandBar_get_Top(This,Top)	\
    (This)->lpVtbl -> get_Top(This,Top)

#define ISECommandBar_put_Top(This,Top)	\
    (This)->lpVtbl -> put_Top(This,Top)

#define ISECommandBar_get_Type(This,Type)	\
    (This)->lpVtbl -> get_Type(This,Type)

#define ISECommandBar_get_Visible(This,Visible)	\
    (This)->lpVtbl -> get_Visible(This,Visible)

#define ISECommandBar_put_Visible(This,Visible)	\
    (This)->lpVtbl -> put_Visible(This,Visible)

#define ISECommandBar_get_Width(This,Width)	\
    (This)->lpVtbl -> get_Width(This,Width)

#define ISECommandBar_put_Width(This,Width)	\
    (This)->lpVtbl -> put_Width(This,Width)

#define ISECommandBar_Delete(This)	\
    (This)->lpVtbl -> Delete(This)

#define ISECommandBar_FindControl(This,Type,Id,Tag,Visible,Recursive,CommandBarControl)	\
    (This)->lpVtbl -> FindControl(This,Type,Id,Tag,Visible,Recursive,CommandBarControl)

#define ISECommandBar_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define ISECommandBar_ShowPopup(This,x,y)	\
    (This)->lpVtbl -> ShowPopup(This,x,y)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Application_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ IDispatch **Application);


void __RPC_STUB ISECommandBar_get_Application_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_BuiltIn_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ VARIANT_BOOL *BuiltIn);


void __RPC_STUB ISECommandBar_get_BuiltIn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Controls_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ CommandBarControls	**CommandBarControls);


void __RPC_STUB ISECommandBar_get_Controls_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Enabled_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ VARIANT_BOOL *Enabled);


void __RPC_STUB ISECommandBar_get_Enabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBar_put_Enabled_Proxy( 
    ISECommandBar * This,
    /* [in] */ VARIANT_BOOL Enabled);


void __RPC_STUB ISECommandBar_put_Enabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Height_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ long *Height);


void __RPC_STUB ISECommandBar_get_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBar_put_Height_Proxy( 
    ISECommandBar * This,
    /* [in] */ long Height);


void __RPC_STUB ISECommandBar_put_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Index_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ long *Index);


void __RPC_STUB ISECommandBar_get_Index_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Left_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ long *Left);


void __RPC_STUB ISECommandBar_get_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBar_put_Left_Proxy( 
    ISECommandBar * This,
    /* [in] */ long Left);


void __RPC_STUB ISECommandBar_put_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Name_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ BSTR *Name);


void __RPC_STUB ISECommandBar_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_NameLocal_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ BSTR *NameLocal);


void __RPC_STUB ISECommandBar_get_NameLocal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBar_put_NameLocal_Proxy( 
    ISECommandBar * This,
    /* [in] */ BSTR NameLocal);


void __RPC_STUB ISECommandBar_put_NameLocal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Parent_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ Environment	**Parent);


void __RPC_STUB ISECommandBar_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Position_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ SeBarPosition *Position);


void __RPC_STUB ISECommandBar_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBar_put_Position_Proxy( 
    ISECommandBar * This,
    /* [in] */ SeBarPosition Position);


void __RPC_STUB ISECommandBar_put_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Top_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ long *Top);


void __RPC_STUB ISECommandBar_get_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBar_put_Top_Proxy( 
    ISECommandBar * This,
    /* [in] */ long Top);


void __RPC_STUB ISECommandBar_put_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Type_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ SeBarType *Type);


void __RPC_STUB ISECommandBar_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Visible_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ VARIANT_BOOL *Visible);


void __RPC_STUB ISECommandBar_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBar_put_Visible_Proxy( 
    ISECommandBar * This,
    /* [in] */ VARIANT_BOOL Visible);


void __RPC_STUB ISECommandBar_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBar_get_Width_Proxy( 
    ISECommandBar * This,
    /* [retval][out] */ long *Width);


void __RPC_STUB ISECommandBar_get_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBar_put_Width_Proxy( 
    ISECommandBar * This,
    /* [in] */ long Width);


void __RPC_STUB ISECommandBar_put_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBar_Delete_Proxy( 
    ISECommandBar * This);


void __RPC_STUB ISECommandBar_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBar_FindControl_Proxy( 
    ISECommandBar * This,
    /* [optional][in] */ VARIANT Type,
    /* [optional][in] */ VARIANT Id,
    /* [optional][in] */ VARIANT Tag,
    /* [optional][in] */ VARIANT Visible,
    /* [optional][in] */ VARIANT Recursive,
    /* [retval][out] */ CommandBarControl	**CommandBarControl);


void __RPC_STUB ISECommandBar_FindControl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBar_Reset_Proxy( 
    ISECommandBar * This);


void __RPC_STUB ISECommandBar_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBar_ShowPopup_Proxy( 
    ISECommandBar * This,
    /* [optional][in] */ VARIANT x,
    /* [optional][in] */ VARIANT y);


void __RPC_STUB ISECommandBar_ShowPopup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECommandBar_INTERFACE_DEFINED__ */


#ifndef __ISECommandBarControl_INTERFACE_DEFINED__
#define __ISECommandBarControl_INTERFACE_DEFINED__

/* interface ISECommandBarControl */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISECommandBarControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A1831EE-9DA4-11d1-BA98-080036230602")
    ISECommandBarControl : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ LPDISPATCH *Application) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_BeginGroup( 
            /* [retval][out] */ VARIANT_BOOL *BeginGroup) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_BeginGroup( 
            /* [in] */ VARIANT_BOOL BeginGroup) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_BuiltIn( 
            /* [retval][out] */ VARIANT_BOOL *BuiltIn) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_BuiltInFace( 
            /* [retval][out] */ VARIANT_BOOL *BuiltInFace) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_BuiltInFace( 
            /* [in] */ VARIANT_BOOL BuiltInFace) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Caption( 
            /* [retval][out] */ BSTR *Caption) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Caption( 
            /* [in] */ BSTR Caption) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_DescriptionText( 
            /* [retval][out] */ BSTR *DescriptionText) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_DescriptionText( 
            /* [in] */ BSTR DescriptionText) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Enabled) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_FaceId( 
            /* [retval][out] */ long *FaceId) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_FaceId( 
            /* [in] */ long FaceId) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ long *Height) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_HelpContextId( 
            /* [retval][out] */ long *HelpContextId) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_HelpContextId( 
            /* [in] */ long HelpContextId) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_HelpFile( 
            /* [retval][out] */ BSTR *HelpFile) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_HelpFile( 
            /* [in] */ BSTR HelpFile) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Index( 
            /* [retval][out] */ long *Index) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [retval][out] */ long *Left) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_OnAction( 
            /* [retval][out] */ BSTR *OnAction) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_OnAction( 
            /* [in] */ BSTR OnAction) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_ParameterText( 
            /* [retval][out] */ BSTR *ParameterText) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_ParameterText( 
            /* [in] */ BSTR ParameterText) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ CommandBar	**Parent) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShortcutText( 
            /* [retval][out] */ BSTR *ShortcutText) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShortcutText( 
            /* [in] */ BSTR ShortcutText) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Tag( 
            /* [retval][out] */ BSTR *Tag) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Tag( 
            /* [in] */ BSTR Tag) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_TooltipText( 
            /* [retval][out] */ BSTR *TooltipText) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_TooltipText( 
            /* [in] */ BSTR TooltipText) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [retval][out] */ long *Top) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ SeControlType *Type) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *Visible) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL Visible) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ long *Width) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [optional][in] */ VARIANT Temporary) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Execute( void) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Help( void) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE LoadFace( 
            BSTR Face) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECommandBarControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECommandBarControl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECommandBarControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECommandBarControl * This);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ISECommandBarControl * This,
            /* [retval][out] */ LPDISPATCH *Application);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BeginGroup )( 
            ISECommandBarControl * This,
            /* [retval][out] */ VARIANT_BOOL *BeginGroup);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BeginGroup )( 
            ISECommandBarControl * This,
            /* [in] */ VARIANT_BOOL BeginGroup);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuiltIn )( 
            ISECommandBarControl * This,
            /* [retval][out] */ VARIANT_BOOL *BuiltIn);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuiltInFace )( 
            ISECommandBarControl * This,
            /* [retval][out] */ VARIANT_BOOL *BuiltInFace);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BuiltInFace )( 
            ISECommandBarControl * This,
            /* [in] */ VARIANT_BOOL BuiltInFace);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Caption )( 
            ISECommandBarControl * This,
            /* [retval][out] */ BSTR *Caption);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Caption )( 
            ISECommandBarControl * This,
            /* [in] */ BSTR Caption);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DescriptionText )( 
            ISECommandBarControl * This,
            /* [retval][out] */ BSTR *DescriptionText);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DescriptionText )( 
            ISECommandBarControl * This,
            /* [in] */ BSTR DescriptionText);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ISECommandBarControl * This,
            /* [retval][out] */ VARIANT_BOOL *Enabled);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            ISECommandBarControl * This,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FaceId )( 
            ISECommandBarControl * This,
            /* [retval][out] */ long *FaceId);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FaceId )( 
            ISECommandBarControl * This,
            /* [in] */ long FaceId);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            ISECommandBarControl * This,
            /* [retval][out] */ long *Height);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HelpContextId )( 
            ISECommandBarControl * This,
            /* [retval][out] */ long *HelpContextId);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HelpContextId )( 
            ISECommandBarControl * This,
            /* [in] */ long HelpContextId);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HelpFile )( 
            ISECommandBarControl * This,
            /* [retval][out] */ BSTR *HelpFile);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HelpFile )( 
            ISECommandBarControl * This,
            /* [in] */ BSTR HelpFile);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            ISECommandBarControl * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Index )( 
            ISECommandBarControl * This,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Left )( 
            ISECommandBarControl * This,
            /* [retval][out] */ long *Left);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OnAction )( 
            ISECommandBarControl * This,
            /* [retval][out] */ BSTR *OnAction);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OnAction )( 
            ISECommandBarControl * This,
            /* [in] */ BSTR OnAction);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParameterText )( 
            ISECommandBarControl * This,
            /* [retval][out] */ BSTR *ParameterText);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParameterText )( 
            ISECommandBarControl * This,
            /* [in] */ BSTR ParameterText);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ISECommandBarControl * This,
            /* [retval][out] */ CommandBar	**Parent);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShortcutText )( 
            ISECommandBarControl * This,
            /* [retval][out] */ BSTR *ShortcutText);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShortcutText )( 
            ISECommandBarControl * This,
            /* [in] */ BSTR ShortcutText);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tag )( 
            ISECommandBarControl * This,
            /* [retval][out] */ BSTR *Tag);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Tag )( 
            ISECommandBarControl * This,
            /* [in] */ BSTR Tag);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TooltipText )( 
            ISECommandBarControl * This,
            /* [retval][out] */ BSTR *TooltipText);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TooltipText )( 
            ISECommandBarControl * This,
            /* [in] */ BSTR TooltipText);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Top )( 
            ISECommandBarControl * This,
            /* [retval][out] */ long *Top);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISECommandBarControl * This,
            /* [retval][out] */ SeControlType *Type);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ISECommandBarControl * This,
            /* [retval][out] */ VARIANT_BOOL *Visible);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            ISECommandBarControl * This,
            /* [in] */ VARIANT_BOOL Visible);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            ISECommandBarControl * This,
            /* [retval][out] */ long *Width);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ISECommandBarControl * This,
            /* [optional][in] */ VARIANT Temporary);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            ISECommandBarControl * This);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Help )( 
            ISECommandBarControl * This);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFace )( 
            ISECommandBarControl * This,
            BSTR Face);
        
        END_INTERFACE
    } ISECommandBarControlVtbl;

    interface ISECommandBarControl
    {
        CONST_VTBL struct ISECommandBarControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECommandBarControl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECommandBarControl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECommandBarControl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECommandBarControl_get_Application(This,Application)	\
    (This)->lpVtbl -> get_Application(This,Application)

#define ISECommandBarControl_get_BeginGroup(This,BeginGroup)	\
    (This)->lpVtbl -> get_BeginGroup(This,BeginGroup)

#define ISECommandBarControl_put_BeginGroup(This,BeginGroup)	\
    (This)->lpVtbl -> put_BeginGroup(This,BeginGroup)

#define ISECommandBarControl_get_BuiltIn(This,BuiltIn)	\
    (This)->lpVtbl -> get_BuiltIn(This,BuiltIn)

#define ISECommandBarControl_get_BuiltInFace(This,BuiltInFace)	\
    (This)->lpVtbl -> get_BuiltInFace(This,BuiltInFace)

#define ISECommandBarControl_put_BuiltInFace(This,BuiltInFace)	\
    (This)->lpVtbl -> put_BuiltInFace(This,BuiltInFace)

#define ISECommandBarControl_get_Caption(This,Caption)	\
    (This)->lpVtbl -> get_Caption(This,Caption)

#define ISECommandBarControl_put_Caption(This,Caption)	\
    (This)->lpVtbl -> put_Caption(This,Caption)

#define ISECommandBarControl_get_DescriptionText(This,DescriptionText)	\
    (This)->lpVtbl -> get_DescriptionText(This,DescriptionText)

#define ISECommandBarControl_put_DescriptionText(This,DescriptionText)	\
    (This)->lpVtbl -> put_DescriptionText(This,DescriptionText)

#define ISECommandBarControl_get_Enabled(This,Enabled)	\
    (This)->lpVtbl -> get_Enabled(This,Enabled)

#define ISECommandBarControl_put_Enabled(This,Enabled)	\
    (This)->lpVtbl -> put_Enabled(This,Enabled)

#define ISECommandBarControl_get_FaceId(This,FaceId)	\
    (This)->lpVtbl -> get_FaceId(This,FaceId)

#define ISECommandBarControl_put_FaceId(This,FaceId)	\
    (This)->lpVtbl -> put_FaceId(This,FaceId)

#define ISECommandBarControl_get_Height(This,Height)	\
    (This)->lpVtbl -> get_Height(This,Height)

#define ISECommandBarControl_get_HelpContextId(This,HelpContextId)	\
    (This)->lpVtbl -> get_HelpContextId(This,HelpContextId)

#define ISECommandBarControl_put_HelpContextId(This,HelpContextId)	\
    (This)->lpVtbl -> put_HelpContextId(This,HelpContextId)

#define ISECommandBarControl_get_HelpFile(This,HelpFile)	\
    (This)->lpVtbl -> get_HelpFile(This,HelpFile)

#define ISECommandBarControl_put_HelpFile(This,HelpFile)	\
    (This)->lpVtbl -> put_HelpFile(This,HelpFile)

#define ISECommandBarControl_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define ISECommandBarControl_get_Index(This,Index)	\
    (This)->lpVtbl -> get_Index(This,Index)

#define ISECommandBarControl_get_Left(This,Left)	\
    (This)->lpVtbl -> get_Left(This,Left)

#define ISECommandBarControl_get_OnAction(This,OnAction)	\
    (This)->lpVtbl -> get_OnAction(This,OnAction)

#define ISECommandBarControl_put_OnAction(This,OnAction)	\
    (This)->lpVtbl -> put_OnAction(This,OnAction)

#define ISECommandBarControl_get_ParameterText(This,ParameterText)	\
    (This)->lpVtbl -> get_ParameterText(This,ParameterText)

#define ISECommandBarControl_put_ParameterText(This,ParameterText)	\
    (This)->lpVtbl -> put_ParameterText(This,ParameterText)

#define ISECommandBarControl_get_Parent(This,Parent)	\
    (This)->lpVtbl -> get_Parent(This,Parent)

#define ISECommandBarControl_get_ShortcutText(This,ShortcutText)	\
    (This)->lpVtbl -> get_ShortcutText(This,ShortcutText)

#define ISECommandBarControl_put_ShortcutText(This,ShortcutText)	\
    (This)->lpVtbl -> put_ShortcutText(This,ShortcutText)

#define ISECommandBarControl_get_Tag(This,Tag)	\
    (This)->lpVtbl -> get_Tag(This,Tag)

#define ISECommandBarControl_put_Tag(This,Tag)	\
    (This)->lpVtbl -> put_Tag(This,Tag)

#define ISECommandBarControl_get_TooltipText(This,TooltipText)	\
    (This)->lpVtbl -> get_TooltipText(This,TooltipText)

#define ISECommandBarControl_put_TooltipText(This,TooltipText)	\
    (This)->lpVtbl -> put_TooltipText(This,TooltipText)

#define ISECommandBarControl_get_Top(This,Top)	\
    (This)->lpVtbl -> get_Top(This,Top)

#define ISECommandBarControl_get_Type(This,Type)	\
    (This)->lpVtbl -> get_Type(This,Type)

#define ISECommandBarControl_get_Visible(This,Visible)	\
    (This)->lpVtbl -> get_Visible(This,Visible)

#define ISECommandBarControl_put_Visible(This,Visible)	\
    (This)->lpVtbl -> put_Visible(This,Visible)

#define ISECommandBarControl_get_Width(This,Width)	\
    (This)->lpVtbl -> get_Width(This,Width)

#define ISECommandBarControl_Delete(This,Temporary)	\
    (This)->lpVtbl -> Delete(This,Temporary)

#define ISECommandBarControl_Execute(This)	\
    (This)->lpVtbl -> Execute(This)

#define ISECommandBarControl_Help(This)	\
    (This)->lpVtbl -> Help(This)

#define ISECommandBarControl_LoadFace(This,Face)	\
    (This)->lpVtbl -> LoadFace(This,Face)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Application_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ LPDISPATCH *Application);


void __RPC_STUB ISECommandBarControl_get_Application_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_BeginGroup_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ VARIANT_BOOL *BeginGroup);


void __RPC_STUB ISECommandBarControl_get_BeginGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_BeginGroup_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ VARIANT_BOOL BeginGroup);


void __RPC_STUB ISECommandBarControl_put_BeginGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_BuiltIn_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ VARIANT_BOOL *BuiltIn);


void __RPC_STUB ISECommandBarControl_get_BuiltIn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_BuiltInFace_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ VARIANT_BOOL *BuiltInFace);


void __RPC_STUB ISECommandBarControl_get_BuiltInFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_BuiltInFace_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ VARIANT_BOOL BuiltInFace);


void __RPC_STUB ISECommandBarControl_put_BuiltInFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Caption_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ BSTR *Caption);


void __RPC_STUB ISECommandBarControl_get_Caption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_Caption_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ BSTR Caption);


void __RPC_STUB ISECommandBarControl_put_Caption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_DescriptionText_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ BSTR *DescriptionText);


void __RPC_STUB ISECommandBarControl_get_DescriptionText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_DescriptionText_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ BSTR DescriptionText);


void __RPC_STUB ISECommandBarControl_put_DescriptionText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Enabled_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ VARIANT_BOOL *Enabled);


void __RPC_STUB ISECommandBarControl_get_Enabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_Enabled_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ VARIANT_BOOL Enabled);


void __RPC_STUB ISECommandBarControl_put_Enabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_FaceId_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ long *FaceId);


void __RPC_STUB ISECommandBarControl_get_FaceId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_FaceId_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ long FaceId);


void __RPC_STUB ISECommandBarControl_put_FaceId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Height_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ long *Height);


void __RPC_STUB ISECommandBarControl_get_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_HelpContextId_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ long *HelpContextId);


void __RPC_STUB ISECommandBarControl_get_HelpContextId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_HelpContextId_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ long HelpContextId);


void __RPC_STUB ISECommandBarControl_put_HelpContextId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_HelpFile_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ BSTR *HelpFile);


void __RPC_STUB ISECommandBarControl_get_HelpFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_HelpFile_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ BSTR HelpFile);


void __RPC_STUB ISECommandBarControl_put_HelpFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Id_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ long *Id);


void __RPC_STUB ISECommandBarControl_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Index_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ long *Index);


void __RPC_STUB ISECommandBarControl_get_Index_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Left_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ long *Left);


void __RPC_STUB ISECommandBarControl_get_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_OnAction_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ BSTR *OnAction);


void __RPC_STUB ISECommandBarControl_get_OnAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_OnAction_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ BSTR OnAction);


void __RPC_STUB ISECommandBarControl_put_OnAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_ParameterText_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ BSTR *ParameterText);


void __RPC_STUB ISECommandBarControl_get_ParameterText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_ParameterText_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ BSTR ParameterText);


void __RPC_STUB ISECommandBarControl_put_ParameterText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Parent_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ CommandBar	**Parent);


void __RPC_STUB ISECommandBarControl_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_ShortcutText_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ BSTR *ShortcutText);


void __RPC_STUB ISECommandBarControl_get_ShortcutText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_ShortcutText_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ BSTR ShortcutText);


void __RPC_STUB ISECommandBarControl_put_ShortcutText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Tag_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ BSTR *Tag);


void __RPC_STUB ISECommandBarControl_get_Tag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_Tag_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ BSTR Tag);


void __RPC_STUB ISECommandBarControl_put_Tag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_TooltipText_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ BSTR *TooltipText);


void __RPC_STUB ISECommandBarControl_get_TooltipText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_TooltipText_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ BSTR TooltipText);


void __RPC_STUB ISECommandBarControl_put_TooltipText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Top_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ long *Top);


void __RPC_STUB ISECommandBarControl_get_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Type_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ SeControlType *Type);


void __RPC_STUB ISECommandBarControl_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Visible_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ VARIANT_BOOL *Visible);


void __RPC_STUB ISECommandBarControl_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_put_Visible_Proxy( 
    ISECommandBarControl * This,
    /* [in] */ VARIANT_BOOL Visible);


void __RPC_STUB ISECommandBarControl_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_get_Width_Proxy( 
    ISECommandBarControl * This,
    /* [retval][out] */ long *Width);


void __RPC_STUB ISECommandBarControl_get_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_Delete_Proxy( 
    ISECommandBarControl * This,
    /* [optional][in] */ VARIANT Temporary);


void __RPC_STUB ISECommandBarControl_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_Execute_Proxy( 
    ISECommandBarControl * This);


void __RPC_STUB ISECommandBarControl_Execute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_Help_Proxy( 
    ISECommandBarControl * This);


void __RPC_STUB ISECommandBarControl_Help_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBarControl_LoadFace_Proxy( 
    ISECommandBarControl * This,
    BSTR Face);


void __RPC_STUB ISECommandBarControl_LoadFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECommandBarControl_INTERFACE_DEFINED__ */


#ifndef __ISECommandBarControls_INTERFACE_DEFINED__
#define __ISECommandBarControls_INTERFACE_DEFINED__

/* interface ISECommandBarControls */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISECommandBarControls;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A1831ED-9DA4-11d1-BA98-080036230602")
    ISECommandBarControls : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ LPDISPATCH *Application) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ CommandBar	**Parent) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [optional][in] */ VARIANT Type,
            /* [optional][in] */ VARIANT Id,
            /* [optional][in] */ VARIANT Before,
            /* [optional][in] */ VARIANT Temporary,
            /* [retval][out] */ CommandBarControl	**CommandBarControl) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ CommandBarControl	**CommandBarControl) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *Unknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECommandBarControlsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECommandBarControls * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECommandBarControls * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECommandBarControls * This);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ISECommandBarControls * This,
            /* [retval][out] */ LPDISPATCH *Application);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISECommandBarControls * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ISECommandBarControls * This,
            /* [retval][out] */ CommandBar	**Parent);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ISECommandBarControls * This,
            /* [optional][in] */ VARIANT Type,
            /* [optional][in] */ VARIANT Id,
            /* [optional][in] */ VARIANT Before,
            /* [optional][in] */ VARIANT Temporary,
            /* [retval][out] */ CommandBarControl	**CommandBarControl);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            ISECommandBarControls * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ CommandBarControl	**CommandBarControl);
        
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISECommandBarControls * This,
            /* [retval][out] */ LPUNKNOWN *Unknown);
        
        END_INTERFACE
    } ISECommandBarControlsVtbl;

    interface ISECommandBarControls
    {
        CONST_VTBL struct ISECommandBarControlsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECommandBarControls_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECommandBarControls_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECommandBarControls_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECommandBarControls_get_Application(This,Application)	\
    (This)->lpVtbl -> get_Application(This,Application)

#define ISECommandBarControls_get_Count(This,Count)	\
    (This)->lpVtbl -> get_Count(This,Count)

#define ISECommandBarControls_get_Parent(This,Parent)	\
    (This)->lpVtbl -> get_Parent(This,Parent)

#define ISECommandBarControls_Add(This,Type,Id,Before,Temporary,CommandBarControl)	\
    (This)->lpVtbl -> Add(This,Type,Id,Before,Temporary,CommandBarControl)

#define ISECommandBarControls_Item(This,Index,CommandBarControl)	\
    (This)->lpVtbl -> Item(This,Index,CommandBarControl)

#define ISECommandBarControls_get__NewEnum(This,Unknown)	\
    (This)->lpVtbl -> get__NewEnum(This,Unknown)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControls_get_Application_Proxy( 
    ISECommandBarControls * This,
    /* [retval][out] */ LPDISPATCH *Application);


void __RPC_STUB ISECommandBarControls_get_Application_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControls_get_Count_Proxy( 
    ISECommandBarControls * This,
    /* [retval][out] */ long *Count);


void __RPC_STUB ISECommandBarControls_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarControls_get_Parent_Proxy( 
    ISECommandBarControls * This,
    /* [retval][out] */ CommandBar	**Parent);


void __RPC_STUB ISECommandBarControls_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBarControls_Add_Proxy( 
    ISECommandBarControls * This,
    /* [optional][in] */ VARIANT Type,
    /* [optional][in] */ VARIANT Id,
    /* [optional][in] */ VARIANT Before,
    /* [optional][in] */ VARIANT Temporary,
    /* [retval][out] */ CommandBarControl	**CommandBarControl);


void __RPC_STUB ISECommandBarControls_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBarControls_Item_Proxy( 
    ISECommandBarControls * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ CommandBarControl	**CommandBarControl);


void __RPC_STUB ISECommandBarControls_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE ISECommandBarControls_get__NewEnum_Proxy( 
    ISECommandBarControls * This,
    /* [retval][out] */ LPUNKNOWN *Unknown);


void __RPC_STUB ISECommandBarControls_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECommandBarControls_INTERFACE_DEFINED__ */


#ifndef __ISECommandBarPopup_INTERFACE_DEFINED__
#define __ISECommandBarPopup_INTERFACE_DEFINED__

/* interface ISECommandBarPopup */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISECommandBarPopup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A1831EF-9DA4-11d1-BA98-080036230602")
    ISECommandBarPopup : public ISECommandBarControl
    {
    public:
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_CommandBar( 
            /* [retval][out] */ CommandBar	**CommandBar) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Controls( 
            /* [retval][out] */ CommandBarControls	**Controls) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECommandBarPopupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECommandBarPopup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECommandBarPopup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECommandBarPopup * This);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ LPDISPATCH *Application);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BeginGroup )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ VARIANT_BOOL *BeginGroup);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BeginGroup )( 
            ISECommandBarPopup * This,
            /* [in] */ VARIANT_BOOL BeginGroup);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuiltIn )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ VARIANT_BOOL *BuiltIn);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuiltInFace )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ VARIANT_BOOL *BuiltInFace);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BuiltInFace )( 
            ISECommandBarPopup * This,
            /* [in] */ VARIANT_BOOL BuiltInFace);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Caption )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ BSTR *Caption);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Caption )( 
            ISECommandBarPopup * This,
            /* [in] */ BSTR Caption);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DescriptionText )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ BSTR *DescriptionText);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DescriptionText )( 
            ISECommandBarPopup * This,
            /* [in] */ BSTR DescriptionText);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ VARIANT_BOOL *Enabled);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            ISECommandBarPopup * This,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FaceId )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ long *FaceId);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FaceId )( 
            ISECommandBarPopup * This,
            /* [in] */ long FaceId);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ long *Height);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HelpContextId )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ long *HelpContextId);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HelpContextId )( 
            ISECommandBarPopup * This,
            /* [in] */ long HelpContextId);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HelpFile )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ BSTR *HelpFile);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HelpFile )( 
            ISECommandBarPopup * This,
            /* [in] */ BSTR HelpFile);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Index )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Left )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ long *Left);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OnAction )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ BSTR *OnAction);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OnAction )( 
            ISECommandBarPopup * This,
            /* [in] */ BSTR OnAction);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParameterText )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ BSTR *ParameterText);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParameterText )( 
            ISECommandBarPopup * This,
            /* [in] */ BSTR ParameterText);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ CommandBar	**Parent);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShortcutText )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ BSTR *ShortcutText);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShortcutText )( 
            ISECommandBarPopup * This,
            /* [in] */ BSTR ShortcutText);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tag )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ BSTR *Tag);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Tag )( 
            ISECommandBarPopup * This,
            /* [in] */ BSTR Tag);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TooltipText )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ BSTR *TooltipText);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TooltipText )( 
            ISECommandBarPopup * This,
            /* [in] */ BSTR TooltipText);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Top )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ long *Top);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ SeControlType *Type);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ VARIANT_BOOL *Visible);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            ISECommandBarPopup * This,
            /* [in] */ VARIANT_BOOL Visible);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ long *Width);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ISECommandBarPopup * This,
            /* [optional][in] */ VARIANT Temporary);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            ISECommandBarPopup * This);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Help )( 
            ISECommandBarPopup * This);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFace )( 
            ISECommandBarPopup * This,
            BSTR Face);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CommandBar )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ CommandBar	**CommandBar);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Controls )( 
            ISECommandBarPopup * This,
            /* [retval][out] */ CommandBarControls	**Controls);
        
        END_INTERFACE
    } ISECommandBarPopupVtbl;

    interface ISECommandBarPopup
    {
        CONST_VTBL struct ISECommandBarPopupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECommandBarPopup_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECommandBarPopup_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECommandBarPopup_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECommandBarPopup_get_Application(This,Application)	\
    (This)->lpVtbl -> get_Application(This,Application)

#define ISECommandBarPopup_get_BeginGroup(This,BeginGroup)	\
    (This)->lpVtbl -> get_BeginGroup(This,BeginGroup)

#define ISECommandBarPopup_put_BeginGroup(This,BeginGroup)	\
    (This)->lpVtbl -> put_BeginGroup(This,BeginGroup)

#define ISECommandBarPopup_get_BuiltIn(This,BuiltIn)	\
    (This)->lpVtbl -> get_BuiltIn(This,BuiltIn)

#define ISECommandBarPopup_get_BuiltInFace(This,BuiltInFace)	\
    (This)->lpVtbl -> get_BuiltInFace(This,BuiltInFace)

#define ISECommandBarPopup_put_BuiltInFace(This,BuiltInFace)	\
    (This)->lpVtbl -> put_BuiltInFace(This,BuiltInFace)

#define ISECommandBarPopup_get_Caption(This,Caption)	\
    (This)->lpVtbl -> get_Caption(This,Caption)

#define ISECommandBarPopup_put_Caption(This,Caption)	\
    (This)->lpVtbl -> put_Caption(This,Caption)

#define ISECommandBarPopup_get_DescriptionText(This,DescriptionText)	\
    (This)->lpVtbl -> get_DescriptionText(This,DescriptionText)

#define ISECommandBarPopup_put_DescriptionText(This,DescriptionText)	\
    (This)->lpVtbl -> put_DescriptionText(This,DescriptionText)

#define ISECommandBarPopup_get_Enabled(This,Enabled)	\
    (This)->lpVtbl -> get_Enabled(This,Enabled)

#define ISECommandBarPopup_put_Enabled(This,Enabled)	\
    (This)->lpVtbl -> put_Enabled(This,Enabled)

#define ISECommandBarPopup_get_FaceId(This,FaceId)	\
    (This)->lpVtbl -> get_FaceId(This,FaceId)

#define ISECommandBarPopup_put_FaceId(This,FaceId)	\
    (This)->lpVtbl -> put_FaceId(This,FaceId)

#define ISECommandBarPopup_get_Height(This,Height)	\
    (This)->lpVtbl -> get_Height(This,Height)

#define ISECommandBarPopup_get_HelpContextId(This,HelpContextId)	\
    (This)->lpVtbl -> get_HelpContextId(This,HelpContextId)

#define ISECommandBarPopup_put_HelpContextId(This,HelpContextId)	\
    (This)->lpVtbl -> put_HelpContextId(This,HelpContextId)

#define ISECommandBarPopup_get_HelpFile(This,HelpFile)	\
    (This)->lpVtbl -> get_HelpFile(This,HelpFile)

#define ISECommandBarPopup_put_HelpFile(This,HelpFile)	\
    (This)->lpVtbl -> put_HelpFile(This,HelpFile)

#define ISECommandBarPopup_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define ISECommandBarPopup_get_Index(This,Index)	\
    (This)->lpVtbl -> get_Index(This,Index)

#define ISECommandBarPopup_get_Left(This,Left)	\
    (This)->lpVtbl -> get_Left(This,Left)

#define ISECommandBarPopup_get_OnAction(This,OnAction)	\
    (This)->lpVtbl -> get_OnAction(This,OnAction)

#define ISECommandBarPopup_put_OnAction(This,OnAction)	\
    (This)->lpVtbl -> put_OnAction(This,OnAction)

#define ISECommandBarPopup_get_ParameterText(This,ParameterText)	\
    (This)->lpVtbl -> get_ParameterText(This,ParameterText)

#define ISECommandBarPopup_put_ParameterText(This,ParameterText)	\
    (This)->lpVtbl -> put_ParameterText(This,ParameterText)

#define ISECommandBarPopup_get_Parent(This,Parent)	\
    (This)->lpVtbl -> get_Parent(This,Parent)

#define ISECommandBarPopup_get_ShortcutText(This,ShortcutText)	\
    (This)->lpVtbl -> get_ShortcutText(This,ShortcutText)

#define ISECommandBarPopup_put_ShortcutText(This,ShortcutText)	\
    (This)->lpVtbl -> put_ShortcutText(This,ShortcutText)

#define ISECommandBarPopup_get_Tag(This,Tag)	\
    (This)->lpVtbl -> get_Tag(This,Tag)

#define ISECommandBarPopup_put_Tag(This,Tag)	\
    (This)->lpVtbl -> put_Tag(This,Tag)

#define ISECommandBarPopup_get_TooltipText(This,TooltipText)	\
    (This)->lpVtbl -> get_TooltipText(This,TooltipText)

#define ISECommandBarPopup_put_TooltipText(This,TooltipText)	\
    (This)->lpVtbl -> put_TooltipText(This,TooltipText)

#define ISECommandBarPopup_get_Top(This,Top)	\
    (This)->lpVtbl -> get_Top(This,Top)

#define ISECommandBarPopup_get_Type(This,Type)	\
    (This)->lpVtbl -> get_Type(This,Type)

#define ISECommandBarPopup_get_Visible(This,Visible)	\
    (This)->lpVtbl -> get_Visible(This,Visible)

#define ISECommandBarPopup_put_Visible(This,Visible)	\
    (This)->lpVtbl -> put_Visible(This,Visible)

#define ISECommandBarPopup_get_Width(This,Width)	\
    (This)->lpVtbl -> get_Width(This,Width)

#define ISECommandBarPopup_Delete(This,Temporary)	\
    (This)->lpVtbl -> Delete(This,Temporary)

#define ISECommandBarPopup_Execute(This)	\
    (This)->lpVtbl -> Execute(This)

#define ISECommandBarPopup_Help(This)	\
    (This)->lpVtbl -> Help(This)

#define ISECommandBarPopup_LoadFace(This,Face)	\
    (This)->lpVtbl -> LoadFace(This,Face)


#define ISECommandBarPopup_get_CommandBar(This,CommandBar)	\
    (This)->lpVtbl -> get_CommandBar(This,CommandBar)

#define ISECommandBarPopup_get_Controls(This,Controls)	\
    (This)->lpVtbl -> get_Controls(This,Controls)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarPopup_get_CommandBar_Proxy( 
    ISECommandBarPopup * This,
    /* [retval][out] */ CommandBar	**CommandBar);


void __RPC_STUB ISECommandBarPopup_get_CommandBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarPopup_get_Controls_Proxy( 
    ISECommandBarPopup * This,
    /* [retval][out] */ CommandBarControls	**Controls);


void __RPC_STUB ISECommandBarPopup_get_Controls_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECommandBarPopup_INTERFACE_DEFINED__ */


#ifndef __DISECommandBarButtonEvents_DISPINTERFACE_DEFINED__
#define __DISECommandBarButtonEvents_DISPINTERFACE_DEFINED__

/* dispinterface DISECommandBarButtonEvents */
/* [helpstring][helpcontext][nonextensible][uuid] */ 


EXTERN_C const IID DIID_DISECommandBarButtonEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1d3da506-9bff-11d1-ba96-080036230602")
    DISECommandBarButtonEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISECommandBarButtonEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISECommandBarButtonEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISECommandBarButtonEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISECommandBarButtonEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISECommandBarButtonEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISECommandBarButtonEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISECommandBarButtonEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISECommandBarButtonEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISECommandBarButtonEventsVtbl;

    interface DISECommandBarButtonEvents
    {
        CONST_VTBL struct DISECommandBarButtonEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISECommandBarButtonEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISECommandBarButtonEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISECommandBarButtonEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISECommandBarButtonEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISECommandBarButtonEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISECommandBarButtonEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISECommandBarButtonEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISECommandBarButtonEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISECommandBarButton_INTERFACE_DEFINED__
#define __ISECommandBarButton_INTERFACE_DEFINED__

/* interface ISECommandBarButton */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISECommandBarButton;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A1831F1-9DA4-11d1-BA98-080036230602")
    ISECommandBarButton : public ISECommandBarControl
    {
    public:
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_CommandBarButtonEvents( 
            /* [retval][out] */ CommandBarButtonEvents	**CommandBarButtonEvents) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ SeButtonState *State) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ SeButtonState State) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Style( 
            /* [retval][out] */ SeButtonStyle *Style) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Style( 
            /* [in] */ SeButtonStyle Style) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECommandBarButtonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECommandBarButton * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECommandBarButton * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECommandBarButton * This);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ISECommandBarButton * This,
            /* [retval][out] */ LPDISPATCH *Application);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BeginGroup )( 
            ISECommandBarButton * This,
            /* [retval][out] */ VARIANT_BOOL *BeginGroup);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BeginGroup )( 
            ISECommandBarButton * This,
            /* [in] */ VARIANT_BOOL BeginGroup);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuiltIn )( 
            ISECommandBarButton * This,
            /* [retval][out] */ VARIANT_BOOL *BuiltIn);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuiltInFace )( 
            ISECommandBarButton * This,
            /* [retval][out] */ VARIANT_BOOL *BuiltInFace);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BuiltInFace )( 
            ISECommandBarButton * This,
            /* [in] */ VARIANT_BOOL BuiltInFace);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Caption )( 
            ISECommandBarButton * This,
            /* [retval][out] */ BSTR *Caption);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Caption )( 
            ISECommandBarButton * This,
            /* [in] */ BSTR Caption);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DescriptionText )( 
            ISECommandBarButton * This,
            /* [retval][out] */ BSTR *DescriptionText);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DescriptionText )( 
            ISECommandBarButton * This,
            /* [in] */ BSTR DescriptionText);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ISECommandBarButton * This,
            /* [retval][out] */ VARIANT_BOOL *Enabled);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            ISECommandBarButton * This,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FaceId )( 
            ISECommandBarButton * This,
            /* [retval][out] */ long *FaceId);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FaceId )( 
            ISECommandBarButton * This,
            /* [in] */ long FaceId);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            ISECommandBarButton * This,
            /* [retval][out] */ long *Height);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HelpContextId )( 
            ISECommandBarButton * This,
            /* [retval][out] */ long *HelpContextId);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HelpContextId )( 
            ISECommandBarButton * This,
            /* [in] */ long HelpContextId);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HelpFile )( 
            ISECommandBarButton * This,
            /* [retval][out] */ BSTR *HelpFile);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HelpFile )( 
            ISECommandBarButton * This,
            /* [in] */ BSTR HelpFile);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            ISECommandBarButton * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Index )( 
            ISECommandBarButton * This,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Left )( 
            ISECommandBarButton * This,
            /* [retval][out] */ long *Left);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OnAction )( 
            ISECommandBarButton * This,
            /* [retval][out] */ BSTR *OnAction);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OnAction )( 
            ISECommandBarButton * This,
            /* [in] */ BSTR OnAction);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParameterText )( 
            ISECommandBarButton * This,
            /* [retval][out] */ BSTR *ParameterText);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParameterText )( 
            ISECommandBarButton * This,
            /* [in] */ BSTR ParameterText);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ISECommandBarButton * This,
            /* [retval][out] */ CommandBar	**Parent);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShortcutText )( 
            ISECommandBarButton * This,
            /* [retval][out] */ BSTR *ShortcutText);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShortcutText )( 
            ISECommandBarButton * This,
            /* [in] */ BSTR ShortcutText);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tag )( 
            ISECommandBarButton * This,
            /* [retval][out] */ BSTR *Tag);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Tag )( 
            ISECommandBarButton * This,
            /* [in] */ BSTR Tag);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TooltipText )( 
            ISECommandBarButton * This,
            /* [retval][out] */ BSTR *TooltipText);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TooltipText )( 
            ISECommandBarButton * This,
            /* [in] */ BSTR TooltipText);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Top )( 
            ISECommandBarButton * This,
            /* [retval][out] */ long *Top);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISECommandBarButton * This,
            /* [retval][out] */ SeControlType *Type);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ISECommandBarButton * This,
            /* [retval][out] */ VARIANT_BOOL *Visible);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            ISECommandBarButton * This,
            /* [in] */ VARIANT_BOOL Visible);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            ISECommandBarButton * This,
            /* [retval][out] */ long *Width);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ISECommandBarButton * This,
            /* [optional][in] */ VARIANT Temporary);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            ISECommandBarButton * This);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Help )( 
            ISECommandBarButton * This);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFace )( 
            ISECommandBarButton * This,
            BSTR Face);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CommandBarButtonEvents )( 
            ISECommandBarButton * This,
            /* [retval][out] */ CommandBarButtonEvents	**CommandBarButtonEvents);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            ISECommandBarButton * This,
            /* [retval][out] */ SeButtonState *State);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            ISECommandBarButton * This,
            /* [in] */ SeButtonState State);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Style )( 
            ISECommandBarButton * This,
            /* [retval][out] */ SeButtonStyle *Style);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Style )( 
            ISECommandBarButton * This,
            /* [in] */ SeButtonStyle Style);
        
        END_INTERFACE
    } ISECommandBarButtonVtbl;

    interface ISECommandBarButton
    {
        CONST_VTBL struct ISECommandBarButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECommandBarButton_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECommandBarButton_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECommandBarButton_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECommandBarButton_get_Application(This,Application)	\
    (This)->lpVtbl -> get_Application(This,Application)

#define ISECommandBarButton_get_BeginGroup(This,BeginGroup)	\
    (This)->lpVtbl -> get_BeginGroup(This,BeginGroup)

#define ISECommandBarButton_put_BeginGroup(This,BeginGroup)	\
    (This)->lpVtbl -> put_BeginGroup(This,BeginGroup)

#define ISECommandBarButton_get_BuiltIn(This,BuiltIn)	\
    (This)->lpVtbl -> get_BuiltIn(This,BuiltIn)

#define ISECommandBarButton_get_BuiltInFace(This,BuiltInFace)	\
    (This)->lpVtbl -> get_BuiltInFace(This,BuiltInFace)

#define ISECommandBarButton_put_BuiltInFace(This,BuiltInFace)	\
    (This)->lpVtbl -> put_BuiltInFace(This,BuiltInFace)

#define ISECommandBarButton_get_Caption(This,Caption)	\
    (This)->lpVtbl -> get_Caption(This,Caption)

#define ISECommandBarButton_put_Caption(This,Caption)	\
    (This)->lpVtbl -> put_Caption(This,Caption)

#define ISECommandBarButton_get_DescriptionText(This,DescriptionText)	\
    (This)->lpVtbl -> get_DescriptionText(This,DescriptionText)

#define ISECommandBarButton_put_DescriptionText(This,DescriptionText)	\
    (This)->lpVtbl -> put_DescriptionText(This,DescriptionText)

#define ISECommandBarButton_get_Enabled(This,Enabled)	\
    (This)->lpVtbl -> get_Enabled(This,Enabled)

#define ISECommandBarButton_put_Enabled(This,Enabled)	\
    (This)->lpVtbl -> put_Enabled(This,Enabled)

#define ISECommandBarButton_get_FaceId(This,FaceId)	\
    (This)->lpVtbl -> get_FaceId(This,FaceId)

#define ISECommandBarButton_put_FaceId(This,FaceId)	\
    (This)->lpVtbl -> put_FaceId(This,FaceId)

#define ISECommandBarButton_get_Height(This,Height)	\
    (This)->lpVtbl -> get_Height(This,Height)

#define ISECommandBarButton_get_HelpContextId(This,HelpContextId)	\
    (This)->lpVtbl -> get_HelpContextId(This,HelpContextId)

#define ISECommandBarButton_put_HelpContextId(This,HelpContextId)	\
    (This)->lpVtbl -> put_HelpContextId(This,HelpContextId)

#define ISECommandBarButton_get_HelpFile(This,HelpFile)	\
    (This)->lpVtbl -> get_HelpFile(This,HelpFile)

#define ISECommandBarButton_put_HelpFile(This,HelpFile)	\
    (This)->lpVtbl -> put_HelpFile(This,HelpFile)

#define ISECommandBarButton_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define ISECommandBarButton_get_Index(This,Index)	\
    (This)->lpVtbl -> get_Index(This,Index)

#define ISECommandBarButton_get_Left(This,Left)	\
    (This)->lpVtbl -> get_Left(This,Left)

#define ISECommandBarButton_get_OnAction(This,OnAction)	\
    (This)->lpVtbl -> get_OnAction(This,OnAction)

#define ISECommandBarButton_put_OnAction(This,OnAction)	\
    (This)->lpVtbl -> put_OnAction(This,OnAction)

#define ISECommandBarButton_get_ParameterText(This,ParameterText)	\
    (This)->lpVtbl -> get_ParameterText(This,ParameterText)

#define ISECommandBarButton_put_ParameterText(This,ParameterText)	\
    (This)->lpVtbl -> put_ParameterText(This,ParameterText)

#define ISECommandBarButton_get_Parent(This,Parent)	\
    (This)->lpVtbl -> get_Parent(This,Parent)

#define ISECommandBarButton_get_ShortcutText(This,ShortcutText)	\
    (This)->lpVtbl -> get_ShortcutText(This,ShortcutText)

#define ISECommandBarButton_put_ShortcutText(This,ShortcutText)	\
    (This)->lpVtbl -> put_ShortcutText(This,ShortcutText)

#define ISECommandBarButton_get_Tag(This,Tag)	\
    (This)->lpVtbl -> get_Tag(This,Tag)

#define ISECommandBarButton_put_Tag(This,Tag)	\
    (This)->lpVtbl -> put_Tag(This,Tag)

#define ISECommandBarButton_get_TooltipText(This,TooltipText)	\
    (This)->lpVtbl -> get_TooltipText(This,TooltipText)

#define ISECommandBarButton_put_TooltipText(This,TooltipText)	\
    (This)->lpVtbl -> put_TooltipText(This,TooltipText)

#define ISECommandBarButton_get_Top(This,Top)	\
    (This)->lpVtbl -> get_Top(This,Top)

#define ISECommandBarButton_get_Type(This,Type)	\
    (This)->lpVtbl -> get_Type(This,Type)

#define ISECommandBarButton_get_Visible(This,Visible)	\
    (This)->lpVtbl -> get_Visible(This,Visible)

#define ISECommandBarButton_put_Visible(This,Visible)	\
    (This)->lpVtbl -> put_Visible(This,Visible)

#define ISECommandBarButton_get_Width(This,Width)	\
    (This)->lpVtbl -> get_Width(This,Width)

#define ISECommandBarButton_Delete(This,Temporary)	\
    (This)->lpVtbl -> Delete(This,Temporary)

#define ISECommandBarButton_Execute(This)	\
    (This)->lpVtbl -> Execute(This)

#define ISECommandBarButton_Help(This)	\
    (This)->lpVtbl -> Help(This)

#define ISECommandBarButton_LoadFace(This,Face)	\
    (This)->lpVtbl -> LoadFace(This,Face)


#define ISECommandBarButton_get_CommandBarButtonEvents(This,CommandBarButtonEvents)	\
    (This)->lpVtbl -> get_CommandBarButtonEvents(This,CommandBarButtonEvents)

#define ISECommandBarButton_get_State(This,State)	\
    (This)->lpVtbl -> get_State(This,State)

#define ISECommandBarButton_put_State(This,State)	\
    (This)->lpVtbl -> put_State(This,State)

#define ISECommandBarButton_get_Style(This,Style)	\
    (This)->lpVtbl -> get_Style(This,Style)

#define ISECommandBarButton_put_Style(This,Style)	\
    (This)->lpVtbl -> put_Style(This,Style)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarButton_get_CommandBarButtonEvents_Proxy( 
    ISECommandBarButton * This,
    /* [retval][out] */ CommandBarButtonEvents	**CommandBarButtonEvents);


void __RPC_STUB ISECommandBarButton_get_CommandBarButtonEvents_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarButton_get_State_Proxy( 
    ISECommandBarButton * This,
    /* [retval][out] */ SeButtonState *State);


void __RPC_STUB ISECommandBarButton_get_State_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarButton_put_State_Proxy( 
    ISECommandBarButton * This,
    /* [in] */ SeButtonState State);


void __RPC_STUB ISECommandBarButton_put_State_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBarButton_get_Style_Proxy( 
    ISECommandBarButton * This,
    /* [retval][out] */ SeButtonStyle *Style);


void __RPC_STUB ISECommandBarButton_get_Style_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBarButton_put_Style_Proxy( 
    ISECommandBarButton * This,
    /* [in] */ SeButtonStyle Style);


void __RPC_STUB ISECommandBarButton_put_Style_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECommandBarButton_INTERFACE_DEFINED__ */


#ifndef __ISECommandBars_INTERFACE_DEFINED__
#define __ISECommandBars_INTERFACE_DEFINED__

/* interface ISECommandBars */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISECommandBars;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A1831F3-9DA4-11d1-BA98-080036230602")
    ISECommandBars : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveMenuBar( 
            /* [retval][out] */ CommandBar	**CommandBar) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IDispatch **Application) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayTooltips( 
            /* [retval][out] */ VARIANT_BOOL *DisplayTooltips) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayTooltips( 
            /* [in] */ VARIANT_BOOL DisplayTooltips) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_LargeButtons( 
            /* [retval][out] */ VARIANT_BOOL *LargeButtons) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_LargeButtons( 
            /* [in] */ VARIANT_BOOL LargeButtons) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ LPDISPATCH *Parent) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [optional][in] */ VARIANT Name,
            /* [optional][in] */ VARIANT Position,
            /* [optional][in] */ VARIANT MenuBar,
            /* [optional][in] */ VARIANT Temporary,
            /* [retval][out] */ CommandBar	**CommandBar) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE FindControl( 
            /* [optional][in] */ VARIANT Type,
            /* [optional][in] */ VARIANT Id,
            /* [optional][in] */ VARIANT Tag,
            /* [optional][in] */ VARIANT Visible,
            /* [retval][out] */ CommandBarControl	**CommandBarControl) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ CommandBar	**CommandBar) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *Unknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECommandBarsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECommandBars * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECommandBars * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECommandBars * This);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveMenuBar )( 
            ISECommandBars * This,
            /* [retval][out] */ CommandBar	**CommandBar);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ISECommandBars * This,
            /* [retval][out] */ IDispatch **Application);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISECommandBars * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayTooltips )( 
            ISECommandBars * This,
            /* [retval][out] */ VARIANT_BOOL *DisplayTooltips);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayTooltips )( 
            ISECommandBars * This,
            /* [in] */ VARIANT_BOOL DisplayTooltips);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LargeButtons )( 
            ISECommandBars * This,
            /* [retval][out] */ VARIANT_BOOL *LargeButtons);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LargeButtons )( 
            ISECommandBars * This,
            /* [in] */ VARIANT_BOOL LargeButtons);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ISECommandBars * This,
            /* [retval][out] */ LPDISPATCH *Parent);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ISECommandBars * This,
            /* [optional][in] */ VARIANT Name,
            /* [optional][in] */ VARIANT Position,
            /* [optional][in] */ VARIANT MenuBar,
            /* [optional][in] */ VARIANT Temporary,
            /* [retval][out] */ CommandBar	**CommandBar);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *FindControl )( 
            ISECommandBars * This,
            /* [optional][in] */ VARIANT Type,
            /* [optional][in] */ VARIANT Id,
            /* [optional][in] */ VARIANT Tag,
            /* [optional][in] */ VARIANT Visible,
            /* [retval][out] */ CommandBarControl	**CommandBarControl);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            ISECommandBars * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ CommandBar	**CommandBar);
        
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISECommandBars * This,
            /* [retval][out] */ LPUNKNOWN *Unknown);
        
        END_INTERFACE
    } ISECommandBarsVtbl;

    interface ISECommandBars
    {
        CONST_VTBL struct ISECommandBarsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECommandBars_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECommandBars_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECommandBars_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECommandBars_get_ActiveMenuBar(This,CommandBar)	\
    (This)->lpVtbl -> get_ActiveMenuBar(This,CommandBar)

#define ISECommandBars_get_Application(This,Application)	\
    (This)->lpVtbl -> get_Application(This,Application)

#define ISECommandBars_get_Count(This,Count)	\
    (This)->lpVtbl -> get_Count(This,Count)

#define ISECommandBars_get_DisplayTooltips(This,DisplayTooltips)	\
    (This)->lpVtbl -> get_DisplayTooltips(This,DisplayTooltips)

#define ISECommandBars_put_DisplayTooltips(This,DisplayTooltips)	\
    (This)->lpVtbl -> put_DisplayTooltips(This,DisplayTooltips)

#define ISECommandBars_get_LargeButtons(This,LargeButtons)	\
    (This)->lpVtbl -> get_LargeButtons(This,LargeButtons)

#define ISECommandBars_put_LargeButtons(This,LargeButtons)	\
    (This)->lpVtbl -> put_LargeButtons(This,LargeButtons)

#define ISECommandBars_get_Parent(This,Parent)	\
    (This)->lpVtbl -> get_Parent(This,Parent)

#define ISECommandBars_Add(This,Name,Position,MenuBar,Temporary,CommandBar)	\
    (This)->lpVtbl -> Add(This,Name,Position,MenuBar,Temporary,CommandBar)

#define ISECommandBars_FindControl(This,Type,Id,Tag,Visible,CommandBarControl)	\
    (This)->lpVtbl -> FindControl(This,Type,Id,Tag,Visible,CommandBarControl)

#define ISECommandBars_Item(This,Index,CommandBar)	\
    (This)->lpVtbl -> Item(This,Index,CommandBar)

#define ISECommandBars_get__NewEnum(This,Unknown)	\
    (This)->lpVtbl -> get__NewEnum(This,Unknown)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBars_get_ActiveMenuBar_Proxy( 
    ISECommandBars * This,
    /* [retval][out] */ CommandBar	**CommandBar);


void __RPC_STUB ISECommandBars_get_ActiveMenuBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBars_get_Application_Proxy( 
    ISECommandBars * This,
    /* [retval][out] */ IDispatch **Application);


void __RPC_STUB ISECommandBars_get_Application_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBars_get_Count_Proxy( 
    ISECommandBars * This,
    /* [retval][out] */ long *Count);


void __RPC_STUB ISECommandBars_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBars_get_DisplayTooltips_Proxy( 
    ISECommandBars * This,
    /* [retval][out] */ VARIANT_BOOL *DisplayTooltips);


void __RPC_STUB ISECommandBars_get_DisplayTooltips_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBars_put_DisplayTooltips_Proxy( 
    ISECommandBars * This,
    /* [in] */ VARIANT_BOOL DisplayTooltips);


void __RPC_STUB ISECommandBars_put_DisplayTooltips_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBars_get_LargeButtons_Proxy( 
    ISECommandBars * This,
    /* [retval][out] */ VARIANT_BOOL *LargeButtons);


void __RPC_STUB ISECommandBars_get_LargeButtons_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISECommandBars_put_LargeButtons_Proxy( 
    ISECommandBars * This,
    /* [in] */ VARIANT_BOOL LargeButtons);


void __RPC_STUB ISECommandBars_put_LargeButtons_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISECommandBars_get_Parent_Proxy( 
    ISECommandBars * This,
    /* [retval][out] */ LPDISPATCH *Parent);


void __RPC_STUB ISECommandBars_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBars_Add_Proxy( 
    ISECommandBars * This,
    /* [optional][in] */ VARIANT Name,
    /* [optional][in] */ VARIANT Position,
    /* [optional][in] */ VARIANT MenuBar,
    /* [optional][in] */ VARIANT Temporary,
    /* [retval][out] */ CommandBar	**CommandBar);


void __RPC_STUB ISECommandBars_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBars_FindControl_Proxy( 
    ISECommandBars * This,
    /* [optional][in] */ VARIANT Type,
    /* [optional][in] */ VARIANT Id,
    /* [optional][in] */ VARIANT Tag,
    /* [optional][in] */ VARIANT Visible,
    /* [retval][out] */ CommandBarControl	**CommandBarControl);


void __RPC_STUB ISECommandBars_FindControl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISECommandBars_Item_Proxy( 
    ISECommandBars * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ CommandBar	**CommandBar);


void __RPC_STUB ISECommandBars_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE ISECommandBars_get__NewEnum_Proxy( 
    ISECommandBars * This,
    /* [retval][out] */ LPUNKNOWN *Unknown);


void __RPC_STUB ISECommandBars_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECommandBars_INTERFACE_DEFINED__ */


#ifndef __ISEKeyBinding_INTERFACE_DEFINED__
#define __ISEKeyBinding_INTERFACE_DEFINED__

/* interface ISEKeyBinding */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISEKeyBinding;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CA442117-2B8D-4346-8501-38E1E3B52AEB")
    ISEKeyBinding : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ LPDISPATCH *Parent) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_CommandID( 
            /* [retval][out] */ long *CommandID) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_CommandString( 
            /* [retval][out] */ BSTR *CommandString) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyString( 
            /* [retval][out] */ BSTR *KeyString) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyCode( 
            /* [retval][out] */ long *KeyCode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEKeyBindingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEKeyBinding * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEKeyBinding * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEKeyBinding * This);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ISEKeyBinding * This,
            /* [retval][out] */ LPDISPATCH *Parent);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CommandID )( 
            ISEKeyBinding * This,
            /* [retval][out] */ long *CommandID);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CommandString )( 
            ISEKeyBinding * This,
            /* [retval][out] */ BSTR *CommandString);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyString )( 
            ISEKeyBinding * This,
            /* [retval][out] */ BSTR *KeyString);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyCode )( 
            ISEKeyBinding * This,
            /* [retval][out] */ long *KeyCode);
        
        END_INTERFACE
    } ISEKeyBindingVtbl;

    interface ISEKeyBinding
    {
        CONST_VTBL struct ISEKeyBindingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEKeyBinding_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEKeyBinding_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEKeyBinding_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEKeyBinding_get_Parent(This,Parent)	\
    (This)->lpVtbl -> get_Parent(This,Parent)

#define ISEKeyBinding_get_CommandID(This,CommandID)	\
    (This)->lpVtbl -> get_CommandID(This,CommandID)

#define ISEKeyBinding_get_CommandString(This,CommandString)	\
    (This)->lpVtbl -> get_CommandString(This,CommandString)

#define ISEKeyBinding_get_KeyString(This,KeyString)	\
    (This)->lpVtbl -> get_KeyString(This,KeyString)

#define ISEKeyBinding_get_KeyCode(This,KeyCode)	\
    (This)->lpVtbl -> get_KeyCode(This,KeyCode)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEKeyBinding_get_Parent_Proxy( 
    ISEKeyBinding * This,
    /* [retval][out] */ LPDISPATCH *Parent);


void __RPC_STUB ISEKeyBinding_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEKeyBinding_get_CommandID_Proxy( 
    ISEKeyBinding * This,
    /* [retval][out] */ long *CommandID);


void __RPC_STUB ISEKeyBinding_get_CommandID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEKeyBinding_get_CommandString_Proxy( 
    ISEKeyBinding * This,
    /* [retval][out] */ BSTR *CommandString);


void __RPC_STUB ISEKeyBinding_get_CommandString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEKeyBinding_get_KeyString_Proxy( 
    ISEKeyBinding * This,
    /* [retval][out] */ BSTR *KeyString);


void __RPC_STUB ISEKeyBinding_get_KeyString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEKeyBinding_get_KeyCode_Proxy( 
    ISEKeyBinding * This,
    /* [retval][out] */ long *KeyCode);


void __RPC_STUB ISEKeyBinding_get_KeyCode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEKeyBinding_INTERFACE_DEFINED__ */


#ifndef __ISEAccelerator_INTERFACE_DEFINED__
#define __ISEAccelerator_INTERFACE_DEFINED__

/* interface ISEAccelerator */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISEAccelerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD1A3CC8-AE28-4d33-B9F9-58E2EA159F5D")
    ISEAccelerator : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ LPDISPATCH *Parent) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ KeyBinding	**ppKeyBinding) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *Unknown) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ AcceleratorTypeConstants *Type) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long KeyCode) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ long CommandId,
            /* [in] */ long KeyCode,
            /* [retval][out] */ KeyBinding	**ppKeyBinding) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE KeyBinding( 
            /* [in] */ long KeyCode,
            /* [retval][out] */ KeyBinding	**ppKeyBinding) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE BuildKeyCode( 
            /* [in] */ long KeyModifier,
            /* [in] */ long Key,
            /* [retval][out] */ long *KeyCode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEAcceleratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEAccelerator * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEAccelerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEAccelerator * This);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISEAccelerator * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ISEAccelerator * This,
            /* [retval][out] */ LPDISPATCH *Parent);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            ISEAccelerator * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ KeyBinding	**ppKeyBinding);
        
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISEAccelerator * This,
            /* [retval][out] */ LPUNKNOWN *Unknown);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISEAccelerator * This,
            /* [retval][out] */ AcceleratorTypeConstants *Type);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            ISEAccelerator * This);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ISEAccelerator * This,
            /* [in] */ long KeyCode);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ISEAccelerator * This,
            /* [in] */ long CommandId,
            /* [in] */ long KeyCode,
            /* [retval][out] */ KeyBinding	**ppKeyBinding);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *KeyBinding )( 
            ISEAccelerator * This,
            /* [in] */ long KeyCode,
            /* [retval][out] */ KeyBinding	**ppKeyBinding);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *BuildKeyCode )( 
            ISEAccelerator * This,
            /* [in] */ long KeyModifier,
            /* [in] */ long Key,
            /* [retval][out] */ long *KeyCode);
        
        END_INTERFACE
    } ISEAcceleratorVtbl;

    interface ISEAccelerator
    {
        CONST_VTBL struct ISEAcceleratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEAccelerator_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEAccelerator_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEAccelerator_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEAccelerator_get_Count(This,Count)	\
    (This)->lpVtbl -> get_Count(This,Count)

#define ISEAccelerator_get_Parent(This,Parent)	\
    (This)->lpVtbl -> get_Parent(This,Parent)

#define ISEAccelerator_Item(This,Index,ppKeyBinding)	\
    (This)->lpVtbl -> Item(This,Index,ppKeyBinding)

#define ISEAccelerator_get__NewEnum(This,Unknown)	\
    (This)->lpVtbl -> get__NewEnum(This,Unknown)

#define ISEAccelerator_get_Type(This,Type)	\
    (This)->lpVtbl -> get_Type(This,Type)

#define ISEAccelerator_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define ISEAccelerator_Remove(This,KeyCode)	\
    (This)->lpVtbl -> Remove(This,KeyCode)

#define ISEAccelerator_Add(This,CommandId,KeyCode,ppKeyBinding)	\
    (This)->lpVtbl -> Add(This,CommandId,KeyCode,ppKeyBinding)

#define ISEAccelerator_KeyBinding(This,KeyCode,ppKeyBinding)	\
    (This)->lpVtbl -> KeyBinding(This,KeyCode,ppKeyBinding)

#define ISEAccelerator_BuildKeyCode(This,KeyModifier,Key,KeyCode)	\
    (This)->lpVtbl -> BuildKeyCode(This,KeyModifier,Key,KeyCode)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAccelerator_get_Count_Proxy( 
    ISEAccelerator * This,
    /* [retval][out] */ long *Count);


void __RPC_STUB ISEAccelerator_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAccelerator_get_Parent_Proxy( 
    ISEAccelerator * This,
    /* [retval][out] */ LPDISPATCH *Parent);


void __RPC_STUB ISEAccelerator_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISEAccelerator_Item_Proxy( 
    ISEAccelerator * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ KeyBinding	**ppKeyBinding);


void __RPC_STUB ISEAccelerator_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE ISEAccelerator_get__NewEnum_Proxy( 
    ISEAccelerator * This,
    /* [retval][out] */ LPUNKNOWN *Unknown);


void __RPC_STUB ISEAccelerator_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAccelerator_get_Type_Proxy( 
    ISEAccelerator * This,
    /* [retval][out] */ AcceleratorTypeConstants *Type);


void __RPC_STUB ISEAccelerator_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISEAccelerator_Reset_Proxy( 
    ISEAccelerator * This);


void __RPC_STUB ISEAccelerator_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISEAccelerator_Remove_Proxy( 
    ISEAccelerator * This,
    /* [in] */ long KeyCode);


void __RPC_STUB ISEAccelerator_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISEAccelerator_Add_Proxy( 
    ISEAccelerator * This,
    /* [in] */ long CommandId,
    /* [in] */ long KeyCode,
    /* [retval][out] */ KeyBinding	**ppKeyBinding);


void __RPC_STUB ISEAccelerator_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISEAccelerator_KeyBinding_Proxy( 
    ISEAccelerator * This,
    /* [in] */ long KeyCode,
    /* [retval][out] */ KeyBinding	**ppKeyBinding);


void __RPC_STUB ISEAccelerator_KeyBinding_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISEAccelerator_BuildKeyCode_Proxy( 
    ISEAccelerator * This,
    /* [in] */ long KeyModifier,
    /* [in] */ long Key,
    /* [retval][out] */ long *KeyCode);


void __RPC_STUB ISEAccelerator_BuildKeyCode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEAccelerator_INTERFACE_DEFINED__ */


#ifndef __ISEAccelerators_INTERFACE_DEFINED__
#define __ISEAccelerators_INTERFACE_DEFINED__

/* interface ISEAccelerators */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISEAccelerators;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3BBFD6AC-92C9-4028-A704-5ED42DA265F6")
    ISEAccelerators : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ LPDISPATCH *Parent) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ Accelerator	**ppAccelerator) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *Unknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEAcceleratorsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEAccelerators * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEAccelerators * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEAccelerators * This);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISEAccelerators * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ISEAccelerators * This,
            /* [retval][out] */ LPDISPATCH *Parent);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            ISEAccelerators * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ Accelerator	**ppAccelerator);
        
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISEAccelerators * This,
            /* [retval][out] */ LPUNKNOWN *Unknown);
        
        END_INTERFACE
    } ISEAcceleratorsVtbl;

    interface ISEAccelerators
    {
        CONST_VTBL struct ISEAcceleratorsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEAccelerators_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEAccelerators_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEAccelerators_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEAccelerators_get_Count(This,Count)	\
    (This)->lpVtbl -> get_Count(This,Count)

#define ISEAccelerators_get_Parent(This,Parent)	\
    (This)->lpVtbl -> get_Parent(This,Parent)

#define ISEAccelerators_Item(This,Index,ppAccelerator)	\
    (This)->lpVtbl -> Item(This,Index,ppAccelerator)

#define ISEAccelerators_get__NewEnum(This,Unknown)	\
    (This)->lpVtbl -> get__NewEnum(This,Unknown)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAccelerators_get_Count_Proxy( 
    ISEAccelerators * This,
    /* [retval][out] */ long *Count);


void __RPC_STUB ISEAccelerators_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAccelerators_get_Parent_Proxy( 
    ISEAccelerators * This,
    /* [retval][out] */ LPDISPATCH *Parent);


void __RPC_STUB ISEAccelerators_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISEAccelerators_Item_Proxy( 
    ISEAccelerators * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ Accelerator	**ppAccelerator);


void __RPC_STUB ISEAccelerators_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE ISEAccelerators_get__NewEnum_Proxy( 
    ISEAccelerators * This,
    /* [retval][out] */ LPUNKNOWN *Unknown);


void __RPC_STUB ISEAccelerators_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEAccelerators_INTERFACE_DEFINED__ */


#ifndef __ISEMouse_INTERFACE_DEFINED__
#define __ISEMouse_INTERFACE_DEFINED__

/* interface ISEMouse */
/* [oleautomation][hidden][helpstring][helpcontext][uuid][object] */ 


EXTERN_C const IID IID_ISEMouse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F3484608-2AF7-11d1-BA2F-080036230602")
    ISEMouse : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ScaleMode( 
            /* [in] */ long lScaleMode) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ScaleMode( 
            /* [retval][out] */ long *plScaleMode) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_EnabledMove( 
            /* [retval][out] */ VARIANT_BOOL *pbMoveEnabled) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_EnabledMove( 
            /* [in] */ VARIANT_BOOL bMoveEnabled) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastEventWindow( 
            /* [retval][out] */ LPDISPATCH *pWindowDispatch) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastUpEventWindow( 
            /* [retval][out] */ LPDISPATCH *pWindowDispatch) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastDownEventWindow( 
            /* [retval][out] */ LPDISPATCH *pWindowDispatch) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastMoveEventWindow( 
            /* [retval][out] */ LPDISPATCH *pWindowDispatch) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastEventShift( 
            /* [retval][out] */ short *pShift) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastUpEventShift( 
            /* [retval][out] */ short *pShift) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastDownEventShift( 
            /* [retval][out] */ short *pShift) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastMoveEventShift( 
            /* [retval][out] */ short *pShift) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastEventButton( 
            /* [retval][out] */ short *pButton) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastUpEventButton( 
            /* [retval][out] */ short *pButton) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastDownEventButton( 
            /* [retval][out] */ short *pButton) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastMoveEventButton( 
            /* [retval][out] */ short *pButton) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastEventX( 
            /* [retval][out] */ double *pX) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastEventY( 
            /* [retval][out] */ double *pY) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastEventZ( 
            /* [retval][out] */ double *pZ) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastUpEventX( 
            /* [retval][out] */ double *pX) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastUpEventY( 
            /* [retval][out] */ double *pY) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastUpEventZ( 
            /* [retval][out] */ double *pZ) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastDownEventX( 
            /* [retval][out] */ double *pX) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastDownEventY( 
            /* [retval][out] */ double *pY) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastDownEventZ( 
            /* [retval][out] */ double *pZ) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastMoveEventX( 
            /* [retval][out] */ double *pX) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastMoveEventY( 
            /* [retval][out] */ double *pY) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastMoveEventZ( 
            /* [retval][out] */ double *pZ) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_WindowTypes( 
            /* [retval][out] */ long *plTypes) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_WindowTypes( 
            /* [in] */ long lTypes) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LastEventType( 
            /* [retval][out] */ long *plType) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_EnabledDrag( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabledDrag) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_EnabledDrag( 
            /* [in] */ VARIANT_BOOL bEnabledDrag) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LocateMode( 
            /* [retval][out] */ long *plLocateMode) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LocateMode( 
            /* [in] */ long lLocateMode) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DynamicsMode( 
            /* [retval][out] */ long *plDynamicsMode) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DynamicsMode( 
            /* [in] */ long lDynamicsMode) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PauseLocate( 
            /* [retval][out] */ long *plPauseLocate) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_PauseLocate( 
            long lPauseLocate) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ClearLocateFilter( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AddToLocateFilter( 
            /* [in] */ long lFilter) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEMouseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEMouse * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEMouse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEMouse * This);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleMode )( 
            ISEMouse * This,
            /* [in] */ long lScaleMode);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleMode )( 
            ISEMouse * This,
            /* [retval][out] */ long *plScaleMode);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnabledMove )( 
            ISEMouse * This,
            /* [retval][out] */ VARIANT_BOOL *pbMoveEnabled);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnabledMove )( 
            ISEMouse * This,
            /* [in] */ VARIANT_BOOL bMoveEnabled);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventWindow )( 
            ISEMouse * This,
            /* [retval][out] */ LPDISPATCH *pWindowDispatch);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpEventWindow )( 
            ISEMouse * This,
            /* [retval][out] */ LPDISPATCH *pWindowDispatch);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDownEventWindow )( 
            ISEMouse * This,
            /* [retval][out] */ LPDISPATCH *pWindowDispatch);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastMoveEventWindow )( 
            ISEMouse * This,
            /* [retval][out] */ LPDISPATCH *pWindowDispatch);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventShift )( 
            ISEMouse * This,
            /* [retval][out] */ short *pShift);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpEventShift )( 
            ISEMouse * This,
            /* [retval][out] */ short *pShift);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDownEventShift )( 
            ISEMouse * This,
            /* [retval][out] */ short *pShift);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastMoveEventShift )( 
            ISEMouse * This,
            /* [retval][out] */ short *pShift);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventButton )( 
            ISEMouse * This,
            /* [retval][out] */ short *pButton);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpEventButton )( 
            ISEMouse * This,
            /* [retval][out] */ short *pButton);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDownEventButton )( 
            ISEMouse * This,
            /* [retval][out] */ short *pButton);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastMoveEventButton )( 
            ISEMouse * This,
            /* [retval][out] */ short *pButton);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventX )( 
            ISEMouse * This,
            /* [retval][out] */ double *pX);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventY )( 
            ISEMouse * This,
            /* [retval][out] */ double *pY);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventZ )( 
            ISEMouse * This,
            /* [retval][out] */ double *pZ);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpEventX )( 
            ISEMouse * This,
            /* [retval][out] */ double *pX);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpEventY )( 
            ISEMouse * This,
            /* [retval][out] */ double *pY);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpEventZ )( 
            ISEMouse * This,
            /* [retval][out] */ double *pZ);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDownEventX )( 
            ISEMouse * This,
            /* [retval][out] */ double *pX);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDownEventY )( 
            ISEMouse * This,
            /* [retval][out] */ double *pY);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDownEventZ )( 
            ISEMouse * This,
            /* [retval][out] */ double *pZ);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastMoveEventX )( 
            ISEMouse * This,
            /* [retval][out] */ double *pX);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastMoveEventY )( 
            ISEMouse * This,
            /* [retval][out] */ double *pY);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastMoveEventZ )( 
            ISEMouse * This,
            /* [retval][out] */ double *pZ);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WindowTypes )( 
            ISEMouse * This,
            /* [retval][out] */ long *plTypes);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WindowTypes )( 
            ISEMouse * This,
            /* [in] */ long lTypes);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventType )( 
            ISEMouse * This,
            /* [retval][out] */ long *plType);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnabledDrag )( 
            ISEMouse * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabledDrag);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnabledDrag )( 
            ISEMouse * This,
            /* [in] */ VARIANT_BOOL bEnabledDrag);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LocateMode )( 
            ISEMouse * This,
            /* [retval][out] */ long *plLocateMode);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LocateMode )( 
            ISEMouse * This,
            /* [in] */ long lLocateMode);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DynamicsMode )( 
            ISEMouse * This,
            /* [retval][out] */ long *plDynamicsMode);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DynamicsMode )( 
            ISEMouse * This,
            /* [in] */ long lDynamicsMode);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PauseLocate )( 
            ISEMouse * This,
            /* [retval][out] */ long *plPauseLocate);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PauseLocate )( 
            ISEMouse * This,
            long lPauseLocate);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ClearLocateFilter )( 
            ISEMouse * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AddToLocateFilter )( 
            ISEMouse * This,
            /* [in] */ long lFilter);
        
        END_INTERFACE
    } ISEMouseVtbl;

    interface ISEMouse
    {
        CONST_VTBL struct ISEMouseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEMouse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEMouse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEMouse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEMouse_put_ScaleMode(This,lScaleMode)	\
    (This)->lpVtbl -> put_ScaleMode(This,lScaleMode)

#define ISEMouse_get_ScaleMode(This,plScaleMode)	\
    (This)->lpVtbl -> get_ScaleMode(This,plScaleMode)

#define ISEMouse_get_EnabledMove(This,pbMoveEnabled)	\
    (This)->lpVtbl -> get_EnabledMove(This,pbMoveEnabled)

#define ISEMouse_put_EnabledMove(This,bMoveEnabled)	\
    (This)->lpVtbl -> put_EnabledMove(This,bMoveEnabled)

#define ISEMouse_get_LastEventWindow(This,pWindowDispatch)	\
    (This)->lpVtbl -> get_LastEventWindow(This,pWindowDispatch)

#define ISEMouse_get_LastUpEventWindow(This,pWindowDispatch)	\
    (This)->lpVtbl -> get_LastUpEventWindow(This,pWindowDispatch)

#define ISEMouse_get_LastDownEventWindow(This,pWindowDispatch)	\
    (This)->lpVtbl -> get_LastDownEventWindow(This,pWindowDispatch)

#define ISEMouse_get_LastMoveEventWindow(This,pWindowDispatch)	\
    (This)->lpVtbl -> get_LastMoveEventWindow(This,pWindowDispatch)

#define ISEMouse_get_LastEventShift(This,pShift)	\
    (This)->lpVtbl -> get_LastEventShift(This,pShift)

#define ISEMouse_get_LastUpEventShift(This,pShift)	\
    (This)->lpVtbl -> get_LastUpEventShift(This,pShift)

#define ISEMouse_get_LastDownEventShift(This,pShift)	\
    (This)->lpVtbl -> get_LastDownEventShift(This,pShift)

#define ISEMouse_get_LastMoveEventShift(This,pShift)	\
    (This)->lpVtbl -> get_LastMoveEventShift(This,pShift)

#define ISEMouse_get_LastEventButton(This,pButton)	\
    (This)->lpVtbl -> get_LastEventButton(This,pButton)

#define ISEMouse_get_LastUpEventButton(This,pButton)	\
    (This)->lpVtbl -> get_LastUpEventButton(This,pButton)

#define ISEMouse_get_LastDownEventButton(This,pButton)	\
    (This)->lpVtbl -> get_LastDownEventButton(This,pButton)

#define ISEMouse_get_LastMoveEventButton(This,pButton)	\
    (This)->lpVtbl -> get_LastMoveEventButton(This,pButton)

#define ISEMouse_get_LastEventX(This,pX)	\
    (This)->lpVtbl -> get_LastEventX(This,pX)

#define ISEMouse_get_LastEventY(This,pY)	\
    (This)->lpVtbl -> get_LastEventY(This,pY)

#define ISEMouse_get_LastEventZ(This,pZ)	\
    (This)->lpVtbl -> get_LastEventZ(This,pZ)

#define ISEMouse_get_LastUpEventX(This,pX)	\
    (This)->lpVtbl -> get_LastUpEventX(This,pX)

#define ISEMouse_get_LastUpEventY(This,pY)	\
    (This)->lpVtbl -> get_LastUpEventY(This,pY)

#define ISEMouse_get_LastUpEventZ(This,pZ)	\
    (This)->lpVtbl -> get_LastUpEventZ(This,pZ)

#define ISEMouse_get_LastDownEventX(This,pX)	\
    (This)->lpVtbl -> get_LastDownEventX(This,pX)

#define ISEMouse_get_LastDownEventY(This,pY)	\
    (This)->lpVtbl -> get_LastDownEventY(This,pY)

#define ISEMouse_get_LastDownEventZ(This,pZ)	\
    (This)->lpVtbl -> get_LastDownEventZ(This,pZ)

#define ISEMouse_get_LastMoveEventX(This,pX)	\
    (This)->lpVtbl -> get_LastMoveEventX(This,pX)

#define ISEMouse_get_LastMoveEventY(This,pY)	\
    (This)->lpVtbl -> get_LastMoveEventY(This,pY)

#define ISEMouse_get_LastMoveEventZ(This,pZ)	\
    (This)->lpVtbl -> get_LastMoveEventZ(This,pZ)

#define ISEMouse_get_WindowTypes(This,plTypes)	\
    (This)->lpVtbl -> get_WindowTypes(This,plTypes)

#define ISEMouse_put_WindowTypes(This,lTypes)	\
    (This)->lpVtbl -> put_WindowTypes(This,lTypes)

#define ISEMouse_get_LastEventType(This,plType)	\
    (This)->lpVtbl -> get_LastEventType(This,plType)

#define ISEMouse_get_EnabledDrag(This,pbEnabledDrag)	\
    (This)->lpVtbl -> get_EnabledDrag(This,pbEnabledDrag)

#define ISEMouse_put_EnabledDrag(This,bEnabledDrag)	\
    (This)->lpVtbl -> put_EnabledDrag(This,bEnabledDrag)

#define ISEMouse_get_LocateMode(This,plLocateMode)	\
    (This)->lpVtbl -> get_LocateMode(This,plLocateMode)

#define ISEMouse_put_LocateMode(This,lLocateMode)	\
    (This)->lpVtbl -> put_LocateMode(This,lLocateMode)

#define ISEMouse_get_DynamicsMode(This,plDynamicsMode)	\
    (This)->lpVtbl -> get_DynamicsMode(This,plDynamicsMode)

#define ISEMouse_put_DynamicsMode(This,lDynamicsMode)	\
    (This)->lpVtbl -> put_DynamicsMode(This,lDynamicsMode)

#define ISEMouse_get_PauseLocate(This,plPauseLocate)	\
    (This)->lpVtbl -> get_PauseLocate(This,plPauseLocate)

#define ISEMouse_put_PauseLocate(This,lPauseLocate)	\
    (This)->lpVtbl -> put_PauseLocate(This,lPauseLocate)

#define ISEMouse_ClearLocateFilter(This)	\
    (This)->lpVtbl -> ClearLocateFilter(This)

#define ISEMouse_AddToLocateFilter(This,lFilter)	\
    (This)->lpVtbl -> AddToLocateFilter(This,lFilter)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE ISEMouse_put_ScaleMode_Proxy( 
    ISEMouse * This,
    /* [in] */ long lScaleMode);


void __RPC_STUB ISEMouse_put_ScaleMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_ScaleMode_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ long *plScaleMode);


void __RPC_STUB ISEMouse_get_ScaleMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_EnabledMove_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ VARIANT_BOOL *pbMoveEnabled);


void __RPC_STUB ISEMouse_get_EnabledMove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE ISEMouse_put_EnabledMove_Proxy( 
    ISEMouse * This,
    /* [in] */ VARIANT_BOOL bMoveEnabled);


void __RPC_STUB ISEMouse_put_EnabledMove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastEventWindow_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ LPDISPATCH *pWindowDispatch);


void __RPC_STUB ISEMouse_get_LastEventWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastUpEventWindow_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ LPDISPATCH *pWindowDispatch);


void __RPC_STUB ISEMouse_get_LastUpEventWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastDownEventWindow_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ LPDISPATCH *pWindowDispatch);


void __RPC_STUB ISEMouse_get_LastDownEventWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastMoveEventWindow_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ LPDISPATCH *pWindowDispatch);


void __RPC_STUB ISEMouse_get_LastMoveEventWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastEventShift_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ short *pShift);


void __RPC_STUB ISEMouse_get_LastEventShift_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastUpEventShift_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ short *pShift);


void __RPC_STUB ISEMouse_get_LastUpEventShift_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastDownEventShift_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ short *pShift);


void __RPC_STUB ISEMouse_get_LastDownEventShift_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastMoveEventShift_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ short *pShift);


void __RPC_STUB ISEMouse_get_LastMoveEventShift_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastEventButton_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ short *pButton);


void __RPC_STUB ISEMouse_get_LastEventButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastUpEventButton_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ short *pButton);


void __RPC_STUB ISEMouse_get_LastUpEventButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastDownEventButton_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ short *pButton);


void __RPC_STUB ISEMouse_get_LastDownEventButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastMoveEventButton_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ short *pButton);


void __RPC_STUB ISEMouse_get_LastMoveEventButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastEventX_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ double *pX);


void __RPC_STUB ISEMouse_get_LastEventX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastEventY_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ double *pY);


void __RPC_STUB ISEMouse_get_LastEventY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastEventZ_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ double *pZ);


void __RPC_STUB ISEMouse_get_LastEventZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastUpEventX_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ double *pX);


void __RPC_STUB ISEMouse_get_LastUpEventX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastUpEventY_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ double *pY);


void __RPC_STUB ISEMouse_get_LastUpEventY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastUpEventZ_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ double *pZ);


void __RPC_STUB ISEMouse_get_LastUpEventZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastDownEventX_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ double *pX);


void __RPC_STUB ISEMouse_get_LastDownEventX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastDownEventY_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ double *pY);


void __RPC_STUB ISEMouse_get_LastDownEventY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastDownEventZ_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ double *pZ);


void __RPC_STUB ISEMouse_get_LastDownEventZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastMoveEventX_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ double *pX);


void __RPC_STUB ISEMouse_get_LastMoveEventX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastMoveEventY_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ double *pY);


void __RPC_STUB ISEMouse_get_LastMoveEventY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastMoveEventZ_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ double *pZ);


void __RPC_STUB ISEMouse_get_LastMoveEventZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_WindowTypes_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ long *plTypes);


void __RPC_STUB ISEMouse_get_WindowTypes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE ISEMouse_put_WindowTypes_Proxy( 
    ISEMouse * This,
    /* [in] */ long lTypes);


void __RPC_STUB ISEMouse_put_WindowTypes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LastEventType_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ long *plType);


void __RPC_STUB ISEMouse_get_LastEventType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_EnabledDrag_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ VARIANT_BOOL *pbEnabledDrag);


void __RPC_STUB ISEMouse_get_EnabledDrag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE ISEMouse_put_EnabledDrag_Proxy( 
    ISEMouse * This,
    /* [in] */ VARIANT_BOOL bEnabledDrag);


void __RPC_STUB ISEMouse_put_EnabledDrag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_LocateMode_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ long *plLocateMode);


void __RPC_STUB ISEMouse_get_LocateMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE ISEMouse_put_LocateMode_Proxy( 
    ISEMouse * This,
    /* [in] */ long lLocateMode);


void __RPC_STUB ISEMouse_put_LocateMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_DynamicsMode_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ long *plDynamicsMode);


void __RPC_STUB ISEMouse_get_DynamicsMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE ISEMouse_put_DynamicsMode_Proxy( 
    ISEMouse * This,
    /* [in] */ long lDynamicsMode);


void __RPC_STUB ISEMouse_put_DynamicsMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouse_get_PauseLocate_Proxy( 
    ISEMouse * This,
    /* [retval][out] */ long *plPauseLocate);


void __RPC_STUB ISEMouse_get_PauseLocate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE ISEMouse_put_PauseLocate_Proxy( 
    ISEMouse * This,
    long lPauseLocate);


void __RPC_STUB ISEMouse_put_PauseLocate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEMouse_ClearLocateFilter_Proxy( 
    ISEMouse * This);


void __RPC_STUB ISEMouse_ClearLocateFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEMouse_AddToLocateFilter_Proxy( 
    ISEMouse * This,
    /* [in] */ long lFilter);


void __RPC_STUB ISEMouse_AddToLocateFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEMouse_INTERFACE_DEFINED__ */


#ifndef __ISEMouseEx_INTERFACE_DEFINED__
#define __ISEMouseEx_INTERFACE_DEFINED__

/* interface ISEMouseEx */
/* [oleautomation][hidden][helpstring][helpcontext][uuid][object] */ 


EXTERN_C const IID IID_ISEMouseEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C3E5510F-72AA-11d3-A3E3-0004AC969A5D")
    ISEMouseEx : public ISEMouse
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE PointOnGraphic( 
            /* [out] */ long *PointOnGraphicFlag,
            /* [out] */ double *PointOnGraphic_X,
            /* [out] */ double *PointOnGraphic_Y,
            /* [out] */ double *PointOnGraphic_Z) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InterDocumentLocate( 
            /* [retval][out] */ VARIANT_BOOL *plInterDocumentLocate) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InterDocumentLocate( 
            VARIANT_BOOL lInterDocumentLocate) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEMouseExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEMouseEx * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEMouseEx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEMouseEx * This);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleMode )( 
            ISEMouseEx * This,
            /* [in] */ long lScaleMode);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleMode )( 
            ISEMouseEx * This,
            /* [retval][out] */ long *plScaleMode);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnabledMove )( 
            ISEMouseEx * This,
            /* [retval][out] */ VARIANT_BOOL *pbMoveEnabled);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnabledMove )( 
            ISEMouseEx * This,
            /* [in] */ VARIANT_BOOL bMoveEnabled);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventWindow )( 
            ISEMouseEx * This,
            /* [retval][out] */ LPDISPATCH *pWindowDispatch);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpEventWindow )( 
            ISEMouseEx * This,
            /* [retval][out] */ LPDISPATCH *pWindowDispatch);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDownEventWindow )( 
            ISEMouseEx * This,
            /* [retval][out] */ LPDISPATCH *pWindowDispatch);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastMoveEventWindow )( 
            ISEMouseEx * This,
            /* [retval][out] */ LPDISPATCH *pWindowDispatch);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventShift )( 
            ISEMouseEx * This,
            /* [retval][out] */ short *pShift);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpEventShift )( 
            ISEMouseEx * This,
            /* [retval][out] */ short *pShift);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDownEventShift )( 
            ISEMouseEx * This,
            /* [retval][out] */ short *pShift);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastMoveEventShift )( 
            ISEMouseEx * This,
            /* [retval][out] */ short *pShift);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventButton )( 
            ISEMouseEx * This,
            /* [retval][out] */ short *pButton);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpEventButton )( 
            ISEMouseEx * This,
            /* [retval][out] */ short *pButton);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDownEventButton )( 
            ISEMouseEx * This,
            /* [retval][out] */ short *pButton);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastMoveEventButton )( 
            ISEMouseEx * This,
            /* [retval][out] */ short *pButton);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventX )( 
            ISEMouseEx * This,
            /* [retval][out] */ double *pX);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventY )( 
            ISEMouseEx * This,
            /* [retval][out] */ double *pY);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventZ )( 
            ISEMouseEx * This,
            /* [retval][out] */ double *pZ);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpEventX )( 
            ISEMouseEx * This,
            /* [retval][out] */ double *pX);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpEventY )( 
            ISEMouseEx * This,
            /* [retval][out] */ double *pY);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpEventZ )( 
            ISEMouseEx * This,
            /* [retval][out] */ double *pZ);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDownEventX )( 
            ISEMouseEx * This,
            /* [retval][out] */ double *pX);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDownEventY )( 
            ISEMouseEx * This,
            /* [retval][out] */ double *pY);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDownEventZ )( 
            ISEMouseEx * This,
            /* [retval][out] */ double *pZ);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastMoveEventX )( 
            ISEMouseEx * This,
            /* [retval][out] */ double *pX);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastMoveEventY )( 
            ISEMouseEx * This,
            /* [retval][out] */ double *pY);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastMoveEventZ )( 
            ISEMouseEx * This,
            /* [retval][out] */ double *pZ);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WindowTypes )( 
            ISEMouseEx * This,
            /* [retval][out] */ long *plTypes);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WindowTypes )( 
            ISEMouseEx * This,
            /* [in] */ long lTypes);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEventType )( 
            ISEMouseEx * This,
            /* [retval][out] */ long *plType);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnabledDrag )( 
            ISEMouseEx * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabledDrag);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnabledDrag )( 
            ISEMouseEx * This,
            /* [in] */ VARIANT_BOOL bEnabledDrag);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LocateMode )( 
            ISEMouseEx * This,
            /* [retval][out] */ long *plLocateMode);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LocateMode )( 
            ISEMouseEx * This,
            /* [in] */ long lLocateMode);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DynamicsMode )( 
            ISEMouseEx * This,
            /* [retval][out] */ long *plDynamicsMode);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DynamicsMode )( 
            ISEMouseEx * This,
            /* [in] */ long lDynamicsMode);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PauseLocate )( 
            ISEMouseEx * This,
            /* [retval][out] */ long *plPauseLocate);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PauseLocate )( 
            ISEMouseEx * This,
            long lPauseLocate);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ClearLocateFilter )( 
            ISEMouseEx * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AddToLocateFilter )( 
            ISEMouseEx * This,
            /* [in] */ long lFilter);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *PointOnGraphic )( 
            ISEMouseEx * This,
            /* [out] */ long *PointOnGraphicFlag,
            /* [out] */ double *PointOnGraphic_X,
            /* [out] */ double *PointOnGraphic_Y,
            /* [out] */ double *PointOnGraphic_Z);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InterDocumentLocate )( 
            ISEMouseEx * This,
            /* [retval][out] */ VARIANT_BOOL *plInterDocumentLocate);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InterDocumentLocate )( 
            ISEMouseEx * This,
            VARIANT_BOOL lInterDocumentLocate);
        
        END_INTERFACE
    } ISEMouseExVtbl;

    interface ISEMouseEx
    {
        CONST_VTBL struct ISEMouseExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEMouseEx_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEMouseEx_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEMouseEx_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEMouseEx_put_ScaleMode(This,lScaleMode)	\
    (This)->lpVtbl -> put_ScaleMode(This,lScaleMode)

#define ISEMouseEx_get_ScaleMode(This,plScaleMode)	\
    (This)->lpVtbl -> get_ScaleMode(This,plScaleMode)

#define ISEMouseEx_get_EnabledMove(This,pbMoveEnabled)	\
    (This)->lpVtbl -> get_EnabledMove(This,pbMoveEnabled)

#define ISEMouseEx_put_EnabledMove(This,bMoveEnabled)	\
    (This)->lpVtbl -> put_EnabledMove(This,bMoveEnabled)

#define ISEMouseEx_get_LastEventWindow(This,pWindowDispatch)	\
    (This)->lpVtbl -> get_LastEventWindow(This,pWindowDispatch)

#define ISEMouseEx_get_LastUpEventWindow(This,pWindowDispatch)	\
    (This)->lpVtbl -> get_LastUpEventWindow(This,pWindowDispatch)

#define ISEMouseEx_get_LastDownEventWindow(This,pWindowDispatch)	\
    (This)->lpVtbl -> get_LastDownEventWindow(This,pWindowDispatch)

#define ISEMouseEx_get_LastMoveEventWindow(This,pWindowDispatch)	\
    (This)->lpVtbl -> get_LastMoveEventWindow(This,pWindowDispatch)

#define ISEMouseEx_get_LastEventShift(This,pShift)	\
    (This)->lpVtbl -> get_LastEventShift(This,pShift)

#define ISEMouseEx_get_LastUpEventShift(This,pShift)	\
    (This)->lpVtbl -> get_LastUpEventShift(This,pShift)

#define ISEMouseEx_get_LastDownEventShift(This,pShift)	\
    (This)->lpVtbl -> get_LastDownEventShift(This,pShift)

#define ISEMouseEx_get_LastMoveEventShift(This,pShift)	\
    (This)->lpVtbl -> get_LastMoveEventShift(This,pShift)

#define ISEMouseEx_get_LastEventButton(This,pButton)	\
    (This)->lpVtbl -> get_LastEventButton(This,pButton)

#define ISEMouseEx_get_LastUpEventButton(This,pButton)	\
    (This)->lpVtbl -> get_LastUpEventButton(This,pButton)

#define ISEMouseEx_get_LastDownEventButton(This,pButton)	\
    (This)->lpVtbl -> get_LastDownEventButton(This,pButton)

#define ISEMouseEx_get_LastMoveEventButton(This,pButton)	\
    (This)->lpVtbl -> get_LastMoveEventButton(This,pButton)

#define ISEMouseEx_get_LastEventX(This,pX)	\
    (This)->lpVtbl -> get_LastEventX(This,pX)

#define ISEMouseEx_get_LastEventY(This,pY)	\
    (This)->lpVtbl -> get_LastEventY(This,pY)

#define ISEMouseEx_get_LastEventZ(This,pZ)	\
    (This)->lpVtbl -> get_LastEventZ(This,pZ)

#define ISEMouseEx_get_LastUpEventX(This,pX)	\
    (This)->lpVtbl -> get_LastUpEventX(This,pX)

#define ISEMouseEx_get_LastUpEventY(This,pY)	\
    (This)->lpVtbl -> get_LastUpEventY(This,pY)

#define ISEMouseEx_get_LastUpEventZ(This,pZ)	\
    (This)->lpVtbl -> get_LastUpEventZ(This,pZ)

#define ISEMouseEx_get_LastDownEventX(This,pX)	\
    (This)->lpVtbl -> get_LastDownEventX(This,pX)

#define ISEMouseEx_get_LastDownEventY(This,pY)	\
    (This)->lpVtbl -> get_LastDownEventY(This,pY)

#define ISEMouseEx_get_LastDownEventZ(This,pZ)	\
    (This)->lpVtbl -> get_LastDownEventZ(This,pZ)

#define ISEMouseEx_get_LastMoveEventX(This,pX)	\
    (This)->lpVtbl -> get_LastMoveEventX(This,pX)

#define ISEMouseEx_get_LastMoveEventY(This,pY)	\
    (This)->lpVtbl -> get_LastMoveEventY(This,pY)

#define ISEMouseEx_get_LastMoveEventZ(This,pZ)	\
    (This)->lpVtbl -> get_LastMoveEventZ(This,pZ)

#define ISEMouseEx_get_WindowTypes(This,plTypes)	\
    (This)->lpVtbl -> get_WindowTypes(This,plTypes)

#define ISEMouseEx_put_WindowTypes(This,lTypes)	\
    (This)->lpVtbl -> put_WindowTypes(This,lTypes)

#define ISEMouseEx_get_LastEventType(This,plType)	\
    (This)->lpVtbl -> get_LastEventType(This,plType)

#define ISEMouseEx_get_EnabledDrag(This,pbEnabledDrag)	\
    (This)->lpVtbl -> get_EnabledDrag(This,pbEnabledDrag)

#define ISEMouseEx_put_EnabledDrag(This,bEnabledDrag)	\
    (This)->lpVtbl -> put_EnabledDrag(This,bEnabledDrag)

#define ISEMouseEx_get_LocateMode(This,plLocateMode)	\
    (This)->lpVtbl -> get_LocateMode(This,plLocateMode)

#define ISEMouseEx_put_LocateMode(This,lLocateMode)	\
    (This)->lpVtbl -> put_LocateMode(This,lLocateMode)

#define ISEMouseEx_get_DynamicsMode(This,plDynamicsMode)	\
    (This)->lpVtbl -> get_DynamicsMode(This,plDynamicsMode)

#define ISEMouseEx_put_DynamicsMode(This,lDynamicsMode)	\
    (This)->lpVtbl -> put_DynamicsMode(This,lDynamicsMode)

#define ISEMouseEx_get_PauseLocate(This,plPauseLocate)	\
    (This)->lpVtbl -> get_PauseLocate(This,plPauseLocate)

#define ISEMouseEx_put_PauseLocate(This,lPauseLocate)	\
    (This)->lpVtbl -> put_PauseLocate(This,lPauseLocate)

#define ISEMouseEx_ClearLocateFilter(This)	\
    (This)->lpVtbl -> ClearLocateFilter(This)

#define ISEMouseEx_AddToLocateFilter(This,lFilter)	\
    (This)->lpVtbl -> AddToLocateFilter(This,lFilter)


#define ISEMouseEx_PointOnGraphic(This,PointOnGraphicFlag,PointOnGraphic_X,PointOnGraphic_Y,PointOnGraphic_Z)	\
    (This)->lpVtbl -> PointOnGraphic(This,PointOnGraphicFlag,PointOnGraphic_X,PointOnGraphic_Y,PointOnGraphic_Z)

#define ISEMouseEx_get_InterDocumentLocate(This,plInterDocumentLocate)	\
    (This)->lpVtbl -> get_InterDocumentLocate(This,plInterDocumentLocate)

#define ISEMouseEx_put_InterDocumentLocate(This,lInterDocumentLocate)	\
    (This)->lpVtbl -> put_InterDocumentLocate(This,lInterDocumentLocate)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ISEMouseEx_PointOnGraphic_Proxy( 
    ISEMouseEx * This,
    /* [out] */ long *PointOnGraphicFlag,
    /* [out] */ double *PointOnGraphic_X,
    /* [out] */ double *PointOnGraphic_Y,
    /* [out] */ double *PointOnGraphic_Z);


void __RPC_STUB ISEMouseEx_PointOnGraphic_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE ISEMouseEx_get_InterDocumentLocate_Proxy( 
    ISEMouseEx * This,
    /* [retval][out] */ VARIANT_BOOL *plInterDocumentLocate);


void __RPC_STUB ISEMouseEx_get_InterDocumentLocate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE ISEMouseEx_put_InterDocumentLocate_Proxy( 
    ISEMouseEx * This,
    VARIANT_BOOL lInterDocumentLocate);


void __RPC_STUB ISEMouseEx_put_InterDocumentLocate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEMouseEx_INTERFACE_DEFINED__ */


#ifndef __ISEMouseEvents_INTERFACE_DEFINED__
#define __ISEMouseEvents_INTERFACE_DEFINED__

/* interface ISEMouseEvents */
/* [oleautomation][hidden][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISEMouseEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19466B48-2A10-11d1-BA2E-080036230602")
    ISEMouseEvents : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE MouseDown( 
            /* [in] */ short sButton,
            /* [in] */ short sShift,
            /* [in] */ double dX,
            /* [in] */ double dY,
            /* [in] */ double dZ,
            /* [in] */ LPDISPATCH pWindowDispatch,
            /* [in] */ long lKeyPointType,
            /* [in] */ LPDISPATCH pGraphicDispatch) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE MouseUp( 
            /* [in] */ short sButton,
            /* [in] */ short sShift,
            /* [in] */ double dX,
            /* [in] */ double dY,
            /* [in] */ double dZ,
            /* [in] */ LPDISPATCH pWindowDispatch,
            /* [in] */ long lKeyPointType,
            /* [in] */ LPDISPATCH pGraphicDispatch) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE MouseMove( 
            /* [in] */ short sButton,
            /* [in] */ short sShift,
            /* [in] */ double dX,
            /* [in] */ double dY,
            /* [in] */ double dZ,
            /* [in] */ LPDISPATCH pWindowDispatch,
            /* [in] */ long lKeyPointType,
            /* [in] */ LPDISPATCH pGraphicDispatch) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE MouseClick( 
            /* [in] */ short sButton,
            /* [in] */ short sShift,
            /* [in] */ double dX,
            /* [in] */ double dY,
            /* [in] */ double dZ,
            /* [in] */ LPDISPATCH pWindowDispatch,
            /* [in] */ long lKeyPointType,
            /* [in] */ LPDISPATCH pGraphicDispatch) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE MouseDblClick( 
            /* [in] */ short sButton,
            /* [in] */ short sShift,
            /* [in] */ double dX,
            /* [in] */ double dY,
            /* [in] */ double dZ,
            /* [in] */ LPDISPATCH pWindowDispatch,
            /* [in] */ long lKeyPointType,
            /* [in] */ LPDISPATCH pGraphicDispatch) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE MouseDrag( 
            /* [in] */ short sButton,
            /* [in] */ short sShift,
            /* [in] */ double dX,
            /* [in] */ double dY,
            /* [in] */ double dZ,
            /* [in] */ LPDISPATCH pWindowDispatch,
            /* [in] */ short DragState,
            /* [in] */ long lKeyPointType,
            /* [in] */ LPDISPATCH pGraphicDispatch) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEMouseEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEMouseEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEMouseEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEMouseEvents * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *MouseDown )( 
            ISEMouseEvents * This,
            /* [in] */ short sButton,
            /* [in] */ short sShift,
            /* [in] */ double dX,
            /* [in] */ double dY,
            /* [in] */ double dZ,
            /* [in] */ LPDISPATCH pWindowDispatch,
            /* [in] */ long lKeyPointType,
            /* [in] */ LPDISPATCH pGraphicDispatch);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *MouseUp )( 
            ISEMouseEvents * This,
            /* [in] */ short sButton,
            /* [in] */ short sShift,
            /* [in] */ double dX,
            /* [in] */ double dY,
            /* [in] */ double dZ,
            /* [in] */ LPDISPATCH pWindowDispatch,
            /* [in] */ long lKeyPointType,
            /* [in] */ LPDISPATCH pGraphicDispatch);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *MouseMove )( 
            ISEMouseEvents * This,
            /* [in] */ short sButton,
            /* [in] */ short sShift,
            /* [in] */ double dX,
            /* [in] */ double dY,
            /* [in] */ double dZ,
            /* [in] */ LPDISPATCH pWindowDispatch,
            /* [in] */ long lKeyPointType,
            /* [in] */ LPDISPATCH pGraphicDispatch);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *MouseClick )( 
            ISEMouseEvents * This,
            /* [in] */ short sButton,
            /* [in] */ short sShift,
            /* [in] */ double dX,
            /* [in] */ double dY,
            /* [in] */ double dZ,
            /* [in] */ LPDISPATCH pWindowDispatch,
            /* [in] */ long lKeyPointType,
            /* [in] */ LPDISPATCH pGraphicDispatch);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *MouseDblClick )( 
            ISEMouseEvents * This,
            /* [in] */ short sButton,
            /* [in] */ short sShift,
            /* [in] */ double dX,
            /* [in] */ double dY,
            /* [in] */ double dZ,
            /* [in] */ LPDISPATCH pWindowDispatch,
            /* [in] */ long lKeyPointType,
            /* [in] */ LPDISPATCH pGraphicDispatch);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *MouseDrag )( 
            ISEMouseEvents * This,
            /* [in] */ short sButton,
            /* [in] */ short sShift,
            /* [in] */ double dX,
            /* [in] */ double dY,
            /* [in] */ double dZ,
            /* [in] */ LPDISPATCH pWindowDispatch,
            /* [in] */ short DragState,
            /* [in] */ long lKeyPointType,
            /* [in] */ LPDISPATCH pGraphicDispatch);
        
        END_INTERFACE
    } ISEMouseEventsVtbl;

    interface ISEMouseEvents
    {
        CONST_VTBL struct ISEMouseEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEMouseEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEMouseEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEMouseEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEMouseEvents_MouseDown(This,sButton,sShift,dX,dY,dZ,pWindowDispatch,lKeyPointType,pGraphicDispatch)	\
    (This)->lpVtbl -> MouseDown(This,sButton,sShift,dX,dY,dZ,pWindowDispatch,lKeyPointType,pGraphicDispatch)

#define ISEMouseEvents_MouseUp(This,sButton,sShift,dX,dY,dZ,pWindowDispatch,lKeyPointType,pGraphicDispatch)	\
    (This)->lpVtbl -> MouseUp(This,sButton,sShift,dX,dY,dZ,pWindowDispatch,lKeyPointType,pGraphicDispatch)

#define ISEMouseEvents_MouseMove(This,sButton,sShift,dX,dY,dZ,pWindowDispatch,lKeyPointType,pGraphicDispatch)	\
    (This)->lpVtbl -> MouseMove(This,sButton,sShift,dX,dY,dZ,pWindowDispatch,lKeyPointType,pGraphicDispatch)

#define ISEMouseEvents_MouseClick(This,sButton,sShift,dX,dY,dZ,pWindowDispatch,lKeyPointType,pGraphicDispatch)	\
    (This)->lpVtbl -> MouseClick(This,sButton,sShift,dX,dY,dZ,pWindowDispatch,lKeyPointType,pGraphicDispatch)

#define ISEMouseEvents_MouseDblClick(This,sButton,sShift,dX,dY,dZ,pWindowDispatch,lKeyPointType,pGraphicDispatch)	\
    (This)->lpVtbl -> MouseDblClick(This,sButton,sShift,dX,dY,dZ,pWindowDispatch,lKeyPointType,pGraphicDispatch)

#define ISEMouseEvents_MouseDrag(This,sButton,sShift,dX,dY,dZ,pWindowDispatch,DragState,lKeyPointType,pGraphicDispatch)	\
    (This)->lpVtbl -> MouseDrag(This,sButton,sShift,dX,dY,dZ,pWindowDispatch,DragState,lKeyPointType,pGraphicDispatch)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISEMouseEvents_MouseDown_Proxy( 
    ISEMouseEvents * This,
    /* [in] */ short sButton,
    /* [in] */ short sShift,
    /* [in] */ double dX,
    /* [in] */ double dY,
    /* [in] */ double dZ,
    /* [in] */ LPDISPATCH pWindowDispatch,
    /* [in] */ long lKeyPointType,
    /* [in] */ LPDISPATCH pGraphicDispatch);


void __RPC_STUB ISEMouseEvents_MouseDown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISEMouseEvents_MouseUp_Proxy( 
    ISEMouseEvents * This,
    /* [in] */ short sButton,
    /* [in] */ short sShift,
    /* [in] */ double dX,
    /* [in] */ double dY,
    /* [in] */ double dZ,
    /* [in] */ LPDISPATCH pWindowDispatch,
    /* [in] */ long lKeyPointType,
    /* [in] */ LPDISPATCH pGraphicDispatch);


void __RPC_STUB ISEMouseEvents_MouseUp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISEMouseEvents_MouseMove_Proxy( 
    ISEMouseEvents * This,
    /* [in] */ short sButton,
    /* [in] */ short sShift,
    /* [in] */ double dX,
    /* [in] */ double dY,
    /* [in] */ double dZ,
    /* [in] */ LPDISPATCH pWindowDispatch,
    /* [in] */ long lKeyPointType,
    /* [in] */ LPDISPATCH pGraphicDispatch);


void __RPC_STUB ISEMouseEvents_MouseMove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISEMouseEvents_MouseClick_Proxy( 
    ISEMouseEvents * This,
    /* [in] */ short sButton,
    /* [in] */ short sShift,
    /* [in] */ double dX,
    /* [in] */ double dY,
    /* [in] */ double dZ,
    /* [in] */ LPDISPATCH pWindowDispatch,
    /* [in] */ long lKeyPointType,
    /* [in] */ LPDISPATCH pGraphicDispatch);


void __RPC_STUB ISEMouseEvents_MouseClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISEMouseEvents_MouseDblClick_Proxy( 
    ISEMouseEvents * This,
    /* [in] */ short sButton,
    /* [in] */ short sShift,
    /* [in] */ double dX,
    /* [in] */ double dY,
    /* [in] */ double dZ,
    /* [in] */ LPDISPATCH pWindowDispatch,
    /* [in] */ long lKeyPointType,
    /* [in] */ LPDISPATCH pGraphicDispatch);


void __RPC_STUB ISEMouseEvents_MouseDblClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISEMouseEvents_MouseDrag_Proxy( 
    ISEMouseEvents * This,
    /* [in] */ short sButton,
    /* [in] */ short sShift,
    /* [in] */ double dX,
    /* [in] */ double dY,
    /* [in] */ double dZ,
    /* [in] */ LPDISPATCH pWindowDispatch,
    /* [in] */ short DragState,
    /* [in] */ long lKeyPointType,
    /* [in] */ LPDISPATCH pGraphicDispatch);


void __RPC_STUB ISEMouseEvents_MouseDrag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEMouseEvents_INTERFACE_DEFINED__ */


#ifndef __DISEMouseEvents_DISPINTERFACE_DEFINED__
#define __DISEMouseEvents_DISPINTERFACE_DEFINED__

/* dispinterface DISEMouseEvents */
/* [helpcontext][helpstring][nonextensible][uuid] */ 


EXTERN_C const IID DIID_DISEMouseEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("3B77DE43-6B3E-11d1-919E-08003601BE21")
    DISEMouseEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISEMouseEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISEMouseEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISEMouseEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISEMouseEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISEMouseEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISEMouseEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISEMouseEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISEMouseEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISEMouseEventsVtbl;

    interface DISEMouseEvents
    {
        CONST_VTBL struct DISEMouseEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISEMouseEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISEMouseEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISEMouseEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISEMouseEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISEMouseEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISEMouseEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISEMouseEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISEMouseEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISELocateFilterEvents_INTERFACE_DEFINED__
#define __ISELocateFilterEvents_INTERFACE_DEFINED__

/* interface ISELocateFilterEvents */
/* [oleautomation][hidden][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISELocateFilterEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("27FFD566-B818-43c1-90FB-AD85188C1B62")
    ISELocateFilterEvents : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Filter( 
            /* [in] */ LPDISPATCH pGraphicDispatch,
            /* [out] */ VARIANT_BOOL *vbValid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISELocateFilterEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISELocateFilterEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISELocateFilterEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISELocateFilterEvents * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Filter )( 
            ISELocateFilterEvents * This,
            /* [in] */ LPDISPATCH pGraphicDispatch,
            /* [out] */ VARIANT_BOOL *vbValid);
        
        END_INTERFACE
    } ISELocateFilterEventsVtbl;

    interface ISELocateFilterEvents
    {
        CONST_VTBL struct ISELocateFilterEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISELocateFilterEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISELocateFilterEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISELocateFilterEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISELocateFilterEvents_Filter(This,pGraphicDispatch,vbValid)	\
    (This)->lpVtbl -> Filter(This,pGraphicDispatch,vbValid)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISELocateFilterEvents_Filter_Proxy( 
    ISELocateFilterEvents * This,
    /* [in] */ LPDISPATCH pGraphicDispatch,
    /* [out] */ VARIANT_BOOL *vbValid);


void __RPC_STUB ISELocateFilterEvents_Filter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISELocateFilterEvents_INTERFACE_DEFINED__ */


#ifndef __DISECommandWindowEvents_DISPINTERFACE_DEFINED__
#define __DISECommandWindowEvents_DISPINTERFACE_DEFINED__

/* dispinterface DISECommandWindowEvents */
/* [helpcontext][helpstring][nonextensible][uuid] */ 


EXTERN_C const IID DIID_DISECommandWindowEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("3B77DE45-6B3E-11d1-919E-08003601BE21")
    DISECommandWindowEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISECommandWindowEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISECommandWindowEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISECommandWindowEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISECommandWindowEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISECommandWindowEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISECommandWindowEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISECommandWindowEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISECommandWindowEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISECommandWindowEventsVtbl;

    interface DISECommandWindowEvents
    {
        CONST_VTBL struct DISECommandWindowEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISECommandWindowEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISECommandWindowEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISECommandWindowEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISECommandWindowEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISECommandWindowEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISECommandWindowEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISECommandWindowEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISECommandWindowEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISECommand_INTERFACE_DEFINED__
#define __ISECommand_INTERFACE_DEFINED__

/* interface ISECommand */
/* [object][oleautomation][hidden][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_ISECommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F3484607-2AF7-11d1-BA2F-080036230602")
    ISECommand : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Mouse( 
            /* [retval][out] */ Mouse	**ppMouse) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Window( 
            /* [retval][out] */ CommandWindow	**ppWindow) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Done( 
            /* [retval][out] */ VARIANT_BOOL *pbDone) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Done( 
            /* [in] */ VARIANT_BOOL bDone) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OnEditOwnerChange( 
            /* [retval][out] */ long *plContinueOnChange) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OnEditOwnerChange( 
            /* [in] */ long lContinueOnChange) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OnEnvironmentChange( 
            /* [retval][out] */ long *plContinueOnChange) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OnEnvironmentChange( 
            /* [in] */ long lContinueOnChange) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECommand * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECommand * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mouse )( 
            ISECommand * This,
            /* [retval][out] */ Mouse	**ppMouse);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Window )( 
            ISECommand * This,
            /* [retval][out] */ CommandWindow	**ppWindow);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Done )( 
            ISECommand * This,
            /* [retval][out] */ VARIANT_BOOL *pbDone);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Done )( 
            ISECommand * This,
            /* [in] */ VARIANT_BOOL bDone);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OnEditOwnerChange )( 
            ISECommand * This,
            /* [retval][out] */ long *plContinueOnChange);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OnEditOwnerChange )( 
            ISECommand * This,
            /* [in] */ long lContinueOnChange);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OnEnvironmentChange )( 
            ISECommand * This,
            /* [retval][out] */ long *plContinueOnChange);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OnEnvironmentChange )( 
            ISECommand * This,
            /* [in] */ long lContinueOnChange);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            ISECommand * This);
        
        END_INTERFACE
    } ISECommandVtbl;

    interface ISECommand
    {
        CONST_VTBL struct ISECommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECommand_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECommand_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECommand_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECommand_get_Mouse(This,ppMouse)	\
    (This)->lpVtbl -> get_Mouse(This,ppMouse)

#define ISECommand_get_Window(This,ppWindow)	\
    (This)->lpVtbl -> get_Window(This,ppWindow)

#define ISECommand_get_Done(This,pbDone)	\
    (This)->lpVtbl -> get_Done(This,pbDone)

#define ISECommand_put_Done(This,bDone)	\
    (This)->lpVtbl -> put_Done(This,bDone)

#define ISECommand_get_OnEditOwnerChange(This,plContinueOnChange)	\
    (This)->lpVtbl -> get_OnEditOwnerChange(This,plContinueOnChange)

#define ISECommand_put_OnEditOwnerChange(This,lContinueOnChange)	\
    (This)->lpVtbl -> put_OnEditOwnerChange(This,lContinueOnChange)

#define ISECommand_get_OnEnvironmentChange(This,plContinueOnChange)	\
    (This)->lpVtbl -> get_OnEnvironmentChange(This,plContinueOnChange)

#define ISECommand_put_OnEnvironmentChange(This,lContinueOnChange)	\
    (This)->lpVtbl -> put_OnEnvironmentChange(This,lContinueOnChange)

#define ISECommand_Start(This)	\
    (This)->lpVtbl -> Start(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISECommand_get_Mouse_Proxy( 
    ISECommand * This,
    /* [retval][out] */ Mouse	**ppMouse);


void __RPC_STUB ISECommand_get_Mouse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISECommand_get_Window_Proxy( 
    ISECommand * This,
    /* [retval][out] */ CommandWindow	**ppWindow);


void __RPC_STUB ISECommand_get_Window_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISECommand_get_Done_Proxy( 
    ISECommand * This,
    /* [retval][out] */ VARIANT_BOOL *pbDone);


void __RPC_STUB ISECommand_get_Done_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISECommand_put_Done_Proxy( 
    ISECommand * This,
    /* [in] */ VARIANT_BOOL bDone);


void __RPC_STUB ISECommand_put_Done_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISECommand_get_OnEditOwnerChange_Proxy( 
    ISECommand * This,
    /* [retval][out] */ long *plContinueOnChange);


void __RPC_STUB ISECommand_get_OnEditOwnerChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISECommand_put_OnEditOwnerChange_Proxy( 
    ISECommand * This,
    /* [in] */ long lContinueOnChange);


void __RPC_STUB ISECommand_put_OnEditOwnerChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISECommand_get_OnEnvironmentChange_Proxy( 
    ISECommand * This,
    /* [retval][out] */ long *plContinueOnChange);


void __RPC_STUB ISECommand_get_OnEnvironmentChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISECommand_put_OnEnvironmentChange_Proxy( 
    ISECommand * This,
    /* [in] */ long lContinueOnChange);


void __RPC_STUB ISECommand_put_OnEnvironmentChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISECommand_Start_Proxy( 
    ISECommand * This);


void __RPC_STUB ISECommand_Start_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECommand_INTERFACE_DEFINED__ */


#ifndef __ISECommandEvents_INTERFACE_DEFINED__
#define __ISECommandEvents_INTERFACE_DEFINED__

/* interface ISECommandEvents */
/* [oleautomation][hidden][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISECommandEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19466B47-2A10-11d1-BA2E-080036230602")
    ISECommandEvents : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Activate( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Deactivate( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Idle( 
            /* [in] */ long lCount,
            /* [out] */ VARIANT_BOOL *pbMore) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE KeyDown( 
            /* [in] */ short *KeyCode,
            /* [in] */ short Shift) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE KeyPress( 
            /* [in] */ short *KeyAscii) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE KeyUp( 
            /* [in] */ short *KeyCode,
            /* [in] */ short Shift) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISECommandEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISECommandEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISECommandEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISECommandEvents * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISECommandEvents * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Deactivate )( 
            ISECommandEvents * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            ISECommandEvents * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Idle )( 
            ISECommandEvents * This,
            /* [in] */ long lCount,
            /* [out] */ VARIANT_BOOL *pbMore);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyDown )( 
            ISECommandEvents * This,
            /* [in] */ short *KeyCode,
            /* [in] */ short Shift);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyPress )( 
            ISECommandEvents * This,
            /* [in] */ short *KeyAscii);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyUp )( 
            ISECommandEvents * This,
            /* [in] */ short *KeyCode,
            /* [in] */ short Shift);
        
        END_INTERFACE
    } ISECommandEventsVtbl;

    interface ISECommandEvents
    {
        CONST_VTBL struct ISECommandEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISECommandEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISECommandEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISECommandEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISECommandEvents_Activate(This)	\
    (This)->lpVtbl -> Activate(This)

#define ISECommandEvents_Deactivate(This)	\
    (This)->lpVtbl -> Deactivate(This)

#define ISECommandEvents_Terminate(This)	\
    (This)->lpVtbl -> Terminate(This)

#define ISECommandEvents_Idle(This,lCount,pbMore)	\
    (This)->lpVtbl -> Idle(This,lCount,pbMore)

#define ISECommandEvents_KeyDown(This,KeyCode,Shift)	\
    (This)->lpVtbl -> KeyDown(This,KeyCode,Shift)

#define ISECommandEvents_KeyPress(This,KeyAscii)	\
    (This)->lpVtbl -> KeyPress(This,KeyAscii)

#define ISECommandEvents_KeyUp(This,KeyCode,Shift)	\
    (This)->lpVtbl -> KeyUp(This,KeyCode,Shift)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISECommandEvents_Activate_Proxy( 
    ISECommandEvents * This);


void __RPC_STUB ISECommandEvents_Activate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISECommandEvents_Deactivate_Proxy( 
    ISECommandEvents * This);


void __RPC_STUB ISECommandEvents_Deactivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISECommandEvents_Terminate_Proxy( 
    ISECommandEvents * This);


void __RPC_STUB ISECommandEvents_Terminate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISECommandEvents_Idle_Proxy( 
    ISECommandEvents * This,
    /* [in] */ long lCount,
    /* [out] */ VARIANT_BOOL *pbMore);


void __RPC_STUB ISECommandEvents_Idle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISECommandEvents_KeyDown_Proxy( 
    ISECommandEvents * This,
    /* [in] */ short *KeyCode,
    /* [in] */ short Shift);


void __RPC_STUB ISECommandEvents_KeyDown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISECommandEvents_KeyPress_Proxy( 
    ISECommandEvents * This,
    /* [in] */ short *KeyAscii);


void __RPC_STUB ISECommandEvents_KeyPress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISECommandEvents_KeyUp_Proxy( 
    ISECommandEvents * This,
    /* [in] */ short *KeyCode,
    /* [in] */ short Shift);


void __RPC_STUB ISECommandEvents_KeyUp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISECommandEvents_INTERFACE_DEFINED__ */


#ifndef __DISECommandEvents_DISPINTERFACE_DEFINED__
#define __DISECommandEvents_DISPINTERFACE_DEFINED__

/* dispinterface DISECommandEvents */
/* [helpcontext][helpstring][uuid] */ 


EXTERN_C const IID DIID_DISECommandEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("3B77DE41-6B3E-11d1-919E-08003601BE21")
    DISECommandEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISECommandEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISECommandEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISECommandEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISECommandEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISECommandEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISECommandEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISECommandEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISECommandEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISECommandEventsVtbl;

    interface DISECommandEvents
    {
        CONST_VTBL struct DISECommandEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISECommandEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISECommandEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISECommandEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISECommandEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISECommandEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISECommandEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISECommandEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISECommandEvents_DISPINTERFACE_DEFINED__ */


#ifndef __DISEAddInEvents_DISPINTERFACE_DEFINED__
#define __DISEAddInEvents_DISPINTERFACE_DEFINED__

/* dispinterface DISEAddInEvents */
/* [helpstring][helpcontext][nonextensible][uuid] */ 


EXTERN_C const IID DIID_DISEAddInEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0F539245-4816-11d2-B5AC-080036E8B802")
    DISEAddInEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISEAddInEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISEAddInEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISEAddInEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISEAddInEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISEAddInEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISEAddInEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISEAddInEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISEAddInEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISEAddInEventsVtbl;

    interface DISEAddInEvents
    {
        CONST_VTBL struct DISEAddInEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISEAddInEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISEAddInEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISEAddInEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISEAddInEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISEAddInEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISEAddInEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISEAddInEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISEAddInEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISEAddIn_INTERFACE_DEFINED__
#define __ISEAddIn_INTERFACE_DEFINED__

/* interface ISEAddIn */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISEAddIn;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A50D497B-288A-11d2-B586-080036E8B802")
    ISEAddIn : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IDispatch **Application) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_AddInEvents( 
            /* [retval][out] */ AddInEvents	**AddInEvents) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Connect( 
            /* [retval][out] */ VARIANT_BOOL *Connect) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Connect( 
            /* [in] */ VARIANT_BOOL Connect) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR Description) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_GUID( 
            /* [retval][out] */ BSTR *GUID) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_GuiVersion( 
            /* [retval][out] */ long *GuiVersion) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_GuiVersion( 
            /* [in] */ long GuiVersion) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Object( 
            /* [retval][out] */ IDispatch **Object) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Object( 
            /* [in] */ IDispatch *Object) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProgID( 
            /* [retval][out] */ BSTR *ProgID) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *Visible) = 0;
        
        virtual /* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL Visible) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE SetAddInInfo( 
            /* [in] */ long InstanceHandle,
            /* [in] */ BSTR EnvironmentCatID,
            /* [in] */ BSTR CategoryName,
            /* [in] */ long IDColorBitmapMedium,
            /* [in] */ long IDColorBitmapLarge,
            /* [in] */ long IDMonochromeBitmapMedium,
            /* [in] */ long IDMonochromeBitmapLarge,
            /* [in] */ long NumberOfCommands,
            /* [in] */ SAFEARRAY * *CommandNames,
            /* [out][in] */ SAFEARRAY * *CommandIDs) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE AddCommand( 
            /* [in] */ BSTR EnvironmentCatID,
            /* [in] */ BSTR CommandName,
            /* [in] */ long CommandID,
            /* [retval][out] */ long *SolidEdgeCommandID) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE AddCommandBarButton( 
            /* [in] */ BSTR EnvironmentCatID,
            /* [in] */ BSTR CommandBarName,
            /* [in] */ long CommandID,
            /* [retval][out] */ CommandBarButton	**CommandBarButton) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEAddInVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEAddIn * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEAddIn * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEAddIn * This);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ISEAddIn * This,
            /* [retval][out] */ IDispatch **Application);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddInEvents )( 
            ISEAddIn * This,
            /* [retval][out] */ AddInEvents	**AddInEvents);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Connect )( 
            ISEAddIn * This,
            /* [retval][out] */ VARIANT_BOOL *Connect);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Connect )( 
            ISEAddIn * This,
            /* [in] */ VARIANT_BOOL Connect);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ISEAddIn * This,
            /* [retval][out] */ BSTR *Description);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            ISEAddIn * This,
            /* [in] */ BSTR Description);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GUID )( 
            ISEAddIn * This,
            /* [retval][out] */ BSTR *GUID);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GuiVersion )( 
            ISEAddIn * This,
            /* [retval][out] */ long *GuiVersion);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GuiVersion )( 
            ISEAddIn * This,
            /* [in] */ long GuiVersion);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Object )( 
            ISEAddIn * This,
            /* [retval][out] */ IDispatch **Object);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Object )( 
            ISEAddIn * This,
            /* [in] */ IDispatch *Object);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProgID )( 
            ISEAddIn * This,
            /* [retval][out] */ BSTR *ProgID);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ISEAddIn * This,
            /* [retval][out] */ VARIANT_BOOL *Visible);
        
        /* [helpstring][helpcontext][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            ISEAddIn * This,
            /* [in] */ VARIANT_BOOL Visible);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *SetAddInInfo )( 
            ISEAddIn * This,
            /* [in] */ long InstanceHandle,
            /* [in] */ BSTR EnvironmentCatID,
            /* [in] */ BSTR CategoryName,
            /* [in] */ long IDColorBitmapMedium,
            /* [in] */ long IDColorBitmapLarge,
            /* [in] */ long IDMonochromeBitmapMedium,
            /* [in] */ long IDMonochromeBitmapLarge,
            /* [in] */ long NumberOfCommands,
            /* [in] */ SAFEARRAY * *CommandNames,
            /* [out][in] */ SAFEARRAY * *CommandIDs);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *AddCommand )( 
            ISEAddIn * This,
            /* [in] */ BSTR EnvironmentCatID,
            /* [in] */ BSTR CommandName,
            /* [in] */ long CommandID,
            /* [retval][out] */ long *SolidEdgeCommandID);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *AddCommandBarButton )( 
            ISEAddIn * This,
            /* [in] */ BSTR EnvironmentCatID,
            /* [in] */ BSTR CommandBarName,
            /* [in] */ long CommandID,
            /* [retval][out] */ CommandBarButton	**CommandBarButton);
        
        END_INTERFACE
    } ISEAddInVtbl;

    interface ISEAddIn
    {
        CONST_VTBL struct ISEAddInVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEAddIn_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEAddIn_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEAddIn_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEAddIn_get_Application(This,Application)	\
    (This)->lpVtbl -> get_Application(This,Application)

#define ISEAddIn_get_AddInEvents(This,AddInEvents)	\
    (This)->lpVtbl -> get_AddInEvents(This,AddInEvents)

#define ISEAddIn_get_Connect(This,Connect)	\
    (This)->lpVtbl -> get_Connect(This,Connect)

#define ISEAddIn_put_Connect(This,Connect)	\
    (This)->lpVtbl -> put_Connect(This,Connect)

#define ISEAddIn_get_Description(This,Description)	\
    (This)->lpVtbl -> get_Description(This,Description)

#define ISEAddIn_put_Description(This,Description)	\
    (This)->lpVtbl -> put_Description(This,Description)

#define ISEAddIn_get_GUID(This,GUID)	\
    (This)->lpVtbl -> get_GUID(This,GUID)

#define ISEAddIn_get_GuiVersion(This,GuiVersion)	\
    (This)->lpVtbl -> get_GuiVersion(This,GuiVersion)

#define ISEAddIn_put_GuiVersion(This,GuiVersion)	\
    (This)->lpVtbl -> put_GuiVersion(This,GuiVersion)

#define ISEAddIn_get_Object(This,Object)	\
    (This)->lpVtbl -> get_Object(This,Object)

#define ISEAddIn_put_Object(This,Object)	\
    (This)->lpVtbl -> put_Object(This,Object)

#define ISEAddIn_get_ProgID(This,ProgID)	\
    (This)->lpVtbl -> get_ProgID(This,ProgID)

#define ISEAddIn_get_Visible(This,Visible)	\
    (This)->lpVtbl -> get_Visible(This,Visible)

#define ISEAddIn_put_Visible(This,Visible)	\
    (This)->lpVtbl -> put_Visible(This,Visible)

#define ISEAddIn_SetAddInInfo(This,InstanceHandle,EnvironmentCatID,CategoryName,IDColorBitmapMedium,IDColorBitmapLarge,IDMonochromeBitmapMedium,IDMonochromeBitmapLarge,NumberOfCommands,CommandNames,CommandIDs)	\
    (This)->lpVtbl -> SetAddInInfo(This,InstanceHandle,EnvironmentCatID,CategoryName,IDColorBitmapMedium,IDColorBitmapLarge,IDMonochromeBitmapMedium,IDMonochromeBitmapLarge,NumberOfCommands,CommandNames,CommandIDs)

#define ISEAddIn_AddCommand(This,EnvironmentCatID,CommandName,CommandID,SolidEdgeCommandID)	\
    (This)->lpVtbl -> AddCommand(This,EnvironmentCatID,CommandName,CommandID,SolidEdgeCommandID)

#define ISEAddIn_AddCommandBarButton(This,EnvironmentCatID,CommandBarName,CommandID,CommandBarButton)	\
    (This)->lpVtbl -> AddCommandBarButton(This,EnvironmentCatID,CommandBarName,CommandID,CommandBarButton)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAddIn_get_Application_Proxy( 
    ISEAddIn * This,
    /* [retval][out] */ IDispatch **Application);


void __RPC_STUB ISEAddIn_get_Application_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAddIn_get_AddInEvents_Proxy( 
    ISEAddIn * This,
    /* [retval][out] */ AddInEvents	**AddInEvents);


void __RPC_STUB ISEAddIn_get_AddInEvents_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAddIn_get_Connect_Proxy( 
    ISEAddIn * This,
    /* [retval][out] */ VARIANT_BOOL *Connect);


void __RPC_STUB ISEAddIn_get_Connect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISEAddIn_put_Connect_Proxy( 
    ISEAddIn * This,
    /* [in] */ VARIANT_BOOL Connect);


void __RPC_STUB ISEAddIn_put_Connect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAddIn_get_Description_Proxy( 
    ISEAddIn * This,
    /* [retval][out] */ BSTR *Description);


void __RPC_STUB ISEAddIn_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISEAddIn_put_Description_Proxy( 
    ISEAddIn * This,
    /* [in] */ BSTR Description);


void __RPC_STUB ISEAddIn_put_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAddIn_get_GUID_Proxy( 
    ISEAddIn * This,
    /* [retval][out] */ BSTR *GUID);


void __RPC_STUB ISEAddIn_get_GUID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAddIn_get_GuiVersion_Proxy( 
    ISEAddIn * This,
    /* [retval][out] */ long *GuiVersion);


void __RPC_STUB ISEAddIn_get_GuiVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISEAddIn_put_GuiVersion_Proxy( 
    ISEAddIn * This,
    /* [in] */ long GuiVersion);


void __RPC_STUB ISEAddIn_put_GuiVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAddIn_get_Object_Proxy( 
    ISEAddIn * This,
    /* [retval][out] */ IDispatch **Object);


void __RPC_STUB ISEAddIn_get_Object_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISEAddIn_put_Object_Proxy( 
    ISEAddIn * This,
    /* [in] */ IDispatch *Object);


void __RPC_STUB ISEAddIn_put_Object_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAddIn_get_ProgID_Proxy( 
    ISEAddIn * This,
    /* [retval][out] */ BSTR *ProgID);


void __RPC_STUB ISEAddIn_get_ProgID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAddIn_get_Visible_Proxy( 
    ISEAddIn * This,
    /* [retval][out] */ VARIANT_BOOL *Visible);


void __RPC_STUB ISEAddIn_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propput] */ HRESULT STDMETHODCALLTYPE ISEAddIn_put_Visible_Proxy( 
    ISEAddIn * This,
    /* [in] */ VARIANT_BOOL Visible);


void __RPC_STUB ISEAddIn_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISEAddIn_SetAddInInfo_Proxy( 
    ISEAddIn * This,
    /* [in] */ long InstanceHandle,
    /* [in] */ BSTR EnvironmentCatID,
    /* [in] */ BSTR CategoryName,
    /* [in] */ long IDColorBitmapMedium,
    /* [in] */ long IDColorBitmapLarge,
    /* [in] */ long IDMonochromeBitmapMedium,
    /* [in] */ long IDMonochromeBitmapLarge,
    /* [in] */ long NumberOfCommands,
    /* [in] */ SAFEARRAY * *CommandNames,
    /* [out][in] */ SAFEARRAY * *CommandIDs);


void __RPC_STUB ISEAddIn_SetAddInInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISEAddIn_AddCommand_Proxy( 
    ISEAddIn * This,
    /* [in] */ BSTR EnvironmentCatID,
    /* [in] */ BSTR CommandName,
    /* [in] */ long CommandID,
    /* [retval][out] */ long *SolidEdgeCommandID);


void __RPC_STUB ISEAddIn_AddCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISEAddIn_AddCommandBarButton_Proxy( 
    ISEAddIn * This,
    /* [in] */ BSTR EnvironmentCatID,
    /* [in] */ BSTR CommandBarName,
    /* [in] */ long CommandID,
    /* [retval][out] */ CommandBarButton	**CommandBarButton);


void __RPC_STUB ISEAddIn_AddCommandBarButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEAddIn_INTERFACE_DEFINED__ */


#ifndef __ISEAddIns_INTERFACE_DEFINED__
#define __ISEAddIns_INTERFACE_DEFINED__

/* interface ISEAddIns */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISEAddIns;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A50D497C-288A-11d2-B586-080036E8B802")
    ISEAddIns : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IDispatch **Application) = 0;
        
        virtual /* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [id][hidden][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *Unknown) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ AddIn	**AddIn) = 0;
        
        virtual /* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE Update( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISEAddInsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISEAddIns * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISEAddIns * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISEAddIns * This);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ISEAddIns * This,
            /* [retval][out] */ IDispatch **Application);
        
        /* [helpstring][helpcontext][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISEAddIns * This,
            /* [retval][out] */ long *Count);
        
        /* [id][hidden][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISEAddIns * This,
            /* [retval][out] */ LPUNKNOWN *Unknown);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            ISEAddIns * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ AddIn	**AddIn);
        
        /* [helpstring][helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            ISEAddIns * This);
        
        END_INTERFACE
    } ISEAddInsVtbl;

    interface ISEAddIns
    {
        CONST_VTBL struct ISEAddInsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISEAddIns_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISEAddIns_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISEAddIns_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISEAddIns_get_Application(This,Application)	\
    (This)->lpVtbl -> get_Application(This,Application)

#define ISEAddIns_get_Count(This,Count)	\
    (This)->lpVtbl -> get_Count(This,Count)

#define ISEAddIns_get__NewEnum(This,Unknown)	\
    (This)->lpVtbl -> get__NewEnum(This,Unknown)

#define ISEAddIns_Item(This,Index,AddIn)	\
    (This)->lpVtbl -> Item(This,Index,AddIn)

#define ISEAddIns_Update(This)	\
    (This)->lpVtbl -> Update(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAddIns_get_Application_Proxy( 
    ISEAddIns * This,
    /* [retval][out] */ IDispatch **Application);


void __RPC_STUB ISEAddIns_get_Application_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id][propget] */ HRESULT STDMETHODCALLTYPE ISEAddIns_get_Count_Proxy( 
    ISEAddIns * This,
    /* [retval][out] */ long *Count);


void __RPC_STUB ISEAddIns_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][hidden][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISEAddIns_get__NewEnum_Proxy( 
    ISEAddIns * This,
    /* [retval][out] */ LPUNKNOWN *Unknown);


void __RPC_STUB ISEAddIns_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISEAddIns_Item_Proxy( 
    ISEAddIns * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ AddIn	**AddIn);


void __RPC_STUB ISEAddIns_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][helpcontext][id] */ HRESULT STDMETHODCALLTYPE ISEAddIns_Update_Proxy( 
    ISEAddIns * This);


void __RPC_STUB ISEAddIns_Update_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISEAddIns_INTERFACE_DEFINED__ */


#ifndef __ISolidEdgeAddIn_INTERFACE_DEFINED__
#define __ISolidEdgeAddIn_INTERFACE_DEFINED__

/* interface ISolidEdgeAddIn */
/* [object][hidden][helpstring][helpcontext][nonextensible][uuid] */ 


EXTERN_C const IID IID_ISolidEdgeAddIn;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D3F30AE5-2582-11d2-BAF9-080036230602")
    ISolidEdgeAddIn : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE OnConnection( 
            /* [in] */ IDispatch *Application,
            /* [in] */ SeConnectMode ConnectMode,
            /* [in] */ AddIn	*AddInInstance) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE OnConnectToEnvironment( 
            /* [in] */ BSTR EnvCatID,
            /* [in] */ LPDISPATCH pEnvironmentDispatch,
            /* [in] */ VARIANT_BOOL bFirstTime) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE OnDisconnection( 
            /* [in] */ SeDisconnectMode DisconnectMode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISolidEdgeAddInVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISolidEdgeAddIn * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISolidEdgeAddIn * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISolidEdgeAddIn * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnConnection )( 
            ISolidEdgeAddIn * This,
            /* [in] */ IDispatch *Application,
            /* [in] */ SeConnectMode ConnectMode,
            /* [in] */ AddIn	*AddInInstance);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnConnectToEnvironment )( 
            ISolidEdgeAddIn * This,
            /* [in] */ BSTR EnvCatID,
            /* [in] */ LPDISPATCH pEnvironmentDispatch,
            /* [in] */ VARIANT_BOOL bFirstTime);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnDisconnection )( 
            ISolidEdgeAddIn * This,
            /* [in] */ SeDisconnectMode DisconnectMode);
        
        END_INTERFACE
    } ISolidEdgeAddInVtbl;

    interface ISolidEdgeAddIn
    {
        CONST_VTBL struct ISolidEdgeAddInVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISolidEdgeAddIn_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISolidEdgeAddIn_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISolidEdgeAddIn_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISolidEdgeAddIn_OnConnection(This,Application,ConnectMode,AddInInstance)	\
    (This)->lpVtbl -> OnConnection(This,Application,ConnectMode,AddInInstance)

#define ISolidEdgeAddIn_OnConnectToEnvironment(This,EnvCatID,pEnvironmentDispatch,bFirstTime)	\
    (This)->lpVtbl -> OnConnectToEnvironment(This,EnvCatID,pEnvironmentDispatch,bFirstTime)

#define ISolidEdgeAddIn_OnDisconnection(This,DisconnectMode)	\
    (This)->lpVtbl -> OnDisconnection(This,DisconnectMode)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeAddIn_OnConnection_Proxy( 
    ISolidEdgeAddIn * This,
    /* [in] */ IDispatch *Application,
    /* [in] */ SeConnectMode ConnectMode,
    /* [in] */ AddIn	*AddInInstance);


void __RPC_STUB ISolidEdgeAddIn_OnConnection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeAddIn_OnConnectToEnvironment_Proxy( 
    ISolidEdgeAddIn * This,
    /* [in] */ BSTR EnvCatID,
    /* [in] */ LPDISPATCH pEnvironmentDispatch,
    /* [in] */ VARIANT_BOOL bFirstTime);


void __RPC_STUB ISolidEdgeAddIn_OnConnectToEnvironment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeAddIn_OnDisconnection_Proxy( 
    ISolidEdgeAddIn * This,
    /* [in] */ SeDisconnectMode DisconnectMode);


void __RPC_STUB ISolidEdgeAddIn_OnDisconnection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISolidEdgeAddIn_INTERFACE_DEFINED__ */


#ifndef __ISolidEdgeBar_INTERFACE_DEFINED__
#define __ISolidEdgeBar_INTERFACE_DEFINED__

/* interface ISolidEdgeBar */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISolidEdgeBar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7824063B-7678-11d3-A3E3-0004AC969A5D")
    ISolidEdgeBar : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE AddPage( 
            /* [in] */ IDispatch *theDocument,
            long InstanceHandle,
            /* [in] */ long nBitmapID,
            BSTR ToolTip,
            /* [in] */ long nOptions,
            /* [retval][out] */ long *hwnd) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE RemovePage( 
            /* [in] */ IDispatch *theDocument,
            /* [in] */ long hwnd,
            /* [in] */ long nOptions) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetActivePage( 
            /* [in] */ IDispatch *theDocument,
            /* [in] */ long hwnd,
            /* [in] */ long nOptions) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISolidEdgeBarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISolidEdgeBar * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISolidEdgeBar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISolidEdgeBar * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddPage )( 
            ISolidEdgeBar * This,
            /* [in] */ IDispatch *theDocument,
            long InstanceHandle,
            /* [in] */ long nBitmapID,
            BSTR ToolTip,
            /* [in] */ long nOptions,
            /* [retval][out] */ long *hwnd);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemovePage )( 
            ISolidEdgeBar * This,
            /* [in] */ IDispatch *theDocument,
            /* [in] */ long hwnd,
            /* [in] */ long nOptions);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetActivePage )( 
            ISolidEdgeBar * This,
            /* [in] */ IDispatch *theDocument,
            /* [in] */ long hwnd,
            /* [in] */ long nOptions);
        
        END_INTERFACE
    } ISolidEdgeBarVtbl;

    interface ISolidEdgeBar
    {
        CONST_VTBL struct ISolidEdgeBarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISolidEdgeBar_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISolidEdgeBar_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISolidEdgeBar_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISolidEdgeBar_AddPage(This,theDocument,InstanceHandle,nBitmapID,ToolTip,nOptions,hwnd)	\
    (This)->lpVtbl -> AddPage(This,theDocument,InstanceHandle,nBitmapID,ToolTip,nOptions,hwnd)

#define ISolidEdgeBar_RemovePage(This,theDocument,hwnd,nOptions)	\
    (This)->lpVtbl -> RemovePage(This,theDocument,hwnd,nOptions)

#define ISolidEdgeBar_SetActivePage(This,theDocument,hwnd,nOptions)	\
    (This)->lpVtbl -> SetActivePage(This,theDocument,hwnd,nOptions)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeBar_AddPage_Proxy( 
    ISolidEdgeBar * This,
    /* [in] */ IDispatch *theDocument,
    long InstanceHandle,
    /* [in] */ long nBitmapID,
    BSTR ToolTip,
    /* [in] */ long nOptions,
    /* [retval][out] */ long *hwnd);


void __RPC_STUB ISolidEdgeBar_AddPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeBar_RemovePage_Proxy( 
    ISolidEdgeBar * This,
    /* [in] */ IDispatch *theDocument,
    /* [in] */ long hwnd,
    /* [in] */ long nOptions);


void __RPC_STUB ISolidEdgeBar_RemovePage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeBar_SetActivePage_Proxy( 
    ISolidEdgeBar * This,
    /* [in] */ IDispatch *theDocument,
    /* [in] */ long hwnd,
    /* [in] */ long nOptions);


void __RPC_STUB ISolidEdgeBar_SetActivePage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISolidEdgeBar_INTERFACE_DEFINED__ */


#ifndef __ISolidEdgeRibbonBar_INTERFACE_DEFINED__
#define __ISolidEdgeRibbonBar_INTERFACE_DEFINED__

/* interface ISolidEdgeRibbonBar */
/* [object][oleautomation][helpstring][helpcontext][hidden][uuid] */ 


EXTERN_C const IID IID_ISolidEdgeRibbonBar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B48CBA07-C2C5-11d3-A3F6-0004AC969A5D")
    ISolidEdgeRibbonBar : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE AddRibbon( 
            /* [in] */ int DialogId,
            long InstanceHandle,
            /* [retval][out] */ long *hWndRibbon) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ShowRibbon( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE HideRibbon( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE RemoveRibbon( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE AddEditField( 
            /* [in] */ int id) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetCurrentFocus( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetCurrentFocus( 
            /* [out] */ int *id) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE NextFocus( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetAccelerators( 
            /* [in] */ SAFEARRAY * *Accelerators) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISolidEdgeRibbonBarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISolidEdgeRibbonBar * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISolidEdgeRibbonBar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISolidEdgeRibbonBar * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddRibbon )( 
            ISolidEdgeRibbonBar * This,
            /* [in] */ int DialogId,
            long InstanceHandle,
            /* [retval][out] */ long *hWndRibbon);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowRibbon )( 
            ISolidEdgeRibbonBar * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *HideRibbon )( 
            ISolidEdgeRibbonBar * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveRibbon )( 
            ISolidEdgeRibbonBar * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddEditField )( 
            ISolidEdgeRibbonBar * This,
            /* [in] */ int id);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetCurrentFocus )( 
            ISolidEdgeRibbonBar * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentFocus )( 
            ISolidEdgeRibbonBar * This,
            /* [out] */ int *id);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *NextFocus )( 
            ISolidEdgeRibbonBar * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAccelerators )( 
            ISolidEdgeRibbonBar * This,
            /* [in] */ SAFEARRAY * *Accelerators);
        
        END_INTERFACE
    } ISolidEdgeRibbonBarVtbl;

    interface ISolidEdgeRibbonBar
    {
        CONST_VTBL struct ISolidEdgeRibbonBarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISolidEdgeRibbonBar_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISolidEdgeRibbonBar_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISolidEdgeRibbonBar_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISolidEdgeRibbonBar_AddRibbon(This,DialogId,InstanceHandle,hWndRibbon)	\
    (This)->lpVtbl -> AddRibbon(This,DialogId,InstanceHandle,hWndRibbon)

#define ISolidEdgeRibbonBar_ShowRibbon(This)	\
    (This)->lpVtbl -> ShowRibbon(This)

#define ISolidEdgeRibbonBar_HideRibbon(This)	\
    (This)->lpVtbl -> HideRibbon(This)

#define ISolidEdgeRibbonBar_RemoveRibbon(This)	\
    (This)->lpVtbl -> RemoveRibbon(This)

#define ISolidEdgeRibbonBar_AddEditField(This,id)	\
    (This)->lpVtbl -> AddEditField(This,id)

#define ISolidEdgeRibbonBar_SetCurrentFocus(This)	\
    (This)->lpVtbl -> SetCurrentFocus(This)

#define ISolidEdgeRibbonBar_GetCurrentFocus(This,id)	\
    (This)->lpVtbl -> GetCurrentFocus(This,id)

#define ISolidEdgeRibbonBar_NextFocus(This)	\
    (This)->lpVtbl -> NextFocus(This)

#define ISolidEdgeRibbonBar_SetAccelerators(This,Accelerators)	\
    (This)->lpVtbl -> SetAccelerators(This,Accelerators)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeRibbonBar_AddRibbon_Proxy( 
    ISolidEdgeRibbonBar * This,
    /* [in] */ int DialogId,
    long InstanceHandle,
    /* [retval][out] */ long *hWndRibbon);


void __RPC_STUB ISolidEdgeRibbonBar_AddRibbon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeRibbonBar_ShowRibbon_Proxy( 
    ISolidEdgeRibbonBar * This);


void __RPC_STUB ISolidEdgeRibbonBar_ShowRibbon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeRibbonBar_HideRibbon_Proxy( 
    ISolidEdgeRibbonBar * This);


void __RPC_STUB ISolidEdgeRibbonBar_HideRibbon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeRibbonBar_RemoveRibbon_Proxy( 
    ISolidEdgeRibbonBar * This);


void __RPC_STUB ISolidEdgeRibbonBar_RemoveRibbon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeRibbonBar_AddEditField_Proxy( 
    ISolidEdgeRibbonBar * This,
    /* [in] */ int id);


void __RPC_STUB ISolidEdgeRibbonBar_AddEditField_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeRibbonBar_SetCurrentFocus_Proxy( 
    ISolidEdgeRibbonBar * This);


void __RPC_STUB ISolidEdgeRibbonBar_SetCurrentFocus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeRibbonBar_GetCurrentFocus_Proxy( 
    ISolidEdgeRibbonBar * This,
    /* [out] */ int *id);


void __RPC_STUB ISolidEdgeRibbonBar_GetCurrentFocus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeRibbonBar_NextFocus_Proxy( 
    ISolidEdgeRibbonBar * This);


void __RPC_STUB ISolidEdgeRibbonBar_NextFocus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ISolidEdgeRibbonBar_SetAccelerators_Proxy( 
    ISolidEdgeRibbonBar * This,
    /* [in] */ SAFEARRAY * *Accelerators);


void __RPC_STUB ISolidEdgeRibbonBar_SetAccelerators_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISolidEdgeRibbonBar_INTERFACE_DEFINED__ */


#ifndef __DISEMouse_DISPINTERFACE_DEFINED__
#define __DISEMouse_DISPINTERFACE_DEFINED__

/* dispinterface DISEMouse */
/* [helpcontext][helpstring][nonextensible][uuid] */ 


EXTERN_C const IID DIID_DISEMouse;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CA3F01D1-CDCA-11d1-91C2-08003601BE21")
    DISEMouse : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISEMouseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISEMouse * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISEMouse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISEMouse * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISEMouse * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISEMouse * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISEMouse * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISEMouse * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISEMouseVtbl;

    interface DISEMouse
    {
        CONST_VTBL struct DISEMouseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISEMouse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISEMouse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISEMouse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISEMouse_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISEMouse_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISEMouse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISEMouse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISEMouse_DISPINTERFACE_DEFINED__ */


#ifndef __DISECommand_DISPINTERFACE_DEFINED__
#define __DISECommand_DISPINTERFACE_DEFINED__

/* dispinterface DISECommand */
/* [helpcontext][helpstring][nonextensible][uuid] */ 


EXTERN_C const IID DIID_DISECommand;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CA3F01D2-CDCA-11d1-91C2-08003601BE21")
    DISECommand : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DISECommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DISECommand * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DISECommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DISECommand * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DISECommand * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DISECommand * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DISECommand * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DISECommand * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } DISECommandVtbl;

    interface DISECommand
    {
        CONST_VTBL struct DISECommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DISECommand_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DISECommand_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DISECommand_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DISECommand_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DISECommand_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DISECommand_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DISECommand_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DISECommand_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_GLDisplayEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("2A11B897-CCC5-11d2-9231-00C04F79BE98")
GLDisplayEvents;
#endif

EXTERN_C const CLSID CLSID_DisplayEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("791849E0-A4AA-11d1-AECC-08003616CE02")
DisplayEvents;
#endif

EXTERN_C const CLSID CLSID_FileUIEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("ECC667A0-A4AA-11d1-AECC-08003616CE02")
FileUIEvents;
#endif

EXTERN_C const CLSID CLSID_NewFileUIEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("206AF232-E02E-4f19-9101-B28C2A565100")
NewFileUIEvents;
#endif

EXTERN_C const CLSID CLSID_DocumentEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("0EA0D1F0-A199-11d1-AECC-08003616CE02")
DocumentEvents;
#endif

EXTERN_C const CLSID CLSID_ModelRecomputeEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("6A89DFD0-9E7D-11d1-AECC-08003616CE02")
ModelRecomputeEvents;
#endif

EXTERN_C const CLSID CLSID_ApplicationV8DocumentOpenEvent;

#ifdef __cplusplus

class DECLSPEC_UUID("3ADAF821-EF13-41b6-A7F6-D3A2F297C0E6")
ApplicationV8DocumentOpenEvent;
#endif

EXTERN_C const CLSID CLSID_ApplicationEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("EB4193C7-8C5A-11d1-BA85-080036230602")
ApplicationEvents;
#endif

EXTERN_C const CLSID CLSID_ApplicationWindowEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("25045F7E-965C-11d1-BA90-080036230602")
ApplicationWindowEvents;
#endif

EXTERN_C const CLSID CLSID_ViewEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("5BDAAD30-966B-11d1-AECB-08003616CE02")
ViewEvents;
#endif

EXTERN_C const CLSID CLSID_CommandBarButtonEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("59de95a1-9ca6-11d1-BA97-080036230602")
CommandBarButtonEvents;
#endif

EXTERN_C const CLSID CLSID_Mouse;

#ifdef __cplusplus

class DECLSPEC_UUID("3B77DE44-6B3E-11d1-919E-08003601BE21")
Mouse;
#endif

EXTERN_C const CLSID CLSID_CommandWindow;

#ifdef __cplusplus

class DECLSPEC_UUID("3B77DE46-6B3E-11d1-919E-08003601BE21")
CommandWindow;
#endif

EXTERN_C const CLSID CLSID_Command;

#ifdef __cplusplus

class DECLSPEC_UUID("3B77DE42-6B3E-11d1-919E-08003601BE21")
Command;
#endif

EXTERN_C const CLSID CLSID_AddInEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("0F539243-4816-11d2-B5AC-080036E8B802")
AddInEvents;
#endif

EXTERN_C const CLSID CLSID_AssemblyRecomputeEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("03CFED71-8E07-11d3-A3E6-0004AC969A5D")
AssemblyRecomputeEvents;
#endif

EXTERN_C const CLSID CLSID_FamilyOfPartsEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("A054F88C-9C75-11d3-A3F0-0004AC969A5D")
FamilyOfPartsEvents;
#endif

EXTERN_C const CLSID CLSID_FamilyOfPartsExEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("80E1310F-C681-4fec-8F5C-9449D8B33AFF")
FamilyOfPartsExEvents;
#endif

EXTERN_C const CLSID CLSID_DividePartEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("03A58A84-9CFB-11d3-A3F0-0004AC969A5D")
DividePartEvents;
#endif

EXTERN_C const CLSID CLSID_FeatureLibraryEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("EBF71668-ACF0-11d3-A3F3-0004AC969A5D")
FeatureLibraryEvents;
#endif

EXTERN_C const CLSID CLSID_DrawingViewEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("2D93AEED-3B14-11d4-A4D3-0004AC9695CB")
DrawingViewEvents;
#endif

EXTERN_C const CLSID CLSID_PartsListEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("21EE3695-5BCC-4815-8A40-209EF7D3EEE4")
PartsListEvents;
#endif

EXTERN_C const CLSID CLSID_ShortcutMenuEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("FEFB7665-5732-4bf0-8E46-D1E158ED20D3")
ShortcutMenuEvents;
#endif
#endif /* __ADDINSLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


