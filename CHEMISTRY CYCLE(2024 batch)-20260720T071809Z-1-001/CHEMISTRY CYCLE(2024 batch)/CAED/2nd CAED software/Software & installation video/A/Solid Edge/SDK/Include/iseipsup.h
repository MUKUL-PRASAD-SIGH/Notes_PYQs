// $Log: /CurrZ-Appx/appx/include/iseipsup.h $ 
// 
// 2     2/09/99 5:10p Jedelmas
// Mass Update:  Changing Intergraph string to Unigraphics Solutions.
// Adding $Log: VSS keyword to enable check-in comments to be inserted
// into file.

/*
  FILE: ISEIPSUP.H


  DESCRIPTION:
  This header file contains the definition for the custom interface ISEInProcSupport
  that is exposed by the custom handlers used with SolidEdge local servers. This interface
  is the means by which a container (typically 4DM) can specify that it wants to use the
  custom handler's in-process implementations instead of marshalling calls to the local
  server. This would provide improved (in-process) better performance. However containers
  looking for advanced functionality will rely on receiving these services from the server
  only.

  HISTORY:
  Ashok  :  06/27/97  :  Creation
*/

#ifndef _ISEINPROCSUPPORT_H_
#define _ISEINPROCSUPPORT_H_

#include <windows.h>
#include <objbase.h>

DEFINE_GUID(IID_ISEInProcSupport, 0x57fbbc51, 0xef19, 0x11d0, 0x8a, 0xc6, 0x8, 0x0, 0x36, 0x2f, 0xb3, 0x2); // {57FBBC51-EF19-11d0-8AC6-0800362FB302}

#undef INTERFACE
#define INTERFACE ISEInProcSupport
DECLARE_INTERFACE_(ISEInProcSupport, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
	STDMETHOD_(ULONG, AddRef) (THIS) PURE;
	STDMETHOD_(ULONG, Release) (THIS) PURE;

  STDMETHOD(GetInProcMode) (THIS_ boolean *bIsRunningInProc) PURE;
	STDMETHOD(SetInProcMode) (THIS_ boolean bRunInProc) PURE;
	
};
typedef ISEInProcSupport FAR* LPSEINPROCSUPPORT;

#endif
