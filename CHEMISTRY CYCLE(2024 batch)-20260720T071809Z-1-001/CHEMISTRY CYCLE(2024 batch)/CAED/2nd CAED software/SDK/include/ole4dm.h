// $Log: /CurrZ-Appx/appxsdk/include/ole4dm.h $ 
// 
// 2     2/09/99 5:12p Jedelmas
// Mass Update:  Changing Intergraph string to Unigraphics Solutions.
// Adding $Log: VSS keyword to enable check-in comments to be inserted
// into file.

/*----------------------------------------------------------------------+
|                                                                       |
| OLE for Design and Modeling - Definitions and interfaces              |
|                                                                       |
+----------------------------------------------------------------------*/
#ifndef __OLE4DM_H__
#define __OLE4DM_H__ 

#ifndef __WINDOWS_H__
#include <windows.h>
#endif
#ifndef __OBJBASE_H__
#include <objbase.h>
#endif
#ifndef __IGL_H__
#include <igl.h>
#endif

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*                               GUIDs                                    */
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

// Basic 3D Interface
DEFINE_GUID(IID_IOle3DObject, 0x0002D200, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);

// Locate interface
DEFINE_GUID(IID_IOleLocate   ,0x0002D202, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);

// In-Place Activation Interfaces
DEFINE_GUID(IID_IOleInPlaceViews,         0x0002D203, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IOleInPlaceActive3DObject,0x0002D204, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IOleInPlace3DSite,        0x0002D206, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IEnumHWND,                0x0002D207, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*                             3D objects                                 */
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

typedef enum tagDVREP			// Standard representations
  {
  DVREP_CONTENT    = 0,			// display all the details of the object
  DVREP_SIMPLIFIED = 1,			// display a simplified version
  DVREP_SYMBOL     = 2			// display as a symbol
}DVREP;


// Extent definition
typedef double*  EXTENT3D;  // Low point, and High points (6 doubles) 
typedef EXTENT3D LPEXTENT3D;

#undef  INTERFACE
#define INTERFACE  IOle3DObject
DECLARE_INTERFACE_(IOle3DObject, IUnknown)
  {
  // *** IUnknown methods ***
  STDMETHOD (QueryInterface) (THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG,AddRef) (THIS) PURE;
  STDMETHOD_(ULONG,Release) (THIS) PURE;

  // *** IOle3DObject methods ***
  STDMETHOD (GetExtent) (THIS_ DVREP dwRep, LPEXTENT3D pExtent)  PURE;
};
typedef IOle3DObject FAR* LPOLE3DOBJECT;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*                               Locate                                   */
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

typedef struct tagBoreLine	// BoreLine definition
  {
  double m_point[3];        	// Eye Point
  double m_direction[3];    	// Direction
  double m_front;           	// Front curvilinear abscissa >= 0.0 
  double m_back;            	// Back curvilinear abscissa <= 0.0 
  double m_radius;          	// Tolerance to locate > 0.0 
}BORELINE;
typedef  BORELINE FAR* LPBORELINE;


typedef enum tagSHAPETYPE	// Possible types of shapes 
  {
  SHAPETYPE_INSIDE  = 0,    	// Select the elements inside the polygon
  SHAPETYPE_OUTSIDE = 1,	// select the elements outside the polygon
  SHAPETYPE_OVERLAP = 2		// select elements overlapping either INSIDE or OUTSIDE
}SHAPETYPE;


typedef struct tagShape		// Shape definition
  {                                  
  double*   m_lpoint;          	// List of points defining the polygon
  int       m_pointCount;      	// Number of points in the list
  double    m_direction[3];    	// Direction
  double    m_front;           	// Front curvilinear abscissa >= 0.0 
  double    m_back;            	// Back curvilinear abscissa <= 0.0
  SHAPETYPE m_type; 		// type of shpae described
}SHAPE;
typedef SHAPE FAR* LPSHAPE;


#undef  INTERFACE
#define INTERFACE IOleLocate
DECLARE_INTERFACE_(IOleLocate, IUnknown)
  {
  // *** IUnknown methods ***
  STDMETHOD (QueryInterface) (THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG,AddRef) (THIS) PURE;
  STDMETHOD_(ULONG,Release) (THIS) PURE;

  // *** IOleLocate methods ***
  STDMETHOD (PointLocate) (THIS_ DWORD repres, LPBORELINE pBoreLine, LPENUMMONIKER* ppEnumMoniker) PURE;
  STDMETHOD (ShapeLocate) (THIS_ DWORD repres, LPSHAPE pShape, LPENUMMONIKER* ppEnumMoniker) PURE;
};
typedef IOleLocate FAR* LPOLELOCATE;


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*                         In-Place Activation                            */
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

// ViewPort matrix (4 doubles complying with GL convention)
typedef double* VIEWPORT;  
typedef VIEWPORT LPVIEWPORT;

// XForm matrix	(16 doubles complying with GL convention)
typedef double* XFORM3D;   	
typedef XFORM3D LPXFORM3D;


typedef HWND FAR* LPHWND;
#undef  INTERFACE
#define INTERFACE IEnumHWND
DECLARE_INTERFACE_(IEnumHWND, IUnknown)
  {
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(Next)(THIS_ ULONG celt, LPHWND rgelt, ULONG FAR *pceltFetched) PURE;
  STDMETHOD(Skip)(THIS_ ULONG celt) PURE;
  STDMETHOD(Reset)(THIS) PURE;
  STDMETHOD(Clone)(THIS_ IEnumHWND FAR *FAR *ppEnum) PURE;
};
typedef IEnumHWND FAR* LPENUMHWND;


#undef INTERFACE
#define INTERFACE IOleInPlaceActive3DObject
DECLARE_INTERFACE_(IOleInPlaceActive3DObject, IUnknown)
  {
  // *** IUnknown methods ***
  STDMETHOD (QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG,AddRef)  (THIS) PURE;
  STDMETHOD_(ULONG,Release) (THIS) PURE;
 
  // *** IOleInPlaceActive3DObject methods ***
  STDMETHOD (OnInPlaceViewCreate)(THIS_ HWND hwnd) PURE;
  STDMETHOD (OnInPlaceViewChange)(THIS_ HWND hwnd) PURE;
  STDMETHOD (BringViewsToFront)(THIS) PURE;
  STDMETHOD (OnContainerRequestFocus)(THIS) PURE; 
  STDMETHOD (OnModelMatrixChange)(THIS) PURE; 
};
typedef IOleInPlaceActive3DObject FAR* LPOLEINPLACEACTIVE3DOBJECT;


#undef INTERFACE
#define INTERFACE IOleInPlaceViews 
DECLARE_INTERFACE_(IOleInPlaceViews , IUnknown)
  {
  // *** IUnknown methods ***
  STDMETHOD (QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG,AddRef)  (THIS) PURE;
  STDMETHOD_(ULONG,Release) (THIS) PURE;

  // *** IOleInPlaceViews   methods ***
  STDMETHOD (EnumInPlaceViews) (THIS_ LPENUMHWND* ppenumHwnd) PURE;
  STDMETHOD (GetViewContext)   (THIS_ HWND hwnd, LPUNKNOWN* pRender, LPXFORM3D  pModelView, LPXFORM3D  pProjection, LPXFORM3D  pInverseProjection, LPVIEWPORT pViewPort) PURE;
  STDMETHOD (SetActive3DObject)(THIS_ LPOLEINPLACEACTIVE3DOBJECT p3DActiveObj) PURE;
  STDMETHOD (OnObjectRequestFocus)(THIS) PURE; 
};
typedef IOleInPlaceViews FAR* LPOLEINPLACEVIEWS;


#undef  INTERFACE
#define INTERFACE IOleInPlace3DSite
DECLARE_INTERFACE_(IOleInPlace3DSite, IUnknown)
  {
  // *** IUnknown methods ***
  STDMETHOD (QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG,AddRef)  (THIS) PURE;
  STDMETHOD_(ULONG,Release) (THIS) PURE;

  // *** IOleInPlace3DSite methods ***
  STDMETHOD (GetModelMatrix)  (THIS_ LPXFORM3D pMatrix) PURE;
  STDMETHOD (GetWindowContext)(THIS_ LPOLEINPLACEVIEWS* ppInPlaceViews) PURE;
};
typedef IOleInPlace3DSite FAR* LPOLEINPLACE3DSITE;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#endif
