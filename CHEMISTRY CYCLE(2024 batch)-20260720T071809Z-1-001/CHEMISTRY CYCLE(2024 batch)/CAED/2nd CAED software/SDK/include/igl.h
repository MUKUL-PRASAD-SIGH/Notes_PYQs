#ifndef __IGL_H__
#define __IGL_H__

#ifndef _OBJBASE_H_
#include <objbase.h>
#endif
#ifndef __GL_H__
#include <gl\gl.h>
#endif
#ifndef __GLU_H__
#include <gl\glu.h>
#endif


// define hints: can be ORed together

#define IGL_HINT_XOR		0x1
#define IGL_HINT_PLOT		0x2
#define IGL_HINT_SHADE	0x4
#define IGL_HINT_VHL		0x8
#define IGL_HINT_NOSTYLES 0x10


typedef struct IGLC_s *HIGLC;		//define handle to IGL context structure

/*
****** 	IGL Interface IIDs ********
*/
DEFINE_GUID(IID_IViewGLObject,
        0x0002D201, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);

DEFINE_GUID(IID_IGL,
		0x0002D280, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);

DEFINE_GUID(IID_IGLControl, 
		0x0002D281, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);

DEFINE_GUID(IID_IWGL, 
		0x0002D282, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);

DEFINE_GUID(IID_IGLU,
		0x0002D283, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);

DEFINE_GUID(IID_IGLUControl, 
		0x0002D284, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 	 								IGL Interfaces
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#undef  INTERFACE
#define INTERFACE IGLControl
DECLARE_INTERFACE_(IGLControl, IUnknown)
{
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR *ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD_(HRESULT, CreateContext)(THIS_ HIGLC *higlc) PURE;
  STDMETHOD_(HRESULT, DeleteContext)(THIS_ HIGLC higlc) PURE;
  STDMETHOD_(HRESULT, PushIntoContext)(THIS_ HIGLC higlc, HIGLC *hprev) PURE;
  STDMETHOD_(HRESULT, RestoreContext)(THIS_ HIGLC higlc) PURE;

  STDMETHOD_(HRESULT, GetContext)(THIS_ HIGLC *higlc) PURE;
  STDMETHOD_(HRESULT, SetContext)(THIS_ HIGLC higlc) PURE;

  STDMETHOD_(HRESULT, SetHints)(THIS_ DWORD hints) PURE;
  STDMETHOD_(HRESULT, GetHints)(THIS_ DWORD *hints) PURE;
};
typedef IGLControl *LPGLCONTROL;


#undef  INTERFACE
#define INTERFACE IGLUControl
DECLARE_INTERFACE_(IGLUControl, IUnknown)
{
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR *ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD_(HRESULT, RegisterCallbackInterface)(THIS_ LPUNKNOWN lpcbif) PURE;
  STDMETHOD_(HRESULT, SetStandardCallback)(THIS_ int fid, void *obj, GLenum which) PURE;
};
typedef IGLUControl *LPGLUCONTROL;


#undef  INTERFACE
#define INTERFACE IGL
DECLARE_INTERFACE_(IGL, IUnknown)
{
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR *ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD_(void, glAccum)(THIS_ GLenum op, GLfloat value) PURE;
  STDMETHOD_(void, glAlphaFunc)(THIS_ GLenum func, GLclampf ref) PURE;
  STDMETHOD_(void, glBegin)(THIS_ GLenum mode) PURE;
  STDMETHOD_(void, glBitmap)(THIS_ GLsizei width, GLsizei height, GLfloat xorig,
                         GLfloat yorig, GLfloat xmove, GLfloat ymove,
                         const GLubyte *bitmap) PURE;
  STDMETHOD_(void, glBlendFunc)(THIS_ GLenum sfactor, GLenum dfactor) PURE;
  STDMETHOD_(void, glCallList)(THIS_ GLuint list) PURE;
  STDMETHOD_(void, glCallLists)(THIS_ GLsizei n, GLenum type, const GLvoid *lists) PURE;
  STDMETHOD_(void, glClear)(THIS_ GLbitfield mask) PURE;
  STDMETHOD_(void, glClearAccum)(THIS_ GLfloat red, GLfloat green, GLfloat blue,
                         GLfloat alpha) PURE;
  STDMETHOD_(void, glClearColor)(THIS_ GLclampf red, GLclampf green, GLclampf blue,
                         GLclampf alpha) PURE;
  STDMETHOD_(void, glClearDepth)(THIS_ GLclampd depth) PURE;
  STDMETHOD_(void, glClearIndex)(THIS_ GLfloat c) PURE;
  STDMETHOD_(void, glClearStencil)(THIS_ GLint s) PURE;
  STDMETHOD_(void, glClipPlane)(THIS_ GLenum plane, const GLdouble *equation) PURE;
  STDMETHOD_(void, glColor3b)(THIS_ GLbyte red, GLbyte green, GLbyte blue) PURE;
  STDMETHOD_(void, glColor3bv)(THIS_ const GLbyte *v) PURE;
  STDMETHOD_(void, glColor3d)(THIS_ GLdouble red, GLdouble green, GLdouble blue) PURE;
  STDMETHOD_(void, glColor3dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glColor3f)(THIS_ GLfloat red, GLfloat green, GLfloat blue) PURE;
  STDMETHOD_(void, glColor3fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glColor3i)(THIS_ GLint red, GLint green, GLint blue) PURE;
  STDMETHOD_(void, glColor3iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glColor3s)(THIS_ GLshort red, GLshort green, GLshort blue) PURE;
  STDMETHOD_(void, glColor3sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glColor3ub)(THIS_ GLubyte red, GLubyte green, GLubyte blue) PURE;
  STDMETHOD_(void, glColor3ubv)(THIS_ const GLubyte *v) PURE;
  STDMETHOD_(void, glColor3ui)(THIS_ GLuint red, GLuint green, GLuint blue) PURE;
  STDMETHOD_(void, glColor3uiv)(THIS_ const GLuint *v) PURE;
  STDMETHOD_(void, glColor3us)(THIS_ GLushort red, GLushort green, GLushort blue) PURE;
  STDMETHOD_(void, glColor3usv)(THIS_ const GLushort *v) PURE;
  STDMETHOD_(void, glColor4b)(THIS_ GLbyte red, GLbyte green, GLbyte blue,
                         GLbyte alpha) PURE;
  STDMETHOD_(void, glColor4bv)(THIS_ const GLbyte *v) PURE;
  STDMETHOD_(void, glColor4d)(THIS_ GLdouble red, GLdouble green, GLdouble blue,
                         GLdouble alpha) PURE;
  STDMETHOD_(void, glColor4dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glColor4f)(THIS_ GLfloat red, GLfloat green, GLfloat blue,
                         GLfloat alpha) PURE;
  STDMETHOD_(void, glColor4fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glColor4i)(THIS_ GLint red, GLint green, GLint blue, GLint alpha) PURE;
  STDMETHOD_(void, glColor4iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glColor4s)(THIS_ GLshort red, GLshort green, GLshort blue,
                         GLshort alpha) PURE;
  STDMETHOD_(void, glColor4sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glColor4ub)(THIS_ GLubyte red, GLubyte green, GLubyte blue,
                         GLubyte alpha) PURE;
  STDMETHOD_(void, glColor4ubv)(THIS_ const GLubyte *v) PURE;
  STDMETHOD_(void, glColor4ui)(THIS_ GLuint red, GLuint green, GLuint blue,
                         GLuint alpha) PURE;
  STDMETHOD_(void, glColor4uiv)(THIS_ const GLuint *v) PURE;
  STDMETHOD_(void, glColor4us)(THIS_ GLushort red, GLushort green, GLushort blue,
                         GLushort alpha) PURE;
  STDMETHOD_(void, glColor4usv)(THIS_ const GLushort *v) PURE;
  STDMETHOD_(void, glColorMask)(THIS_ GLboolean red, GLboolean green, GLboolean blue,
                         GLboolean alpha) PURE;
  STDMETHOD_(void, glColorMaterial)(THIS_ GLenum face, GLenum mode) PURE;
  STDMETHOD_(void, glCopyPixels)(THIS_ GLint x, GLint y, GLsizei width, GLsizei height,
                         GLenum type) PURE;
  STDMETHOD_(void, glCullFace)(THIS_ GLenum mode) PURE;
  STDMETHOD_(void, glDeleteLists)(THIS_ GLuint list, GLsizei range) PURE;
  STDMETHOD_(void, glDepthFunc)(THIS_ GLenum func) PURE;
  STDMETHOD_(void, glDepthMask)(THIS_ GLboolean flag) PURE;
  STDMETHOD_(void, glDepthRange)(THIS_ GLclampd zNear, GLclampd zFar) PURE;
  STDMETHOD_(void, glDisable)(THIS_ GLenum cap) PURE;
  STDMETHOD_(void, glDrawBuffer)(THIS_ GLenum mode) PURE;
  STDMETHOD_(void, glDrawPixels)(THIS_ GLsizei width, GLsizei height, GLenum format,
                         GLenum type, const GLvoid *pixels) PURE;
  STDMETHOD_(void, glEdgeFlag)(THIS_ GLboolean flag) PURE;
  STDMETHOD_(void, glEdgeFlagv)(THIS_ const GLboolean *flag) PURE;
  STDMETHOD_(void, glEnable)(THIS_ GLenum cap) PURE;
  STDMETHOD_(void, glEnd)(THIS) PURE;
  STDMETHOD_(void, glEndList)(THIS) PURE;
  STDMETHOD_(void, glEvalCoord1d)(THIS_ GLdouble u) PURE;
  STDMETHOD_(void, glEvalCoord1dv)(THIS_ const GLdouble *u) PURE;
  STDMETHOD_(void, glEvalCoord1f)(THIS_ GLfloat u) PURE;
  STDMETHOD_(void, glEvalCoord1fv)(THIS_ const GLfloat *u) PURE;
  STDMETHOD_(void, glEvalCoord2d)(THIS_ GLdouble u, GLdouble v) PURE;
  STDMETHOD_(void, glEvalCoord2dv)(THIS_ const GLdouble *u) PURE;
  STDMETHOD_(void, glEvalCoord2f)(THIS_ GLfloat u, GLfloat v) PURE;
  STDMETHOD_(void, glEvalCoord2fv)(THIS_ const GLfloat *u) PURE;
  STDMETHOD_(void, glEvalMesh1)(THIS_ GLenum mode, GLint i1, GLint i2) PURE;
  STDMETHOD_(void, glEvalMesh2)(THIS_ GLenum mode, GLint i1, GLint i2, GLint j1,
                         GLint j2) PURE;
  STDMETHOD_(void, glEvalPoint1)(THIS_ GLint i) PURE;
  STDMETHOD_(void, glEvalPoint2)(THIS_ GLint i, GLint j) PURE;
  STDMETHOD_(void, glFeedbackBuffer)(THIS_ GLsizei size, GLenum type,
                         GLfloat *buffer) PURE;
  STDMETHOD_(void, glFinish)(THIS) PURE;
  STDMETHOD_(void, glFlush)(THIS) PURE;
  STDMETHOD_(void, glFogf)(THIS_ GLenum pname, GLfloat param) PURE;
  STDMETHOD_(void, glFogfv)(THIS_ GLenum pname, const GLfloat *params) PURE;
  STDMETHOD_(void, glFogi)(THIS_ GLenum pname, GLint param) PURE;
  STDMETHOD_(void, glFogiv)(THIS_ GLenum pname, const GLint *params) PURE;
  STDMETHOD_(void, glFrontFace)(THIS_ GLenum mode) PURE;
  STDMETHOD_(void, glFrustum)(THIS_ GLdouble left, GLdouble right, GLdouble bottom,
                         GLdouble top, GLdouble zNear, GLdouble zFar) PURE;
  STDMETHOD_(GLuint, glGenLists)(THIS_ GLsizei range) PURE;
  STDMETHOD_(void, glGetBooleanv)(THIS_ GLenum pname, GLboolean *params) PURE;
  STDMETHOD_(void, glGetClipPlane)(THIS_ GLenum plane, GLdouble *equation) PURE;
  STDMETHOD_(void, glGetDoublev)(THIS_ GLenum pname, GLdouble *params) PURE;
  STDMETHOD_(GLenum, glGetError)(THIS) PURE;
  STDMETHOD_(void, glGetFloatv)(THIS_ GLenum pname, GLfloat *params) PURE;
  STDMETHOD_(void, glGetIntegerv)(THIS_ GLenum pname, GLint *params) PURE;
  STDMETHOD_(void, glGetLightfv)(THIS_ GLenum light, GLenum pname, GLfloat *params) PURE;
  STDMETHOD_(void, glGetLightiv)(THIS_ GLenum light, GLenum pname, GLint *params) PURE;
  STDMETHOD_(void, glGetMapdv)(THIS_ GLenum target, GLenum query, GLdouble *v) PURE;
  STDMETHOD_(void, glGetMapfv)(THIS_ GLenum target, GLenum query, GLfloat *v) PURE;
  STDMETHOD_(void, glGetMapiv)(THIS_ GLenum target, GLenum query, GLint *v) PURE;
  STDMETHOD_(void, glGetMaterialfv)(THIS_ GLenum face, GLenum pname, GLfloat *params) PURE;
  STDMETHOD_(void, glGetMaterialiv)(THIS_ GLenum face, GLenum pname, GLint *params) PURE;
  STDMETHOD_(void, glGetPixelMapfv)(THIS_ GLenum map, GLfloat *values) PURE;
  STDMETHOD_(void, glGetPixelMapuiv)(THIS_ GLenum map, GLuint *values) PURE;
  STDMETHOD_(void, glGetPixelMapusv)(THIS_ GLenum map, GLushort *values) PURE;
  STDMETHOD_(void, glGetPolygonStipple)(THIS_ GLubyte *mask) PURE;
  STDMETHOD_(const GLubyte*, glGetString)(THIS_ GLenum name) PURE;
  STDMETHOD_(void, glGetTexEnvfv)(THIS_ GLenum target, GLenum pname, GLfloat *params) PURE;
  STDMETHOD_(void, glGetTexEnviv)(THIS_ GLenum target, GLenum pname, GLint *params) PURE;
  STDMETHOD_(void, glGetTexGendv)(THIS_ GLenum coord, GLenum pname, GLdouble *params) PURE;
  STDMETHOD_(void, glGetTexGenfv)(THIS_ GLenum coord, GLenum pname, GLfloat *params) PURE;
  STDMETHOD_(void, glGetTexGeniv)(THIS_ GLenum coord, GLenum pname, GLint *params) PURE;
  STDMETHOD_(void, glGetTexImage)(THIS_ GLenum target, GLint level, GLenum format,
                         GLenum type, GLvoid *pixels) PURE;
  STDMETHOD_(void, glGetTexLevelParameterfv)(THIS_ GLenum target, GLint level,
                         GLenum pname, GLfloat *params) PURE;
  STDMETHOD_(void, glGetTexLevelParameteriv)(THIS_ GLenum target, GLint level,
                         GLenum pname, GLint *params) PURE;
  STDMETHOD_(void, glGetTexParameterfv)(THIS_ GLenum target, GLenum pname,
                         GLfloat *params) PURE;
  STDMETHOD_(void, glGetTexParameteriv)(THIS_ GLenum target, GLenum pname,
                         GLint *params) PURE;
  STDMETHOD_(void, glHint)(THIS_ GLenum target, GLenum mode) PURE;
  STDMETHOD_(void, glIndexMask)(THIS_ GLuint mask) PURE;
  STDMETHOD_(void, glIndexd)(THIS_ GLdouble c) PURE;
  STDMETHOD_(void, glIndexdv)(THIS_ const GLdouble *c) PURE;
  STDMETHOD_(void, glIndexf)(THIS_ GLfloat c) PURE;
  STDMETHOD_(void, glIndexfv)(THIS_ const GLfloat *c) PURE;
  STDMETHOD_(void, glIndexi)(THIS_ GLint c) PURE;
  STDMETHOD_(void, glIndexiv)(THIS_ const GLint *c) PURE;
  STDMETHOD_(void, glIndexs)(THIS_ GLshort c) PURE;
  STDMETHOD_(void, glIndexsv)(THIS_ const GLshort *c) PURE;
  STDMETHOD_(void, glInitNames)(THIS) PURE;
  STDMETHOD_(GLboolean, glIsEnabled)(THIS_ GLenum cap) PURE;
  STDMETHOD_(GLboolean, glIsList)(THIS_ GLuint list) PURE;
  STDMETHOD_(void, glLightModelf)(THIS_ GLenum pname, GLfloat param) PURE;
  STDMETHOD_(void, glLightModelfv)(THIS_ GLenum pname, const GLfloat *params) PURE;
  STDMETHOD_(void, glLightModeli)(THIS_ GLenum pname, GLint param) PURE;
  STDMETHOD_(void, glLightModeliv)(THIS_ GLenum pname, const GLint *params) PURE;
  STDMETHOD_(void, glLightf)(THIS_ GLenum light, GLenum pname, GLfloat param) PURE;
  STDMETHOD_(void, glLightfv)(THIS_ GLenum light, GLenum pname,
                         const GLfloat *params) PURE;
  STDMETHOD_(void, glLighti)(THIS_ GLenum light, GLenum pname, GLint param) PURE;
  STDMETHOD_(void, glLightiv)(THIS_ GLenum light, GLenum pname, const GLint *params) PURE;
  STDMETHOD_(void, glLineStipple)(THIS_ GLint factor, GLushort pattern) PURE;
  STDMETHOD_(void, glLineWidth)(THIS_ GLfloat width) PURE;
  STDMETHOD_(void, glListBase)(THIS_ GLuint base) PURE;
  STDMETHOD_(void, glLoadIdentity)(THIS) PURE;
  STDMETHOD_(void, glLoadMatrixd)(THIS_ const GLdouble *m) PURE;
  STDMETHOD_(void, glLoadMatrixf)(THIS_ const GLfloat *m) PURE;
  STDMETHOD_(void, glLoadName)(THIS_ GLuint name) PURE;
  STDMETHOD_(void, glLogicOp)(THIS_ GLenum opcode) PURE;
  STDMETHOD_(void, glMap1d)(THIS_ GLenum target, GLdouble u1, GLdouble u2, GLint stride,
                         GLint order, const GLdouble *points) PURE;
  STDMETHOD_(void, glMap1f)(THIS_ GLenum target, GLfloat u1, GLfloat u2, GLint stride,
                         GLint order, const GLfloat *points) PURE;
  STDMETHOD_(void, glMap2d)(THIS_ GLenum target, GLdouble u1, GLdouble u2, GLint ustride,
                         GLint uorder, GLdouble v1, GLdouble v2, GLint vstride,
                         GLint vorder, const GLdouble *points) PURE;
  STDMETHOD_(void, glMap2f)(THIS_ GLenum target, GLfloat u1, GLfloat u2, GLint ustride,
                         GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder,
                         const GLfloat *points) PURE;
  STDMETHOD_(void, glMapGrid1d)(THIS_ GLint un, GLdouble u1, GLdouble u2) PURE;
  STDMETHOD_(void, glMapGrid1f)(THIS_ GLint un, GLfloat u1, GLfloat u2) PURE;
  STDMETHOD_(void, glMapGrid2d)(THIS_ GLint un, GLdouble u1, GLdouble u2, GLint vn,
                         GLdouble v1, GLdouble v2) PURE;
  STDMETHOD_(void, glMapGrid2f)(THIS_ GLint un, GLfloat u1, GLfloat u2, GLint vn,
                         GLfloat v1, GLfloat v2) PURE;
  STDMETHOD_(void, glMaterialf)(THIS_ GLenum face, GLenum pname, GLfloat param) PURE;
  STDMETHOD_(void, glMaterialfv)(THIS_ GLenum face, GLenum pname,
                         const GLfloat *params) PURE;
  STDMETHOD_(void, glMateriali)(THIS_ GLenum face, GLenum pname, GLint param) PURE;
  STDMETHOD_(void, glMaterialiv)(THIS_ GLenum face, GLenum pname,
                         const GLint *params) PURE;
  STDMETHOD_(void, glMatrixMode)(THIS_ GLenum mode) PURE;
  STDMETHOD_(void, glMultMatrixd)(THIS_ const GLdouble *m) PURE;
  STDMETHOD_(void, glMultMatrixf)(THIS_ const GLfloat *m) PURE;
  STDMETHOD_(void, glNewList)(THIS_ GLuint list, GLenum mode) PURE;
  STDMETHOD_(void, glNormal3b)(THIS_ GLbyte nx, GLbyte ny, GLbyte nz) PURE;
  STDMETHOD_(void, glNormal3bv)(THIS_ const GLbyte *v) PURE;
  STDMETHOD_(void, glNormal3d)(THIS_ GLdouble nx, GLdouble ny, GLdouble nz) PURE;
  STDMETHOD_(void, glNormal3dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glNormal3f)(THIS_ GLfloat nx, GLfloat ny, GLfloat nz) PURE;
  STDMETHOD_(void, glNormal3fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glNormal3i)(THIS_ GLint nx, GLint ny, GLint nz) PURE;
  STDMETHOD_(void, glNormal3iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glNormal3s)(THIS_ GLshort nx, GLshort ny, GLshort nz) PURE;
  STDMETHOD_(void, glNormal3sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glOrtho)(THIS_ GLdouble left, GLdouble right, GLdouble bottom,
                         GLdouble top, GLdouble zNear, GLdouble zFar) PURE;
  STDMETHOD_(void, glPassThrough)(THIS_ GLfloat token) PURE;
  STDMETHOD_(void, glPixelMapfv)(THIS_ GLenum map, GLint mapsize,
                         const GLfloat *values) PURE;
  STDMETHOD_(void, glPixelMapuiv)(THIS_ GLenum map, GLint mapsize,
                         const GLuint *values) PURE;
  STDMETHOD_(void, glPixelMapusv)(THIS_ GLenum map, GLint mapsize,
                         const GLushort *values) PURE;
  STDMETHOD_(void, glPixelStoref)(THIS_ GLenum pname, GLfloat param) PURE;
  STDMETHOD_(void, glPixelStorei)(THIS_ GLenum pname, GLint param) PURE;
  STDMETHOD_(void, glPixelTransferf)(THIS_ GLenum pname, GLfloat param) PURE;
  STDMETHOD_(void, glPixelTransferi)(THIS_ GLenum pname, GLint param) PURE;
  STDMETHOD_(void, glPixelZoom)(THIS_ GLfloat xfactor, GLfloat yfactor) PURE;
  STDMETHOD_(void, glPointSize)(THIS_ GLfloat size) PURE;
  STDMETHOD_(void, glPolygonMode)(THIS_ GLenum face, GLenum mode) PURE;
  STDMETHOD_(void, glPolygonStipple)(THIS_ const GLubyte *mask) PURE;
  STDMETHOD_(void, glPopAttrib)(THIS) PURE;
  STDMETHOD_(void, glPopMatrix)(THIS) PURE;
  STDMETHOD_(void, glPopName)(THIS) PURE;
  STDMETHOD_(void, glPushAttrib)(THIS_ GLbitfield mask) PURE;
  STDMETHOD_(void, glPushMatrix)(THIS) PURE;
  STDMETHOD_(void, glPushName)(THIS_ GLuint name) PURE;
  STDMETHOD_(void, glRasterPos2d)(THIS_ GLdouble x, GLdouble y) PURE;
  STDMETHOD_(void, glRasterPos2dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glRasterPos2f)(THIS_ GLfloat x, GLfloat y) PURE;
  STDMETHOD_(void, glRasterPos2fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glRasterPos2i)(THIS_ GLint x, GLint y) PURE;
  STDMETHOD_(void, glRasterPos2iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glRasterPos2s)(THIS_ GLshort x, GLshort y) PURE;
  STDMETHOD_(void, glRasterPos2sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glRasterPos3d)(THIS_ GLdouble x, GLdouble y, GLdouble z) PURE;
  STDMETHOD_(void, glRasterPos3dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glRasterPos3f)(THIS_ GLfloat x, GLfloat y, GLfloat z) PURE;
  STDMETHOD_(void, glRasterPos3fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glRasterPos3i)(THIS_ GLint x, GLint y, GLint z) PURE;
  STDMETHOD_(void, glRasterPos3iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glRasterPos3s)(THIS_ GLshort x, GLshort y, GLshort z) PURE;
  STDMETHOD_(void, glRasterPos3sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glRasterPos4d)(THIS_ GLdouble x, GLdouble y, GLdouble z,
                         GLdouble w) PURE;
  STDMETHOD_(void, glRasterPos4dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glRasterPos4f)(THIS_ GLfloat x, GLfloat y, GLfloat z, GLfloat w) PURE;
  STDMETHOD_(void, glRasterPos4fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glRasterPos4i)(THIS_ GLint x, GLint y, GLint z, GLint w) PURE;
  STDMETHOD_(void, glRasterPos4iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glRasterPos4s)(THIS_ GLshort x, GLshort y, GLshort z, GLshort w) PURE;
  STDMETHOD_(void, glRasterPos4sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glReadBuffer)(THIS_ GLenum mode) PURE;
  STDMETHOD_(void, glReadPixels)(THIS_ GLint x, GLint y, GLsizei width, GLsizei height,
                         GLenum format, GLenum type, GLvoid *pixels) PURE;
  STDMETHOD_(void, glRectd)(THIS_ GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2) PURE;
  STDMETHOD_(void, glRectdv)(THIS_ const GLdouble *v1, const GLdouble *v2) PURE;
  STDMETHOD_(void, glRectf)(THIS_ GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2) PURE;
  STDMETHOD_(void, glRectfv)(THIS_ const GLfloat *v1, const GLfloat *v2) PURE;
  STDMETHOD_(void, glRecti)(THIS_ GLint x1, GLint y1, GLint x2, GLint y2) PURE;
  STDMETHOD_(void, glRectiv)(THIS_ const GLint *v1, const GLint *v2) PURE;
  STDMETHOD_(void, glRects)(THIS_ GLshort x1, GLshort y1, GLshort x2, GLshort y2) PURE;
  STDMETHOD_(void, glRectsv)(THIS_ const GLshort *v1, const GLshort *v2) PURE;
  STDMETHOD_(GLint, glRenderMode)(THIS_ GLenum mode) PURE;
  STDMETHOD_(void, glRotated)(THIS_ GLdouble angle, GLdouble x, GLdouble y,
                         GLdouble z) PURE;
  STDMETHOD_(void, glRotatef)(THIS_ GLfloat angle, GLfloat x, GLfloat y, GLfloat z) PURE;
  STDMETHOD_(void, glScaled)(THIS_ GLdouble x, GLdouble y, GLdouble z) PURE;
  STDMETHOD_(void, glScalef)(THIS_ GLfloat x, GLfloat y, GLfloat z) PURE;
  STDMETHOD_(void, glScissor)(THIS_ GLint x, GLint y, GLsizei width, GLsizei height) PURE;
  STDMETHOD_(void, glSelectBuffer)(THIS_ GLsizei size, GLuint *buffer) PURE;
  STDMETHOD_(void, glShadeModel)(THIS_ GLenum mode) PURE;
  STDMETHOD_(void, glStencilFunc)(THIS_ GLenum func, GLint ref, GLuint mask) PURE;
  STDMETHOD_(void, glStencilMask)(THIS_ GLuint mask) PURE;
  STDMETHOD_(void, glStencilOp)(THIS_ GLenum fail, GLenum zfail, GLenum zpass) PURE;
  STDMETHOD_(void, glTexCoord1d)(THIS_ GLdouble s) PURE;
  STDMETHOD_(void, glTexCoord1dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glTexCoord1f)(THIS_ GLfloat s) PURE;
  STDMETHOD_(void, glTexCoord1fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glTexCoord1i)(THIS_ GLint s) PURE;
  STDMETHOD_(void, glTexCoord1iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glTexCoord1s)(THIS_ GLshort s) PURE;
  STDMETHOD_(void, glTexCoord1sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glTexCoord2d)(THIS_ GLdouble s, GLdouble t) PURE;
  STDMETHOD_(void, glTexCoord2dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glTexCoord2f)(THIS_ GLfloat s, GLfloat t) PURE;
  STDMETHOD_(void, glTexCoord2fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glTexCoord2i)(THIS_ GLint s, GLint t) PURE;
  STDMETHOD_(void, glTexCoord2iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glTexCoord2s)(THIS_ GLshort s, GLshort t) PURE;
  STDMETHOD_(void, glTexCoord2sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glTexCoord3d)(THIS_ GLdouble s, GLdouble t, GLdouble r) PURE;
  STDMETHOD_(void, glTexCoord3dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glTexCoord3f)(THIS_ GLfloat s, GLfloat t, GLfloat r) PURE;
  STDMETHOD_(void, glTexCoord3fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glTexCoord3i)(THIS_ GLint s, GLint t, GLint r) PURE;
  STDMETHOD_(void, glTexCoord3iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glTexCoord3s)(THIS_ GLshort s, GLshort t, GLshort r) PURE;
  STDMETHOD_(void, glTexCoord3sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glTexCoord4d)(THIS_ GLdouble s, GLdouble t, GLdouble r,
                         GLdouble q) PURE;
  STDMETHOD_(void, glTexCoord4dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glTexCoord4f)(THIS_ GLfloat s, GLfloat t, GLfloat r, GLfloat q) PURE;
  STDMETHOD_(void, glTexCoord4fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glTexCoord4i)(THIS_ GLint s, GLint t, GLint r, GLint q) PURE;
  STDMETHOD_(void, glTexCoord4iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glTexCoord4s)(THIS_ GLshort s, GLshort t, GLshort r, GLshort q) PURE;
  STDMETHOD_(void, glTexCoord4sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glTexEnvf)(THIS_ GLenum target, GLenum pname, GLfloat param) PURE;
  STDMETHOD_(void, glTexEnvfv)(THIS_ GLenum target, GLenum pname,
                         const GLfloat *params) PURE;
  STDMETHOD_(void, glTexEnvi)(THIS_ GLenum target, GLenum pname, GLint param) PURE;
  STDMETHOD_(void, glTexEnviv)(THIS_ GLenum target, GLenum pname,
                         const GLint *params) PURE;
  STDMETHOD_(void, glTexGend)(THIS_ GLenum coord, GLenum pname, GLdouble param) PURE;
  STDMETHOD_(void, glTexGendv)(THIS_ GLenum coord, GLenum pname,
                         const GLdouble *params) PURE;
  STDMETHOD_(void, glTexGenf)(THIS_ GLenum coord, GLenum pname, GLfloat param) PURE;
  STDMETHOD_(void, glTexGenfv)(THIS_ GLenum coord, GLenum pname,
                         const GLfloat *params) PURE;
  STDMETHOD_(void, glTexGeni)(THIS_ GLenum coord, GLenum pname, GLint param) PURE;
  STDMETHOD_(void, glTexGeniv)(THIS_ GLenum coord, GLenum pname, const GLint *params) PURE;
  STDMETHOD_(void, glTexImage1D)(THIS_ GLenum target, GLint level, GLint components,
                         GLsizei width, GLint border, GLenum format, GLenum type,
                         const GLvoid *pixels) PURE;
  STDMETHOD_(void, glTexImage2D)(THIS_ GLenum target, GLint level, GLint components,
                         GLsizei width, GLsizei height, GLint border, GLenum format,
                         GLenum type, const GLvoid *pixels) PURE;
  STDMETHOD_(void, glTexParameterf)(THIS_ GLenum target, GLenum pname, GLfloat param) PURE;
  STDMETHOD_(void, glTexParameterfv)(THIS_ GLenum target, GLenum pname,
                         const GLfloat *params) PURE;
  STDMETHOD_(void, glTexParameteri)(THIS_ GLenum target, GLenum pname, GLint param) PURE;
  STDMETHOD_(void, glTexParameteriv)(THIS_ GLenum target, GLenum pname,
                         const GLint *params) PURE;
  STDMETHOD_(void, glTranslated)(THIS_ GLdouble x, GLdouble y, GLdouble z) PURE;
  STDMETHOD_(void, glTranslatef)(THIS_ GLfloat x, GLfloat y, GLfloat z) PURE;
  STDMETHOD_(void, glVertex2d)(THIS_ GLdouble x, GLdouble y) PURE;
  STDMETHOD_(void, glVertex2dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glVertex2f)(THIS_ GLfloat x, GLfloat y) PURE;
  STDMETHOD_(void, glVertex2fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glVertex2i)(THIS_ GLint x, GLint y) PURE;
  STDMETHOD_(void, glVertex2iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glVertex2s)(THIS_ GLshort x, GLshort y) PURE;
  STDMETHOD_(void, glVertex2sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glVertex3d)(THIS_ GLdouble x, GLdouble y, GLdouble z) PURE;
  STDMETHOD_(void, glVertex3dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glVertex3f)(THIS_ GLfloat x, GLfloat y, GLfloat z) PURE;
  STDMETHOD_(void, glVertex3fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glVertex3i)(THIS_ GLint x, GLint y, GLint z) PURE;
  STDMETHOD_(void, glVertex3iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glVertex3s)(THIS_ GLshort x, GLshort y, GLshort z) PURE;
  STDMETHOD_(void, glVertex3sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glVertex4d)(THIS_ GLdouble x, GLdouble y, GLdouble z, GLdouble w) PURE;
  STDMETHOD_(void, glVertex4dv)(THIS_ const GLdouble *v) PURE;
  STDMETHOD_(void, glVertex4f)(THIS_ GLfloat x, GLfloat y, GLfloat z, GLfloat w) PURE;
  STDMETHOD_(void, glVertex4fv)(THIS_ const GLfloat *v) PURE;
  STDMETHOD_(void, glVertex4i)(THIS_ GLint x, GLint y, GLint z, GLint w) PURE;
  STDMETHOD_(void, glVertex4iv)(THIS_ const GLint *v) PURE;
  STDMETHOD_(void, glVertex4s)(THIS_ GLshort x, GLshort y, GLshort z, GLshort w) PURE;
  STDMETHOD_(void, glVertex4sv)(THIS_ const GLshort *v) PURE;
  STDMETHOD_(void, glViewport)(THIS_ GLint x, GLint y, GLsizei width, GLsizei height) PURE;
};
typedef IGL *LPGL;


#undef  INTERFACE
#define INTERFACE IWGL
DECLARE_INTERFACE_(IWGL, IUnknown)
{
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR *ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD_(HGLRC, wglCreateContext)(THIS_ HDC hdc) PURE;
  STDMETHOD_(BOOL, wglDeleteContext)(THIS_ HGLRC hglrc) PURE;
  STDMETHOD_(HGLRC, wglGetCurrentContext)(THIS) PURE;
  STDMETHOD_(HDC, wglGetCurrentDC)(THIS) PURE;
  STDMETHOD_(BOOL, wglMakeCurrent)(THIS_ HDC hdc, HGLRC hglrc) PURE;
  STDMETHOD_(BOOL, wglUseFontBitmapsA)(THIS_ HDC hdc, DWORD first, DWORD count,
                         DWORD listbase) PURE;
  STDMETHOD_(BOOL, wglUseFontBitmapsW)(THIS_ HDC hdc, DWORD first, DWORD count,
                         DWORD listbase) PURE;
  STDMETHOD_(BOOL, SwapBuffers)(THIS_ HDC hdc) PURE;
};
typedef IWGL *LPWGL;


#undef  INTERFACE
#define INTERFACE IGLU
DECLARE_INTERFACE_(IGLU, IUnknown)
{
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR *ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD_(const GLubyte*, gluErrorString)(THIS_ GLenum errCode) PURE;
  STDMETHOD_(const wchar_t*, gluErrorUnicodeStringEXT)(THIS_ GLenum errCode) PURE;
  STDMETHOD_(void, gluOrtho2D)(THIS_ GLdouble left, GLdouble right, GLdouble bottom,
                         GLdouble top) PURE;
  STDMETHOD_(void, gluPerspective)(THIS_ GLdouble fovy, GLdouble aspect, GLdouble zNear,
                         GLdouble zFar) PURE;
  STDMETHOD_(void, gluPickMatrix)(THIS_ GLdouble x, GLdouble y, GLdouble width,
                         GLdouble height, GLint viewport[4]) PURE;
  STDMETHOD_(void, gluLookAt)(THIS_ GLdouble eyex, GLdouble eyey, GLdouble eyez,
                         GLdouble centerx, GLdouble centery, GLdouble centerz,
                         GLdouble upx, GLdouble upy, GLdouble upz) PURE;
  STDMETHOD_(int, gluProject)(THIS_ GLdouble objx, GLdouble objy, GLdouble objz,
                         const GLdouble modelMatrix[16], const GLdouble projMatrix[16],
                         const GLint viewport[4], GLdouble *winx, GLdouble *winy,
                         GLdouble *winz) PURE;
  STDMETHOD_(int, gluUnProject)(THIS_ GLdouble winx, GLdouble winy, GLdouble winz,
                         const GLdouble modelMatrix[16], const GLdouble projMatrix[16],
                         const GLint viewport[4], GLdouble *objx, GLdouble *objy,
                         GLdouble *objz) PURE;
  STDMETHOD_(int, gluScaleImage)(THIS_ GLenum format, GLint widthin, GLint heightin,
                         GLenum typein, const void *datain, GLint widthout,
                         GLint heightout, GLenum typeout, void *dataout) PURE;
  STDMETHOD_(int, gluBuild1DMipmaps)(THIS_ GLenum target, GLint components, GLint width,
                         GLenum format, GLenum type, const void *data) PURE;
  STDMETHOD_(int, gluBuild2DMipmaps)(THIS_ GLenum target, GLint components, GLint width,
                         GLint height, GLenum format, GLenum type, const void *data) PURE;
  STDMETHOD_(GLUquadricObj*, gluNewQuadric)(THIS) PURE;
  STDMETHOD_(void, gluDeleteQuadric)(THIS_ GLUquadricObj *state) PURE;
  STDMETHOD_(void, gluQuadricNormals)(THIS_ GLUquadricObj *quadObject, GLenum normals) PURE;
  STDMETHOD_(void, gluQuadricTexture)(THIS_ GLUquadricObj *quadObject,
                         GLboolean textureCoords) PURE;
  STDMETHOD_(void, gluQuadricOrientation)(THIS_ GLUquadricObj *quadObject,
                         GLenum orientation) PURE;
  STDMETHOD_(void, gluQuadricDrawStyle)(THIS_ GLUquadricObj *quadObject,
                         GLenum drawStyle) PURE;
  STDMETHOD_(void, gluCylinder)(THIS_ GLUquadricObj *qobj, GLdouble baseRadius,
                         GLdouble topRadius, GLdouble height, GLint slices,
                         GLint stacks) PURE;
  STDMETHOD_(void, gluDisk)(THIS_ GLUquadricObj *qobj, GLdouble innerRadius,
                         GLdouble outerRadius, GLint slices, GLint loops) PURE;
  STDMETHOD_(void, gluPartialDisk)(THIS_ GLUquadricObj *qobj, GLdouble innerRadius,
                         GLdouble outerRadius, GLint slices, GLint loops,
                         GLdouble startAngle, GLdouble sweepAngle) PURE;
  STDMETHOD_(void, gluSphere)(THIS_ GLUquadricObj *qobj, GLdouble radius, GLint slices,
                         GLint stacks) PURE;
  STDMETHOD_(void, gluQuadricCallback)(THIS_ GLUquadricObj *qobj, GLenum which,
                         void (CALLBACK* fn)() ) PURE;
  STDMETHOD_(GLUtriangulatorObj*, gluNewTess)(THIS) PURE;
  STDMETHOD_(void, gluTessCallback)(THIS_ GLUtriangulatorObj *tobj, GLenum which,
                         void (CALLBACK* fn)() ) PURE;
  STDMETHOD_(void, gluDeleteTess)(THIS_ GLUtriangulatorObj *tobj) PURE;
  STDMETHOD_(void, gluBeginPolygon)(THIS_ GLUtriangulatorObj *tobj) PURE;
  STDMETHOD_(void, gluEndPolygon)(THIS_ GLUtriangulatorObj *tobj) PURE;
  STDMETHOD_(void, gluNextContour)(THIS_ GLUtriangulatorObj *tobj, GLenum type) PURE;
  STDMETHOD_(void, gluTessVertex)(THIS_ GLUtriangulatorObj *tobj, GLdouble v[3],
                         void *data) PURE;
  STDMETHOD_(GLUnurbsObj*, gluNewNurbsRenderer)(THIS) PURE;
  STDMETHOD_(void, gluDeleteNurbsRenderer)(THIS_ GLUnurbsObj *nobj) PURE;
  STDMETHOD_(void, gluBeginSurface)(THIS_ GLUnurbsObj *nobj) PURE;
  STDMETHOD_(void, gluBeginCurve)(THIS_ GLUnurbsObj *nobj) PURE;
  STDMETHOD_(void, gluEndCurve)(THIS_ GLUnurbsObj *nobj) PURE;
  STDMETHOD_(void, gluEndSurface)(THIS_ GLUnurbsObj *nobj) PURE;
  STDMETHOD_(void, gluBeginTrim)(THIS_ GLUnurbsObj *nobj) PURE;
  STDMETHOD_(void, gluEndTrim)(THIS_ GLUnurbsObj *nobj) PURE;
  STDMETHOD_(void, gluPwlCurve)(THIS_ GLUnurbsObj *nobj, GLint count, GLfloat *array,
                         GLint stride, GLenum type) PURE;
  STDMETHOD_(void, gluNurbsCurve)(THIS_ GLUnurbsObj *nobj, GLint nknots, GLfloat *knot,
                         GLint stride, GLfloat *ctlarray, GLint order, GLenum type) PURE;
  STDMETHOD_(void, gluNurbsSurface)(THIS_ GLUnurbsObj *nobj, GLint sknot_count,
                         GLfloat *sknot, GLint tknot_count, GLfloat *tknot, GLint s_stride,
                         GLint t_stride, GLfloat *ctlarray, GLint sorder, GLint torder,
                         GLenum type) PURE;
  STDMETHOD_(void, gluLoadSamplingMatrices)(THIS_ GLUnurbsObj *nobj,
                         const GLfloat modelMatrix[16], const GLfloat projMatrix[16],
                         const GLint viewport[4]) PURE;
  STDMETHOD_(void, gluNurbsProperty)(THIS_ GLUnurbsObj *nobj, GLenum property,
                         GLfloat value) PURE;
  STDMETHOD_(void, gluGetNurbsProperty)(THIS_ GLUnurbsObj *nobj, GLenum property,
                         GLfloat *value) PURE;
  STDMETHOD_(void, gluNurbsCallback)(THIS_ GLUnurbsObj *nobj, GLenum which,
                         void (CALLBACK* fn)() ) PURE;
};
typedef IGLU *LPGLU;


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 	 								GL Display
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#undef  INTERFACE
#define INTERFACE IViewGLObject 
DECLARE_INTERFACE_(IViewGLObject , IUnknown)
{
  STDMETHOD (QueryInterface) (THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG,AddRef) (THIS) PURE;
  STDMETHOD_(ULONG,Release) (THIS) PURE;

  STDMETHOD (Draw) (THIS_ DWORD dwRep, LPGL pIGL)  PURE;
};
typedef IViewGLObject FAR * LPVIEWGLOBJECT;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 	 								Interface macros
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#define DECL_IGL_METHODS  \
  STDMETHODIMP QueryInterface(THIS_ REFIID riid, LPVOID FAR *ppvObj);  \
  STDMETHODIMP_(ULONG) AddRef(THIS);  \
  STDMETHODIMP_(ULONG) Release(THIS);  \
  STDMETHODIMP_(void) glAccum(THIS_ GLenum op, GLfloat value); \
  STDMETHODIMP_(void) glAlphaFunc(THIS_ GLenum func, GLclampf ref); \
  STDMETHODIMP_(void) glBegin(THIS_ GLenum mode); \
  STDMETHODIMP_(void) glBitmap(THIS_ GLsizei width, GLsizei height, GLfloat xorig, \
                                 GLfloat yorig, GLfloat xmove, GLfloat ymove, \
                                 const GLubyte *bitmap); \
  STDMETHODIMP_(void) glBlendFunc(THIS_ GLenum sfactor, GLenum dfactor); \
  STDMETHODIMP_(void) glCallList(THIS_ GLuint list); \
  STDMETHODIMP_(void) glCallLists(THIS_ GLsizei n, GLenum type, const GLvoid *lists); \
  STDMETHODIMP_(void) glClear(THIS_ GLbitfield mask); \
  STDMETHODIMP_(void) glClearAccum(THIS_ GLfloat red, GLfloat green, GLfloat blue, \
                                 GLfloat alpha); \
  STDMETHODIMP_(void) glClearColor(THIS_ GLclampf red, GLclampf green, GLclampf blue, \
                                 GLclampf alpha); \
  STDMETHODIMP_(void) glClearDepth(THIS_ GLclampd depth); \
  STDMETHODIMP_(void) glClearIndex(THIS_ GLfloat c); \
  STDMETHODIMP_(void) glClearStencil(THIS_ GLint s); \
  STDMETHODIMP_(void) glClipPlane(THIS_ GLenum plane, const GLdouble *equation); \
  STDMETHODIMP_(void) glColor3b(THIS_ GLbyte red, GLbyte green, GLbyte blue); \
  STDMETHODIMP_(void) glColor3bv(THIS_ const GLbyte *v); \
  STDMETHODIMP_(void) glColor3d(THIS_ GLdouble red, GLdouble green, GLdouble blue); \
  STDMETHODIMP_(void) glColor3dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glColor3f(THIS_ GLfloat red, GLfloat green, GLfloat blue); \
  STDMETHODIMP_(void) glColor3fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glColor3i(THIS_ GLint red, GLint green, GLint blue); \
  STDMETHODIMP_(void) glColor3iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glColor3s(THIS_ GLshort red, GLshort green, GLshort blue); \
  STDMETHODIMP_(void) glColor3sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glColor3ub(THIS_ GLubyte red, GLubyte green, GLubyte blue); \
  STDMETHODIMP_(void) glColor3ubv(THIS_ const GLubyte *v); \
  STDMETHODIMP_(void) glColor3ui(THIS_ GLuint red, GLuint green, GLuint blue); \
  STDMETHODIMP_(void) glColor3uiv(THIS_ const GLuint *v); \
  STDMETHODIMP_(void) glColor3us(THIS_ GLushort red, GLushort green, GLushort blue); \
  STDMETHODIMP_(void) glColor3usv(THIS_ const GLushort *v); \
  STDMETHODIMP_(void) glColor4b(THIS_ GLbyte red, GLbyte green, GLbyte blue, \
                                 GLbyte alpha); \
  STDMETHODIMP_(void) glColor4bv(THIS_ const GLbyte *v); \
  STDMETHODIMP_(void) glColor4d(THIS_ GLdouble red, GLdouble green, GLdouble blue, \
                                 GLdouble alpha); \
  STDMETHODIMP_(void) glColor4dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glColor4f(THIS_ GLfloat red, GLfloat green, GLfloat blue, \
                                 GLfloat alpha); \
  STDMETHODIMP_(void) glColor4fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glColor4i(THIS_ GLint red, GLint green, GLint blue, GLint alpha); \
  STDMETHODIMP_(void) glColor4iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glColor4s(THIS_ GLshort red, GLshort green, GLshort blue, \
                                 GLshort alpha); \
  STDMETHODIMP_(void) glColor4sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glColor4ub(THIS_ GLubyte red, GLubyte green, GLubyte blue, \
                                 GLubyte alpha); \
  STDMETHODIMP_(void) glColor4ubv(THIS_ const GLubyte *v); \
  STDMETHODIMP_(void) glColor4ui(THIS_ GLuint red, GLuint green, GLuint blue, \
                                 GLuint alpha); \
  STDMETHODIMP_(void) glColor4uiv(THIS_ const GLuint *v); \
  STDMETHODIMP_(void) glColor4us(THIS_ GLushort red, GLushort green, GLushort blue, \
                                 GLushort alpha); \
  STDMETHODIMP_(void) glColor4usv(THIS_ const GLushort *v); \
  STDMETHODIMP_(void) glColorMask(THIS_ GLboolean red, GLboolean green, GLboolean blue, \
                                 GLboolean alpha); \
  STDMETHODIMP_(void) glColorMaterial(THIS_ GLenum face, GLenum mode); \
  STDMETHODIMP_(void) glCopyPixels(THIS_ GLint x, GLint y, GLsizei width, GLsizei height, \
                                 GLenum type); \
  STDMETHODIMP_(void) glCullFace(THIS_ GLenum mode); \
  STDMETHODIMP_(void) glDeleteLists(THIS_ GLuint list, GLsizei range); \
  STDMETHODIMP_(void) glDepthFunc(THIS_ GLenum func); \
  STDMETHODIMP_(void) glDepthMask(THIS_ GLboolean flag); \
  STDMETHODIMP_(void) glDepthRange(THIS_ GLclampd zNear, GLclampd zFar); \
  STDMETHODIMP_(void) glDisable(THIS_ GLenum cap); \
  STDMETHODIMP_(void) glDrawBuffer(THIS_ GLenum mode); \
  STDMETHODIMP_(void) glDrawPixels(THIS_ GLsizei width, GLsizei height, GLenum format, \
                                 GLenum type, const GLvoid *pixels); \
  STDMETHODIMP_(void) glEdgeFlag(THIS_ GLboolean flag); \
  STDMETHODIMP_(void) glEdgeFlagv(THIS_ const GLboolean *flag); \
  STDMETHODIMP_(void) glEnable(THIS_ GLenum cap); \
  STDMETHODIMP_(void) glEnd(THIS); \
  STDMETHODIMP_(void) glEndList(THIS); \
  STDMETHODIMP_(void) glEvalCoord1d(THIS_ GLdouble u); \
  STDMETHODIMP_(void) glEvalCoord1dv(THIS_ const GLdouble *u); \
  STDMETHODIMP_(void) glEvalCoord1f(THIS_ GLfloat u); \
  STDMETHODIMP_(void) glEvalCoord1fv(THIS_ const GLfloat *u); \
  STDMETHODIMP_(void) glEvalCoord2d(THIS_ GLdouble u, GLdouble v); \
  STDMETHODIMP_(void) glEvalCoord2dv(THIS_ const GLdouble *u); \
  STDMETHODIMP_(void) glEvalCoord2f(THIS_ GLfloat u, GLfloat v); \
  STDMETHODIMP_(void) glEvalCoord2fv(THIS_ const GLfloat *u); \
  STDMETHODIMP_(void) glEvalMesh1(THIS_ GLenum mode, GLint i1, GLint i2); \
  STDMETHODIMP_(void) glEvalMesh2(THIS_ GLenum mode, GLint i1, GLint i2, GLint j1, \
                                 GLint j2); \
  STDMETHODIMP_(void) glEvalPoint1(THIS_ GLint i); \
  STDMETHODIMP_(void) glEvalPoint2(THIS_ GLint i, GLint j); \
  STDMETHODIMP_(void) glFeedbackBuffer(THIS_ GLsizei size, GLenum type, GLfloat *buffer); \
  STDMETHODIMP_(void) glFinish(THIS); \
  STDMETHODIMP_(void) glFlush(THIS); \
  STDMETHODIMP_(void) glFogf(THIS_ GLenum pname, GLfloat param); \
  STDMETHODIMP_(void) glFogfv(THIS_ GLenum pname, const GLfloat *params); \
  STDMETHODIMP_(void) glFogi(THIS_ GLenum pname, GLint param); \
  STDMETHODIMP_(void) glFogiv(THIS_ GLenum pname, const GLint *params); \
  STDMETHODIMP_(void) glFrontFace(THIS_ GLenum mode); \
  STDMETHODIMP_(void) glFrustum(THIS_ GLdouble left, GLdouble right, GLdouble bottom, \
                                 GLdouble top, GLdouble zNear, GLdouble zFar); \
  STDMETHODIMP_(GLuint) glGenLists(THIS_ GLsizei range); \
  STDMETHODIMP_(void) glGetBooleanv(THIS_ GLenum pname, GLboolean *params); \
  STDMETHODIMP_(void) glGetClipPlane(THIS_ GLenum plane, GLdouble *equation); \
  STDMETHODIMP_(void) glGetDoublev(THIS_ GLenum pname, GLdouble *params); \
  STDMETHODIMP_(GLenum) glGetError(THIS); \
  STDMETHODIMP_(void) glGetFloatv(THIS_ GLenum pname, GLfloat *params); \
  STDMETHODIMP_(void) glGetIntegerv(THIS_ GLenum pname, GLint *params); \
  STDMETHODIMP_(void) glGetLightfv(THIS_ GLenum light, GLenum pname, GLfloat *params); \
  STDMETHODIMP_(void) glGetLightiv(THIS_ GLenum light, GLenum pname, GLint *params); \
  STDMETHODIMP_(void) glGetMapdv(THIS_ GLenum target, GLenum query, GLdouble *v); \
  STDMETHODIMP_(void) glGetMapfv(THIS_ GLenum target, GLenum query, GLfloat *v); \
  STDMETHODIMP_(void) glGetMapiv(THIS_ GLenum target, GLenum query, GLint *v); \
  STDMETHODIMP_(void) glGetMaterialfv(THIS_ GLenum face, GLenum pname, GLfloat *params); \
  STDMETHODIMP_(void) glGetMaterialiv(THIS_ GLenum face, GLenum pname, GLint *params); \
  STDMETHODIMP_(void) glGetPixelMapfv(THIS_ GLenum map, GLfloat *values); \
  STDMETHODIMP_(void) glGetPixelMapuiv(THIS_ GLenum map, GLuint *values); \
  STDMETHODIMP_(void) glGetPixelMapusv(THIS_ GLenum map, GLushort *values); \
  STDMETHODIMP_(void) glGetPolygonStipple(THIS_ GLubyte *mask); \
  STDMETHODIMP_(const GLubyte*) glGetString(THIS_ GLenum name); \
  STDMETHODIMP_(void) glGetTexEnvfv(THIS_ GLenum target, GLenum pname, GLfloat *params); \
  STDMETHODIMP_(void) glGetTexEnviv(THIS_ GLenum target, GLenum pname, GLint *params); \
  STDMETHODIMP_(void) glGetTexGendv(THIS_ GLenum coord, GLenum pname, GLdouble *params); \
  STDMETHODIMP_(void) glGetTexGenfv(THIS_ GLenum coord, GLenum pname, GLfloat *params); \
  STDMETHODIMP_(void) glGetTexGeniv(THIS_ GLenum coord, GLenum pname, GLint *params); \
  STDMETHODIMP_(void) glGetTexImage(THIS_ GLenum target, GLint level, GLenum format, \
                                 GLenum type, GLvoid *pixels); \
  STDMETHODIMP_(void) glGetTexLevelParameterfv(THIS_ GLenum target, GLint level, \
                                 GLenum pname, GLfloat *params); \
  STDMETHODIMP_(void) glGetTexLevelParameteriv(THIS_ GLenum target, GLint level, \
                                 GLenum pname, GLint *params); \
  STDMETHODIMP_(void) glGetTexParameterfv(THIS_ GLenum target, GLenum pname, \
                                 GLfloat *params); \
  STDMETHODIMP_(void) glGetTexParameteriv(THIS_ GLenum target, GLenum pname, \
                                 GLint *params); \
  STDMETHODIMP_(void) glHint(THIS_ GLenum target, GLenum mode); \
  STDMETHODIMP_(void) glIndexMask(THIS_ GLuint mask); \
  STDMETHODIMP_(void) glIndexd(THIS_ GLdouble c); \
  STDMETHODIMP_(void) glIndexdv(THIS_ const GLdouble *c); \
  STDMETHODIMP_(void) glIndexf(THIS_ GLfloat c); \
  STDMETHODIMP_(void) glIndexfv(THIS_ const GLfloat *c); \
  STDMETHODIMP_(void) glIndexi(THIS_ GLint c); \
  STDMETHODIMP_(void) glIndexiv(THIS_ const GLint *c); \
  STDMETHODIMP_(void) glIndexs(THIS_ GLshort c); \
  STDMETHODIMP_(void) glIndexsv(THIS_ const GLshort *c); \
  STDMETHODIMP_(void) glInitNames(THIS); \
  STDMETHODIMP_(GLboolean) glIsEnabled(THIS_ GLenum cap); \
  STDMETHODIMP_(GLboolean) glIsList(THIS_ GLuint list); \
  STDMETHODIMP_(void) glLightModelf(THIS_ GLenum pname, GLfloat param); \
  STDMETHODIMP_(void) glLightModelfv(THIS_ GLenum pname, const GLfloat *params); \
  STDMETHODIMP_(void) glLightModeli(THIS_ GLenum pname, GLint param); \
  STDMETHODIMP_(void) glLightModeliv(THIS_ GLenum pname, const GLint *params); \
  STDMETHODIMP_(void) glLightf(THIS_ GLenum light, GLenum pname, GLfloat param); \
  STDMETHODIMP_(void) glLightfv(THIS_ GLenum light, GLenum pname, const GLfloat *params); \
  STDMETHODIMP_(void) glLighti(THIS_ GLenum light, GLenum pname, GLint param); \
  STDMETHODIMP_(void) glLightiv(THIS_ GLenum light, GLenum pname, const GLint *params); \
  STDMETHODIMP_(void) glLineStipple(THIS_ GLint factor, GLushort pattern); \
  STDMETHODIMP_(void) glLineWidth(THIS_ GLfloat width); \
  STDMETHODIMP_(void) glListBase(THIS_ GLuint base); \
  STDMETHODIMP_(void) glLoadIdentity(THIS); \
  STDMETHODIMP_(void) glLoadMatrixd(THIS_ const GLdouble *m); \
  STDMETHODIMP_(void) glLoadMatrixf(THIS_ const GLfloat *m); \
  STDMETHODIMP_(void) glLoadName(THIS_ GLuint name); \
  STDMETHODIMP_(void) glLogicOp(THIS_ GLenum opcode); \
  STDMETHODIMP_(void) glMap1d(THIS_ GLenum target, GLdouble u1, GLdouble u2, GLint stride, \
                                 GLint order, const GLdouble *points); \
  STDMETHODIMP_(void) glMap1f(THIS_ GLenum target, GLfloat u1, GLfloat u2, GLint stride, \
                                 GLint order, const GLfloat *points); \
  STDMETHODIMP_(void) glMap2d(THIS_ GLenum target, GLdouble u1, GLdouble u2, GLint ustride, \
                                 GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, \
                                 GLint vorder, const GLdouble *points); \
  STDMETHODIMP_(void) glMap2f(THIS_ GLenum target, GLfloat u1, GLfloat u2, GLint ustride, \
                                 GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, \
                                 GLint vorder, const GLfloat *points); \
  STDMETHODIMP_(void) glMapGrid1d(THIS_ GLint un, GLdouble u1, GLdouble u2); \
  STDMETHODIMP_(void) glMapGrid1f(THIS_ GLint un, GLfloat u1, GLfloat u2); \
  STDMETHODIMP_(void) glMapGrid2d(THIS_ GLint un, GLdouble u1, GLdouble u2, GLint vn, \
                                 GLdouble v1, GLdouble v2); \
  STDMETHODIMP_(void) glMapGrid2f(THIS_ GLint un, GLfloat u1, GLfloat u2, GLint vn, \
                                 GLfloat v1, GLfloat v2); \
  STDMETHODIMP_(void) glMaterialf(THIS_ GLenum face, GLenum pname, GLfloat param); \
  STDMETHODIMP_(void) glMaterialfv(THIS_ GLenum face, GLenum pname, \
                                 const GLfloat *params); \
  STDMETHODIMP_(void) glMateriali(THIS_ GLenum face, GLenum pname, GLint param); \
  STDMETHODIMP_(void) glMaterialiv(THIS_ GLenum face, GLenum pname, const GLint *params); \
  STDMETHODIMP_(void) glMatrixMode(THIS_ GLenum mode); \
  STDMETHODIMP_(void) glMultMatrixd(THIS_ const GLdouble *m); \
  STDMETHODIMP_(void) glMultMatrixf(THIS_ const GLfloat *m); \
  STDMETHODIMP_(void) glNewList(THIS_ GLuint list, GLenum mode); \
  STDMETHODIMP_(void) glNormal3b(THIS_ GLbyte nx, GLbyte ny, GLbyte nz); \
  STDMETHODIMP_(void) glNormal3bv(THIS_ const GLbyte *v); \
  STDMETHODIMP_(void) glNormal3d(THIS_ GLdouble nx, GLdouble ny, GLdouble nz); \
  STDMETHODIMP_(void) glNormal3dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glNormal3f(THIS_ GLfloat nx, GLfloat ny, GLfloat nz); \
  STDMETHODIMP_(void) glNormal3fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glNormal3i(THIS_ GLint nx, GLint ny, GLint nz); \
  STDMETHODIMP_(void) glNormal3iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glNormal3s(THIS_ GLshort nx, GLshort ny, GLshort nz); \
  STDMETHODIMP_(void) glNormal3sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glOrtho(THIS_ GLdouble left, GLdouble right, GLdouble bottom, \
                                 GLdouble top, GLdouble zNear, GLdouble zFar); \
  STDMETHODIMP_(void) glPassThrough(THIS_ GLfloat token); \
  STDMETHODIMP_(void) glPixelMapfv(THIS_ GLenum map, GLint mapsize, \
                                 const GLfloat *values); \
  STDMETHODIMP_(void) glPixelMapuiv(THIS_ GLenum map, GLint mapsize, \
                                 const GLuint *values); \
  STDMETHODIMP_(void) glPixelMapusv(THIS_ GLenum map, GLint mapsize, \
                                 const GLushort *values); \
  STDMETHODIMP_(void) glPixelStoref(THIS_ GLenum pname, GLfloat param); \
  STDMETHODIMP_(void) glPixelStorei(THIS_ GLenum pname, GLint param); \
  STDMETHODIMP_(void) glPixelTransferf(THIS_ GLenum pname, GLfloat param); \
  STDMETHODIMP_(void) glPixelTransferi(THIS_ GLenum pname, GLint param); \
  STDMETHODIMP_(void) glPixelZoom(THIS_ GLfloat xfactor, GLfloat yfactor); \
  STDMETHODIMP_(void) glPointSize(THIS_ GLfloat size); \
  STDMETHODIMP_(void) glPolygonMode(THIS_ GLenum face, GLenum mode); \
  STDMETHODIMP_(void) glPolygonStipple(THIS_ const GLubyte *mask); \
  STDMETHODIMP_(void) glPopAttrib(THIS); \
  STDMETHODIMP_(void) glPopMatrix(THIS); \
  STDMETHODIMP_(void) glPopName(THIS); \
  STDMETHODIMP_(void) glPushAttrib(THIS_ GLbitfield mask); \
  STDMETHODIMP_(void) glPushMatrix(THIS); \
  STDMETHODIMP_(void) glPushName(THIS_ GLuint name); \
  STDMETHODIMP_(void) glRasterPos2d(THIS_ GLdouble x, GLdouble y); \
  STDMETHODIMP_(void) glRasterPos2dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glRasterPos2f(THIS_ GLfloat x, GLfloat y); \
  STDMETHODIMP_(void) glRasterPos2fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glRasterPos2i(THIS_ GLint x, GLint y); \
  STDMETHODIMP_(void) glRasterPos2iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glRasterPos2s(THIS_ GLshort x, GLshort y); \
  STDMETHODIMP_(void) glRasterPos2sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glRasterPos3d(THIS_ GLdouble x, GLdouble y, GLdouble z); \
  STDMETHODIMP_(void) glRasterPos3dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glRasterPos3f(THIS_ GLfloat x, GLfloat y, GLfloat z); \
  STDMETHODIMP_(void) glRasterPos3fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glRasterPos3i(THIS_ GLint x, GLint y, GLint z); \
  STDMETHODIMP_(void) glRasterPos3iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glRasterPos3s(THIS_ GLshort x, GLshort y, GLshort z); \
  STDMETHODIMP_(void) glRasterPos3sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glRasterPos4d(THIS_ GLdouble x, GLdouble y, GLdouble z, GLdouble w); \
  STDMETHODIMP_(void) glRasterPos4dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glRasterPos4f(THIS_ GLfloat x, GLfloat y, GLfloat z, GLfloat w); \
  STDMETHODIMP_(void) glRasterPos4fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glRasterPos4i(THIS_ GLint x, GLint y, GLint z, GLint w); \
  STDMETHODIMP_(void) glRasterPos4iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glRasterPos4s(THIS_ GLshort x, GLshort y, GLshort z, GLshort w); \
  STDMETHODIMP_(void) glRasterPos4sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glReadBuffer(THIS_ GLenum mode); \
  STDMETHODIMP_(void) glReadPixels(THIS_ GLint x, GLint y, GLsizei width, GLsizei height, \
                                 GLenum format, GLenum type, GLvoid *pixels); \
  STDMETHODIMP_(void) glRectd(THIS_ GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2); \
  STDMETHODIMP_(void) glRectdv(THIS_ const GLdouble *v1, const GLdouble *v2); \
  STDMETHODIMP_(void) glRectf(THIS_ GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2); \
  STDMETHODIMP_(void) glRectfv(THIS_ const GLfloat *v1, const GLfloat *v2); \
  STDMETHODIMP_(void) glRecti(THIS_ GLint x1, GLint y1, GLint x2, GLint y2); \
  STDMETHODIMP_(void) glRectiv(THIS_ const GLint *v1, const GLint *v2); \
  STDMETHODIMP_(void) glRects(THIS_ GLshort x1, GLshort y1, GLshort x2, GLshort y2); \
  STDMETHODIMP_(void) glRectsv(THIS_ const GLshort *v1, const GLshort *v2); \
  STDMETHODIMP_(GLint) glRenderMode(THIS_ GLenum mode); \
  STDMETHODIMP_(void) glRotated(THIS_ GLdouble angle, GLdouble x, GLdouble y, GLdouble z); \
  STDMETHODIMP_(void) glRotatef(THIS_ GLfloat angle, GLfloat x, GLfloat y, GLfloat z); \
  STDMETHODIMP_(void) glScaled(THIS_ GLdouble x, GLdouble y, GLdouble z); \
  STDMETHODIMP_(void) glScalef(THIS_ GLfloat x, GLfloat y, GLfloat z); \
  STDMETHODIMP_(void) glScissor(THIS_ GLint x, GLint y, GLsizei width, GLsizei height); \
  STDMETHODIMP_(void) glSelectBuffer(THIS_ GLsizei size, GLuint *buffer); \
  STDMETHODIMP_(void) glShadeModel(THIS_ GLenum mode); \
  STDMETHODIMP_(void) glStencilFunc(THIS_ GLenum func, GLint ref, GLuint mask); \
  STDMETHODIMP_(void) glStencilMask(THIS_ GLuint mask); \
  STDMETHODIMP_(void) glStencilOp(THIS_ GLenum fail, GLenum zfail, GLenum zpass); \
  STDMETHODIMP_(void) glTexCoord1d(THIS_ GLdouble s); \
  STDMETHODIMP_(void) glTexCoord1dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glTexCoord1f(THIS_ GLfloat s); \
  STDMETHODIMP_(void) glTexCoord1fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glTexCoord1i(THIS_ GLint s); \
  STDMETHODIMP_(void) glTexCoord1iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glTexCoord1s(THIS_ GLshort s); \
  STDMETHODIMP_(void) glTexCoord1sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glTexCoord2d(THIS_ GLdouble s, GLdouble t); \
  STDMETHODIMP_(void) glTexCoord2dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glTexCoord2f(THIS_ GLfloat s, GLfloat t); \
  STDMETHODIMP_(void) glTexCoord2fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glTexCoord2i(THIS_ GLint s, GLint t); \
  STDMETHODIMP_(void) glTexCoord2iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glTexCoord2s(THIS_ GLshort s, GLshort t); \
  STDMETHODIMP_(void) glTexCoord2sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glTexCoord3d(THIS_ GLdouble s, GLdouble t, GLdouble r); \
  STDMETHODIMP_(void) glTexCoord3dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glTexCoord3f(THIS_ GLfloat s, GLfloat t, GLfloat r); \
  STDMETHODIMP_(void) glTexCoord3fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glTexCoord3i(THIS_ GLint s, GLint t, GLint r); \
  STDMETHODIMP_(void) glTexCoord3iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glTexCoord3s(THIS_ GLshort s, GLshort t, GLshort r); \
  STDMETHODIMP_(void) glTexCoord3sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glTexCoord4d(THIS_ GLdouble s, GLdouble t, GLdouble r, GLdouble q); \
  STDMETHODIMP_(void) glTexCoord4dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glTexCoord4f(THIS_ GLfloat s, GLfloat t, GLfloat r, GLfloat q); \
  STDMETHODIMP_(void) glTexCoord4fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glTexCoord4i(THIS_ GLint s, GLint t, GLint r, GLint q); \
  STDMETHODIMP_(void) glTexCoord4iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glTexCoord4s(THIS_ GLshort s, GLshort t, GLshort r, GLshort q); \
  STDMETHODIMP_(void) glTexCoord4sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glTexEnvf(THIS_ GLenum target, GLenum pname, GLfloat param); \
  STDMETHODIMP_(void) glTexEnvfv(THIS_ GLenum target, GLenum pname, \
                                 const GLfloat *params); \
  STDMETHODIMP_(void) glTexEnvi(THIS_ GLenum target, GLenum pname, GLint param); \
  STDMETHODIMP_(void) glTexEnviv(THIS_ GLenum target, GLenum pname, const GLint *params); \
  STDMETHODIMP_(void) glTexGend(THIS_ GLenum coord, GLenum pname, GLdouble param); \
  STDMETHODIMP_(void) glTexGendv(THIS_ GLenum coord, GLenum pname, \
                                 const GLdouble *params); \
  STDMETHODIMP_(void) glTexGenf(THIS_ GLenum coord, GLenum pname, GLfloat param); \
  STDMETHODIMP_(void) glTexGenfv(THIS_ GLenum coord, GLenum pname, const GLfloat *params); \
  STDMETHODIMP_(void) glTexGeni(THIS_ GLenum coord, GLenum pname, GLint param); \
  STDMETHODIMP_(void) glTexGeniv(THIS_ GLenum coord, GLenum pname, const GLint *params); \
  STDMETHODIMP_(void) glTexImage1D(THIS_ GLenum target, GLint level, GLint components, \
                                 GLsizei width, GLint border, GLenum format, GLenum type, \
                                 const GLvoid *pixels); \
  STDMETHODIMP_(void) glTexImage2D(THIS_ GLenum target, GLint level, GLint components, \
                                 GLsizei width, GLsizei height, GLint border, \
                                 GLenum format, GLenum type, const GLvoid *pixels); \
  STDMETHODIMP_(void) glTexParameterf(THIS_ GLenum target, GLenum pname, GLfloat param); \
  STDMETHODIMP_(void) glTexParameterfv(THIS_ GLenum target, GLenum pname, \
                                 const GLfloat *params); \
  STDMETHODIMP_(void) glTexParameteri(THIS_ GLenum target, GLenum pname, GLint param); \
  STDMETHODIMP_(void) glTexParameteriv(THIS_ GLenum target, GLenum pname, \
                                 const GLint *params); \
  STDMETHODIMP_(void) glTranslated(THIS_ GLdouble x, GLdouble y, GLdouble z); \
  STDMETHODIMP_(void) glTranslatef(THIS_ GLfloat x, GLfloat y, GLfloat z); \
  STDMETHODIMP_(void) glVertex2d(THIS_ GLdouble x, GLdouble y); \
  STDMETHODIMP_(void) glVertex2dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glVertex2f(THIS_ GLfloat x, GLfloat y); \
  STDMETHODIMP_(void) glVertex2fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glVertex2i(THIS_ GLint x, GLint y); \
  STDMETHODIMP_(void) glVertex2iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glVertex2s(THIS_ GLshort x, GLshort y); \
  STDMETHODIMP_(void) glVertex2sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glVertex3d(THIS_ GLdouble x, GLdouble y, GLdouble z); \
  STDMETHODIMP_(void) glVertex3dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glVertex3f(THIS_ GLfloat x, GLfloat y, GLfloat z); \
  STDMETHODIMP_(void) glVertex3fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glVertex3i(THIS_ GLint x, GLint y, GLint z); \
  STDMETHODIMP_(void) glVertex3iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glVertex3s(THIS_ GLshort x, GLshort y, GLshort z); \
  STDMETHODIMP_(void) glVertex3sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glVertex4d(THIS_ GLdouble x, GLdouble y, GLdouble z, GLdouble w); \
  STDMETHODIMP_(void) glVertex4dv(THIS_ const GLdouble *v); \
  STDMETHODIMP_(void) glVertex4f(THIS_ GLfloat x, GLfloat y, GLfloat z, GLfloat w); \
  STDMETHODIMP_(void) glVertex4fv(THIS_ const GLfloat *v); \
  STDMETHODIMP_(void) glVertex4i(THIS_ GLint x, GLint y, GLint z, GLint w); \
  STDMETHODIMP_(void) glVertex4iv(THIS_ const GLint *v); \
  STDMETHODIMP_(void) glVertex4s(THIS_ GLshort x, GLshort y, GLshort z, GLshort w); \
  STDMETHODIMP_(void) glVertex4sv(THIS_ const GLshort *v); \
  STDMETHODIMP_(void) glViewport(THIS_ GLint x, GLint y, GLsizei width, GLsizei height);


#define DECL_IWGL_METHODS  \
  STDMETHODIMP QueryInterface(THIS_ REFIID riid, LPVOID FAR *ppvObj);  \
  STDMETHODIMP_(ULONG) AddRef(THIS);  \
  STDMETHODIMP_(ULONG) Release(THIS);  \
  STDMETHODIMP_(HGLRC) wglCreateContext(THIS_ HDC hdc); \
  STDMETHODIMP_(BOOL)  wglDeleteContext(THIS_ HGLRC hglrc); \
  STDMETHODIMP_(HGLRC) wglGetCurrentContext(THIS); \
  STDMETHODIMP_(HDC)  wglGetCurrentDC(THIS); \
  STDMETHODIMP_(BOOL) wglMakeCurrent(THIS_ HDC hdc, HGLRC hglrc); \
  STDMETHODIMP_(BOOL) wglUseFontBitmapsA(THIS_ HDC hdc, DWORD first, DWORD count, \
                                                  DWORD listbase); \
  STDMETHODIMP_(BOOL) wglUseFontBitmapsW(THIS_ HDC hdc, DWORD first, DWORD count, \
                                                  DWORD listbase); \
  STDMETHODIMP_(BOOL) SwapBuffers(THIS_ HDC hdc);


#define DECL_IGLU_METHODS  \
  STDMETHODIMP QueryInterface(THIS_ REFIID riid, LPVOID FAR *ppvObj);  \
  STDMETHODIMP_(ULONG) AddRef(THIS);  \
  STDMETHODIMP_(ULONG) Release(THIS);  \
  STDMETHODIMP_(const GLubyte*) gluErrorString(THIS_ GLenum errCode); \
  STDMETHODIMP_(const wchar_t*) gluErrorUnicodeStringEXT(THIS_ GLenum errCode); \
  STDMETHODIMP_(void) gluOrtho2D(THIS_ GLdouble left, GLdouble right, GLdouble bottom, \
                                 GLdouble top); \
  STDMETHODIMP_(void) gluPerspective(THIS_ GLdouble fovy, GLdouble aspect, GLdouble zNear, \
                                 GLdouble zFar); \
  STDMETHODIMP_(void) gluPickMatrix(THIS_ GLdouble x, GLdouble y, GLdouble width, \
                                 GLdouble height, GLint viewport[4]); \
  STDMETHODIMP_(void) gluLookAt(THIS_ GLdouble eyex, GLdouble eyey, GLdouble eyez, \
                                 GLdouble centerx, GLdouble centery, GLdouble centerz, \
                                 GLdouble upx, GLdouble upy, GLdouble upz); \
  STDMETHODIMP_(int) gluProject(THIS_ GLdouble objx, GLdouble objy, GLdouble objz, \
                                 const GLdouble modelMatrix[16], \
                                 const GLdouble projMatrix[16], const GLint viewport[4], \
                                 GLdouble *winx, GLdouble *winy, GLdouble *winz); \
  STDMETHODIMP_(int) gluUnProject(THIS_ GLdouble winx, GLdouble winy, GLdouble winz, \
                                 const GLdouble modelMatrix[16], \
                                 const GLdouble projMatrix[16], const GLint viewport[4], \
                                 GLdouble *objx, GLdouble *objy, GLdouble *objz); \
  STDMETHODIMP_(int) gluScaleImage(THIS_ GLenum format, GLint widthin, GLint heightin, \
                                 GLenum typein, const void *datain, GLint widthout, \
                                 GLint heightout, GLenum typeout, void *dataout); \
  STDMETHODIMP_(int) gluBuild1DMipmaps(THIS_ GLenum target, GLint components, GLint width, \
                                 GLenum format, GLenum type, const void *data); \
  STDMETHODIMP_(int) gluBuild2DMipmaps(THIS_ GLenum target, GLint components, GLint width, \
                                 GLint height, GLenum format, GLenum type, \
                                 const void *data); \
  STDMETHODIMP_(GLUquadricObj*) gluNewQuadric(THIS); \
  STDMETHODIMP_(void) gluDeleteQuadric(THIS_ GLUquadricObj *state); \
  STDMETHODIMP_(void) gluQuadricNormals(THIS_ GLUquadricObj *quadObject, GLenum normals); \
  STDMETHODIMP_(void) gluQuadricTexture(THIS_ GLUquadricObj *quadObject, \
                                 GLboolean textureCoords); \
  STDMETHODIMP_(void) gluQuadricOrientation(THIS_ GLUquadricObj *quadObject, \
                                 GLenum orientation); \
  STDMETHODIMP_(void) gluQuadricDrawStyle(THIS_ GLUquadricObj *quadObject, \
                                 GLenum drawStyle); \
  STDMETHODIMP_(void) gluCylinder(THIS_ GLUquadricObj *qobj, GLdouble baseRadius, \
                                 GLdouble topRadius, GLdouble height, GLint slices, \
                                 GLint stacks); \
  STDMETHODIMP_(void) gluDisk(THIS_ GLUquadricObj *qobj, GLdouble innerRadius, \
                                 GLdouble outerRadius, GLint slices, GLint loops); \
  STDMETHODIMP_(void) gluPartialDisk(THIS_ GLUquadricObj *qobj, GLdouble innerRadius, \
                                 GLdouble outerRadius, GLint slices, GLint loops, \
                                 GLdouble startAngle, GLdouble sweepAngle); \
  STDMETHODIMP_(void) gluSphere(THIS_ GLUquadricObj *qobj, GLdouble radius, GLint slices, \
                                 GLint stacks); \
  STDMETHODIMP_(void) gluQuadricCallback(THIS_ GLUquadricObj *qobj, GLenum which, \
                                 void (CALLBACK* fn)() ); \
  STDMETHODIMP_(GLUtriangulatorObj*) gluNewTess(THIS); \
  STDMETHODIMP_(void) gluTessCallback(THIS_ GLUtriangulatorObj *tobj, GLenum which, \
                                 void (CALLBACK* fn)() ); \
  STDMETHODIMP_(void) gluDeleteTess(THIS_ GLUtriangulatorObj *tobj); \
  STDMETHODIMP_(void) gluBeginPolygon(THIS_ GLUtriangulatorObj *tobj); \
  STDMETHODIMP_(void) gluEndPolygon(THIS_ GLUtriangulatorObj *tobj); \
  STDMETHODIMP_(void) gluNextContour(THIS_ GLUtriangulatorObj *tobj, GLenum type); \
  STDMETHODIMP_(void) gluTessVertex(THIS_ GLUtriangulatorObj *tobj, GLdouble v[3], \
                                 void *data); \
  STDMETHODIMP_(GLUnurbsObj*) gluNewNurbsRenderer(THIS); \
  STDMETHODIMP_(void) gluDeleteNurbsRenderer(THIS_ GLUnurbsObj *nobj); \
  STDMETHODIMP_(void) gluBeginSurface(THIS_ GLUnurbsObj *nobj); \
  STDMETHODIMP_(void) gluBeginCurve(THIS_ GLUnurbsObj *nobj); \
  STDMETHODIMP_(void) gluEndCurve(THIS_ GLUnurbsObj *nobj); \
  STDMETHODIMP_(void) gluEndSurface(THIS_ GLUnurbsObj *nobj); \
  STDMETHODIMP_(void) gluBeginTrim(THIS_ GLUnurbsObj *nobj); \
  STDMETHODIMP_(void) gluEndTrim(THIS_ GLUnurbsObj *nobj); \
  STDMETHODIMP_(void) gluPwlCurve(THIS_ GLUnurbsObj *nobj, GLint count, GLfloat *array, \
                                 GLint stride, GLenum type); \
  STDMETHODIMP_(void) gluNurbsCurve(THIS_ GLUnurbsObj *nobj, GLint nknots, GLfloat *knot, \
                                 GLint stride, GLfloat *ctlarray, GLint order, \
                                 GLenum type); \
  STDMETHODIMP_(void) gluNurbsSurface(THIS_ GLUnurbsObj *nobj, GLint sknot_count, \
                                 GLfloat *sknot, GLint tknot_count, GLfloat *tknot, \
                                 GLint s_stride, GLint t_stride, GLfloat *ctlarray, \
                                 GLint sorder, GLint torder, GLenum type); \
  STDMETHODIMP_(void) gluLoadSamplingMatrices(THIS_ GLUnurbsObj *nobj, \
                                 const GLfloat modelMatrix[16], \
                                 const GLfloat projMatrix[16], const GLint viewport[4]); \
  STDMETHODIMP_(void) gluNurbsProperty(THIS_ GLUnurbsObj *nobj, GLenum property, \
                                 GLfloat value); \
  STDMETHODIMP_(void) gluGetNurbsProperty(THIS_ GLUnurbsObj *nobj, GLenum property, \
                                 GLfloat *value); \
  STDMETHODIMP_(void) gluNurbsCallback(THIS_ GLUnurbsObj *nobj, GLenum which, \
                                 void (CALLBACK* fn)() );



#define DECL_IGLCONTROL_METHODS  \
  STDMETHODIMP QueryInterface(THIS_ REFIID riid, LPVOID FAR *ppvObj);  \
  STDMETHODIMP_(ULONG) AddRef(THIS);  \
  STDMETHODIMP_(ULONG) Release(THIS);  \
  STDMETHODIMP_(HRESULT) CreateContext(THIS_ HIGLC *higlc); \
  STDMETHODIMP_(HRESULT) DeleteContext(THIS_ HIGLC hglrc); \
  STDMETHODIMP_(HRESULT) PushIntoContext(THIS_ HIGLC higlc, HIGLC *hprev); \
  STDMETHODIMP_(HRESULT) RestoreContext(THIS_ HIGLC hglrc); \
  STDMETHODIMP_(HRESULT) GetContext(THIS_ HIGLC *higlc); \
  STDMETHODIMP_(HRESULT) SetContext(THIS_ HIGLC higlc); \
  STDMETHODIMP_(HRESULT) SetHints(THIS_ DWORD hints); \
  STDMETHODIMP_(HRESULT) GetHints(THIS_ DWORD *hints);


#define DECL_IGLUCONTROL_METHODS  \
  STDMETHODIMP QueryInterface(THIS_ REFIID riid, LPVOID FAR *ppvObj);  \
  STDMETHODIMP_(ULONG) AddRef(THIS);  \
  STDMETHODIMP_(ULONG) Release(THIS);  \
  STDMETHODIMP_(HRESULT) RegisterCallbackInterface(THIS_ LPUNKNOWN lpcbif); \
  STDMETHODIMP_(HRESULT) SetStandardCallback(THIS_ int fid, void *obj, GLenum which); 


#define DECL_IVIEWGLOBJECT_METHODS  \
  STDMETHODIMP QueryInterface(THIS_ REFIID riid, LPVOID FAR *ppvObj);  \
  STDMETHODIMP_(ULONG) AddRef(THIS);  \
  STDMETHODIMP_(ULONG) Release(THIS);  \
  STDMETHODIMP_(HRESULT) Draw(THIS_ DWORD dwRep, LPGL pIGL);

enum IGLExtensionItem
{
	IGLEXT_STYLE_EXT,		//@emem GStyle3D extension
	IGLEXT_SURFACE_EXT,		//@emem Surface extension
	IGLEXT_DRAWGEOMETRY_EXT,//@emem DrawGeometry extension
};

enum IGLExtensionState
{
	IGLEXT_STATE_STYLE,		//@emem Current style
	IGLEXT_STATE_SURFACE,	//@emem Current surface
};

// IID_IGLExtension	{66EEE92E-5AB5-11d1-A266-08003654E902}
DEFINE_GUID(IID_IGLExtension, 				0x66eee92e, 0x5ab5, 0x11d1, 0xa2, 0x66, 0x08, 0x00, 0x36, 0x54, 0xe9, 0x02 );

// IGLExtension typedef
typedef interface	IGLExtension			*LPGLEXTENSION;

//	@interface IGLExtension | 
//		IGLExtension is a private extension interface to Solid Edge's IGL
//
//		@meth HRESULT | Get | Get information about the IJRenderSceneEx object.
//		@meth HRESULT | Set | Get attribute information in the IJRenderSceneEx object.
//		@meth HRESULT | DrawGeometry | Draw high level geometry.
//
//		@comm IID for IJRenderSceneMultiplex is {66EEE92E-5AB5-11d1-A266-08003654E902}

#undef  INTERFACE
#define INTERFACE IGLExtension
DECLARE_INTERFACE_(IGLExtension, IUnknown)
{
	//@method HRESULT | IGLExtension | Get | Get information about the IGLExtension object.
	STDMETHOD_(HRESULT, Get)(THIS_ 
									IGLExtensionItem eItem, //@parm Item to query
									LPVOID *ppvValue ) PURE; //@parm Pointer to receive the value

	//@method HRESULT | IGLExtension | Set | Get attribute information in the IGLExtension object.
	STDMETHOD_(HRESULT, Set)(THIS_
									IGLExtensionItem eItem, //@parm Item to set
									LPVOID pvValue ) PURE;	//@parm Value to set

	//@method HRESULT | IGLExtension | Begin | Begin an IGLExtension object state.
	STDMETHOD_(HRESULT, Begin)(THIS_ 
									IGLExtensionState eState, //@parm State to begin
									LPVOID pvValue ) PURE; //@parm Pointer to receive the value
							  
	//@method HRESULT | IGLExtension | End | End an IGLExtension object state.
	STDMETHOD_(HRESULT, End)(THIS_
									IGLExtensionState eState ) PURE; //@parm State to end
							
	//@method HRESULT | IGLExtension | DrawGeometry | Draw high level geometry.
	STDMETHOD_(HRESULT, DrawGeometry)(THIS_
									DWORD dwType,			//@parm Type of graphic
									LPVOID pvGraphic,		//@parm Pointer to graphic
									LPVOID pStyle=NULL,	//@parm Pointer to optional style
									LPVOID pRange=NULL ) PURE; //@parm Pointer to optional range
};

#define JDECL_IGLEXTENSION_METHODS  \
	JDECL_IUNKNOWN_METHODS  \
	STDMETHODIMP_(HRESULT)	Get( IGLExtensionItem eItem, LPVOID *ppvValue ); \
	STDMETHODIMP_(HRESULT)	Set( IGLExtensionItem eItem, LPVOID pvValue ); \
	STDMETHODIMP_(HRESULT)	Begin( IGLExtensionState eState, LPVOID pvValue ); \
	STDMETHODIMP_(HRESULT)	End( IGLExtensionState eState ); \
	STDMETHODIMP_(HRESULT)	DrawGeometry( DWORD dwType, LPVOID pvGraphic, LPVOID pStyle=NULL, LPVOID pRange=NULL );

#endif

