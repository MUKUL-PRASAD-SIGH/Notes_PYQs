

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri Aug 03 08:50:39 2007
 */
/* Compiler settings for constant\constant.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
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


#ifndef __dispcnst_h__
#define __dispcnst_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_constant_0000 */
/* [local] */ 

#pragma once
#pragma once
#pragma once
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
//SOLID EDGE CONSTANTS AND ENUMS
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////


extern RPC_IF_HANDLE __MIDL_itf_constant_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_constant_0000_v0_0_s_ifspec;


#ifndef __SolidEdgeConstants_LIBRARY_DEFINED__
#define __SolidEdgeConstants_LIBRARY_DEFINED__

/* library SolidEdgeConstants */
/* [version][lcid][helpfile][helpcontext][helpstring][uuid] */ 

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
//FRAMEWORK CONSTANTS AND ENUMS
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
typedef /* [helpcontext][helpstring] */ 
enum DocumentTypeConstants
    {	igPartDocument	= 01,
	igDraftDocument	= 02,
	igAssemblyDocument	= 03,
	igSheetMetalDocument	= 04,
	igUnknownDocument	= 05,
	igWeldmentDocument	= 06,
	igWeldmentAssemblyDocument	= 07
    } 	DocumentTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum StyleUnitsConstant
    {	PAPER_STYLEUNITS	= 11,
	DESIGN_STYLEUNITS	= 12,
	VIEW_STYLEUNITS	= 13
    } 	StyleUnitsConstant;

typedef /* [helpstring][helpcontext] */ 
enum OLEInsertionTypeConstant
    {	igUseSymbolPreferences	= -1,
	igOLELinked	= 0,
	igOLEEmbedded	= 1,
	igOLENone	= 3,
	igOLESharedEmbedded	= 4
    } 	OLEInsertionTypeConstant;

typedef /* [helpstring][helpcontext] */ 
enum DisplayTypeConstant
    {	igNotSpecifiedDisplay	= -1,
	igContentsDisplay	= 0,
	igIconDisplay	= 1
    } 	DisplayTypeConstant;

typedef /* [helpstring][helpcontext] */ 
enum OLEUpdateOptionConstant
    {	igOLEAutomatic	= 0,
	igOLEFrozen	= 1,
	igOLEManual	= 2
    } 	OLEUpdateOptionConstant;

typedef /* [helpstring][helpcontext] */ 
enum KeyPointType
    {	igKeyPointStart	= 0x1,
	igKeyPointEnd	= 0x2,
	igKeyPointCenter	= 0x4,
	igKeyPointMajorAxis	= 0x8,
	igKeyPointMinorAxis	= 0x10,
	igKeyPointMiddle	= 0x20,
	igKeyPointPointOnly	= 0x40,
	igKeyPointHorizontalSilhouette	= 0x80,
	igKeyPointVerticalSilhouette	= 0x100,
	igKeyPointInteriorNode	= 0x200,
	igKeyPointInteriorPole	= 0x400,
	igKeyPointNonDefining	= 0x4000,
	igKeyPointCallback	= 0x8000
    } 	KeyPointType;

typedef /* [helpstring][helpcontext] */ 
enum HandleType
    {	igHandleNone	= 0,
	igHandleReadOnly	= 0x1,
	igHandleWriteable	= 0x2,
	igHandleInvisible	= 0x4,
	igHandleRotate	= 0x8,
	igHandleConnectedToNext	= 0x10,
	igHandleConnectedToPrevious	= 0x20
    } 	HandleType;

typedef /* [helpstring][helpcontext] */ 
enum LinksUpdateOption
    {	igNoLinksUpdate	= 0,
	igLinksUpdateWithDefpath	= igNoLinksUpdate + 1,
	igLinksUpdateWithAltPath	= igLinksUpdateWithDefpath + 1
    } 	LinksUpdateOption;

typedef /* [helpstring][helpcontext] */ 
enum DocumentStatus
    {	igStatusAvailable	= 0,
	igStatusInWork	= igStatusAvailable + 1,
	igStatusInReview	= igStatusInWork + 1,
	igStatusReleased	= igStatusInReview + 1,
	igStatusBaselined	= igStatusReleased + 1,
	igStatusObsolete	= igStatusBaselined + 1
    } 	DocumentStatus;

typedef /* [helpstring][helpcontext] */ 
enum DocumentAccess
    {	igReadWrite	= 0,
	igReadOnly	= igReadWrite + 1,
	igReadExclusive	= igReadOnly + 1
    } 	DocumentAccess;

typedef /* [helpstring][helpcontext] */ 
enum NotifyOption
    {	igNotifyWhenReadable	= 0,
	igNotifyWhenWriteable	= igNotifyWhenReadable + 1,
	igNotifyWhenAvailable	= igNotifyWhenWriteable + 1,
	igNoNotify	= igNotifyWhenAvailable + 1,
	igNotifyWhenExclusive	= igNoNotify + 1
    } 	NotifyOption;

typedef /* [v1_enum][helpstring][helpcontext] */ 
enum ObjectType
    {	igReference	= 0xd22c9ad0,
	igHorizontalRelation2d	= 0xef4e6530,
	igVerticalRelation2d	= 0xfaffe580,
	igPointOnRelation2d	= 0x104d3c70,
	igParallelRelation2d	= 0x1ba30d80,
	igPerpendicularRelation2d	= 0x262785e0,
	igKeyPointRelation2d	= 0x2dce8440,
	igIntersectRelation2d	= 0x458d3420,
	igSetRelation2d	= 0x2ddd1f80,
	igTangentRelation2d	= 0x2a43f980,
	igFixRelation2d	= 0xca3b3c60,
	igHorizontalAlignRelation2d	= 0xe80b91b0,
	igVerticalAlignRelation2d	= 0xb9ae5db0,
	igConcentricRelation2d	= 0x64196e70,
	igSymmetricRelation2d	= 0xb046b380,
	igEqualRelation2d	= 0xb046b385,
	igColinearRelation2d	= 0xb046b387,
	igFilletRelation2d	= 0xea16f5e0,
	igChamferRelation2d	= 0x62618a20,
	igLinkRelation2d	= 0x62618a21,
	igSheetView	= 0xc7a308cc,
	igDimension	= 0x1d1928c0,
	igLeader	= 0x54b91390,
	igDatumFrame	= 0x99083a10,
	igFeatureContolFrame	= 0x4a3a300,
	igFeatureControlFrame	= 0x4a3a300,
	igSurfaceFinishTexture	= 0x5c273090,
	igWeldSymbol	= 0xfd7642e0,
	igBalloon	= 0x16e812a2,
	igCenterMark	= 0x1e1ec180,
	igCenterLine	= 0x1e1ec181,
	igBoltHoleCircle	= 0xbb00f5dc,
	igDatumTarget	= 0x51a8e750,
	igDatumPoint	= 0x8d2252b1,
	igTextBox	= 0x777a6860,
	igSmartFrame2d	= 0x5b552e30,
	igArc2d	= 0x9d650a00,
	igBsplineCurve2d	= 0x94834300,
	igCircle2d	= 0x902ad280,
	igComplexString2d	= 0x3750d460,
	igFittedCurve2d	= 0xcef99550,
	igEllipticalArc2d	= 0xde359e40,
	igEllipse2d	= 0xa3494010,
	igLine2d	= 0x2d4e13c0,
	igLineString2d	= 0xf875b4a0,
	igPoint2d	= 0x98f8bc10,
	igBoundary2d	= 0x1eb2fa20,
	igSymbol2d	= 0x719c2a5e,
	igHole2d	= 0x4e823a0,
	igRectangularPattern2d	= 0xed05d560,
	igCircularPattern2d	= 0x99b3e70,
	igImage2d	= 0x784bb34d,
	igGroundRelation3d	= 0x74c467d0,
	igAxialRelation3d	= 0x57cb1fb0,
	igPlanarRelation3d	= 0x8546eef0,
	igPointRelation3d	= 0xfe1a91c0,
	igAngularRelation3d	= 0x4cefed70,
	igTangentRelation3d	= 0x36be7856,
	igCamFollowerRelation3d	= 0xaf254b8c,
	igGearRelation3d	= 0xb5d3b0af,
	igPart	= 0x8ff2dd03,
	igSubAssembly	= 0x8ff2dd04,
	igDrawingView	= 0x4d64b820,
	igViewPlane	= 0xa949f360,
	igCuttingPlane	= 0xc51fd0e0,
	igDetailEnvelope	= 0x9da238b0,
	igGroup	= 0xda02a6d0,
	igSubOccurrence	= 0xc32a477b,
	igTopologyReference	= 0x6c7bd538,
	igDividedPart	= 0x8c556e11,
	igFamilyMember	= 0x26268947,
	igTube	= 0x56a41246,
	igVariable	= 0x7647edc3,
	igRefPlane	= 0x2bae0540,
	igRefAxis	= 0xc6b68a90,
	igAsmRefPlane	= 0xaa0c3292,
	igSketch	= 0x64bb0aac,
	seDVLine2d	= 0x345186d6,
	seDVArc2d	= 0x9476c272,
	seDVBSplineCurve2d	= 0x5c6f8db0,
	seDVCircle2d	= 0x845d8e56,
	seDVEllipse2d	= 0xe66056d4,
	seDVLineString2d	= 0x6687bbd4,
	seDVEllipticalArc2d	= 0x94b94b94,
	seDVPoint2d	= 0xc545328,
	seLineSegment	= 0x56a41244,
	seArcSegment	= 0x94f30b5a,
	seSegmentDirectionRelation3d	= 0x58e959dd,
	seSegmentDistanceRelation3d	= 0x58e959de,
	seSegmentRadiusRelation3d	= 0xa02dd114,
	seSegmentAngularRelation3d	= 0x8f85534c,
	seSegmentPointRelation3d	= 0x58e959dc,
	seSegmentTangentRelation3d	= 0x5df5112c,
	seOccurrences	= 0xcec85b6b,
	seLayout	= 0x364df341,
	seSelectSet	= 0xdd11a4a0,
	seCurveSegment	= 0x553cadf8,
	seVirtualComponent	= 0x70b1de86,
	seVirtualComponentOccurrence	= 0xba37a3d7,
	igComponentImage2d	= 0xaecffdea,
	igComponentSketch	= 0xb42820d3,
	seComponentLayout	= 0x79851ead,
	seConfiguration	= 0x7bf47882,
	seAssemblyBodies	= 0x71423bab,
	seAssemblyBody	= 0x904f220f,
	seSubassemblyBodies	= 0xd0aaadb1,
	seSubassemblyBody	= 0x498717a0,
	seAssemblyGroup	= 0x284c995f,
	seAssemblyGroups	= 0x88850e82
    } 	ObjectType;

typedef /* [helpstring][helpcontext] */ 
enum RouteType
    {	igOneAfterAnother	= 0,
	igAllAtOnce	= igOneAfterAnother + 1
    } 	RouteType;

typedef /* [helpstring][helpcontext] */ 
enum RouteStatus
    {	igInvalidSlip	= 0,
	igRouteComplete	= igInvalidSlip + 1,
	igNotYetRouted	= igRouteComplete + 1,
	igRouteInProgress	= igNotYetRouted + 1
    } 	RouteStatus;

typedef /* [helpstring][helpcontext] */ 
enum PrintRangeConstants
    {	igPrintAll	= 1,
	igPrintSelected	= 2,
	igPrintSpecified	= 3
    } 	PrintRangeConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitTypeConstants
    {	igUnitDistance	= 1,
	igUnitAngle	= 2,
	igUnitMass	= 3,
	igUnitTime	= 4,
	igUnitTemperature	= 5,
	igUnitElectricCharge	= 6,
	igUnitLuminousIntensity	= 7,
	igUnitAmountOfSubstance	= 8,
	igUnitSolidAngle	= 9,
	igUnitAngularAcceleration	= 10,
	igUnitAngularMomentum	= 11,
	igUnitAngularVelocity	= 12,
	igUnitArea	= 13,
	igUnitBodyForce	= 14,
	igUnitCoefficientOfThermalExpansion	= 15,
	igUnitDensity	= 16,
	igUnitElectricalCapacitance	= 17,
	igUnitElectricalConductance	= 18,
	igUnitElectricalFieldStrength	= 19,
	igUnitElectricalInductance	= 20,
	igUnitElectricalPotential	= 21,
	igUnitElectricalResistance	= 22,
	igUnitEnergy	= 23,
	igUnitEntropy	= 24,
	igUnitFilmCoefficient	= 25,
	igUnitForce	= 26,
	igUnitForcePerArea	= 27,
	igUnitForcePerDistance	= 28,
	igUnitFrequency	= 29,
	igUnitHeatCapacity	= 30,
	igUnitHeatFluxPerArea	= 31,
	igUnitHeatFluxPerDistance	= 32,
	igUnitHeatSource	= 33,
	igUnitIlluminance	= 34,
	igUnitLinearAcceleration	= 35,
	igUnitLinearPerAngular	= 36,
	igUnitLinearVelocity	= 37,
	igUnitLuminousFlux	= 38,
	igUnitMagneticFieldStrength	= 39,
	igUnitMagneticFlux	= 40,
	igUnitMagneticFluxDensity	= 41,
	igUnitMassFlowRate	= 42,
	igUnitMassMomentOfInertia	= 43,
	igUnitMassPerArea	= 44,
	igUnitMassPerLength	= 45,
	igUnitMomentum	= 46,
	igUnitPerDistance	= 47,
	igUnitPower	= 48,
	igUnitQuantityOfElectricity	= 49,
	igUnitRadiantIntensity	= 50,
	igUnitRotationalStiffness	= 51,
	igUnitSecondMomentOfArea	= 52,
	igUnitThermalConductivity	= 53,
	igUnitDynamicViscosity	= 54,
	igUnitKinematicViscosity	= 55,
	igUnitVolume	= 56,
	igUnitVolumeFlowRate	= 57,
	igUnitScalar	= 58
    } 	UnitTypeConstants;

typedef /* [v1_enum][helpstring][helpcontext] */ 
enum SolidEdgeCommandConstants
    {	seAssemblyPlacePartCommand	= 32791,
	sePartSelectCommand	= 45000,
	sePartInsertPartCommand	= 40254,
	seSheetMetalSelectCommand	= 45000,
	seAssemblySelectCommand	= 57082,
	seDraftSelectCommand	= 57082
    } 	SolidEdgeCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum SeBarType
    {	seBarTypeMenuBar	= 1,
	seBarTypeNormal	= 2,
	seBarTypePopup	= 3
    } 	SeBarType;

typedef /* [helpstring][helpcontext] */ 
enum SeBarPosition
    {	seBarTop	= 1,
	seBarBottom	= 2,
	seBarLeft	= 3,
	seBarRight	= 4,
	seBarFloating	= 5
    } 	SeBarPosition;

typedef /* [helpstring][helpcontext] */ 
enum SeControlType
    {	seControlPopup	= 1,
	seControlButton	= 2,
	seControlSeparator	= 3
    } 	SeControlType;

typedef /* [helpstring][helpcontext] */ 
enum SeButtonState
    {	seButtonDown	= 1,
	seButtonMixed	= 2,
	seButtonUp	= 3
    } 	SeButtonState;

typedef /* [helpstring][helpcontext] */ 
enum SeButtonStyle
    {	seButtonAutomatic	= 1,
	seButtonCaption	= 2,
	seButtonIcon	= 3,
	seButtonIconAndCaption	= 4
    } 	SeButtonStyle;

typedef /* [helpstring][helpcontext] */ 
enum SECommandActivation
    {	seCmdActive_Enabled	= 0x1,
	seCmdActive_Checked	= 0x2,
	seCmdActive_ChangeText	= 0x4,
	seCmdActive_UseDotMark	= 0x8,
	seCmdActive_UseBitmap	= 0x10
    } 	SECommandActivation;

typedef /* [helpstring][helpcontext] */ 
enum seCmdFlag
    {	seTerminateAfterActivation	= 1,
	seNoDeactivate	= 2
    } 	seCmdFlag;

typedef /* [helpstring][helpcontext] */ 
enum seMouseAction
    {	seDOWN	= 0,
	seUP	= 1,
	seMOVE	= 2,
	seDBLCLICK	= 3
    } 	seMouseAction;

typedef /* [helpstring][helpcontext] */ 
enum seButton
    {	seLEFT	= 0x1,
	seRIGHT	= 0x2,
	seMIDDLE	= 0x4
    } 	seButton;

typedef /* [helpstring][helpcontext] */ 
enum seKey
    {	seSHIFT	= 0x1,
	seCONTROL	= 0x2,
	seALT	= 0x4
    } 	seKey;

typedef /* [helpstring][helpcontext] */ 
enum seMouseDragState
    {	seMouseEnterDrag	= 0,
	seMouseDrag	= 1,
	seMouseExitDrag	= 2
    } 	seMouseDragState;

typedef /* [helpstring][helpcontext] */ 
enum seLocateModes
    {	seSmartLocate	= 0,
	seLocateSimple	= 1,
	seLocateQuickPick	= 2,
	seLocateOff	= 3
    } 	seLocateModes;

typedef /* [helpstring][helpcontext] */ 
enum seDynamicsModes
    {	seDynamicsOff	= 0,
	seDynamicsLine	= 1,
	seDynamicsCircleByCenter	= 2,
	seDynamicsRectangle	= 3
    } 	seDynamicsModes;

typedef /* [helpstring][helpcontext] */ 
enum seLocateFilterConstants
    {	seLocateGeometry2d	= 0,
	seLocateArc2d	= 1,
	seLocateBspCurve2d	= 2,
	seLocateCircle2d	= 3,
	seLocateComplexString2d	= 4,
	seLocateCurve2d	= 5,
	seLocateEllipse2d	= 6,
	seLocateLine2d	= 7,
	seLocateLineString2d	= 8,
	seLocatePoint2d	= 9,
	seLocateBoundary2d	= 10,
	seLocateProfile	= 11,
	seLocateHole2d	= 12,
	seLocatePoint	= 13,
	seLocateLine	= 14,
	seLocateLineString	= 15,
	seLocateEllipse	= 16,
	seLocateArc	= 17,
	seLocateBspCurve	= 18,
	seLocateComplexString	= 19,
	seLocatePlane	= 20,
	seLocateCone	= 21,
	seLocateSphere	= 22,
	seLocateTorus	= 23,
	seLocateProjectedFace	= 24,
	seLocateRevolvedFace	= 25,
	seLocateBspSurfaceFace	= 26,
	seLocateBoundary	= 27,
	seLocateRuledFace	= 28,
	seLocatePolyMesh	= 29,
	seLocateRefPlane	= 30,
	seLocateEdge	= 31,
	seLocateFace	= 32,
	seLocateVertex	= 33,
	seLocateDrivingDimension	= 34,
	seLocateFeature	= 35,
	seLocateRefAxis	= 36,
	seLocatePart	= 37,
	seLocateCenterMark	= 38,
	seLocateCenterLine	= 39,
	seLocateCuttingPlane	= 40,
	seLocateDrawingView	= 41,
	seLocateDetailEnvelope	= 42,
	seLocateViewPlane	= 43,
	seLocateCrossSection	= 44,
	seLocateLeader	= 45,
	seLocateDatumFrame	= 46,
	seLocateDatumTarget	= 47,
	seLocateFeatureControlFrame	= 48,
	seLocateSurfaceFinishSymbols	= 49,
	seLocateWeldSymbols	= 50,
	seLocateBalloon	= 51,
	seLocateSmartFrame2d	= 52,
	seLocateTextBox	= 53,
	seLocateCallout	= 54,
	seLocateRelation2d	= 55,
	seLocateDVLine2d	= 56,
	seLocateDVArc2d	= 57,
	seLocateDVBspCurve2d	= 58,
	seLocateDVCircle2d	= 59,
	seLocateDVEllipse2d	= 60,
	seLocateDVLineString2d	= 61,
	seLocateDVEllipticalArc2d	= 62,
	seLocateEllipticalArc2d	= 63,
	seLocateBoltHoleCircle	= 64,
	seLocateKeyPoint	= 65,
	seLocateGroup	= 67
    } 	seLocateFilterConstants;

typedef /* [helpstring][helpcontext] */ 
enum SeConnectMode
    {	seConnectAtStartup	= 1,
	seConnectByUser	= 2,
	seConnectExternally	= 3
    } 	SeConnectMode;

typedef /* [helpstring][helpcontext] */ 
enum SeDisconnectMode
    {	seDisconnectAtShutdown	= 1,
	seDisconnectByUser	= 2,
	seDisconnectExternally	= 3
    } 	SeDisconnectMode;

typedef /* [helpstring][helpcontext] */ 
enum SeFeatureAddFlag
    {	seNew	= 1,
	seUnSuppress	= 2,
	seUnSuppressUpTo	= 3,
	seNewPatternItem	= 4,
	seUnSuppressPatternItem	= 5
    } 	SeFeatureAddFlag;

typedef /* [helpstring][helpcontext] */ 
enum SeFeatureDeleteFlag
    {	sePermanent	= 1,
	seSuppress	= 2,
	seSuppressDownTo	= 3,
	sePermanentPatternItem	= 4,
	seSuppressPatternItem	= 5
    } 	SeFeatureDeleteFlag;

typedef /* [helpstring][helpcontext] */ 
enum SeFeatureModifyFlag
    {	seSchemaChanged	= 1,
	seDirectInputsChanged	= 2,
	seReordered	= 3
    } 	SeFeatureModifyFlag;

typedef /* [helpstring][helpcontext] */ 
enum SeImageQualityType
    {	seImageQualityLow	= 1,
	seImageQualityMedium	= 2,
	seImageQualityHigh	= 3
    } 	SeImageQualityType;

typedef /* [helpstring][helpcontext] */ 
enum NewWindowOptionConstants
    {	igNewWindowContainer	= 0x1,
	igNewWindowServer	= 0x2,
	igNewWindowLocalServer	= 0x4,
	igNewWindowVisible	= 0x8,
	igNewWindowInvisible	= 0x10,
	igNewWindowPersistent	= 0x20,
	igNewWindowTransient	= 0x40
    } 	NewWindowOptionConstants;

typedef /* [helpstring][helpcontext] */ 
enum AttributeTypeConstants
    {	seByte	= VT_I1,
	seInteger	= VT_I2,
	seLong	= VT_I4,
	seSingle	= VT_R4,
	seDouble	= VT_R8,
	seCurrency	= VT_CY,
	seDate	= VT_DATE,
	seStringANSI	= VT_BSTR,
	seStringUnicode	= VT_FILETIME,
	seBoolean	= VT_BOOL
    } 	AttributeTypeConstants;

typedef /* [v1_enum][helpstring][helpcontext] */ 
enum ColorConstants
    {	seColorBlack	= 0,
	seColorBlue	= 16711680,
	seColorCyan	= 16776960,
	seColorGreen	= 65280,
	seColorMagenta	= 16711935,
	seColorRed	= 255,
	seColorYellow	= 65535,
	seColorWhite	= 16777215,
	seColorDarkBlue	= 8388608,
	seColorDarkCyan	= 8421376,
	seColorDarkGreen	= 32768,
	seColorDarkMagenta	= 8388736,
	seColorDarkRed	= 128,
	seColorDarkYellow	= 32896,
	seColorDarkGray	= 8421504,
	seColorLightGray	= 12632256
    } 	ColorConstants;

typedef /* [helpstring][helpcontext] */ 
enum EdgeBarConstant
    {	NO_RESIZE_CHILD	= 1,
	DONOT_MAKE_ACTIVE	= 2
    } 	EdgeBarConstant;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyEventConstants
    {	seAssemblyOccurrenceReplace	= 1
    } 	seAssemblyEventConstants;

typedef /* [helpstring][helpcontext] */ 
enum SensorTypeConstants
    {	seSensorTypeInvalid	= 0,
	seSensorTypeVariable	= 1,
	seSensorTypeMinimumDistance	= 6,
	seSensorTypeUser	= 7
    } 	SensorTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum SensorStatusConstants
    {	seSensorStatusUpToDate	= 0,
	seSensorStatusOutOfDate	= 1,
	seSensorStatusInError	= 2
    } 	SensorStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum SensorOperatorConstants
    {	seSensorOperatorInvalid	= 0,
	seSensorOperatorGreaterThan	= 1,
	seSensorOperatorLessThan	= 2,
	seSensorOperatorEqualTo	= 3,
	seSensorOperatorNotEqualTo	= 4,
	seSensorOperatorBetween	= 5,
	seSensorOperatorNotBetween	= 6
    } 	SensorOperatorConstants;

typedef /* [helpstring][helpcontext] */ 
enum SensorDisplayTypeConstants
    {	seSensorDisplayTypeInvalid	= 0,
	seSensorDisplayTypeHorizontalRange	= 1,
	seSensorDisplayTypeTrueFalse	= 2
    } 	SensorDisplayTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum SensorUpdateMechanismConstants
    {	seSensorUpdateMechanismInvalid	= 0,
	seSensorUpdateMechanismAutomatic	= 1,
	seSensorUpdateMechanismManual	= 2
    } 	SensorUpdateMechanismConstants;

typedef /* [helpstring][helpcontext] */ 
enum SheetMetalSensorFeatureTypeConstants
    {	seSheetMetalSensorFeatureTypeExteriorEdges	= 0,
	seSheetMetalSensorFeatureTypeInteriorEdges	= 1,
	seSheetMetalSensorFeatureTypeCutouts	= 2,
	seSheetMetalSensorFeatureTypeHoles	= 3,
	seSheetMetalSensorFeatureTypeDimples	= 4,
	seSheetMetalSensorFeatureTypeLouvers	= 5,
	seSheetMetalSensorFeatureTypeDrawnCutouts	= 6,
	seSheetMetalSensorFeatureTypeBeads	= 7
    } 	SheetMetalSensorFeatureTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum SurfaceAreaSensorAreaTypeConstants
    {	seSurfaceAreaSensorAreaTypeNeg	= 0,
	seSurfaceAreaSensorAreaTypePos	= 1
    } 	SurfaceAreaSensorAreaTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum SurfaceAreaSensorSelectionTypeConstants
    {	seSurfaceAreaSensorSelectFace	= 0,
	seSurfaceAreaSensorSelectFaceChain	= 1
    } 	SurfaceAreaSensorSelectionTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum ApplicationGlobalConstants
    {	seApplicationGlobalDisplayQuality	= 0,
	seApplicationGlobalDisplayArcQuality	= 1,
	seApplicationGlobalColorActive	= 2,
	seApplicationGlobalColorBackground	= 3,
	seApplicationGlobalColorConstruction	= 4,
	seApplicationGlobalColorDisabled	= 5,
	seApplicationGlobalColorFailed	= 6,
	seApplicationGlobalColorHandle	= 7,
	seApplicationGlobalColorHighlight	= 8,
	seApplicationGlobalColorProfile	= 9,
	seApplicationGlobalColorSelected	= 10,
	seApplicationGlobalColorSheet	= 11,
	seApplicationGlobalAutomaticSave	= 12,
	seApplicationGlobalAutomaticSaveTime	= 13,
	seApplicationGlobalDisplayStatistics	= 14,
	seApplicationGlobalDisplaySectionCaps	= 15,
	seApplicationGlobalSoftwareVHL	= 16,
	seApplicationGlobalDynamicTransition	= 17,
	seApplicationGlobalApplicationDisplay	= 18,
	seApplicationGlobalDefaultSharpness	= 19,
	seApplicationGlobalCheckInOnClose	= 20,
	seApplicationGlobalLogFilesLocation	= 21,
	seApplicationGlobalInsightCacheLocation	= 22,
	seApplicationGlobalInsightFolderMappingFileLocation	= 23,
	seApplicationGlobalSearchScope	= 24,
	seApplicationGlobalOfflineMode	= 25,
	seApplicationGlobalLookAheadVersion	= 26,
	seApplicationGlobalUploadOnClose	= 27,
	seApplicationGlobalOverlayColor	= 28,
	seApplicationGlobalOverlayColorMode	= 29,
	seApplicationGlobalEnableThreadedDisplay	= 30,
	seApplicationGlobalColorRefPlane	= 31,
	seApplicationGlobalOpacityRefPlane	= 32,
	seApplicationGlobalRevisionDelimiter	= 33,
	seApplicationGlobalCurvatureCombDensity	= 34,
	seApplicationGlobalCurvatureCombMagnitude	= 35,
	seApplicationGlobalApplyStatusToLinks	= 36,
	seApplicationGlobalUpdateDraft	= 37,
	seApplicationGlobalMakeRevisionsObsolete	= 38,
	seApplicationGlobalAvailableRootFolder	= 39,
	seApplicationGlobalObsoleteRootFolder	= 40,
	seApplicationGlobalInWorkRootFolder	= 41,
	seApplicationGlobalReleasedRootFolder	= 42,
	seApplicationGlobalInReviewRootFolder	= 43,
	seApplicationGlobalBaselinedRootFolder	= 44,
	seApplicationGlobalEnableDynamicTolerance	= 45,
	seApplicationGlobalSystemInfo	= 46,
	seApplicationGlobalPrereleaseRootFolder	= 47,
	seApplicationGlobalPackagedCollaborationRootFolder	= 48,
	seApplicationGlobalECRRootFolder	= 49,
	seApplicationGlobalECORootFolder	= 50,
	seApplicationGlobalTemplateRootFolder	= 51,
	seApplicationGlobalUseDimensionStyleMapping	= 52,
	seApplicationGlobalAdminFileLocation	= 53,
	seApplicationGlobalColorManagerUseToolsOptionsColorSettings	= 54,
	seApplicationGlobalColorManagerUseIndividualPartStyles	= 55,
	seApplicationGlobalColorManagerShowPartFaceColors	= 56,
	seApplicationGlobalColorManagerShowAssemblyStyleOverrides	= 57,
	seApplicationGlobalColorManagerCopyIndividualFaceColors	= 58,
	seApplicationGlobalTeamCenterMode	= 59,
	seApplicationGlobalSessionDraftOpenInactive	= 60,
	seApplicationGlobalHoleSizeFile	= 61,
	seApplicationGlobalPipeThreadfsFile	= 62,
	seApplicationGlobalCustomSettingFile	= 63,
	seApplicationGlobalHideAllComponents	= 64,
	seApplicationGlobalApplyActivationOverridesToParts	= 65,
	seApplicationGlobalActivateAllParts	= 66,
	seApplicationGlobalApplySimplifyOverridesToParts	= 67,
	seApplicationGlobalUseAllSimplifiedParts	= 68,
	seApplicationGlobalApplySimplifyOverridesToSubAssemblies	= 69,
	seApplicationGlobalUseAllSimplifiedSubAssemblies	= 70
    } 	ApplicationGlobalConstants;

typedef /* [helpstring][helpcontext] */ 
enum DisplayArcQualityConstants
    {	seMinimumDisplayArcQuality	= 6,
	seMaximumDisplayArcQuality	= 72,
	seDefaultDisplayArcQuality	= 12
    } 	DisplayArcQualityConstants;

typedef /* [helpstring][helpcontext] */ 
enum DisplayQualityConstants
    {	seMinimumDisplayQuality	= 0,
	seMaximumDisplayQuality	= 48
    } 	DisplayQualityConstants;

typedef /* [helpstring][helpcontext] */ 
enum OverlayColorModeConstants
    {	seOverlayColorModeAbsolute	= 1,
	seOverlayColorModeRelative	= 2
    } 	OverlayColorModeConstants;

typedef /* [helpstring][helpcontext] */ 
enum ViewAttributeConstants
    {	seDisplayStatistics	= 1,
	seDisplaySectionCaps	= 2,
	seSoftwareVHL	= 3,
	seDynamicTransition	= 4,
	seApplicationDisplay	= 5,
	seDefaultSharpness	= 6,
	seResetAllDefaults	= 65535
    } 	ViewAttributeConstants;

typedef /* [helpstring][helpcontext] */ 
enum ApplicationDisplayConstants
    {	seAutomaticSelectionApplicationDisplay	= 0,
	seBackingStoreApplicationDisplay	= 1,
	seGraphicsCardDrivenApplicationDisplay	= 2,
	seSoftwareDrivenApplicationDisplay	= 3,
	seGraphicsCardDrivenAdvancedApplicationDisplay	= 4
    } 	ApplicationDisplayConstants;

typedef /* [helpstring][helpcontext] */ 
enum AcceleratorTypeConstants
    {	seExecutable	= 1,
	seEmbeded	= 2,
	seServerInPlace	= 3,
	seContainerInPlace	= 4,
	seMainFrame	= 5,
	seServerInPlaceLink	= 6,
	seContainerInPlaceLink	= 7
    } 	AcceleratorTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum RibbonBarConstants
    {	seWM_ACCELERATORSELECTED	= 4226
    } 	RibbonBarConstants;

typedef /* [helpstring][helpcontext] */ 
enum ShortCutMenuContextConstants
    {	seShortCutForGraphicLocate	= 1,
	seShortCutForView	= 2,
	seShortCutForFeaturePathFinder	= 3,
	seShortCutForFeaturePathFinderDocument	= 4
    } 	ShortCutMenuContextConstants;

typedef /* [helpstring][helpcontext] */ 
enum SeRenderModeType
    {	seRenderModeWireframe	= 1,
	seRenderModeOutline	= 2,
	seRenderModeVHL	= 3,
	seRenderModeSmooth	= 4,
	seRenderModeSmoothVHL	= 5,
	seRenderModePhong	= 6,
	seRenderModeRayTraced	= 7
    } 	SeRenderModeType;

typedef /* [helpstring][helpcontext] */ 
enum SeAnalysisStateType
    {	seAnalysisStateNone	= 0,
	seAnalysisStateGlobal	= 1,
	seAnalysisStateLocal	= 2
    } 	SeAnalysisStateType;

typedef /* [helpstring][helpcontext] */ 
enum SeAnalysisModeType
    {	seAnalysisModeDefault	= 0,
	seAnalysisModeZebraStripeLinear	= 1,
	seAnalysisModeZebraStripeSpherical	= 2,
	seAnalysisModeZebraStripeReflection	= 3,
	seAnalysisModeCurvatureColor	= 4,
	seAnalysisModeDraftAngle	= 5
    } 	SeAnalysisModeType;

typedef /* [helpstring][helpcontext] */ 
enum SeObjectType
    {	seObjectNamedViews	= 1,
	seObjectViewStyles	= 2,
	seObjectFaceStyles	= 3
    } 	SeObjectType;

typedef /* [helpstring][helpcontext] */ 
enum VariableNameBy
    {	seVariableNameByUser	= 0,
	seVariableNameBySystem	= 1,
	seVariableNameByBoth	= 2
    } 	VariableNameBy;

typedef /* [helpstring][helpcontext] */ 
enum VariableVarType
    {	SeVariableVarTypeDimension	= 1,
	SeVariableVarTypeVariable	= 2,
	SeVariableVarTypeBoth	= 3
    } 	VariableVarType;

typedef /* [helpstring][helpcontext] */ 
enum SearchType
    {	ShallowSearch	= 0,
	DeepSearch	= 1
    } 	SearchType;

typedef /* [helpstring][helpcontext] */ 
enum OverWriteFilesOption
    {	NoToAll	= 0,
	YesToAll	= 1
    } 	OverWriteFilesOption;

typedef /* [helpstring][helpcontext] */ 
enum CheckInOptions
    {	DoNotCheckInOption	= 0,
	UploadAndCheckInOption	= 1
    } 	CheckInOptions;

typedef /* [helpstring][helpcontext] */ 
enum UploadType
    {	DeepUploadType	= 0,
	ShallowUploadType	= 1
    } 	UploadType;

typedef /* [helpstring][helpcontext] */ 
enum RevisionRuleType
    {	LastSavedType	= 0,
	LatestReleasedRevision	= 1,
	LatestRevision	= 2,
	ExternalBOM	= 3
    } 	RevisionRuleType;

typedef /* [helpstring][helpcontext] */ 
enum DistancePrecisionConstants
    {	igDistancePrecisionOnes	= 0,
	igDistancePrecisionTenths	= 1,
	igDistancePrecisionHundredths	= 2,
	igDistancePrecisionThousandths	= 3,
	igDistancePrecisionTenThousandths	= 4,
	igDistancePrecisionHundredThousandths	= 5,
	igDistancePrecisionMillionths	= 6,
	igDistancePrecisionTenMillionths	= 7,
	igDistancePrecisionHalves	= 100,
	igDistancePrecisionQuarters	= 101,
	igDistancePrecisionEighths	= 102,
	igDistancePrecisionSixteenths	= 103,
	igDistancePrecisionThirtySecondths	= 104,
	igDistancePrecisionSixtyFourths	= 105
    } 	DistancePrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum AnglePrecisionConstants
    {	igAnglePrecisionOnes	= 0,
	igAnglePrecisionTenths	= 1,
	igAnglePrecisionHundredths	= 2,
	igAnglePrecisionThousandths	= 3,
	igAnglePrecisionTenThousandths	= 4,
	igAnglePrecisionHundredThousandths	= 5,
	igAnglePrecisionMillionths	= 6,
	igAnglePrecisionTenMillionths	= 7,
	igAnglePrecisionHalves	= 100,
	igAnglePrecisionQuarters	= 101,
	igAnglePrecisionEighths	= 102,
	igAnglePrecisionSixteenths	= 103,
	igAnglePrecisionThirtySecondths	= 104,
	igAnglePrecisionSixtyFourths	= 105
    } 	AnglePrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum AreaPrecisionConstants
    {	igAreaPrecisionOnes	= 0,
	igAreaPrecisionTenths	= 1,
	igAreaPrecisionHundredths	= 2,
	igAreaPrecisionThousandths	= 3,
	igAreaPrecisionTenThousandths	= 4,
	igAreaPrecisionHundredThousandths	= 5,
	igAreaPrecisionMillionths	= 6,
	igAreaPrecisionTenMillionths	= 7,
	igAreaPrecisionHalves	= 100,
	igAreaPrecisionQuarters	= 101,
	igAreaPrecisionEighths	= 102,
	igAreaPrecisionSixteenths	= 103,
	igAreaPrecisionThirtySecondths	= 104,
	igAreaPrecisionSixtyFourths	= 105
    } 	AreaPrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum VolumePrecisionConstants
    {	igVolumePrecisionOnes	= 0,
	igVolumePrecisionTenths	= 1,
	igVolumePrecisionHundredths	= 2,
	igVolumePrecisionThousandths	= 3,
	igVolumePrecisionTenThousandths	= 4,
	igVolumePrecisionHundredThousandths	= 5,
	igVolumePrecisionMillionths	= 6,
	igVolumePrecisionTenMillionths	= 7
    } 	VolumePrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum MassPrecisionConstants
    {	igMassPrecisionOnes	= 0,
	igMassPrecisionTenths	= 1,
	igMassPrecisionHundredths	= 2,
	igMassPrecisionThousandths	= 3,
	igMassPrecisionTenThousandths	= 4,
	igMassPrecisionHundredThousandths	= 5,
	igMassPrecisionMillionths	= 6,
	igMassPrecisionTenMillionths	= 7,
	igMassPrecisionHundredMillionths	= 8,
	igMassPrecisionBillionths	= 9,
	igMassPrecisionTenBillionths	= 10,
	igMassPrecisionHundredBillionths	= 11
    } 	MassPrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum DensityPrecisionConstants
    {	igDensityPrecisionOnes	= 0,
	igDensityPrecisionTenths	= 1,
	igDensityPrecisionHundredths	= 2,
	igDensityPrecisionThousandths	= 3,
	igDensityPrecisionTenThousandths	= 4,
	igDensityPrecisionHundredThousandths	= 5,
	igDensityPrecisionMillionths	= 6,
	igDensityPrecisionTenMillionths	= 7,
	igDensityPrecisionHundredMillionths	= 8,
	igDensityPrecisionBillionths	= 9,
	igDensityPrecisionTenBillionths	= 10,
	igDensityPrecisionHundredBillionths	= 11
    } 	DensityPrecisionConstants;

typedef /* [helpcontext][helpstring] */ 
enum BulkMigrationTypeConstants
    {	igNoBulkMigration	= 0,
	igTDMBulkMigration	= 1,
	igProEBulkMigration	= 2,
	igNX2DBulkMigration	= 3,
	igMDTBulkMigration	= 4
    } 	BulkMigrationTypeConstants;

typedef /* [helpcontext][helpstring] */ 
enum SPServerType
    {	SERVER_TYPE_NOT_SHAREPOINT	= 0,
	SHAREPOINT_V1_SERVER	= 1,
	SHAREPOINT_V2_SERVER	= 2
    } 	SPServerType;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureLengthReadoutConstants
    {	seLengthInch	= 0,
	seLengthFoot	= 1,
	seLengthInchAbbr	= 2,
	seLengthFootAbbr	= 3,
	seLengthFootInch	= 4,
	seLengthFootInchAbbr	= 5,
	seLengthYard	= 6,
	seLengthMile	= 7,
	seLengthTenth	= 8,
	seLengthHundredth	= 9,
	seLengthThousandth	= 10,
	seLengthRod	= 11,
	seLengthPole	= 12,
	seLengthChain	= 13,
	seLengthFurlong	= 14,
	seLengthMeter	= 15,
	seLengthCentimeter	= 16,
	seLengthMillimeter	= 17,
	seLengthKilometer	= 18,
	seLengthNanometer	= 19
    } 	UnitOfMeasureLengthReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureAngleReadoutConstants
    {	seAngleRadian	= 0,
	seAngleDegree	= 1,
	seAngleMinute	= 2,
	seAngleSecond	= 3,
	seAngleGradient	= 4,
	seAngleDegreeMinuteSecond	= 5,
	seAngleDegreeAbbr	= 6,
	seAngleMinuteAbbr	= 7,
	seAngleSecondAbbr	= 8,
	seAngleDegreeMinuteSecondAbbr	= 9
    } 	UnitOfMeasureAngleReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureAreaReadoutConstants
    {	seAreaInchSquared	= 0,
	seAreaFootSquared	= 1,
	seAreaYardSquared	= 2,
	seAreaMileSquared	= 3,
	seAreaAcre	= 4,
	seAreaMeterSquared	= 5,
	seAreaCentimeterSquared	= 6,
	seAreaMillimeterSquared	= 7,
	seAreaKilometerSquared	= 8
    } 	UnitOfMeasureAreaReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureVolumeReadoutConstants
    {	seVolumeInchCubed	= 0,
	seVolumeFootCubed	= 1,
	seVolumeYardCubed	= 2,
	seVolumeGallon	= 3,
	seVolumeQuart	= 4,
	seVolumePint	= 5,
	seVolumeOunce	= 6,
	seVolumeMiterCubed	= 7,
	seVolumeCentimeterCubed	= 8,
	seVolumeMillimeterCubed	= 9,
	seVolumeLiter	= 10,
	seVolumeDecimeterCubed	= 11
    } 	UnitOfMeasureVolumeReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureMassReadoutConstants
    {	seMassSlug	= 0,
	seMassSlinch	= 1,
	seMassPoundMass	= 2,
	seMassTon	= 3,
	seMassNetTon	= 4,
	seMassKilogram	= 5,
	seMassGram	= 6,
	seMassMegagram	= 7,
	seMassTonne	= 8
    } 	UnitOfMeasureMassReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureDensityReadoutConstants
    {	seDensityPoundMassPerFootCubed	= 0,
	seDensityPoundMassPerInchCubed	= 1,
	seDensitySlugPerFootCubed	= 2,
	seDensitySlinchPerFootCubed	= 3,
	seDensityKilogramPerMeterCubed	= 4,
	seDensityKilogramPerDecimeterCubed	= 5,
	seDensityKilogramPerCentimeterCubed	= 6,
	seDensityKilogramPerMillimeterCubed	= 7,
	seDensityKilogramPerLiter	= 8,
	seDensityGramPerMeterCubed	= 9,
	seDensityGramPerDecimeterCubed	= 10,
	seDensityGramPerCentimeterCubed	= 11,
	seDensityGramPerMillimeterCubed	= 12
    } 	UnitOfMeasureDensityReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum MatTablePropIndexConstants
    {	seMaterialName	= 3,
	seFaceStyle	= 20,
	seFillStyle	= 21,
	seVSPlusStyle	= 22,
	seDensity	= 23,
	seCoefOfThermalExpansion	= 24,
	seThermalConductivity	= 25,
	seSpecificHeat	= 26,
	seModulusElasticity	= 27,
	sePoissonRatio	= 28,
	seYieldStress	= 29,
	seUltimateStress	= 30,
	seElongation	= 31
    } 	MatTablePropIndex;

typedef /* [helpstring][helpcontext] */ 
enum CapturedRelationshipTypeConstants
    {	seMate	= 0,
	sePlanarAlign	= 1,
	seAxialAlign	= 2,
	seTangent	= 3,
	seConnect	= 4,
	seParallel	= 5
    } 	CapturedRelationshipTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum CapturedRelationshipOffsetTypeConstants
    {	seFixed	= 0,
	seFloating	= 1,
	seOffsetNotSupported	= 2
    } 	CapturedRelationshipOffsetTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum ComponentImageCreationModeConstants
    {	seAllVisible	= 0,
	seExplicit	= 1
    } 	ComponentImageCreationModeConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureForceReadoutConstants
    {	seForceNewton	= 0,
	seForceNanoNewton	= 1,
	seForceMilliNewton	= 2,
	seForceKiloNewton	= 3,
	seForcePoundForce	= 4,
	seForceDyne	= 5,
	seForceKip	= 6
    } 	UnitOfMeasureForceReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum ForcePrecisionConstants
    {	igForcePrecisionOnes	= 0,
	igForcePrecisionTenths	= 1,
	igForcePrecisionHundredths	= 2,
	igForcePrecisionThousandths	= 3,
	igForcePrecisionTenThousandths	= 4,
	igForcePrecisionHundredThousandths	= 5,
	igForcePrecisionMillionths	= 6,
	igForcePrecisionTenMillionths	= 7,
	igForcePrecisionHundredMillionths	= 8,
	igForcePrecisionBillionths	= 9,
	igForcePrecisionTenBillionths	= 10,
	igForcePrecisionHundredBillionths	= 11
    } 	ForcePrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureForcePerAreaReadoutConstants
    {	seForcePerAreaPascal	= 0,
	seForcePerAreaMilliPascal	= 1,
	seForcePerAreaKiloPascal	= 2,
	seForcePerAreaKiloNewton	= 3,
	seForcePerAreaMegaPascal	= 4,
	seForcePerAreaPoundForcePerSqInch	= 5,
	seForcePerAreaKipPerSqInch	= 6,
	seForcePerAreaPoundForcePerSqFoot	= 7,
	seForcePerAreaBar	= 8,
	seForcePerAreaMilliBar	= 9,
	seForcePerAreaAtmosphere	= 10,
	seForcePerAreaNewtonPerSqMillimeter	= 11,
	seForcePerAreaKipPerSqFoot	= 12
    } 	UnitOfMeasureForcePerAreaReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum ForcePerAreaPrecisionConstants
    {	igForcePerAreaPrecisionOnes	= 0,
	igForcePerAreaPrecisionTenths	= 1,
	igForcePerAreaPrecisionHundredths	= 2,
	igForcePerAreaPrecisionThousandths	= 3,
	igForcePerAreaPrecisionTenThousandths	= 4,
	igForcePerAreaPrecisionHundredThousandths	= 5,
	igForcePerAreaPrecisionMillionths	= 6,
	igForcePerAreaPrecisionTenMillionths	= 7,
	igForcePerAreaPrecisionHundredMillionths	= 8,
	igForcePerAreaPrecisionBillionths	= 9,
	igForcePerAreaPrecisionTenBillionths	= 10,
	igForcePerAreaPrecisionHundredBillionths	= 11
    } 	ForcePerAreaPrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureFrequencyReadoutConstants
    {	seFrequencyPerSecond	= 0,
	seFrequencyPerMinute	= 1,
	seFrequencyPerHour	= 2,
	seFrequencyHertz	= 3,
	seFrequencyMegaHertz	= 4
    } 	UnitOfMeasureFrequencyReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum FrequencyPrecisionConstants
    {	igFrequencyPrecisionOnes	= 0,
	igFrequencyPrecisionTenths	= 1,
	igFrequencyPrecisionHundredths	= 2,
	igFrequencyPrecisionThousandths	= 3,
	igFrequencyPrecisionTenThousandths	= 4,
	igFrequencyPrecisionHundredThousandths	= 5,
	igFrequencyPrecisionMillionths	= 6,
	igFrequencyPrecisionTenMillionths	= 7,
	igFrequencyPrecisionHundredMillionths	= 8,
	igFrequencyPrecisionBillionths	= 9,
	igFrequencyPrecisionTenBillionths	= 10,
	igFrequencyPrecisionHundredBillionths	= 11
    } 	FrequencyPrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureSpecificHeatReadoutConstants
    {	seBTUPerPoundFahrenheit	= 0,
	seJoulePerKilogramKelvin	= 1,
	seJoulePerKilogramCelsius	= 2
    } 	UnitOfMeasureSpecificHeatReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum SpecificHeatPrecisionConstants
    {	seSpecificHeatPrecisionOnes	= 0,
	seSpecificHeatPrecisionTenths	= 1,
	seSpecificHeatPrecisionHundredths	= 2,
	seSpecificHeatPrecisionThousandths	= 3,
	seSpecificHeatPrecisionTenThousandths	= 4,
	seSpecificHeatPrecisionHundredThousandths	= 5,
	seSpecificHeatPrecisionMillionths	= 6,
	seSpecificHeatPrecisionTenMillionths	= 7
    } 	SpecificHeatPrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureThermalConductivityReadoutConstants
    {	seBTUPerHourFootFahrenheit	= 0,
	seInchPoundForcePerSecondInchFarhrenheit	= 1,
	seWattPerMeterCelsius	= 2,
	seKiloWattPerMeterCelsius	= 3
    } 	UnitOfMeasureThermalConductivityReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum ThermalConductivityPrecisionConstants
    {	seThermalConductivityPrecisionOnes	= 0,
	seThermalConductivityPrecisionTenths	= 1,
	seThermalConductivityPrecisionHundredths	= 2,
	seThermalConductivityPrecisionThousandths	= 3,
	seThermalConductivityPrecisionTenThousandths	= 4,
	seThermalConductivityPrecisionHundredThousandths	= 5,
	seThermalConductivityPrecisionMillionths	= 6,
	seThermalConductivityPrecisionTenMillionths	= 7
    } 	ThermalConductivityPrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureCoefOfThermalExpansionReadoutConstants
    {	sePerFahrenheit	= 0,
	sePerKelvin	= 1,
	sePerRankine	= 2,
	sePerCelsius	= 3
    } 	UnitOfMeasureCoefOfThermalExpansionReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum CoefOfThermalExpansionPrecisionConstants
    {	seCoefOfThermalExpansionPrecisionOnes	= 0,
	seCoefOfThermalExpansionPrecisionTenths	= 1,
	seCoefOfThermalExpansionPrecisionHundredths	= 2,
	seCoefOfThermalExpansionPrecisionThousandths	= 3,
	seCoefOfThermalExpansionPrecisionTenThousandths	= 4,
	seCoefOfThermalExpansionPrecisionHundredThousandths	= 5,
	seCoefOfThermalExpansionPrecisionMillionths	= 6,
	seCoefOfThermalExpansionPrecisionTenMillionths	= 7
    } 	CoefOfThermalExpansionPrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureLinearDensityReadoutConstants
    {	seSlugPerInch	= 0,
	seSlugPerFoot	= 1,
	seSlinchPerInch	= 2,
	sePoundPerInch	= 3,
	sePoundPerFoot	= 4,
	seKilogramPerMeter	= 5,
	seKilogramPerMillimeter	= 6,
	seGramPerMillimeter	= 7,
	seGramPerCentimeter	= 8
    } 	UnitOfMeasureLinearDensityReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum LinearDensityPrecisionConstants
    {	seLinearDensityPrecisionOnes	= 0,
	seLinearDensityPrecisionTenths	= 1,
	seLinearDensityPrecisionHundredths	= 2,
	seLinearDensityPrecisionThousandths	= 3,
	seLinearDensityPrecisionTenThousandths	= 4,
	seLinearDensityPrecisionHundredThousandths	= 5,
	seLinearDensityPrecisionMillionths	= 6,
	seLinearDensityPrecisionTenMillionths	= 7,
	seLinearDensityPrecisionHundredMillionths	= 8,
	seLinearDensityPrecisionBillionths	= 9,
	seLinearDensityPrecisionTenBillionths	= 10,
	seLinearDensityPrecisionHundredBillionths	= 11
    } 	LinearDensityPrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureAngularVelocityReadoutConstants
    {	seRadianPerSecond	= 0,
	seRadianPerMinute	= 1,
	seRadianPerHour	= 2,
	seCyclePerSecond	= 3,
	seCyclePerMinute	= 4,
	seCyclePerHour	= 5,
	seDegreePerSecond	= 6,
	seDegreePerMinute	= 7,
	seDegreePerHour	= 8
    } 	UnitOfMeasureAngularVelocityReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum AngularVelocityPrecisionConstants
    {	seAngularVelocityPrecisionOnes	= 0,
	seAngularVelocityPrecisionTenths	= 1,
	seAngularVelocityPrecisionHundredths	= 2,
	seAngularVelocityPrecisionThousandths	= 3,
	seAngularVelocityPrecisionTenThousandths	= 4,
	seAngularVelocityPrecisionHundredThousandths	= 5,
	seAngularVelocityPrecisionMillionths	= 6,
	seAngularVelocityPrecisionTenMillionths	= 7,
	seAngularVelocityPrecisionHundredMillionths	= 8,
	seAngularVelocityPrecisionBillionths	= 9,
	seAngularVelocityPrecisionTenBillionths	= 10,
	seAngularVelocityPrecisionHundredBillionths	= 11
    } 	AngularVelocityPrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum UnitOfMeasureLinearVelocityReadoutConstants
    {	seMillimeterPerSecond	= 0,
	seCentimeterPerSecond	= 1,
	seMeterPerSecond	= 2,
	seKilometerPerSecond	= 3,
	seKilometerPerHour	= 4,
	seInchPerSecond	= 5,
	seFootPerSecond	= 6,
	seMilePerSecond	= 7,
	seMilePerHour	= 8
    } 	UnitOfMeasureLinearVelocityReadoutConstants;

typedef /* [helpstring][helpcontext] */ 
enum LinearVelocityPrecisionConstants
    {	seLinearVelocityPrecisionOnes	= 0,
	seLinearVelocityPrecisionTenths	= 1,
	seLinearVelocityPrecisionHundredths	= 2,
	seLinearVelocityPrecisionThousandths	= 3,
	seLinearVelocityPrecisionTenThousandths	= 4,
	seLinearVelocityPrecisionHundredThousandths	= 5,
	seLinearVelocityPrecisionMillionths	= 6,
	seLinearVelocityPrecisionTenMillionths	= 7,
	seLinearVelocityPrecisionHundredMillionths	= 8,
	seLinearVelocityPrecisionBillionths	= 9,
	seLinearVelocityPrecisionTenBillionths	= 10,
	seLinearVelocityPrecisionHundredBillionths	= 11
    } 	LinearVelocityPrecisionConstants;

typedef /* [helpcontext][helpstring] */ 
enum InsightSPUserRights
    {	seAddAndCustomizePages	= 0x40000,
	seAddDelPrivateWebParts	= 0x10000000,
	seAddListItems	= 0x2,
	seApplyStyleSheets	= 0x100000,
	seApplyThemeAndBorder	= 0x80000,
	seBrowseDirectories	= 0x4000000,
	seBrowseUserInfo	= 0x8000000,
	seCancelCheckout	= 0x100,
	seCreatePersonalGroups	= 0x1000000,
	seCreateSSCSite	= 0x400000,
	seDeleteListItems	= 0x8,
	seEditListItems	= 0x4,
	seManageListPermissions	= 0x400,
	seManageLists	= 0x800,
	seManagePersonalViews	= 0x200,
	seManageRoles	= 0x2000000,
	seManageSubwebs	= 0x800000,
	seManageWeb	= 0x40000000,
	seOpenWeb	= 0x10000,
	seUpdatePersonalWebParts	= 0x20000000,
	seViewListItems	= 0x1,
	seViewPages	= 0x20000,
	seViewUsageData	= 0x200000
    } 	InsightSPUserRights;

typedef /* [helpstring][helpcontext] */ 
enum PaperSizeConstants
    {	igCustomSheetSize	= -2,
	igSameAsPrintSetup	= -1,
	igEngFolioTall	= 0,
	igEngFolioWide	= 1,
	igEngLegalTall	= 2,
	igEngLegalWide	= 3,
	igEngExecutiveTall	= 4,
	igEngExecutiveWide	= 5,
	igEngStatementTall	= 6,
	igEngStatementWide	= 7,
	igEngCom10Tall	= 8,
	igEngCom10Wide	= 9,
	igEngMonarchTall	= 10,
	igEngMonarchWide	= 11,
	igAnsiATall	= 12,
	igAnsiAWide	= 13,
	igAnsiBTall	= 14,
	igAnsiBWide	= 15,
	igAnsiCTall	= 16,
	igAnsiCWide	= 17,
	igAnsiDTall	= 18,
	igAnsiDWide	= 19,
	igAnsiETall	= 20,
	igAnsiEWide	= 21,
	igAnsiArchDTall	= 22,
	igAnsiArchDWide	= 23,
	igAnsiArchETall	= 24,
	igAnsiArchEWide	= 25,
	igIsoA5Tall	= 26,
	igIsoA5Wide	= 27,
	igIsoA4Tall	= 28,
	igIsoA4Wide	= 29,
	igIsoA3Tall	= 30,
	igIsoA3Wide	= 31,
	igIsoA2Tall	= 32,
	igIsoA2Wide	= 33,
	igIsoA1Tall	= 34,
	igIsoA1Wide	= 35,
	igIsoA0Tall	= 36,
	igIsoA0Wide	= 37,
	igIsoB5Tall	= 38,
	igIsoB5Wide	= 39,
	igIsoB4Tall	= 40,
	igIsoB4Wide	= 41,
	igIsoC5Tall	= 42,
	igIsoC5Wide	= 43,
	igIsoDLTall	= 44,
	igIsoDLWide	= 45,
	igIsoQuatroTall	= 46,
	igIsoQuatroWide	= 47
    } 	PaperSizeConstants;

typedef /* [helpstring][helpcontext] */ 
enum PaperToModelScaleConstants
    {	igDefault1To1	= -1,
	igCustomScale	= 0,
	igMetric50To1	= 1,
	igMetric20To1	= 2,
	igMetric10To1	= 3,
	igMetric5To1	= 4,
	igMetric2To1	= 5,
	igMetric1To1	= 6,
	igMetric1To2	= 7,
	igMetric1To5	= 8,
	igMetric1To10	= 9,
	igMetric1To20	= 10,
	igMetric1To50	= 11,
	igMetric1To100	= 12,
	igMetric1To200	= 13,
	igMetric1To500	= 14,
	igMetric1To1000	= 15,
	igMetric1To2000	= 16,
	igMetric1To5000	= 17,
	igMetric1To10000	= 18,
	igEng40To1	= 19,
	igEng20To1	= 20,
	igEng10To1	= 21,
	igEng8To1	= 22,
	igEng4To1	= 23,
	igEng2To1	= 24,
	igEng1To1	= 25,
	igEng1To2	= 26,
	igEng1To4	= 27,
	igEng1To8	= 28,
	igEng1To10	= 29,
	igEng1To20	= 30,
	igEng1To40	= 31,
	igEng1To80	= 32,
	igEng1To100	= 33,
	igArch_1_64thInTo1Ft	= 34,
	igArch_3_32ndsInTo1Ft	= 35,
	igArch_1_8thInTo1Ft	= 36,
	igArch_3_16thsInTo1Ft	= 37,
	igArch_1_4thInTo1Ft	= 38,
	igArch_3_8thsInTo1Ft	= 39,
	igArch_1_HalfInTo1Ft	= 40,
	igArch_3_4thsInTo1Ft	= 41,
	igArch_1InTo1Ft	= 42,
	igArch_3_HalvesInTo1Ft	= 43,
	igArch_2InTo1Ft	= 44,
	igArch_3InTo1Ft	= 45
    } 	PaperToModelScaleConstants;

typedef /* [helpstring][helpcontext] */ 
enum PaperUnitConstants
    {	igUnitInches	= 0,
	igUnitMillimeters	= 1,
	igUnitCentimeters	= 2
    } 	PaperUnitConstants;

typedef /* [helpstring][helpcontext] */ 
enum PrecisionConstants
    {	igPrecisionOnes	= 0,
	igPrecisionTenths	= 1,
	igPrecisionHundredths	= 2,
	igPrecisionThousandths	= 3,
	igPrecisionTenThousandths	= 4,
	igPrecisionHalves	= 5,
	igPrecisionQuarters	= 6,
	igPrecisionEighths	= 7,
	igPrecisionSixteenths	= 8,
	igPrecisionThirtySecondths	= 9
    } 	PrecisionConstants;

typedef /* [helpstring][helpcontext] */ 
enum GridTypeConstants
    {	igGridDynamic	= 0,
	igGridStatic	= 1
    } 	GridTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DynamicGridSpacingConstants
    {	igDynamicGridFine	= 0,
	igDynamicGridNormal	= 1,
	igDynamicGridCoarse	= 2
    } 	DynamicGridSpacingConstants;

typedef /* [helpstring][helpcontext] */ 
enum SheetSectionTypeConstants
    {	igUnknownSection	= -1,
	igWorkingSection	= 0,
	igBackgroundSection	= 1,
	igDrawingViewSection	= 2,
	ig2dModelSection	= 3,
	igBlockViewSection	= 4
    } 	SheetSectionTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum SheetFitConstants
    {	igFitWorkingGraphicsOnly	= 0,
	igFitAll	= 1,
	igFitWorkingAndBackgroundGraphics	= 2,
	igFitBackgroundGraphicsOnly	= 3,
	igFitSheet	= 4
    } 	SheetFitConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimTypeConstants
    {	igDimTypeLinear	= 1,
	igDimTypeRadial	= 2,
	igDimTypeAngular	= 3,
	igDimTypeRDiameter	= 4,
	igDimTypeCDiameter	= 5,
	igDimTypeArcLength	= 6,
	igDimTypeArcAngle	= 7,
	igDimTypeCoordinate	= 8,
	igDimTypeSDiameter	= 9,
	igDimTypeChamfer	= 10,
	igDimTypeAngularCoordinate	= 11
    } 	DimTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimBreakPositionConstants
    {	igDimBreakRight	= 1,
	igDimBreakCenter	= 2,
	igDimBreakLeft	= 3,
	igDimBreakAltCenter	= 4
    } 	DimBreakPositionConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimDispTypeConstants
    {	igDimDisplayTypeNominal	= 1,
	igDimDisplayTypeTolerance	= 2,
	igDimDisplayTypeClassfit	= 3,
	igDimDisplayTypeLimits	= 4,
	igDimDisplayTypeBasic	= 5,
	igDimDisplayTypeReference	= 6,
	igDimDisplayTypeBlank	= 8,
	igDimDisplayTypeClassPlusMinus	= 9
    } 	DimDispTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimAxisModeConstants
    {	igDimAxisModeDefault	= 1,
	igDimAxisModeImplied	= 2,
	igDimAxisModeExplicit	= 3,
	igDimAxisModeCoordinate	= 4
    } 	DimAxisModeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimChamferModeConstants
    {	igDimChamferModeAlongAxis	= 0,
	igDimChamferModePerpendicular	= 1,
	igDimChamferModeParallel	= 2,
	igDimChamferModeNotApplicable	= 3
    } 	DimChamferModeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimAngularCoordnateOrientationConstants
    {	igDimAngCoordOrientClockwise	= 0,
	igDimAngCoordOrientCounterClockwise	= 1
    } 	DimAngularCoordnateOrientationConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimProjArcConstants
    {	igDimProjArcNone	= 1,
	igDimProjArcStart	= 2,
	igDimProjArcEnd	= 3
    } 	DimProjArcConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimStatusConstants
    {	seDimStatusDetached	= 1,
	seDimStatusError	= 2,
	seDimStatusDriving	= 3,
	seDimStatusDriven	= 4,
	seOneEndDetached	= 5
    } 	DimStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimGroupMemberTypeConstants
    {	seDimNotAGroupMember	= 1,
	seDimStackGroupMember	= 2,
	seDimChainGroupMember	= 3,
	seDimCoordinateGroupMember	= 4
    } 	DimGroupMemberTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimBalloonTypeConstants
    {	igDimBalloonNone	= 0,
	igDimBalloonCircle	= 1,
	igDimBalloonNSided	= 2,
	igDimBalloonSquare	= 3,
	igDimBalloonSquareRotated	= 4,
	igDimBalloonHexHorizontal	= 5,
	igDimBalloonHexVertical	= 6,
	igDimBalloonTriangle	= 7,
	igDimBalloonTriangleRight	= 8,
	igDimBalloonTriangleLeft	= 9,
	igDimBalloonOval	= 10,
	igDimBalloonRectangle	= 11,
	igDimBalloonLowerLine	= 18
    } 	DimBalloonTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimBalloonDirTypeConstants
    {	igDimBalloonDirectionLeft	= 1,
	igDimBalloonDirectionRight	= 2,
	igDimBalloonDirectionTop	= 3,
	igDimBalloonDirectionBottom	= 4
    } 	DimBalloonDirTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimWeldDashLineTypeConstants
    {	igDimWeldDashLineNone	= 0,
	igDimWeldDashLineAbove	= 1,
	igDimWeldDashLineBelow	= 2
    } 	DimWeldDashLineTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimLinearUnitConstants
    {	igDimStyleLinearFtIn	= 1,
	igDimStyleLinearMeters	= 2,
	igDimStyleLinearMM	= 3,
	igDimStyleLinearCM	= 4,
	igDimStyleLinearInches	= 5,
	igDimStyleLinearFeet	= 6
    } 	DimLinearUnitConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimTextOrientationConstants
    {	igDimStyleTextHorizontal	= 1,
	igDimStyleTextVertical	= 2,
	igDimStyleTextParallel	= 3,
	igDimStyleTextPerpendicular	= 4
    } 	DimTextOrientationConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimTextPositionConstants
    {	igDimStyleTextAbove	= 1,
	igDimStyleTextEmbedded	= 2
    } 	DimTextPositionConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimTextFontStyleConstants
    {	igDimStyleFontNormal	= 1,
	igDimStyleFontBold	= 2,
	igDimStyleFontItalic	= 3,
	igDimStyleFontItalicBold	= 4
    } 	DimTextFontStyleConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimTermDisplayTypeConstants
    {	igDimStyleTermNone	= 0,
	igDimStyleTermOrig	= 1,
	igDimStyleTermMeas	= 2,
	igDimStyleTermBoth	= 3
    } 	DimTermDisplayTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimTermTypeConstants
    {	igDimStyleTermHollow	= 1,
	igDimStyleTermFilled	= 2,
	igDimStyleTermOpen	= 3,
	igDimStyleTermSlash	= 4,
	igDimStyleTermBackSlash	= 5,
	igDimStyleTermBlank	= 6,
	igDimStyleTermDot	= 7,
	igDimStyleTermCircle	= 8,
	igDimStyleTermUserDefined	= 9,
	igDimStyleTermAnchor	= 10,
	igDimStyleTermToolPoint	= 11,
	igDimStyleTermLine	= 12
    } 	DimTermTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimCommonOriginTypeConstants
    {	igDimStyleCommonOrigNone	= 6,
	igDimStyleCommonOrigDot	= 7,
	igDimStyleCommonOrigCircle	= 8
    } 	DimCommonOriginTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimProjDisplayTypeConstants
    {	igDimStyleProjLineNone	= 0,
	igDimStyleProjLineOrig	= 1,
	igDimStyleProjLineMeas	= 2,
	igDimStyleProjLineBoth	= 3
    } 	DimProjDisplayTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimAngularUnitConstants
    {	igDimStyleAngularDegMinSec	= 1,
	igDimStyleAngularRadians	= 2,
	igDimStyleAngularDegrees	= 3
    } 	DimAngularUnitConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimRoundOffTypeConstants
    {	igDimStyleDecimal	= 1,
	igDimStyleFraction	= 2
    } 	DimRoundOffTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimDecimalRoundOffTypeConstants
    {	igDimStyleDecimal10	= 1,
	igDimStyleDecimal1	= 2,
	igDimStyleDecimal_1	= 3,
	igDimStyleDecimal_2	= 4,
	igDimStyleDecimal_3	= 5,
	igDimStyleDecimal_4	= 6,
	igDimStyleDecimal_5	= 7,
	igDimStyleDecimal_6	= 8,
	igDimStyleDecimal_7	= 9
    } 	DimDecimalRoundOffTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimFractionRoundOffTypeConstants
    {	igDimStyleFraction_1	= 1,
	igDimStyleFraction_2	= 2,
	igDimStyleFraction_4	= 3,
	igDimStyleFraction_8	= 4,
	igDimStyleFraction_16	= 5,
	igDimStyleFraction_32	= 6,
	igDimStyleFraction_64	= 7
    } 	DimFractionRoundOffTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimDMSRoundOffTypeConstants
    {	igDimStyleAngular10Degree	= 1,
	igDimStyleAngular1Degree	= 2,
	igDimStyleAngular10Minute	= 3,
	igDimStyleAngular1Minute	= 4,
	igDimStyleAngular10Second	= 5,
	igDimStyleAngular1Second	= 6
    } 	DimDMSRoundOffTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimDelimiterTypeConstants
    {	igDimStyleDelimiterDot	= 1,
	igDimStyleDelimiterComma	= 2,
	igDimStyleDelimiterSpace	= 3
    } 	DimDelimiterTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimRoundUpTypeConstants
    {	igDimStyleRoundUpAll	= 1,
	igDimStyleRoundUpOdd	= 2
    } 	DimRoundUpTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimSymbolPositionConstants
    {	igDimStyleSymbolNone	= 1,
	igDimStyleSymbolBefore	= 2,
	igDimStyleSymbolAfter	= 3
    } 	DimSymbolPositionConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimLimitTextArrangmentConstants
    {	igDimStyleLimitTextHorizontal	= 1,
	igDimStyleLimitTextVertical	= 2
    } 	DimLimitTextArrangmentConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimOffsetLeaderTypeConstants
    {	igDimStyleOffsetLeaderLine	= 1
    } 	DimOffsetLeaderTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimDatumTermTypeConstants
    {	igDimStyleDatumTermNormal	= 1,
	igDimStyleDatumTermAnchor	= 2,
	igDimStyleDatumTermLine	= 3
    } 	DimDatumTermTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimNTSTypeConstants
    {	igDimStyleNTSNone	= 1,
	igDimStyleNTSUnderline	= 2,
	igDimStyleNTSZigzag	= 3
    } 	DimNTSTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimProjTolZonePositionConstants
    {	igDimStyleProjTolZoneInLine	= 1,
	igDimStyleProjTolZoneBelow	= 2
    } 	DimProjTolZonePositionConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimViewCuttingPlaneDisplayTypeConstants
    {	igDimViewCuttingPlaneLineDisplayTo	= 1,
	igDimViewCuttingPlaneLineDisplayFrom	= 2
    } 	DimViewCuttingPlaneDisplayTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimViewPlaneDisplayTypeConstants
    {	igDimViewPlaneLineDisplaySingle	= 1,
	igDimViewPlaneLineDisplayDouble	= 2
    } 	DimViewPlaneDisplayTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimViewCaptionLocationConstants
    {	igDimViewCaptionLocationTop	= 1,
	igDimViewCaptionLocationBottom	= 2
    } 	DimViewCaptionLocationConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimViewCPLCaptionLocationConstants
    {	igDimViewCPLCaptionLocationFrom	= 1,
	igDimViewCPLCaptionLocationOn	= 2,
	igDimViewCPLCaptionLocationTo	= 3
    } 	DimViewCPLCaptionLocationConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimScaleModeConstants
    {	igDimStyleScaleManual	= 0,
	igDimStyleScaleAutomatic	= 1
    } 	DimScaleModeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimFCFGeometrySymbolTypeConstants
    {	igDimGeomSymFlatness	= 1,
	igDimGeomSymStraightness	= 2,
	igDimGeomSymCircularity	= 3,
	igDimGeomSymCylindricity	= 4,
	igDimGeomSymPerpendicularity	= 5,
	igDimGeomSymAngularity	= 6,
	igDimGeomSymParallelism	= 7,
	igDimGeomSymProfileSurface	= 8,
	igDimGeomSymProfileLine	= 9,
	igDimGeomSymCircularRunout	= 10,
	igDimGeomSymTotalRunout	= 11,
	igDimGeomSymPosition	= 12,
	igDimGeomSymConcentricity	= 13,
	igDimGeomSymSymmetry	= 14
    } 	DimFCFGeometrySymbolTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimFCFMaterialConditionTypeConstants
    {	igDimMaterialConditionNone	= 0,
	igDimMaterialConditionMaximum	= 2,
	igDimMaterialConditionRegular	= 3,
	igDimMaterialConditionLeast	= 4,
	igDimMaterialConditionReciprocity	= 5
    } 	DimFCFMaterialConditionTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimSurfTextureSymTypeConstants
    {	igDimSurfaceFinishBasic	= 1,
	igDimSurfaceFinishMachined	= 2,
	igDimSurfaceFinishNoMaterialRemoval	= 3,
	igDimSurfaceFinishBasicHz	= 4,
	igDimSurfaceFinishMachinedHz	= 5,
	igDimSurfaceFinishNoMaterialRemovalHz	= 6,
	igDimSurfaceFinishTriangle	= 7,
	igDimSurfaceFinishTriangle2	= 8,
	igDimSurfaceFinishTriangle3	= 9,
	igDimSurfaceFinishTriangle4	= 10,
	igDimSurfaceFinishMachined2	= 11,
	igDimSurfaceFinishMachined3	= 12,
	igDimSurfaceFinishMachined4	= 13,
	igDimSurfaceFinishMachinedHz2	= 14,
	igDimSurfaceFinishMachinedHz3	= 15,
	igDimSurfaceFinishMachinedHz4	= 16,
	igDimSurfaceFinishNoWorkingSurface	= 17
    } 	DimSurfTextureSymTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimSurfTextureLaySymTypeConstants
    {	igDimSurfaceFinishLayNone	= 1,
	igDimSurfaceFinishLayPerpendicular	= 2,
	igDimSurfaceFinishLayVtParallel	= 3,
	igDimSurfaceFinishLayHzParallel	= 4,
	igDimSurfaceFinishLayCrossed	= 5,
	igDimSurfaceFinishLayCircular	= 6,
	igDimSurfaceFinishLayRadial	= 7,
	igDimSurfaceFinishLayParticulate	= 8,
	igDimSurfaceFinishLayMulti	= 9
    } 	DimSurfTextureLaySymTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimWeldTailTypeConstants
    {	igDimWeldTailNone	= 0,
	igDimWeldTailOpen	= 1,
	igDimWeldTailClosed	= 2
    } 	DimWeldTailTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimCoordTextPositionConstants
    {	igDimStyleCoordTextAbove	= 1,
	igDimStyleCoordTextInLine	= 2
    } 	DimCoordTextPositionConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimWeldTypeConstants
    {	igDimWeldTypeNone	= 0,
	igDimWeldTopFillet	= 1,
	igDimWeldTopSpot	= 2,
	igDimWeldTopSeam	= 3,
	igDimWeldTopBevel	= 4,
	igDimWeldTopVGroove	= 5,
	igDimWeldTopSlot	= 6,
	igDimWeldTopSquare	= 7,
	igDimWeldTopUGroove	= 8,
	igDimWeldTopFlangeEdge	= 9,
	igDimWeldTopFlangeCorner	= 10,
	igDimWeldTopBacking	= 11,
	igDimWeldTopJGroove	= 12,
	igDimWeldTopFlareV	= 13,
	igDimWeldTopFlareBevel	= 14,
	igDimWeldTopSurfacing	= 15,
	igDimWeldTopSteepFlankedBevel	= 16,
	igDimWeldTopSteepFlankedV	= 17,
	igDimWeldTopEdgeWeld	= 18,
	igDimWeldTopSurfaceJoint	= 19,
	igDimWeldTopInclinedJoint	= 20,
	igDimWeldTopFoldJoint	= 21,
	igDimWeldTopSingleVButt	= 43,
	igDimWeldTopSingleBevelButt	= 44,
	igDimWeldBottomFillet	= 22,
	igDimWeldBottomSpot	= 23,
	igDimWeldBottomSeam	= 24,
	igDimWeldBottomBevel	= 25,
	igDimWeldBottomVGroove	= 26,
	igDimWeldBottomSlot	= 27,
	igDimWeldBottomSquare	= 28,
	igDimWeldBottomUGroove	= 29,
	igDimWeldBottomFlangeEdge	= 30,
	igDimWeldBottomFlangeCorner	= 31,
	igDimWeldBottomBacking	= 32,
	igDimWeldBottomJGroove	= 33,
	igDimWeldBottomFlareV	= 34,
	igDimWeldBottomFlareBevel	= 35,
	igDimWeldBottomSurfacing	= 36,
	igDimWeldBottomSteepFlankedBevel	= 37,
	igDimWeldBottomSteepFlankedV	= 38,
	igDimWeldBottomEdgeWeld	= 39,
	igDimWeldBottomSurfaceJoint	= 40,
	igDimWeldBottomInclinedJoint	= 41,
	igDimWeldBottomFoldJoint	= 42,
	igDimWeldBottomSingleVButt	= 45,
	igDimWeldBottomSingleBevelButt	= 46,
	igDimWeldXSpot	= 51,
	igDimWeldCenterSpot	= 52,
	igDimWeldCenterSeam	= 53,
	igDimWeldTopCompoundSquareGroove	= 54,
	igDimWeldTopCompoundJGroove	= 55,
	igDimWeldTopCompoundBevel	= 56,
	igDimWeldTopCompoundFlareBevel	= 57,
	igDimWeldBotCompoundSquareGroove	= 58,
	igDimWeldBotCompoundJGroove	= 59,
	igDimWeldBotCompoundBevel	= 60,
	igDimWeldBotCompoundFlareBevel	= 61,
	igDimWeldTopMeltThrough	= 62,
	igDimWeldBottomMeltThrough	= 63
    } 	DimWeldTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimWeldTreatmentTypeConstants
    {	igDimWeldTreatmentNone	= 0,
	igDimWeldTreatmentFlush	= 1,
	igDimWeldTreatmentConcave	= 2,
	igDimWeldTreatmentConvex	= 3,
	igDimWeldTreatmentSmoothBlend	= 4,
	igDimWeldTreatmentPermBacking	= 5,
	igDimWeldTreatmentRemBacking	= 6
    } 	DimWeldTreatmentTypeConstants;

typedef /* [hidden][helpstring][helpcontext] */ 
enum DimWeldLabelImportConstants
    {	igDimWeldLabelImportUnknown	= 0,
	igDimWeldLabelLocal	= 1,
	igDimWeldLabelImported	= 2
    } 	DimWeldLabelImportConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimWeldBeadWeldmentTypeConstants
    {	igDimWeldBeadWeldmentTypeUnknown	= 0,
	igDimWeldBeadWeldmentTypeFillet	= 1,
	igDimWeldBeadWeldmentTypeFill	= 2,
	igDimWeldBeadWeldmentTypeLabel	= 3
    } 	DimWeldBeadWeldmentTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimWeldBeadWeldmentShapeConstants
    {	igDimWeldBeadWeldmentShapeUnknown	= 0,
	igDimWeldBeadWeldmentShapeFill	= 1,
	igDimWeldBeadWeldmentShapeConcave	= 2,
	igDimWeldBeadWeldmentShapeConvex	= 3
    } 	DimWeldBeadWeldmentShapeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimWeldBeadWeldTypeConstants
    {	igDimWeldBeadWeldTypeUnknown	= 0,
	igDimWeldBeadWeldTypeContinuous	= 1,
	igDimWeldBeadWeldTypeStitch	= 2
    } 	DimWeldBeadWeldTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimWeldBeadWeldStandardConstants
    {	igDimWeldBeadWeldStandardUnknown	= 0,
	igDimWeldBeadWeldStandardANSI	= 1,
	igDimWeldBeadWeldStandardISO	= 2,
	igDimWeldBeadWeldStandardDIN	= 3
    } 	DimWeldBeadWeldStandardConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimWeldBeadWeldImportConstants
    {	igDimWeldBeadWeldImportUnknown	= 0,
	igDimWeldBeadWeldImportLocal	= 1,
	igDimWeldBeadWeldImportImported	= 2
    } 	DimWeldBeadWeldImportConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimToleranceZoneTypeConstants
    {	igDimToleranceZoneNone	= 0,
	igDimToleranceZoneProjected	= 1,
	igDimToleranceZoneTangentPlane	= 2,
	igDimToleranceZoneFreeState	= 3,
	igDimToleranceZoneEnvelope	= 4,
	igDimToleranceZoneProfile	= 5
    } 	DimToleranceZoneTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimDatumTargetLeaderTypeConstants
    {	igDimDatumTargetNearSide	= 1,
	igDimDatumTargetFarSide	= 2
    } 	DimDatumTargetLeaderTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimDatumPointTypeConstants
    {	igDimDatumPointCross	= 1,
	igDimDatumPointCircle	= 2
    } 	DimDatumPointTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimCenterlineTypeConstants
    {	igDimCenterlineNormal	= 1,
	igDimCenterlineMidway	= 2
    } 	DimCenterlineTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum TextHorizontalAlignmentConstants
    {	igTextHzAlignLeft	= 0,
	igTextHzAlignCenter	= 0x1,
	igTextHzAlignRight	= 0x2,
	igTextHzAlignJustify	= 0x10
    } 	TextHorizontalAlignmentConstants;

typedef /* [helpstring][helpcontext] */ 
enum TextVerticalAlignmentConstants
    {	igTextVtAlignTop	= 0,
	igTextHzAlignVCenter	= 0x1,
	igTextHzAlignBottom	= 0x8
    } 	TextVerticalAlignmentConstants;

typedef /* [helpstring][helpcontext] */ 
enum TextJustificationConstants
    {	igTextJustifyTop	= 0,
	igTextJustifyLeft	= 0,
	igTextJustifyCenter	= 0x1,
	igTextJustifyRight	= 0x2,
	igTextJustifyVCenter	= 0x4,
	igTextJustifyBottom	= 0x8,
	igTextJustifyCap	= 0x10,
	igTextJustifyBase	= 0x20
    } 	TextJustificationConstants;

typedef /* [helpstring][helpcontext] */ 
enum TextFlowDirectionConstants
    {	igTextLeftToRight	= 0,
	igTextRightToLeft	= 0x1
    } 	TextFlowDirectionConstants;

typedef /* [helpstring][helpcontext] */ 
enum TextFlowOrientationConstants
    {	igTextHorizontal	= 0,
	igTextVertical	= 0x1
    } 	TextFlowOrientationConstants;

typedef /* [helpstring][helpcontext] */ 
enum TextBorderTypeConstants
    {	igTextBorderNone	= 0,
	igTextBorderRectangle	= 0x1
    } 	TextBorderTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum TextTabTypeConstants
    {	igTextTabFlushLeft	= 1,
	igTextTabFlushRight	= 2,
	igTextTabFlushCentered	= 3,
	igTextTabFlushDecimal	= 4
    } 	TextTabTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum TextPlacementTypeConstants
    {	igTextBoxType	= 1,
	igTextStringType	= 2
    } 	TextPlacementTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum FrameShapeConstants
    {	igRectangularFrame	= 1,
	igEllipticalFrame	= 2
    } 	FrameShapeConstants;

typedef /* [helpstring][helpcontext] */ 
enum UpdateOptionConstants
    {	igUpdateAutomatic	= 1,
	igUpdateOnSave	= 2,
	igUpdateManual	= 3
    } 	UpdateOptionConstants;

typedef /* [helpstring][helpcontext] */ 
enum DisplayTypeConstants
    {	igDisplayTypeContents	= 1,
	igDisplayTypeIcon	= 2,
	igDisplayTypeThumbnail	= 3
    } 	DisplayTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum PlacementMethodConstants
    {	igByOrigin	= 1,
	igByFrameBoundaries	= 2,
	igByCascadeMethod	= 3,
	igByDefaultStateData	= 4
    } 	PlacementMethodConstants;

typedef /* [helpstring][helpcontext] */ 
enum SizeModeConstants
    {	igFrameCrops	= 1,
	igFrameChangesSize	= 2,
	igObjectScaled	= 3
    } 	SizeModeConstants;

typedef /* [helpstring][helpcontext] */ 
enum Geom2dFormConstants
    {	igGeom2dFormUnknown	= 0,
	igGeom2dFormOpen	= 1,
	igGeom2dFormClosed	= 2,
	igGeom2dFormClosedWithTangents	= 3,
	igGeom2dFormClosedWithCurvature	= 4,
	igGeom2dFormClosedWithTorsion	= 5,
	igGeom2dFormClosedPeriodic	= 6
    } 	Geom2dFormConstants;

typedef /* [helpstring][helpcontext] */ 
enum Geom2dScopeConstants
    {	igGeom2dScopeUnknown	= 0,
	igGeom2dScopePlaner	= 1,
	igGeom2dScopeColinear	= 2,
	igGeom2dScopeDegenerate	= 3,
	igGeom2dScopeNonplaner	= 4
    } 	Geom2dScopeConstants;

typedef /* [helpstring][helpcontext] */ 
enum Geom2dOrientationConstants
    {	igGeom2dOrientClockwise	= 0,
	igGeom2dOrientCounterClockwise	= 1
    } 	Geom2dOrientationConstants;

typedef /* [helpstring][helpcontext] */ 
enum CurveFitTypeConstants
    {	igLinestringFit	= 0,
	igDirectFit	= 1,
	igLeastSquareFit	= 2
    } 	CurveFitTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum Boundary2dStateConstants
    {	igBoundary2dUndefined	= 0,
	igBoundary2dUpToDate	= 1,
	igBoundary2dUnableToCompute	= 2
    } 	Boundary2dStateConstants;

typedef /* [helpstring][helpcontext] */ 
enum KeypointIndexConstants
    {	igArcCenter	= 0,
	igArcStart	= 1,
	igArcEnd	= 2,
	igArcMiddle	= 3,
	igArcBottomSilhouettePoint	= 4,
	igArcTopSilhouettePoint	= 5,
	igArcLeftSilhouettePoint	= 6,
	igArcRightSilhouettePoint	= 7,
	igCircleCenter	= 0,
	igCircleMajorAxis	= 1,
	igCircleBottomSilhouettePoint	= 2,
	igCircleTopSilhouettePoint	= 3,
	igCircleLeftSilhouettePoint	= 4,
	igCircleRightSilhouettePoint	= 5,
	igEllipseArcCenter	= 0,
	igEllipseArcStart	= 1,
	igEllipseArcEnd	= 2,
	igEllipseArcMajor	= 4,
	igEllipseArcMinor	= 5,
	igEllipseArcBottomSilhouettePoint	= 6,
	igEllipseArcTopSilhouettePoint	= 7,
	igEllipseArcLeftSilhouettePoint	= 8,
	igEllipseArcRightSilhouettePoint	= 9,
	igEllipseArcMajorReverse	= 10,
	igEllipseArcMinorReverse	= 11,
	igEllipseCenter	= 0,
	igEllipseMajor	= 1,
	igEllipseMinor	= 2,
	igEllipseMajorReverse	= 3,
	igEllipseMinorReverse	= 4,
	igEllipseBottomSilhouettePoint	= 6,
	igEllipseTopSilhouettePoint	= 7,
	igEllipseLeftSilhouettePoint	= 8,
	igEllipseRightSilhouettePoint	= 9,
	igLineStart	= 0,
	igLineEnd	= 1,
	igLineMiddle	= 2,
	igBsplineCurveStart	= 0,
	igBsplineCurveEnd	= 1
    } 	KeypointIndexConstants;

typedef /* [helpstring][helpcontext] */ 
enum AutoConstrainDimPlacementOptionConstants
    {	seAutoConstrainDimChain	= 0,
	seAutoConstrainDimCoordinate	= 1,
	seAutoConstrainDimStack	= 2
    } 	AutoConstrainDimPlacementOptionConstants;

typedef /* [helpstring][helpcontext] */ 
enum AutoConstrainLinearDimOptionConstants
    {	seAutoConstrainLinearDimDistanceBetween	= 0,
	seAutoConstrainLinearDimLineLength	= 1,
	seAutoConstrainLinearDimAll	= 2
    } 	AutoConstrainLinearDimOptionConstants;

typedef /* [helpstring][helpcontext] */ 
enum StandardOLEVerbConstants
    {	igOLEPrimary	= 0,
	igOLEShow	= -1,
	igOLEOpen	= -2,
	igOLEHide	= -3,
	igOLEUIActivate	= -4,
	igOLEInPlaceActivate	= -5,
	igOLEDiscardUndoState	= -6
    } 	StandardOLEVerbConstants;

typedef /* [helpstring][helpcontext] */ 
enum StaggerTypeConstants
    {	seNoStagger	= 0,
	seRowStagger	= 1,
	seColumnStagger	= 2
    } 	StaggerTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum PatternOffsetTypeConstants
    {	sePatternFitOffset	= 0,
	sePatternFillOffset	= 1,
	sePatternFixedOffset	= 2
    } 	PatternOffsetTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum TextSelectConstants
    {	seTextSelectRange	= 0,
	seTextSelectWord	= 1,
	seTextSelectParagraph	= 2,
	seTextSelectAll	= 5
    } 	TextSelectConstants;

typedef /* [helpstring][helpcontext] */ 
enum PointTypeConstants
    {	igSpacePoint	= 0,
	igKeyPoint	= 1,
	igCylinderStartPoint	= 2,
	igCylinderEndPoint	= 3
    } 	PointTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum ConnectorTypeConstants
    {	seLineConnector	= 0,
	seJumpConnector	= 1,
	seCornerConnector	= 2,
	seStepConnector	= 3
    } 	ConnectorTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum BlockLabelOriginLocationConstants
    {	igBlockLabelTopLeft	= 0,
	igBlockLabelTopCenter	= 1,
	igBlockLabelTopRight	= 2,
	igBlockLabelMiddleLeft	= 3,
	igBlockLabelMiddleCenter	= 4,
	igBlockLabelMiddleRight	= 5,
	igBlockLabelBottomLeft	= 6,
	igBlockLabelBottomCenter	= 7,
	igBlockLabelBottomRight	= 8,
	igBlockLabelUnderLeft	= 9,
	igBlockLabelUnderCenter	= 10,
	igBlockLabelUnderRight	= 11
    } 	BlockLabelOriginLocationConstants;

typedef /* [helpstring][helpcontext] */ 
enum SubfixAlignmentConstants
    {	seSubfixAlignLeft	= 0,
	seSubfixAlignCenter	= 1
    } 	SubfixAlignmentConstants;

typedef /* [helpstring][helpcontext] */ 
enum GNTTypePropertyConstants
    {	igBody	= 167551091,
	igShell	= 167551088,
	igFace	= 167551075,
	igLoop	= 167551097,
	igEdgeUse	= 167551099,
	igEdge	= 167551093,
	igVertex	= 167551101,
	igBSplineSurface	= 1465959633,
	igCylinder	= -114972029,
	igCone	= -114972031,
	igPlane	= -1909484335,
	igSphere	= -114972027,
	igTorus	= -114972025,
	igBSplineCurve	= 167551103,
	igCircle	= 167551105,
	igEllipse	= 167551107,
	igLine	= 167551109,
	igParamBSplineCurve	= -1811952078,
	igCurveBody	= -1020639371,
	igCurvePath	= -1020639369,
	igCurve	= -1020639367
    } 	GNTTypePropertyConstants;

typedef GNTTypePropertyConstants *LPGNTTYPEPROPERTYCONSTANTS;

typedef /* [helpstring][helpcontext] */ 
enum FeatureTopologyQueryTypeConstants
    {	igQueryAll	= 1,
	igQueryRoundable	= 2,
	igQueryStraight	= 3,
	igQueryEllipse	= 4,
	igQuerySpline	= 5,
	igQueryPlane	= 6,
	igQueryCone	= 7,
	igQueryTorus	= 8,
	igQuerySphere	= 9,
	igQueryCylinder	= 10
    } 	FeatureTopologyQueryTypeConstants;

typedef FeatureTopologyQueryTypeConstants *LPFEATURETOPOLOGYQUERYTYPECONSTANTS;

typedef /* [helpstring][helpcontext] */ 
enum TopologyCollectionTypeConstants
    {	seFaceCollection	= 1,
	seEdgeCollection	= 2,
	seVertexCollection	= 3
    } 	TopologyCollectionTypeConstants;

typedef TopologyCollectionTypeConstants *LPTOPOLOGYCOLLECTIONTYPECONSTANTS;

typedef /* [helpstring][helpcontext] */ 
enum SmartCollectionTypeConstants
    {	seRoundableEdgesAtVertex	= 1,
	seRoundableSmoothEdgeChain	= 2,
	seRoundableEdgesOfFace	= 3,
	seRoundableEdgesOfLoop	= 4,
	seRoundableEdgesOfFeature	= 5,
	seRoundableConvexEdgesOfBody	= 6,
	seRoundableConcaveEdgesOfBody	= 7,
	seThinwallableFacesOfFeature	= 8,
	seThinwallableSmoothFaceChain	= 9,
	seDraftableSmoothFaceChain	= 10,
	seDraftableFacesOfALoop	= 11,
	seDraftableFacesOfBodyNormalToFaceOrPlane	= 12,
	seBendFacesOfBody	= 13,
	seBendFacesOfBodyWithBendCenterLineAttributes	= 14
    } 	SmartCollectionTypeConstants;

typedef SmartCollectionTypeConstants *LPSMARTCOLLECTIONTYPECONSTANTS;

typedef /* [helpstring][helpcontext] */ 
enum FeaturePropertyConstants
    {	igNullConstant	= 0,
	igLeft	= 1,
	igRight	= 2,
	igSymmetric	= 3,
	igInside	= 4,
	igOutside	= 5,
	igBoth	= 6,
	igNormalSideDummy	= 7,
	igReverseNormalSideDummy	= 8,
	igExtend	= 9,
	igNoExtend	= 10,
	igThkInProfilePlane	= 11,
	igThkNormalToProfilePlane	= 12,
	igFinite	= 13,
	igToNext	= 14,
	igToEndOfEdge	= 14,
	igFromTo	= 15,
	igThroughAll	= 16,
	igThreeHundredAndSixty	= 17,
	igParallelDummy	= 18,
	igAngularDummy	= 19,
	igNormal	= 20,
	igThroughAxis	= 21,
	igSingleEdge	= 22,
	igMultipleEdges	= 23,
	igEdgesByLoop	= 24,
	igEdgesByVertex	= 25,
	igAll	= 26,
	igConcave	= 27,
	igConvex	= 28,
	igStart	= 29,
	igEnd	= 30,
	igLinear	= 31,
	igRadial	= 32,
	igRegularHole	= 33,
	igCounterboreHole	= 34,
	igCountersinkHole	= 35,
	igCounterdrillHole	= 36,
	igTappedHole	= 37,
	igTaperedHole	= 38,
	igConstRadiusRound	= 39,
	igVarRadiusRound	= 40,
	igChamfer45degSetback	= 41,
	igChamferAngleSetback	= 42,
	igChamfer2Setbacks	= 43,
	igNone	= 44,
	igTaperByAngle	= 45,
	igTaperByRatio	= 46,
	igClosed	= 47,
	igProfileBasedCrossSection	= 48,
	igEdgeBasedCrossSection	= 49,
	igTangent	= 50,
	igRectangularBendRelief	= 51,
	igFilletBendRelief	= 52,
	igRipBendRelief	= 53,
	igBendOnlyCornerRelief	= 54,
	igBendAndFaceCornerRelief	= 55,
	igRipCornerRelief	= 56,
	igNFType	= 57,
	igEquationType	= 58,
	igPatternMirror	= 59,
	igPatternRectangular	= 60,
	igPatternCircular	= 61,
	igPatternUserDefined	= 62,
	igFromReferenceEnd	= 64,
	igFromNonReferenceEnd	= 65,
	igRndRollAcrossTangentEdgesOn	= 66,
	igRndRollAcrossTangentEdgesOff	= 67,
	igRndCapAcrossSharpEdges	= 68,
	igRndRollAcrossSharpEdges	= 69,
	igRndRollAlongBlendEdgesOn	= 70,
	igRndRollAlongBlendEdgesOff	= 71,
	igToKeyPoint	= 72,
	igFlatten	= 73,
	igAsConstruction	= 74,
	igOffset	= 75,
	igMitreParallelToThickness	= 76,
	igMitreNormalToThickness	= 77,
	igMitreByDist	= 78,
	igMitreByAngle	= 79,
	igMitreRegularCut	= 80,
	igMitreManufacturingCut	= 81,
	igProjectOptionProject	= 82,
	igProjectOptionWrap	= 83,
	igLip	= 84,
	igGroove	= 85,
	igPartingFromPlane	= 86,
	igPartingFromSurface	= 87,
	igPartingFromEdge	= 88,
	igPartingFromCurve	= 89,
	igSplitDraft	= 90,
	igSplitAngle1Right	= 91,
	igSplitAngle1Left	= 92,
	igLouverFormedEndType	= 93,
	igLouverLancedEndType	= 94,
	igLouverRound	= 95,
	igLouverRoundNone	= 96,
	igInsideDimension	= 97,
	igOutsideDimension	= 98,
	igFull	= 99,
	igBend	= 100,
	igAddRound	= 101,
	igNoRound	= 102,
	igCloseFaces	= 103,
	igOverlapFaces	= 104,
	igTreatmentOff	= 105,
	igTreatmentIntersect	= 106,
	igTreatmentCircleCutout	= 107,
	igStepDraft	= 108,
	igShowBoundaries	= 109,
	igRemoveBoundaries	= 110,
	igCornerRound	= 111,
	igNoCornerRound	= 112,
	igNatural	= 113,
	igPeriodic	= 114,
	igRoundAllVertexSetback	= 115,
	igRoundSingleVertexSetback	= 116,
	igRoundVertexEdgeSetback	= 117,
	igRoundSetbackIsAbsolute	= 118,
	igRoundSetbackIsRelative	= 119,
	igCircular	= 120,
	igUShaped	= 121,
	igVShaped	= 122,
	igPunchedEnd	= 123,
	igLancedEnd	= 124,
	igFormedEnd	= 125,
	igSweepAlignParallel	= 126,
	igSweepAlignNormal	= 127,
	igRoundStartVertexEdgeSetback	= 128,
	igRoundEndVertexEdgeSetback	= 129,
	igSubtract	= 130,
	igUnite	= 131,
	igIntersect	= 132,
	igContinuous	= 133,
	igFlangeFullEdge	= 134,
	igFlangeCenterOfEdge	= 135,
	igFlangeStartOnEndEdge	= 136,
	igFlangeEndOnEndEdge	= 137,
	igFlangeStartFromEndEdge	= 138,
	igFlangeEndFromEndEdge	= 139,
	igFlangeFromBothEndsOfEdge	= 140,
	igFlangeOffset	= 141,
	igChainedCornerRelief	= 142,
	igTangentInterior	= 143,
	igParallelToPlane	= 144,
	igVBottomDimToFlat	= 145,
	igVBottomDimToV	= 146,
	igTaperDimAtTop	= 147,
	igTaperDimAtBottom	= 148,
	igCounterboreProfileIsAtTop	= 149,
	igCounterboreProfileIsAtBottom	= 150,
	igTaperByRLRatio	= 151,
	igRndMiterAtCorner	= 152,
	igRndRollAroundCorner	= 153,
	igRndPreserveTopologyOn	= 154,
	igRndPreserveTopologyOff	= 155,
	igStepDraftPerpendicular	= 156,
	igExtendBendRelief	= 157,
	igEqualOffset	= 158,
	igUnequalOffset	= 159,
	igThickness	= 160,
	igFacesTouchingCurvesOnly	= 161,
	igCurveSetSeperator	= 162,
	igSideInfoSetSeperator	= 163,
	igRegularThread	= 164,
	igStraightPipeThread	= 165,
	igTaperedPipeThread	= 166,
	igRemoveInternalBoundaries	= 167,
	igRemoveExternalBoundaries	= 168,
	igDeleteFaceHeal	= 169,
	igEndCaps	= 170,
	igCurvatureContinuous	= 171,
	igNonSymmetric	= 172,
	igTreatmentDraft	= 173,
	igTreatmentCrown	= 174,
	igCloseCornerNone	= 175,
	igCloseCornerOpen	= 176,
	igCloseCornerClosed	= 177,
	igCloseCornerCircleCutout	= 178,
	igPatternAlongCurve	= 179,
	igPatternMountingBoss	= 180,
	igSMClearanceCutout	= 181,
	igSMMidPlaneCutout	= 182,
	igLinearTangentExtension	= 183,
	igLinearCurvatureContinuousExtension	= 184,
	igReflective	= 185,
	igMove	= 186,
	igCopy	= 187,
	igDelSMFaceNone	= 188,
	igDelZeroBendRadius	= 189,
	igDelSystemRelief	= 190,
	igDelSMFaceBoth	= 191,
	igReverseNormal	= 192,
	igRecreateBlends	= 193,
	igIgnoreBlends	= 194,
	igSweepAlignParametrically	= 195,
	igSweepAlignArcLength	= 196,
	igSweepMergeNone	= 197,
	igSweepMergeAlongPath	= 198,
	igSweepMergeAll	= 199,
	igSweepC1Continuity	= 200,
	igSweepC2Continuity	= 201,
	igWeldGrooveCapProject	= 202,
	igWeldGrooveCapSurface	= 203,
	igWeldGrooveCapSameAsTop	= 204,
	igSMFaceCutout	= 205,
	igFlangeMatchFace	= 206,
	igHemTypeClosed	= 207,
	igHemTypeOpen	= 208,
	igHemTypeSFlange	= 209,
	igHemTypeCurl	= 210,
	igHemTypeOpenLoop	= 211,
	igHemTypeClosedLoop	= 212,
	igHemTypeCenteredLoop	= 213
    } 	FeaturePropertyConstants;

typedef FeaturePropertyConstants *LPFEATUREPROPERTYCONSTANTS;

typedef /* [helpstring][helpcontext] */ 
enum FeatureTypeConstants
    {	igExtrudedProtrusionFeatureObject	= 0x1b8b0172,
	igRevolvedProtrusionFeatureObject	= 0x1b8b0176,
	igExtrudedCutoutFeatureObject	= 0x1b8b017a,
	igRevolvedCutoutFeatureObject	= 0x1b8b017e,
	igHoleFeatureObject	= 0x1b8b0182,
	igRibFeatureObject	= 0x1b8b018a,
	igThinwallFeatureObject	= 0x1b8b018e,
	igRoundFeatureObject	= 0x1b8b0192,
	igChamferFeatureObject	= 0x1b8b0196,
	igDraftFeatureObject	= 0x1b8b019a,
	igPatternFeatureObject	= 0xe730d97a,
	igUserDefinedPatternFeatureObject	= 0xa87ec191,
	igBodyFeatureObject	= 0xa733c87d,
	igModelCopyFeatureObject	= 0xbc824672,
	igMirrorCopyFeatureObject	= 0x3f2dc38,
	igTabFeatureObject	= 0xa854c730,
	igLoftedProtrusionFeatureObject	= 0x7aa82de0,
	igLoftedCutoutFeatureObject	= 0x7aa82de5,
	igSweptProtrusionFeatureObject	= 0x82c24f72,
	igSweptCutoutFeatureObject	= 0xe83b9af2,
	igFlangeFeatureObject	= 0x97927073,
	igBreakCornerFeatureObject	= 0xdb4fe034,
	igContourFlangeFeatureObject	= 0x10c11524,
	igHelixProtrusionFeatureObject	= 0xb82ed1a2,
	igHelixCutoutFeatureObject	= 0x4763b97b,
	igUnbendFeatureObject	= 0x4ee0ac21,
	igRebendFeatureObject	= 0xe1f51008,
	igCopiedPartFeatureObject	= 0x906f3eb4,
	igReplaceFaceFeatureObject	= 0x258e8eb1,
	igWebNetworkFeatureObject	= 0x666d1321,
	igLoftedSurfaceFeatureObject	= 0x191f346d,
	igSweptSurfaceFeatureObject	= 0x191f346f,
	igDimpleFeatureObject	= 0x2b0761d6,
	igCloseCornerFeatureObject	= 0x83a2a78,
	igLipFeatureObject	= 0xe32c28d9,
	igJogFeatureObject	= 0x178f93ac,
	igLoftedFlangeFeatureObject	= 0x1a1c52fc,
	igExtrudedSurfaceObject	= 0x1dcc25f0,
	igOffsetSurfaceObject	= 0x5ea50310,
	igRevolvedSurfaceObject	= 0x8cb67130,
	igCopyConstructionObject	= 0x5c76ce0,
	igIntersectionCurveObject	= 0x5982ff50,
	igIntersectionPointObject	= 0xa9e35c28,
	igProjectCurveObject	= 0xa9e35c2a,
	igLouverFeatureObject	= 0x12dd7fa3,
	igDrawnCutoutFeatureObject	= 0x24796a16,
	igBeadFeatureObject	= 0x82dbd948,
	igCoordinateSystemFeatureObject	= 0x46e3dfe5,
	igBendFeatureObject	= 0x8e5d9fb0,
	igBooleanFeatureObject	= 0xf59b8bf4,
	igNormalCutoutFeatureObject	= 0xee901571,
	igMirrorPartFeatureObject	= 0x71be29d6,
	igTubeFeatureObject	= 0xb883d260,
	igWireFeatureObject	= 0xcf39bb77,
	igDeleteFaceFeatureObject	= 0x7df42005,
	igDeleteRegionFeatureObject	= 0x7df42004,
	igDeleteHoleFeatureObject	= 0xbfb8e3d7,
	igDeleteBlendFeatureObject	= 0x2d40336b,
	igStitchSurfaceObject	= 0xe856d64f,
	igCopySurfaceObject	= 0x686ea7a7,
	igNormalToFaceProtrusionObject	= 0x2ecb2339,
	igNormalToFaceCutoutObject	= 0x2ecb2336,
	igWeldBeadByExtrudedProtrusionFeatureObject	= 0x3dce5680,
	igFilletWeldFeatureObject	= 0xe47c7601,
	igWeldBeadByRevolvedProtrusionFeatureObject	= 0xbe14827b,
	igWeldBeadBySweptProtrusionFeatureObject	= 0x12a92161,
	igWeldChamferFeatureObject	= 0x2c3367f1,
	igWeldExtrudedCutoutFeatureObject	= 0xa841e4d0,
	igWeldHoleFeatureObject	= 0xddd759f5,
	igWeldMirrorFeatureObject	= 0x9f190986,
	igWeldPatternFeatureObject	= 0x891734c8,
	igWeldRevolvedCutoutFeatureObject	= 0xc26a47ce,
	igWeldRoundFeatureObject	= 0x8ea505e3,
	igLabelWeldFeatureObject	= 0xc00d1ca4,
	igAssemblyWeldmentObject	= 0x7f6a7cf4,
	igTrimSurfaceObject	= 0x724ee338,
	igExtendSurfaceObject	= 0xa211759f,
	igDerivedCurveObject	= 0x5d11444,
	igSplitCurveObject	= 0x107dc968,
	igSurfaceByBoundaryObject	= 0xa792fa20,
	igMirrorCopyGeometryObject	= 0x3a6e8a97,
	igBlueSurfFeatureObject	= 0xf97f2f41,
	igThickenFeatureObject	= 0x3b0e5818,
	igThinRegionFeatureObject	= 0x1a24f6a2,
	igPartingSplitFeatureObject	= 0xb71536ec,
	igMidSurfaceObject	= 0xdcc21e70,
	igPatternCopyGeometryObject	= 0xbe0bc820,
	igPatternPartFeatureObject	= 0xa8135b7,
	igVentFeatureObject	= 0xfae192f1,
	igPartingSurfaceFeatureObject	= 0x19506da9,
	igSplitFaceObject	= 0xad6f28a7,
	igResizeHoleObject	= 0x8f78eb9b,
	igResizeRoundObject	= 0x3970be20,
	igResizeBendObject	= 0x41eeb732,
	igFaceMoveObject	= 0x419130b6,
	igFaceRotateObject	= 0x9f5b7eec,
	igFaceOffsetObject	= 0x465c8546,
	igWrapSketch	= 0x320fa8be,
	igInterpartConstructionObject	= 0xec8274df,
	igGussetFeatureObject	= 0x2d391b91,
	igMatchFlangeFaceFeatureObject	= 0x62361806
    } 	FeatureTypeConstants;

typedef FeatureTypeConstants *LPFEATURETYPECONSTANTS;

typedef /* [helpstring][helpcontext] */ 
enum FeatureStatusConstants
    {	igFeatureOK	= 0x4881f496,
	igFeatureFailed	= 0x4881f497,
	igFeatureWarned	= 0x4881f498,
	igFeatureSuppressed	= 0x4881f499,
	igFeatureRolledBack	= 0x4881f49a
    } 	FeatureStatusConstants;

typedef FeatureStatusConstants *LPFEATURESTATUSCONSTANTS;

typedef /* [helpstring][helpcontext] */ 
enum RoundTypeConstants
    {	igConstantRadius	= 1,
	igVariableRadius	= 2
    } 	RoundTypeConstants;

typedef RoundTypeConstants *LPROUNDTYPECONSTANTS;

typedef /* [helpstring][helpcontext] */ 
enum ViewOrientationConstants
    {	igTopView	= 1,
	igRightView	= 2,
	igLeftView	= 3,
	igFrontView	= 4,
	igBottomView	= 5,
	igBackView	= 6,
	igTopBackLeftView	= 7,
	igTopFrontLeftView	= 8,
	igTopFrontRightView	= 9,
	igTopBackRightView	= 10,
	igBottomBackLeftView	= 11,
	igBottomFrontLeftView	= 12,
	igBottomFrontRightView	= 13,
	igBottomBackRightView	= 14,
	igDimetricTopBackLeftView	= 15,
	igDimetricTopFrontLeftView	= 16,
	igDimetricTopFrontRightView	= 17,
	igDimetricTopBackRightView	= 18,
	igDimetricBottomBackLeftView	= 19,
	igDimetricBottomFrontLeftView	= 20,
	igDimetricBottomFrontRightView	= 21,
	igDimetricBottomBackRightView	= 22,
	igTrimetricTopBackLeftView	= 23,
	igTrimetricTopFrontLeftView	= 24,
	igTrimetricTopFrontRightView	= 25,
	igTrimetricTopBackRightView	= 26,
	igTrimetricBottomBackLeftView	= 27,
	igTrimetricBottomFrontLeftView	= 28,
	igTrimetricBottomFrontRightView	= 29,
	igTrimetricBottomBackRightView	= 30
    } 	ViewOrientationConstants;

typedef ViewOrientationConstants *LPVIEWORIENTATIONCONSTANTS;

typedef /* [helpstring][helpcontext] */ 
enum KeyPointExtentConstants
    {	igTangentNormal	= 1,
	igReverseTangentNormal	= 2,
	igInteriorTangentNormal	= 3,
	igInteriorReverseTangentNormal	= 4
    } 	KeyPointExtentConstants;

typedef KeyPointExtentConstants *LPKEYPOINTCONSTANTS;

typedef /* [helpstring][helpcontext] */ 
enum ProfileValidationType
    {	igProfileClosed	= 1,
	igProfileSingle	= 4,
	igProfileNoSelfIntersect	= 8,
	igProfileRefAxisRequired	= 16,
	igProfileNoRefAxisIntersect	= 32,
	igProfileAllowNested	= 8192,
	igProfileAllowPointsAsProfiles	= 524288
    } 	ProfileValidationType;

typedef /* [helpstring][helpcontext] */ 
enum ProfileValidationStatus
    {	igProfileStatusValid	= 0,
	igProfileStatusInvalid	= -1
    } 	ProfileValidationStatus;

typedef /* [helpstring][helpcontext] */ 
enum ReferenceElementConstants
    {	igRefEleInit	= 0,
	igReverseNormalSide	= 1,
	igNormalSide	= 2,
	igPivotStart	= 3,
	igPivotEnd	= 4,
	igPlaneRotateLeft	= 5,
	igPlaneRotateRight	= 6,
	igPlaneFlipHorizontal	= 7,
	igPlaneFlipVertical	= 8,
	igPlaneAlignX	= 9,
	igPlaneAlignY	= 10,
	igParallel	= 11,
	igAngular	= 12,
	igNormalToCurve	= 13,
	igCurveStart	= 14,
	igCurveEnd	= 15,
	igNormalToCurveAtDistance	= 16,
	igTangentToFace	= 17,
	ig3PointPlane	= 18,
	igParallelThroughPoint	= 19,
	igNormalToCurveAtDistanceAlongCurve	= 20,
	igNormalToCurveAtArcLengthRatio	= 21,
	igNormalToCurveAtKeyPoint	= 22,
	igPlaneByMirror	= 23,
	igFlipNormal	= 24,
	igTangentToSurfaceAtAngle	= 25,
	igTangentToSurfaceAtKeypoint	= 26
    } 	ReferenceElementConstants;

typedef /* [helpstring][helpcontext] */ 
enum PatternTypeConstants
    {	seSmartPattern	= 0,
	seFastPattern	= 1
    } 	PatternTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DimpleFeatureConstants
    {	seDimpleDepthLeft	= 1,
	seDimpleDepthRight	= 2,
	seDimpleDimensionOffset	= 3,
	seDimpleDimensionFull	= 4,
	seDimpleProfileLeft	= 5,
	seDimpleProfileRight	= 6,
	seDimpleNoRoundCorners	= 7,
	seDimpleRoundCorners	= 8,
	seDimpleNoRoundEdges	= 9,
	seDimpleRoundEdges	= 10,
	seDimpleMaterialInside	= 11,
	seDimpleMaterialOutside	= 12
    } 	DimpleFeatureConstants;

typedef /* [helpstring][helpcontext] */ 
enum WebNetworkFeatureConstants
    {	seWebNormal	= 1,
	seWebReverseNormal	= 2,
	seWebExtendToNext	= 3,
	seWebExtendFinite	= 4,
	seWebProfileExtend	= 5,
	seWebProfileNoExtend	= 6
    } 	WebNetworkFeatureConstants;

typedef /* [helpstring][helpcontext] */ 
enum LipFeatureConstants
    {	seLipTypeLip	= 1,
	seLipTypeGroove	= 2
    } 	LipFeatureConstants;

typedef /* [helpstring][helpcontext] */ 
enum CloseCornerFeatureConstants
    {	seCloseCornerCloseFaces	= 1,
	seCloseCornerOverlapFaces	= 2,
	seCloseCornerTreatmentOff	= 3,
	seCloseCornerTreatmentIntersect	= 4,
	seCloseCornerTreatmentCircularCutout	= 5
    } 	CloseCornerFeatureConstants;

typedef /* [helpstring][helpcontext] */ 
enum JogFeatureConstants
    {	seJogBendNFT	= 1,
	seJogBendEqn	= 2,
	seJogBRRectangular	= 3,
	seJogBRFillet	= 4,
	seJogBendOnlyCR	= 5,
	seJogBendAndFaceCR	= 6,
	seJogDimensionOffset	= 7,
	seJogDimensionFull	= 8,
	seJogExtendMoldlines	= 9,
	seJogNoExtendMoldines	= 10,
	seJogMoveLeft	= 11,
	seJogMoveRight	= 12,
	seJogMaterialInside	= 13,
	seJogMaterialOutside	= 14,
	seJogMaterialBendOutside	= 15,
	seJogNormal	= 16,
	seJogReverseNormal	= 17,
	seJogExtentFinite	= 18,
	seJogExtentFiniteByKeypoint	= 19
    } 	JogFeatureConstants;

typedef /* [helpstring][helpcontext] */ 
enum LouverFeatureConstants
    {	seLouverDepthDirectionLeft	= 1,
	seLouverDepthDirectionRight	= 2,
	seLouverDimensionOffset	= 3,
	seLouverDimensionFull	= 4,
	seLouverFormedEnd	= 5,
	seLouverLancedEnd	= 6,
	seLouverHeightNormal	= 7,
	seLouverHeightReverseNormal	= 8,
	seLouverRound	= 9,
	seLouverNoRound	= 10
    } 	LouverFeatureConstants;

typedef /* [helpstring][helpcontext] */ 
enum DrawnCutoutFeatureConstants
    {	seDrawnCutoutDepthLeft	= 1,
	seDrawnCutoutDepthRight	= 2,
	seDrawnCutoutMaterialInside	= 3,
	seDrawnCutoutMaterialOutside	= 4,
	seDrawnCutoutProfileLeft	= 5,
	seDrawnCutoutProfileRight	= 6,
	seDrawnCutoutRoundEdges	= 7,
	seDrawnCutoutNoRoundEdges	= 8,
	seDrawnCutoutRoundCorners	= 9,
	seDrawnCutoutNoRoundCorners	= 10
    } 	DrawnCutoutFeatureConstants;

typedef /* [helpstring][helpcontext] */ 
enum BendFeatureConstants
    {	seBendOnlyCornerRelief	= 1,
	seBendAndFaceCornerRelief	= 2,
	seBendExtendMoldlines	= 3,
	seBendNoExtendMoldines	= 4,
	seBendMoveRight	= 5,
	seBendMoveLeft	= 6,
	seBendNormal	= 7,
	seBendReverseNormal	= 8,
	seBendParamNFT	= 9,
	seBendParamEqn	= 10,
	seBendPZLInside	= 11,
	seBendPZLOutside	= 12,
	seBendPZLLeft	= 13,
	seBendPZLRight	= 14,
	seBendPZLSymmetric	= 15,
	seBendReliefRectangular	= 16,
	seBendReliefFillet	= 17,
	seBendStateFlat	= 18,
	seBendStateBent	= 19,
	seBendAndFaceChainRelief	= 20
    } 	BendFeatureConstants;

typedef /* [helpstring][helpcontext] */ 
enum CoordinateSystemFeatureConstants
    {	seCoordSysXAxis	= 1,
	seCoordSysYAxis	= 2,
	seCoordSysZAxis	= 3,
	seCoordSysXYPlane	= 4,
	seCoordSysYZPlane	= 5,
	seCoordSysZXPlane	= 6
    } 	CoordinateSystemFeatureConstants;

typedef /* [helpstring][helpcontext] */ 
enum CoordinateSystemTypeConstants
    {	seCoordSysGeometryBased	= 1,
	seCoordSysNonGeometryBased	= 2,
	seCoordSysNonGeometricRelativeTo	= 3
    } 	CoordinateSystemTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum CoordinateSystemRotationTypeConstants
    {	seCoordSysRotateAboutSelf	= 1,
	seCoordSysRotateAboutParent	= 2
    } 	CoordinateSystemRotationTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum CoordinateSystemOffsetTypeConstants
    {	seCoordSysOffsetGlobal	= 1,
	seCoordSysOffsetRelative	= 2
    } 	CoordinateSystemOffsetTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum BooleanFeatureConstants
    {	seBooleanIntersect	= 1,
	seBooleanSubtract	= 2,
	seBooleanUnite	= 3,
	seBooleanPlaneFront	= 4,
	seBooleanPlaneBack	= 5
    } 	BooleanFeatureConstants;

typedef /* [helpstring][helpcontext] */ 
enum PropertyTypeConstants
    {	sePropertyTypeDouble	= 1,
	sePropertyTypeString	= 2,
	sePropertyTypeInteger	= 3
    } 	PropertyTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum PropertyFilterTypeConstants
    {	sePropertyFilterTypeFace	= 1,
	sePropertyFilterTypeFaceChain	= 2,
	sePropertyFilterTypeFeatureEdges	= 3,
	sePropertyFilterTypeFeatureFaces	= 4,
	sePropertyFilterTypeEdge	= 5,
	sePropertyFilterTypeEdgeChain	= 6,
	sePropertyFilterTypeVertex	= 7
    } 	PropertyFilterTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum PropertyTableConstants
    {	seCustomPropertyQueryAllProperties	= 1,
	seCustomPropertyQueryByTable	= 2,
	seCustomPropertyQueryByNameAndValue	= 3
    } 	PropertyTableConstants;

typedef /* [helpstring][helpcontext] */ 
enum FamilyMemberStatusConstants
    {	seStatusUnknown	= 0,
	seStatusNotCreated	= 1,
	seStatusUpToDate	= 2,
	seStatusOutOfDate	= 3,
	seStatusLinkBroken	= 4
    } 	FamilyMemberStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum DividedPartStatusConstants
    {	seDividedPartStatusNotCreated	= 0,
	seDividedStatusUpToDate	= 1,
	seDividedStatusOutOfDate	= 2,
	seDividedStatusLinkBroken	= 3
    } 	DividedPartStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum DividedPartCutDirectionConstants
    {	seDividedPartCutNormal	= 0,
	seDividedPartCutReverseNormal	= 1
    } 	DividedPartCutDirectionConstants;

typedef /* [helpstring][helpcontext] */ 
enum KeypointEndConditionConstants
    {	seKeypointEndConditionNatural	= 1,
	seKeypointEndConditionPeriodic	= 2,
	seKeypointEndConditionTangent	= 3
    } 	KeypointEndConditionConstants;

typedef /* [helpstring][helpcontext] */ 
enum PartGlobalConstants
    {	sePartGlobalDensity	= 1,
	sePartGlobalAccuracyForDensity	= 2,
	sePartGlobalMaterial	= 3,
	sePartGlobalCombMaximumDensity	= 4,
	sePartGlobalCombMaximumMagnitude	= 5,
	sePartGlobalPartCopyUpdateMode	= 6,
	sePartGlobalAutomaticUpdate	= 7
    } 	PartGlobalConstants;

typedef /* [helpstring][helpcontext] */ 
enum SheetMetalGlobalConstantsBendEquationType
    {	seSheetMetalGlobalBendEquationStandard	= 1,
	seSheetMetalGlobalBendEquationCustom	= 2
    } 	SheetMetalGlobalBendEquationConstants;

typedef /* [helpstring][helpcontext] */ 
enum SheetMetalGlobalConstantsFlatPatternCornerTreatmentType
    {	seSheetMetalGlobalFlatPatternCornerTreatmentChamfer	= 1,
	seSheetMetalGlobalFlatPatternCornerTreatmentNone	= 2,
	seSheetMetalGlobalFlatPatternCornerTreatmentRadius	= 3
    } 	SheetMetalGlobalFlatPatternCornerTreatmentConstants;

typedef /* [helpstring][helpcontext] */ 
enum SheetMetalGlobalConstants
    {	seSheetMetalGlobalDensity	= 1,
	seSheetMetalGlobalAccuracyForDensity	= 2,
	seSheetMetalGlobalMaterial	= 3,
	seSheetMetalGlobalMaterialThickness	= 4,
	seSheetMetalGlobalBendRadius	= 5,
	seSheetMetalGlobalReliefWidth	= 6,
	seSheetMetalGlobalReliefLength	= 7,
	seSheetMetalGlobalNeutralFactor	= 8,
	seSheetMetalGlobalBendEquationType	= 9,
	seSheetMetalGlobalBendEquationProgramId	= 10,
	seSheetMetalGlobalFlatPatternOutsideCornerTreatmentType	= 11,
	seSheetMetalGlobalFlatPatternInsideCornerTreatmentType	= 12,
	seSheetMetalGlobalFlatPatternSimplifyBSplines	= 13,
	seSheetMetalGlobalFlatPatternRemoveSystemGeneratedBendRelief	= 14,
	seSheetMetalGlobalFlatPatternOutsideCornerTreatmentValue	= 15,
	seSheetMetalGlobalFlatPatternInsideCornerTreatmentValue	= 16,
	seSheetMetalGlobalFlatPatternMinimumArcLength	= 17,
	seSheetMetalGlobalFlatPatternDeviationalTolerance	= 18,
	seSheetMetalGlobalPartCopyUpdateMode	= 19,
	seSheetMetalGlobalAutomaticUpdate	= 20
    } 	SheetMetalGlobalConstants;

typedef /* [helpstring][helpcontext] */ 
enum WeldmentGlobalConstants
    {	seWeldmentGlobalDensity	= 1,
	seWeldmentGlobalAccuracyForDensity	= 2,
	seWeldmentGlobalBeadsDensity	= 3,
	seWeldmentGlobalMaterial	= 4,
	seWeldmentGlobalBeadMaterial	= 5,
	seWeldmentGlobalAutomaticUpdate	= 6
    } 	WeldmentGlobalConstants;

typedef /* [helpstring][helpcontext] */ 
enum LayoutInPartCommandConstants
    {	LayoutInPartFileSave	= 57603,
	LayoutInPartFilePrint	= 57607,
	LayoutInPartFileSaveAll	= 40008,
	LayoutInPartFileSaveAsImage	= 58000,
	LayoutInPartFileProperties	= 10146,
	LayoutInPartEditCut	= 57635,
	LayoutInPartEditCopy	= 57634,
	LayoutInPartEditPaste	= 57637,
	LayoutInPartEditUndo	= 57643,
	LayoutInPartEditRedo	= 57644,
	LayoutInPartEditProperties	= 57645,
	LayoutInPartEditUndoAll	= 25060,
	LayoutInPartEditDelete	= 10100,
	LayoutInPartEditSelectAll	= 40023,
	LayoutInPartViewZoomArea	= 10201,
	LayoutInPartViewZoom	= 10194,
	LayoutInPartViewFit	= 10202,
	LayoutInPartViewPan	= 12041,
	LayoutInPartViewNamedViews	= 57894,
	LayoutInPartViewPerspective	= 57896,
	LayoutInPartViewRotate	= 45027,
	LayoutInPartViewSpinAbout	= 45028,
	LayoutInPartViewCommonViews	= 45029,
	LayoutInPartViewLookatFace	= 45030,
	LayoutInPartViewAlignEdge	= 45031,
	LayoutInPartViewPreviousView	= 25046,
	LayoutInPartViewShade	= 57895,
	LayoutInPartViewToolbars	= 40009,
	LayoutInPartViewRefreshWindow	= 32876,
	LayoutInPartViewSharpen	= 58100,
	LayoutInPartViewClippingOnOff	= 58105,
	LayoutInPartViewSetClippingPlanes	= 58104,
	LayoutInPartViewSketchView	= 58200,
	LayoutInPartFormatFormatView	= 40027,
	LayoutInPartFormatStyle	= 40038,
	LayoutInPartFormatWireFrame	= 58110,
	LayoutInPartFormatShaded	= 58106,
	LayoutInPartFormatVisibleandHiddenEdges	= 58108,
	LayoutInPartFormatVisibleEdges	= 58109,
	LayoutInPartFormatShadedwithVisibleEdges	= 58107,
	LayoutInPartToolsSelectTool	= 45000,
	LayoutInPartToolsSketchPoint	= 10502,
	LayoutInPartToolsPartEdgeLocate	= 40051,
	LayoutInPartToolsActivatePart	= 10519,
	LayoutInPartToolsShowLinks	= 25052,
	LayoutInPartToolsConstructionDisplay	= 45040,
	LayoutInPartToolsTextProfile	= 25058,
	LayoutInPartToolsVariables	= 40043,
	LayoutInPartToolsUpdateSketch	= 25051,
	LayoutInPartToolsShowOnly	= 25056,
	LayoutInPartToolsShowAll	= 25055,
	LayoutInPartToolsAttachDimension	= 10950,
	LayoutInPartToolsRelationshipAssistant	= 25057,
	LayoutInPartToolsMeasureDistance	= 10921,
	LayoutInPartToolsMeasureArea	= 10922,
	LayoutInPartToolsMeasureTotalLength	= 25059,
	LayoutInPartToolsAreaProperties	= 10515,
	LayoutInPartToolsAlignmentIndicator	= 11302,
	LayoutInPartToolsRelationshipHandles	= 10210,
	LayoutInPartToolsIntelliSketch	= 10507,
	LayoutInPartToolsMacro	= 40049,
	LayoutInPartToolsCustomize	= 40010,
	LayoutInPartToolsOptions	= 25034,
	LayoutInPartToolsAddInManager	= 40016,
	LayoutInPartToolsConstruction	= 57900,
	LayoutInPartToolsAutomaticallyRepositionTarget	= 11300,
	LayoutInPartToolsRepositionTarget	= 11301,
	LayoutInPartToolsSketchPointLockX	= 11303,
	LayoutInPartToolsSketchPointOnOff	= 11304,
	LayoutInPartToolsSketchPointLockY	= 11305,
	LayoutInPartWindowNewWindow	= 57648,
	LayoutInPartWindowArrangeAllWindows	= 57651,
	LayoutInPartDrawingLine	= 25010,
	LayoutInPartDrawingTangentArc	= 25016,
	LayoutInPartDrawingArcby3Points	= 25017,
	LayoutInPartDrawingArcbyCenter	= 25018,
	LayoutInPartDrawingLineArcContinuous	= 11089,
	LayoutInPartDrawingCirclebyCenter	= 25011,
	LayoutInPartDrawingCircleby3Points	= 25012,
	LayoutInPartDrawingTangentCircle	= 25013,
	LayoutInPartDrawingEllipsebyCenter	= 25015,
	LayoutInPartDrawingEllipseby3Points	= 25014,
	LayoutInPartDrawingRectangle	= 25022,
	LayoutInPartDrawingCurve	= 25021,
	LayoutInPartDrawingPoint	= 10911,
	LayoutInPartDrawingFreesketch	= 10913,
	LayoutInPartDrawingFreeform	= 10912,
	LayoutInPartDrawingHoleCircle	= 25024,
	LayoutInPartDrawingInclude	= 50011,
	LayoutInPartDrawingAxisofRevolution	= 25003,
	LayoutInPartDrawingOffset	= 50012,
	LayoutInPartDrawingSymmetricOffset	= 45050,
	LayoutInPartDimensionSmartDimension	= 10914,
	LayoutInPartDimensionDistanceBetween	= 10917,
	LayoutInPartDimensionAngleBetween	= 10918,
	LayoutInPartDimensionCoordinateDimension	= 10915,
	LayoutInPartDimensionSymmetricDiameter	= 10919,
	LayoutInPartDimensionDimensionAxis	= 10916,
	LayoutInPartTrimFillet	= 10923,
	LayoutInPartTrimChamfer	= 10924,
	LayoutInPartTrimExtendtoNext	= 10959,
	LayoutInPartTrimTrim	= 10956,
	LayoutInPartTrimTrimCorner	= 10957,
	LayoutInPartTrimMove	= 10930,
	LayoutInPartTrimRotate	= 10929,
	LayoutInPartTrimMirror	= 10931,
	LayoutInPartTrimScale	= 10933,
	LayoutInPartHelpHelp	= 57669,
	LayoutInPartHelpSolidEdgeHelp	= 57666,
	LayoutInPartHelpSolidEdgeWelcome	= 40017,
	LayoutInPartHelpWhatsNew	= 40253,
	LayoutInPartHelpHelpforAutoCADUsers	= 40250,
	LayoutInPartHelpTutorials	= 40218,
	LayoutInPartHelpProgrammingwithSolidEdge	= 40232,
	LayoutInPartHelpTipoftheDay	= 25062,
	LayoutInPartHelpSolidEdgeontheWeb	= 40500,
	LayoutInPartHelpAboutSolidEdge	= 25065,
	LayoutInPartReferencePlaneShowAllReferencePlanes	= 40228,
	LayoutInPartReferencePlaneHideAllReferencePlanes	= 40229,
	LayoutInPartPatternRectangularPattern	= 10927,
	LayoutInPartPatternCircularPattern	= 10928,
	LayoutInPart3DAnnotationLeader	= 32855,
	LayoutInPart3DAnnotationBalloon	= 32856,
	LayoutInPart3DAnnotationCallout	= 32854,
	LayoutInPart3DAnnotationSurfaceTextureSymbol	= 32857,
	LayoutInPart3DAnnotationWeldSymbol	= 32858,
	LayoutInPart3DAnnotationEdgeCondition	= 32873,
	LayoutInPart3DAnnotationFeatureControlFrame	= 33102,
	LayoutInPart3DAnnotationDatumFrame	= 33103,
	LayoutInPart3DAnnotationDatumTarget	= 33104,
	LayoutInPartRelationshipsConnect	= 10940,
	LayoutInPartRelationshipsHorizontalVertical	= 10941,
	LayoutInPartRelationshipsParallelRelationship	= 10939,
	LayoutInPartRelationshipsPerpendicular	= 10942,
	LayoutInPartRelationshipsTangent	= 10943,
	LayoutInPartRelationshipsCollinear	= 10946,
	LayoutInPartRelationshipsConcentric	= 10947,
	LayoutInPartRelationshipsSymmetricRelationship	= 10945,
	LayoutInPartRelationshipsEqual	= 10944,
	LayoutInPartRelationshipsSetSymmetryAxis	= 10949
    } 	LayoutInPartCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum PartCommandConstants
    {	PartFileNew	= 57600,
	PartFileOpen	= 57601,
	PartFileSave	= 57603,
	PartFileClose	= 57602,
	PartFilePrint	= 57607,
	PartFileSend	= 40002,
	PartFileRoutingSlip	= 40003,
	PartFileSaveAs	= 57604,
	PartFileSaveAll	= 40008,
	PartFileSaveAsImage	= 58000,
	PartFileProperties	= 40001,
	PartFileExit	= 57665,
	PartFileCloseandReturn	= 40013,
	PartFileSaveCopy	= 57611,
	PartFileRevert	= 40011,
	PartEditCut	= 57635,
	PartEditCopy	= 57634,
	PartEditPaste	= 57637,
	PartEditUndo	= 57643,
	PartEditRedo	= 57644,
	PartEditDelete	= 40212,
	PartEditBinder	= 33090,
	PartFormatFormatView	= 40215,
	PartFormatPartPainter	= 40314,
	PartFormatStyle	= 25030,
	PartFormatWireFrame	= 58110,
	PartFormatShaded	= 58106,
	PartFormatVisibleandHiddenEdges	= 58108,
	PartFormatVisibleEdges	= 58109,
	PartFormatShadedwithVisibleEdges	= 58107,
	PartToolsSelectTool	= 45000,
	PartToolsUpdateRelationships	= 40235,
	PartToolsToDoList	= 25055,
	PartToolsEdgeBar	= 32899,
	PartToolsConstruction	= 45039,
	PartToolsConstructionDisplay	= 45040,
	PartToolsAutomaticUpdate	= 40238,
	PartToolsUpdateAllLinks	= 40236,
	PartToolsMeasureDistance	= 25070,
	PartToolsMeasureMinimumDistance	= 40276,
	PartToolsMeasureAngle	= 25071,
	PartToolsInquireElement	= 25072,
	PartToolsPhysicalProperties	= 25038,
	PartToolsVariables	= 25036,
	PartToolsAttachProperties	= 40271,
	PartToolsPropertyTables	= 40272,
	PartToolsQueryProperties	= 40273,
	PartToolsShowProperties	= 40274,
	PartToolsMacro	= 25040,
	PartToolsCustomize	= 40010,
	PartToolsOptions	= 25042,
	PartToolsAddInManager	= 40016,
	PartToolsInterPartManager	= 40277,
	PartToolsColorManager	= 40313,
	PartToolsMeasureNormalDistance	= 32881,
	PartToolsSimplifyFlatToolbar	= 45069,
	PartToolsAssemblySelectTool	= 32900,
	PartToolsPropertyManager	= 50005,
	PartViewZoomArea	= 25049,
	PartViewZoom	= 32820,
	PartViewFit	= 32821,
	PartViewPan	= 32818,
	PartViewNamedViews	= 25053,
	PartViewPerspective	= 32823,
	PartViewShade	= 32824,
	PartViewToolbars	= 40009,
	PartViewRefreshWindow	= 32876,
	PartViewRotate	= 45027,
	PartViewSpinAbout	= 45028,
	PartViewCommonViews	= 45029,
	PartViewLookatFace	= 45030,
	PartViewAlignEdge	= 45031,
	PartViewPreviousView	= 25046,
	PartViewSharpen	= 58100,
	PartViewClipping	= 58105,
	PartViewSetClippingPlanes	= 58104,
	PartViewBackView	= 45079,
	PartViewBottomView	= 33110,
	PartViewDimetricView	= 45078,
	PartViewFrontView	= 32811,
	PartViewISOView	= 32810,
	PartViewLeftView	= 33109,
	PartViewRightView	= 32812,
	PartViewTopView	= 32813,
	SheetMetalViewTrimetricView	= 45077,
	PartViewRotatePositiveY	= 32815,
	PartViewRotateNegativeY	= 32826,
	PartViewRotatePositiveX	= 32814,
	PartViewRotateNegativeX	= 32825,
	PartViewRotatePositiveZ	= 32816,
	PartViewRotateNegativeZ	= 32827,
	PartWindowNewWindow	= 57648,
	PartWindowArrange	= 40004,
	PartHelpHelp	= 57669,
	PartHelpSolidEdgeHelp	= 57666,
	PartHelpSolidEdgeWelcome	= 40017,
	PartHelpWhatsNew	= 40253,
	PartHelpHelpforAutoCADUsers	= 40250,
	PartHelpTutorials	= 40218,
	PartHelpProgrammingwithSolidEdge	= 40232,
	PartHelpTipoftheDay	= 25062,
	PartHelpSolidEdgeontheWeb	= 40500,
	PartHelpAboutSolidEdge	= 25065,
	PartFeatureCutout	= 45001,
	PartFeatureRevolvedCutout	= 45017,
	PartFeatureProtrusion	= 45002,
	PartFeatureHole	= 45003,
	PartFeatureRevolvedProtrusion	= 45018,
	PartFeatureRib	= 45005,
	PartFeatureThinWall	= 45006,
	PartFeatureAddDraft	= 45007,
	PartFeatureRound	= 45008,
	PartFeatureChamfer	= 45009,
	PartFeatureSweptProtrusion	= 45019,
	PartFeatureSweptCutout	= 45021,
	PartFeatureLoftedProtrusion	= 45022,
	PartFeatureLoftedCutout	= 45023,
	PartFeatureHelicalProtrusion	= 45032,
	PartFeatureHelicalCutout	= 45033,
	PartFeatureThread	= 45034,
	PartFeatureLip	= 45045,
	PartFeatureReplaceFace	= 45046,
	PartFeatureWebNetwork	= 45047,
	PartFeatureDividePart	= 40263,
	PartFeatureThicken	= 45051,
	PartFeatureThinRegion	= 45053,
	PartFeatureNormalProtrusion	= 58103,
	PartFeatureNormalCutout	= 58102,
	PartPatternPattern	= 45010,
	PartPatternMirrorCopyFeature	= 40243,
	PartPatternMirrorCopyPart	= 45050,
	PartReferencePlaneCoincidentPlane	= 58111,
	PartReferencePlaneParallelPlane	= 45013,
	PartReferencePlaneAngledPlane	= 45014,
	PartReferencePlanePerpendicularPlane	= 45015,
	PartReferencePlanePlaneNormaltoCurve	= 45020,
	PartReferencePlaneShowAllReferencePlanes	= 40228,
	PartReferencePlaneHideAllReferencePlanes	= 40229,
	PartReferencePlaneShowAllReferenceAxes	= 40224,
	PartReferencePlaneHideAllReferenceAxes	= 40225,
	PartReferencePlaneCoordinateSystem	= 25061,
	PartReferencePlanePlaneby3Points	= 45058,
	PartReferencePlaneCoincidentPlanebyAxis	= 45012,
	PartSwitchEnvironmentsSwitchtofromPart	= 45024,
	PartSketchSketch	= 45026,
	PartSketchShowAllSketches	= 40251,
	PartSketchHideAllSketches	= 40252,
	PartConstructionExtrudedSurface	= 45036,
	PartConstructionRevolvedSurface	= 45037,
	PartConstructionSweptSurface	= 45041,
	PartConstructionLoftedSurface	= 45042,
	PartConstructionOffsetSurface	= 45038,
	PartConstructionStitchSurface	= 45055,
	PartConstructionIntersectionCurve	= 45035,
	PartConstructionIntersectionPoint	= 45043,
	PartConstructionProjectCurve	= 45044,
	PartConstructionKeypointCurve	= 45049,
	PartConstructionShowAllSurfaces	= 40257,
	PartConstructionHideAllSurfaces	= 40259,
	PartConstructionShowAllCurves	= 40258,
	PartConstructionHideAllCurves	= 40260,
	PartConstructionPartCopy	= 40254,
	PartConstructionBooleanFeature	= 45052,
	PartConstructionCurvebyTable	= 45067,
	PartConstructionContourCurve	= 45068,
	PartConstructionDropParents	= 40547,
	PartConstructionMakeBaseFeature	= 40549,
	PartConstructionBoundedSurface	= 45074,
	PartConstructionExtendSurface	= 45072,
	PartConstructionTrimSurface	= 45073,
	PartConstructionDerivedCurve	= 45075,
	PartConstructionCopySurface	= 45076,
	PartConstructionSplitCurve	= 40301,
	PartConstructionShowNonStitchedEdges	= 40302,
	PartSimplifyFeaturesDeleteFaces	= 58010,
	PartModelDesign	= 45064,
	PartModelSimplify	= 45065,
	PartConstructionInterPartCopy	= 40267,
	PartConstructionMirrorCopyGeometry	= 45050,
	PartEnvironmentsExit	= 10231
    } 	PartCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum ProfileCommandConstants
    {	ProfileFileSaveAsImage	= 58000,
	ProfileFilePrint	= 57607,
	ProfileFileProperties	= 10146,
	ProfileEditCut	= 57635,
	ProfileEditCopy	= 57634,
	ProfileEditPaste	= 57637,
	ProfileEditUndo	= 57643,
	ProfileEditRedo	= 57644,
	ProfileEditProperties	= 57645,
	ProfileEditUndoAll	= 25060,
	ProfileEditDelete	= 10100,
	ProfileEditSelectAll	= 40023,
	ProfileViewZoomArea	= 10201,
	ProfileViewZoom	= 10194,
	ProfileViewFit	= 10202,
	ProfileViewPan	= 12041,
	ProfileViewNamedViews	= 57894,
	ProfileViewPerspective	= 57896,
	ProfileViewRotate	= 45027,
	ProfileViewSpinAbout	= 45028,
	ProfileViewCommonViews	= 45029,
	ProfileViewLookatFace	= 45030,
	ProfileViewAlignEdge	= 45031,
	ProfileViewPreviousView	= 25046,
	ProfileViewShade	= 57895,
	ProfileViewToolbars	= 40009,
	ProfileViewRefreshWindow	= 32876,
	ProfileFormatFormatView	= 40027,
	ProfileFormatStyle	= 40038,
	ProfileToolsSelectTool	= 45000,
	ProfileToolsSketchPoint	= 10502,
	ProfileToolsPartEdgeLocate	= 40051,
	ProfileToolsActivatePart	= 10519,
	ProfileToolsShowLinks	= 25052,
	ProfileToolsConstructionDisplay	= 45040,
	ProfileToolsTextProfile	= 25058,
	ProfileToolsVariables	= 40043,
	ProfileToolsUpdateSketch	= 25051,
	ProfileToolsShowOnly	= 25056,
	ProfileToolsShowAll	= 25055,
	ProfileToolsAttachDimension	= 10950,
	ProfileToolsRelationshipAssistant	= 25057,
	ProfileToolsMeasureDistance	= 10921,
	ProfileToolsMeasureArea	= 10922,
	ProfileToolsMeasureTotalLength	= 25059,
	ProfileToolsAreaProperties	= 10515,
	ProfileToolsAlignmentIndicator	= 11302,
	ProfileToolsRelationshipHandles	= 10210,
	ProfileToolsIntelliSketch	= 10507,
	ProfileToolsMacro	= 40049,
	ProfileToolsCustomize	= 40010,
	ProfileToolsOptions	= 25034,
	ProfileToolsAddInManager	= 40016,
	ProfileToolsConstruction	= 57900,
	ProfileToolsAutomaticallyRepositionTarget	= 11300,
	ProfileToolsRepositionTarget	= 11301,
	ProfileToolsSketchPointLockX	= 11303,
	ProfileToolsSketchPointOnOff	= 11304,
	ProfileToolsSketchPointLockY	= 11305,
	ProfileWindowNewWindow	= 57648,
	ProfileWindowArrangeAllWindows	= 57651,
	ProfileDrawingLine	= 25010,
	ProfileDrawingTangentArc	= 25016,
	ProfileDrawingArcby3Points	= 25017,
	ProfileDrawingArcbyCenter	= 25018,
	ProfileDrawingLineArcContinuous	= 11089,
	ProfileDrawingCirclebyCenter	= 25011,
	ProfileDrawingCircleby3Points	= 25012,
	ProfileDrawingTangentCircle	= 25013,
	ProfileDrawingEllipsebyCenter	= 25015,
	ProfileDrawingEllipseby3Points	= 25014,
	ProfileDrawingRectangle	= 25022,
	ProfileDrawingCurve	= 25021,
	ProfileDrawingPoint	= 10911,
	ProfileDrawingFreesketch	= 10913,
	ProfileDrawingFreeform	= 10912,
	ProfileDrawingHoleCircle	= 25024,
	ProfileDrawingInclude	= 50011,
	ProfileDrawingAxisofRevolution	= 25003,
	ProfileDrawingOffset	= 50012,
	ProfileDrawingSymmetricOffset	= 45050,
	ProfileDimensionSmartDimension	= 10914,
	ProfileDimensionDistanceBetween	= 10917,
	ProfileDimensionAngleBetween	= 10918,
	ProfileDimensionCoordinateDimension	= 10915,
	ProfileDimensionSymmetricDiameter	= 10919,
	ProfileDimensionDimensionAxis	= 10916,
	ProfileTrimFillet	= 10923,
	ProfileTrimChamfer	= 10924,
	ProfileTrimExtendtoNext	= 10959,
	ProfileTrimTrim	= 10956,
	ProfileTrimTrimCorner	= 10957,
	ProfileTrimMove	= 10930,
	ProfileTrimRotate	= 10929,
	ProfileTrimMirror	= 10931,
	ProfileTrimScale	= 10933,
	ProfileHelpHelp	= 57669,
	ProfileHelpSolidEdgeHelp	= 57666,
	ProfileHelpSolidEdgeWelcome	= 40017,
	ProfileHelpWhatsNew	= 40253,
	ProfileHelpHelpforAutoCADUsers	= 40250,
	ProfileHelpTutorials	= 40218,
	ProfileHelpProgrammingwithSolidEdge	= 40232,
	ProfileHelpTipoftheDay	= 25062,
	ProfileHelpSolidEdgeontheWeb	= 40500,
	ProfileHelpAboutSolidEdge	= 25065,
	ProfileReferencePlaneShowAllReferencePlanes	= 40228,
	ProfileReferencePlaneHideAllReferencePlanes	= 40229,
	ProfilePatternRectangularPattern	= 10927,
	ProfilePatternCircularPattern	= 10928,
	Profile3DAnnotationLeader	= 32855,
	Profile3DAnnotationBalloon	= 32856,
	Profile3DAnnotationCallout	= 32854,
	Profile3DAnnotationSurfaceTextureSymbol	= 32857,
	Profile3DAnnotationWeldSymbol	= 32858,
	Profile3DAnnotationEdgeCondition	= 32873,
	Profile3DAnnotationFeatureControlFrame	= 33102,
	Profile3DAnnotationDatumFrame	= 33103,
	Profile3DAnnotationDatumTarget	= 33104,
	ProfileRelationshipsConnect	= 10940,
	ProfileRelationshipsHorizontalVertical	= 10941,
	ProfileRelationshipsParallelRelationship	= 10939,
	ProfileRelationshipsPerpendicular	= 10942,
	ProfileRelationshipsTangent	= 10943,
	ProfileRelationshipsCollinear	= 10946,
	ProfileRelationshipsConcentric	= 10947,
	ProfileRelationshipsSymmetricRelationship	= 10945,
	ProfileRelationshipsEqual	= 10944,
	ProfileRelationshipsSetSymmetryAxis	= 10949
    } 	ProfileCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum ProfileHoleCommandConstants
    {	ProfileHoleFileSaveAsImage	= 58000,
	ProfileHoleFilePrint	= 57607,
	ProfileHoleFileProperties	= 10146,
	ProfileHoleEditCut	= 57635,
	ProfileHoleEditCopy	= 57634,
	ProfileHoleEditPaste	= 57637,
	ProfileHoleEditUndo	= 57643,
	ProfileHoleEditRedo	= 57644,
	ProfileHoleEditProperties	= 57645,
	ProfileHoleEditUndoAll	= 25060,
	ProfileHoleEditDelete	= 10100,
	ProfileHoleEditSelectAll	= 40023,
	ProfileHoleViewZoomArea	= 10201,
	ProfileHoleViewZoom	= 10194,
	ProfileHoleViewFit	= 10202,
	ProfileHoleViewPan	= 12041,
	ProfileHoleViewNamedViews	= 57894,
	ProfileHoleViewPerspective	= 57896,
	ProfileHoleViewRotate	= 45027,
	ProfileHoleViewSpinAbout	= 45028,
	ProfileHoleViewCommonViews	= 45029,
	ProfileHoleViewLookatFace	= 45030,
	ProfileHoleViewAlignEdge	= 45031,
	ProfileHoleViewPreviousView	= 25046,
	ProfileHoleViewShade	= 57895,
	ProfileHoleViewToolbars	= 40009,
	ProfileHoleViewRefreshWindow	= 32876,
	ProfileHoleFormatFormatView	= 40027,
	ProfileHoleFormatStyle	= 40038,
	ProfileHoleToolsSelectTool	= 45000,
	ProfileHoleToolsSketchPoint	= 10502,
	ProfileHoleToolsPartEdgeLocate	= 40051,
	ProfileHoleToolsActivatePart	= 10519,
	ProfileHoleToolsShowLinks	= 25052,
	ProfileHoleToolsConstructionDisplay	= 45040,
	ProfileHoleToolsTextProfile	= 25058,
	ProfileHoleToolsVariables	= 40043,
	ProfileHoleToolsUpdateSketch	= 25051,
	ProfileHoleToolsShowOnly	= 25056,
	ProfileHoleToolsShowAll	= 25055,
	ProfileHoleToolsAttachDimension	= 10950,
	ProfileHoleToolsRelationshipAssistant	= 25057,
	ProfileHoleToolsMeasureDistance	= 10921,
	ProfileHoleToolsMeasureArea	= 10922,
	ProfileHoleToolsMeasureTotalLength	= 25059,
	ProfileHoleToolsAreaProperties	= 10515,
	ProfileHoleToolsAlignmentIndicator	= 11302,
	ProfileHoleToolsRelationshipHandles	= 10210,
	ProfileHoleToolsIntelliSketch	= 10507,
	ProfileHoleToolsMacro	= 40049,
	ProfileHoleToolsCustomize	= 40010,
	ProfileHoleToolsOptions	= 25034,
	ProfileHoleToolsAddInManager	= 40016,
	ProfileHoleToolsConstruction	= 57900,
	ProfileHoleToolsAutomaticallyRepositionTarget	= 11300,
	ProfileHoleToolsRepositionTarget	= 11301,
	ProfileHoleToolsSketchPointLockX	= 11303,
	ProfileHoleToolsSketchPointOnOff	= 11304,
	ProfileHoleToolsSketchPointLockY	= 11305,
	ProfileHoleWindowNewWindow	= 57648,
	ProfileHoleWindowArrangeAllWindows	= 57651,
	ProfileHoleDrawingLine	= 25010,
	ProfileHoleDrawingTangentArc	= 25016,
	ProfileHoleDrawingArcby3Points	= 25017,
	ProfileHoleDrawingArcbyCenter	= 25018,
	ProfileHoleDrawingLineArcContinuous	= 11089,
	ProfileHoleDrawingCirclebyCenter	= 25011,
	ProfileHoleDrawingCircleby3Points	= 25012,
	ProfileHoleDrawingTangentCircle	= 25013,
	ProfileHoleDrawingEllipsebyCenter	= 25015,
	ProfileHoleDrawingEllipseby3Points	= 25014,
	ProfileHoleDrawingRectangle	= 25022,
	ProfileHoleDrawingCurve	= 25021,
	ProfileHoleDrawingPoint	= 10911,
	ProfileHoleDrawingFreesketch	= 10913,
	ProfileHoleDrawingFreeform	= 10912,
	ProfileHoleDrawingHoleCircle	= 25024,
	ProfileHoleDrawingInclude	= 50011,
	ProfileHoleDrawingAxisofRevolution	= 25003,
	ProfileHoleDrawingOffset	= 50012,
	ProfileHoleDrawingSymmetricOffset	= 45050,
	ProfileHoleDimensionSmartDimension	= 10914,
	ProfileHoleDimensionDistanceBetween	= 10917,
	ProfileHoleDimensionAngleBetween	= 10918,
	ProfileHoleDimensionCoordinateDimension	= 10915,
	ProfileHoleDimensionSymmetricDiameter	= 10919,
	ProfileHoleDimensionDimensionAxis	= 10916,
	ProfileHoleTrimFillet	= 10923,
	ProfileHoleTrimChamfer	= 10924,
	ProfileHoleTrimExtendtoNext	= 10959,
	ProfileHoleTrimTrim	= 10956,
	ProfileHoleTrimTrimCorner	= 10957,
	ProfileHoleTrimMove	= 10930,
	ProfileHoleTrimRotate	= 10929,
	ProfileHoleTrimMirror	= 10931,
	ProfileHoleTrimScale	= 10933,
	ProfileHoleHelpHelp	= 57669,
	ProfileHoleHelpSolidEdgeHelp	= 57666,
	ProfileHoleHelpSolidEdgeWelcome	= 40017,
	ProfileHoleHelpWhatsNew	= 40253,
	ProfileHoleHelpHelpforAutoCADUsers	= 40250,
	ProfileHoleHelpTutorials	= 40218,
	ProfileHoleHelpProgrammingwithSolidEdge	= 40232,
	ProfileHoleHelpTipoftheDay	= 25062,
	ProfileHoleHelpSolidEdgeontheWeb	= 40500,
	ProfileHoleHelpAboutSolidEdge	= 25065,
	ProfileHoleReferencePlaneShowAllReferencePlanes	= 40228,
	ProfileHoleReferencePlaneHideAllReferencePlanes	= 40229,
	ProfileHolePatternRectangularPattern	= 10927,
	ProfileHolePatternCircularPattern	= 10928,
	ProfileHole3DAnnotationLeader	= 32855,
	ProfileHole3DAnnotationBalloon	= 32856,
	ProfileHole3DAnnotationCallout	= 32854,
	ProfileHole3DAnnotationSurfaceTextureSymbol	= 32857,
	ProfileHole3DAnnotationWeldSymbol	= 32858,
	ProfileHole3DAnnotationEdgeCondition	= 32873,
	ProfileHole3DAnnotationFeatureControlFrame	= 33102,
	ProfileHole3DAnnotationDatumFrame	= 33103,
	ProfileHole3DAnnotationDatumTarget	= 33104,
	ProfileHoleRelationshipsConnect	= 10940,
	ProfileHoleRelationshipsHorizontalVertical	= 10941,
	ProfileHoleRelationshipsParallelRelationship	= 10939,
	ProfileHoleRelationshipsPerpendicular	= 10942,
	ProfileHoleRelationshipsTangent	= 10943,
	ProfileHoleRelationshipsCollinear	= 10946,
	ProfileHoleRelationshipsConcentric	= 10947,
	ProfileHoleRelationshipsSymmetricRelationship	= 10945,
	ProfileHoleRelationshipsEqual	= 10944,
	ProfileHoleRelationshipsSetSymmetryAxis	= 10949
    } 	ProfileHoleCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum ProfilePatternCommandConstants
    {	ProfilePatternFileSaveAsImage	= 58000,
	ProfilePatternFilePrint	= 57607,
	ProfilePatternFileProperties	= 10146,
	ProfilePatternEditCut	= 57635,
	ProfilePatternEditCopy	= 57634,
	ProfilePatternEditPaste	= 57637,
	ProfilePatternEditUndo	= 57643,
	ProfilePatternEditRedo	= 57644,
	ProfilePatternEditProperties	= 57645,
	ProfilePatternEditUndoAll	= 25060,
	ProfilePatternEditDelete	= 10100,
	ProfilePatternEditSelectAll	= 40023,
	ProfilePatternViewZoomArea	= 10201,
	ProfilePatternViewZoom	= 10194,
	ProfilePatternViewFit	= 10202,
	ProfilePatternViewPan	= 12041,
	ProfilePatternViewNamedViews	= 57894,
	ProfilePatternViewPerspective	= 57896,
	ProfilePatternViewRotate	= 45027,
	ProfilePatternViewSpinAbout	= 45028,
	ProfilePatternViewCommonViews	= 45029,
	ProfilePatternViewLookatFace	= 45030,
	ProfilePatternViewAlignEdge	= 45031,
	ProfilePatternViewPreviousView	= 25046,
	ProfilePatternViewShade	= 57895,
	ProfilePatternViewToolbars	= 40009,
	ProfilePatternViewRefreshWindow	= 32876,
	ProfilePatternFormatFormatView	= 40027,
	ProfilePatternFormatStyle	= 40038,
	ProfilePatternToolsSelectTool	= 45000,
	ProfilePatternToolsSketchPoint	= 10502,
	ProfilePatternToolsPartEdgeLocate	= 40051,
	ProfilePatternToolsActivatePart	= 10519,
	ProfilePatternToolsShowLinks	= 25052,
	ProfilePatternToolsConstructionDisplay	= 45040,
	ProfilePatternToolsTextProfile	= 25058,
	ProfilePatternToolsVariables	= 40043,
	ProfilePatternToolsUpdateSketch	= 25051,
	ProfilePatternToolsShowOnly	= 25056,
	ProfilePatternToolsShowAll	= 25055,
	ProfilePatternToolsAttachDimension	= 10950,
	ProfilePatternToolsRelationshipAssistant	= 25057,
	ProfilePatternToolsMeasureDistance	= 10921,
	ProfilePatternToolsMeasureArea	= 10922,
	ProfilePatternToolsMeasureTotalLength	= 25059,
	ProfilePatternToolsAreaProperties	= 10515,
	ProfilePatternToolsAlignmentIndicator	= 11302,
	ProfilePatternToolsRelationshipHandles	= 10210,
	ProfilePatternToolsIntelliSketch	= 10507,
	ProfilePatternToolsMacro	= 40049,
	ProfilePatternToolsCustomize	= 40010,
	ProfilePatternToolsOptions	= 25034,
	ProfilePatternToolsAddInManager	= 40016,
	ProfilePatternToolsConstruction	= 57900,
	ProfilePatternToolsAutomaticallyRepositionTarget	= 11300,
	ProfilePatternToolsRepositionTarget	= 11301,
	ProfilePatternToolsSketchPointLockX	= 11303,
	ProfilePatternToolsSketchPointOnOff	= 11304,
	ProfilePatternToolsSketchPointLockY	= 11305,
	ProfilePatternWindowNewWindow	= 57648,
	ProfilePatternWindowArrangeAllWindows	= 57651,
	ProfilePatternDrawingLine	= 25010,
	ProfilePatternDrawingTangentArc	= 25016,
	ProfilePatternDrawingArcby3Points	= 25017,
	ProfilePatternDrawingArcbyCenter	= 25018,
	ProfilePatternDrawingLineArcContinuous	= 11089,
	ProfilePatternDrawingCirclebyCenter	= 25011,
	ProfilePatternDrawingCircleby3Points	= 25012,
	ProfilePatternDrawingTangentCircle	= 25013,
	ProfilePatternDrawingEllipsebyCenter	= 25015,
	ProfilePatternDrawingEllipseby3Points	= 25014,
	ProfilePatternDrawingRectangle	= 25022,
	ProfilePatternDrawingCurve	= 25021,
	ProfilePatternDrawingPoint	= 10911,
	ProfilePatternDrawingFreesketch	= 10913,
	ProfilePatternDrawingFreeform	= 10912,
	ProfilePatternDrawingHoleCircle	= 25024,
	ProfilePatternDrawingInclude	= 50011,
	ProfilePatternDrawingAxisofRevolution	= 25003,
	ProfilePatternDrawingOffset	= 50012,
	ProfilePatternDrawingSymmetricOffset	= 45050,
	ProfilePatternDimensionSmartDimension	= 10914,
	ProfilePatternDimensionDistanceBetween	= 10917,
	ProfilePatternDimensionAngleBetween	= 10918,
	ProfilePatternDimensionCoordinateDimension	= 10915,
	ProfilePatternDimensionSymmetricDiameter	= 10919,
	ProfilePatternDimensionDimensionAxis	= 10916,
	ProfilePatternTrimFillet	= 10923,
	ProfilePatternTrimChamfer	= 10924,
	ProfilePatternTrimExtendtoNext	= 10959,
	ProfilePatternTrimTrim	= 10956,
	ProfilePatternTrimTrimCorner	= 10957,
	ProfilePatternTrimMove	= 10930,
	ProfilePatternTrimRotate	= 10929,
	ProfilePatternTrimMirror	= 10931,
	ProfilePatternTrimScale	= 10933,
	ProfilePatternHelpHelp	= 57669,
	ProfilePatternHelpSolidEdgeHelp	= 57666,
	ProfilePatternHelpSolidEdgeWelcome	= 40017,
	ProfilePatternHelpWhatsNew	= 40253,
	ProfilePatternHelpHelpforAutoCADUsers	= 40250,
	ProfilePatternHelpTutorials	= 40218,
	ProfilePatternHelpProgrammingwithSolidEdge	= 40232,
	ProfilePatternHelpTipoftheDay	= 25062,
	ProfilePatternHelpSolidEdgeontheWeb	= 40500,
	ProfilePatternHelpAboutSolidEdge	= 25065,
	ProfilePatternReferencePlaneShowAllReferencePlanes	= 40228,
	ProfilePatternReferencePlaneHideAllReferencePlanes	= 40229,
	ProfilePatternPatternRectangularPattern	= 10927,
	ProfilePatternPatternCircularPattern	= 10928,
	ProfilePattern3DAnnotationLeader	= 32855,
	ProfilePattern3DAnnotationBalloon	= 32856,
	ProfilePattern3DAnnotationCallout	= 32854,
	ProfilePattern3DAnnotationSurfaceTextureSymbol	= 32857,
	ProfilePattern3DAnnotationWeldSymbol	= 32858,
	ProfilePattern3DAnnotationEdgeCondition	= 32873,
	ProfilePattern3DAnnotationFeatureControlFrame	= 33102,
	ProfilePattern3DAnnotationDatumFrame	= 33103,
	ProfilePattern3DAnnotationDatumTarget	= 33104,
	ProfilePatternRelationshipsConnect	= 10940,
	ProfilePatternRelationshipsHorizontalVertical	= 10941,
	ProfilePatternRelationshipsParallelRelationship	= 10939,
	ProfilePatternRelationshipsPerpendicular	= 10942,
	ProfilePatternRelationshipsTangent	= 10943,
	ProfilePatternRelationshipsCollinear	= 10946,
	ProfilePatternRelationshipsConcentric	= 10947,
	ProfilePatternRelationshipsSymmetricRelationship	= 10945,
	ProfilePatternRelationshipsEqual	= 10944,
	ProfilePatternRelationshipsSetSymmetryAxis	= 10949
    } 	ProfilePatternCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum ProfileRevolvedCommandConstants
    {	ProfileRevolvedFileSaveAsImage	= 58000,
	ProfileRevolvedFilePrint	= 57607,
	ProfileRevolvedFileProperties	= 10146,
	ProfileRevolvedEditCut	= 57635,
	ProfileRevolvedEditCopy	= 57634,
	ProfileRevolvedEditPaste	= 57637,
	ProfileRevolvedEditUndo	= 57643,
	ProfileRevolvedEditRedo	= 57644,
	ProfileRevolvedEditProperties	= 57645,
	ProfileRevolvedEditUndoAll	= 25060,
	ProfileRevolvedEditDelete	= 10100,
	ProfileRevolvedEditSelectAll	= 40023,
	ProfileRevolvedViewZoomArea	= 10201,
	ProfileRevolvedViewZoom	= 10194,
	ProfileRevolvedViewFit	= 10202,
	ProfileRevolvedViewPan	= 12041,
	ProfileRevolvedViewNamedViews	= 57894,
	ProfileRevolvedViewPerspective	= 57896,
	ProfileRevolvedViewRotate	= 45027,
	ProfileRevolvedViewSpinAbout	= 45028,
	ProfileRevolvedViewCommonViews	= 45029,
	ProfileRevolvedViewLookatFace	= 45030,
	ProfileRevolvedViewAlignEdge	= 45031,
	ProfileRevolvedViewPreviousView	= 25046,
	ProfileRevolvedViewShade	= 57895,
	ProfileRevolvedViewToolbars	= 40009,
	ProfileRevolvedViewRefreshWindow	= 32876,
	ProfileRevolvedFormatFormatView	= 40027,
	ProfileRevolvedFormatStyle	= 40038,
	ProfileRevolvedToolsSelectTool	= 45000,
	ProfileRevolvedToolsSketchPoint	= 10502,
	ProfileRevolvedToolsPartEdgeLocate	= 40051,
	ProfileRevolvedToolsActivatePart	= 10519,
	ProfileRevolvedToolsShowLinks	= 25052,
	ProfileRevolvedToolsConstructionDisplay	= 45040,
	ProfileRevolvedToolsTextProfile	= 25058,
	ProfileRevolvedToolsVariables	= 40043,
	ProfileRevolvedToolsUpdateSketch	= 25051,
	ProfileRevolvedToolsShowOnly	= 25056,
	ProfileRevolvedToolsShowAll	= 25055,
	ProfileRevolvedToolsAttachDimension	= 10950,
	ProfileRevolvedToolsRelationshipAssistant	= 25057,
	ProfileRevolvedToolsMeasureDistance	= 10921,
	ProfileRevolvedToolsMeasureArea	= 10922,
	ProfileRevolvedToolsMeasureTotalLength	= 25059,
	ProfileRevolvedToolsAreaProperties	= 10515,
	ProfileRevolvedToolsAlignmentIndicator	= 11302,
	ProfileRevolvedToolsRelationshipHandles	= 10210,
	ProfileRevolvedToolsIntelliSketch	= 10507,
	ProfileRevolvedToolsMacro	= 40049,
	ProfileRevolvedToolsCustomize	= 40010,
	ProfileRevolvedToolsOptions	= 25034,
	ProfileRevolvedToolsAddInManager	= 40016,
	ProfileRevolvedToolsConstruction	= 57900,
	ProfileRevolvedToolsAutomaticallyRepositionTarget	= 11300,
	ProfileRevolvedToolsRepositionTarget	= 11301,
	ProfileRevolvedToolsSketchPointLockX	= 11303,
	ProfileRevolvedToolsSketchPointOnOff	= 11304,
	ProfileRevolvedToolsSketchPointLockY	= 11305,
	LayoutInPartToolsColorManager	= 40313,
	ProfileRevolvedWindowNewWindow	= 57648,
	ProfileRevolvedWindowArrangeAllWindows	= 57651,
	ProfileRevolvedDrawingLine	= 25010,
	ProfileRevolvedDrawingTangentArc	= 25016,
	ProfileRevolvedDrawingArcby3Points	= 25017,
	ProfileRevolvedDrawingArcbyCenter	= 25018,
	ProfileRevolvedDrawingLineArcContinuous	= 11089,
	ProfileRevolvedDrawingCirclebyCenter	= 25011,
	ProfileRevolvedDrawingCircleby3Points	= 25012,
	ProfileRevolvedDrawingTangentCircle	= 25013,
	ProfileRevolvedDrawingEllipsebyCenter	= 25015,
	ProfileRevolvedDrawingEllipseby3Points	= 25014,
	ProfileRevolvedDrawingRectangle	= 25022,
	ProfileRevolvedDrawingCurve	= 25021,
	ProfileRevolvedDrawingPoint	= 10911,
	ProfileRevolvedDrawingFreesketch	= 10913,
	ProfileRevolvedDrawingFreeform	= 10912,
	ProfileRevolvedDrawingHoleCircle	= 25024,
	ProfileRevolvedDrawingInclude	= 50011,
	ProfileRevolvedDrawingAxisofRevolution	= 25003,
	ProfileRevolvedDrawingOffset	= 50012,
	ProfileRevolvedDrawingSymmetricOffset	= 45050,
	ProfileRevolvedDimensionSmartDimension	= 10914,
	ProfileRevolvedDimensionDistanceBetween	= 10917,
	ProfileRevolvedDimensionAngleBetween	= 10918,
	ProfileRevolvedDimensionCoordinateDimension	= 10915,
	ProfileRevolvedDimensionSymmetricDiameter	= 10919,
	ProfileRevolvedDimensionDimensionAxis	= 10916,
	ProfileRevolvedTrimFillet	= 10923,
	ProfileRevolvedTrimChamfer	= 10924,
	ProfileRevolvedTrimExtendtoNext	= 10959,
	ProfileRevolvedTrimTrim	= 10956,
	ProfileRevolvedTrimTrimCorner	= 10957,
	ProfileRevolvedTrimMove	= 10930,
	ProfileRevolvedTrimRotate	= 10929,
	ProfileRevolvedTrimMirror	= 10931,
	ProfileRevolvedTrimScale	= 10933,
	ProfileRevolvedHelpHelp	= 57669,
	ProfileRevolvedHelpSolidEdgeHelp	= 57666,
	ProfileRevolvedHelpSolidEdgeWelcome	= 40017,
	ProfileRevolvedHelpWhatsNew	= 40253,
	ProfileRevolvedHelpHelpforAutoCADUsers	= 40250,
	ProfileRevolvedHelpTutorials	= 40218,
	ProfileRevolvedHelpProgrammingwithSolidEdge	= 40232,
	ProfileRevolvedHelpTipoftheDay	= 25062,
	ProfileRevolvedHelpSolidEdgeontheWeb	= 40500,
	ProfileRevolvedHelpAboutSolidEdge	= 25065,
	ProfileRevolvedReferencePlaneShowAllReferencePlanes	= 40228,
	ProfileRevolvedReferencePlaneHideAllReferencePlanes	= 40229,
	ProfileRevolvedPatternRectangularPattern	= 10927,
	ProfileRevolvedPatternCircularPattern	= 10928,
	ProfileRevolved3DAnnotationLeader	= 32855,
	ProfileRevolved3DAnnotationBalloon	= 32856,
	ProfileRevolved3DAnnotationCallout	= 32854,
	ProfileRevolved3DAnnotationSurfaceTextureSymbol	= 32857,
	ProfileRevolved3DAnnotationWeldSymbol	= 32858,
	ProfileRevolved3DAnnotationEdgeCondition	= 32873,
	ProfileRevolved3DAnnotationFeatureControlFrame	= 33102,
	ProfileRevolved3DAnnotationDatumFrame	= 33103,
	ProfileRevolved3DAnnotationDatumTarget	= 33104,
	ProfileRevolvedRelationshipsConnect	= 10940,
	ProfileRevolvedRelationshipsHorizontalVertical	= 10941,
	ProfileRevolvedRelationshipsParallelRelationship	= 10939,
	ProfileRevolvedRelationshipsPerpendicular	= 10942,
	ProfileRevolvedRelationshipsTangent	= 10943,
	ProfileRevolvedRelationshipsCollinear	= 10946,
	ProfileRevolvedRelationshipsConcentric	= 10947,
	ProfileRevolvedRelationshipsSymmetricRelationship	= 10945,
	ProfileRevolvedRelationshipsEqual	= 10944,
	LayoutInPartRelationshipsLock	= 10948,
	ProfileRevolvedRelationshipsSetSymmetryAxis	= 10949
    } 	ProfileRevolvedCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum SheetMetalCommandConstants
    {	SheetMetalFileNew	= 57600,
	SheetMetalFileOpen	= 57601,
	SheetMetalFileSave	= 57603,
	SheetMetalFileClose	= 57602,
	SheetMetalFilePrint	= 57607,
	SheetMetalFileSend	= 40002,
	SheetMetalFileRoutingSlip	= 40003,
	SheetMetalFileSaveAs	= 57604,
	SheetMetalFileSaveAll	= 40008,
	SheetMetalFileSaveAsImage	= 58000,
	SheetMetalFileProperties	= 40001,
	SheetMetalFileExit	= 57665,
	SheetMetalFileCloseandReturn	= 40013,
	SheetMetalFileSaveCopy	= 57611,
	SheetMetalFileRevert	= 40011,
	SheetMetalEditCut	= 57635,
	SheetMetalEditCopy	= 57634,
	SheetMetalEditPaste	= 57637,
	SheetMetalEditUndo	= 57643,
	SheetMetalEditRedo	= 57644,
	SheetMetalEditDelete	= 40212,
	SheetMetalEditBinder	= 33090,
	SheetMetalFormatFormatView	= 40215,
	SheetMetalFormatPartPainter	= 40314,
	SheetMetalFormatStyle	= 25030,
	SheetMetalFormatWireFrame	= 58110,
	SheetMetalFormatShaded	= 58106,
	SheetMetalFormatVisibleandHiddenEdges	= 58108,
	SheetMetalFormatVisibleEdges	= 58109,
	SheetMetalFormatShadedwithVisibleEdges	= 58107,
	SheetMetalToolsSelectTool	= 45000,
	SheetMetalToolsUpdateRelationships	= 40235,
	SheetMetalToolsToDoList	= 25055,
	SheetMetalToolsEdgeBar	= 32899,
	SheetMetalToolsConstruction	= 45039,
	SheetMetalToolsConstructionDisplay	= 45040,
	SheetMetalToolsAutomaticUpdate	= 40238,
	SheetMetalToolsUpdateAllLinks	= 40236,
	SheetMetalToolsMeasureDistance	= 25070,
	SheetMetalToolsMeasureMinimumDistance	= 40276,
	SheetMetalToolsMeasureAngle	= 25071,
	SheetMetalToolsInquireElement	= 25072,
	SheetMetalToolsPhysicalProperties	= 25038,
	SheetMetalToolsVariables	= 25036,
	SheetMetalToolsAttachProperties	= 40271,
	SheetMetalToolsPropertyTables	= 40272,
	SheetMetalToolsQueryProperties	= 40273,
	SheetMetalToolsShowProperties	= 40274,
	SheetMetalToolsMacro	= 25040,
	SheetMetalToolsCustomize	= 40010,
	SheetMetalToolsOptions	= 25042,
	SheetMetalToolsAddInManager	= 40016,
	SheetMetalToolsInterPartManager	= 40277,
	SheetMetalViewZoomArea	= 25049,
	SheetMetalViewZoom	= 32820,
	SheetMetalViewFit	= 32821,
	SheetMetalViewPan	= 32818,
	SheetMetalViewNamedViews	= 25053,
	SheetMetalViewPerspective	= 32823,
	SheetMetalViewShade	= 32824,
	SheetMetalViewToolbars	= 40009,
	SheetMetalViewRefreshWindow	= 32876,
	SheetMetalViewRotate	= 45027,
	SheetMetalViewSpinAbout	= 45028,
	SheetMetalViewCommonViews	= 45029,
	SheetMetalViewLookatFace	= 45030,
	SheetMetalViewAlignEdge	= 45031,
	SheetMetalViewPreviousView	= 25046,
	SheetMetalViewSharpen	= 58100,
	SheetMetalViewClipping	= 58105,
	SheetMetalViewSetClippingPlanes	= 58104,
	SheetMetalViewBackView	= 45079,
	SheetMetalViewBottomView	= 33110,
	SheetMetalViewDimetricView	= 45078,
	SheetMetalViewFrontView	= 32811,
	SheetMetalViewISOView	= 32810,
	SheetMetalViewLeftView	= 33109,
	SheetMetalViewRightView	= 32812,
	SheetMetalViewTopView	= 32813,
	PartViewTrimetricView	= 45077,
	SheetMetalViewRotatePositiveY	= 32815,
	SheetMetalViewRotateNegativeY	= 32826,
	SheetMetalViewRotatePositiveX	= 32814,
	SheetMetalViewRotateNegativeX	= 32825,
	SheetMetalViewRotatePositiveZ	= 32816,
	SheetMetalViewRotateNegativeZ	= 32827,
	SheetMetalWindowNewWindow	= 57648,
	SheetMetalWindowArrange	= 40004,
	SheetMetalHelpHelp	= 57669,
	SheetMetalHelpSolidEdgeHelp	= 57666,
	SheetMetalHelpSolidEdgeWelcome	= 40017,
	SheetMetalHelpWhatsNew	= 40253,
	SheetMetalHelpHelpforAutoCADUsers	= 40250,
	SheetMetalHelpTutorials	= 40218,
	SheetMetalHelpProgrammingwithSolidEdge	= 40232,
	SheetMetalHelpTipoftheDay	= 25062,
	SheetMetalHelpSolidEdgeontheWeb	= 40500,
	SheetMetalHelpAboutSolidEdge	= 25065,
	SheetMetalSheetMetalFeaturesTab	= 57700,
	SheetMetalSheetMetalFeaturesFlange	= 57701,
	SheetMetalSheetMetalFeaturesContourFlange	= 57702,
	SheetMetalSheetMetalFeaturesHole	= 45003,
	SheetMetalSheetMetalFeaturesCutout	= 45001,
	SheetMetalSheetMetalFeaturesNormalCutout	= 45048,
	SheetMetalSheetMetalFeaturesBreakCorner	= 57710,
	SheetMetalSheetMetalFeaturesUnbend	= 57724,
	SheetMetalSheetMetalFeaturesRebend	= 57725,
	SheetMetalSheetMetalFeaturesBend	= 57729,
	SheetMetalSheetMetalFeaturesJog	= 57731,
	SheetMetalSheetMetalFeaturesLouver	= 57730,
	SheetMetalSheetMetalFeaturesDimple	= 57706,
	SheetMetalSheetMetalFeaturesCloseCorner	= 57711,
	SheetMetalSheetMetalFeaturesLoftedFlange	= 57708,
	SheetMetalSheetMetalFeaturesDrawnCutout	= 57703,
	SheetMetalSheetMetalFeaturesBead	= 57734,
	SheetMetalSheetMetalFeaturesSaveAsFlat	= 33091,
	SheetMetalSheetMetalFeaturesFlatten	= 45063,
	SheetMetalPatternPattern	= 45010,
	SheetMetalPatternMirrorCopyFeature	= 40243,
	SheetMetalPatternMirrorCopyPart	= 45050,
	SheetMetalReferencePlaneCoincidentPlane	= 58111,
	SheetMetalReferencePlaneParallelPlane	= 45013,
	SheetMetalReferencePlaneAngledPlane	= 45014,
	SheetMetalReferencePlanePerpendicularPlane	= 45015,
	SheetMetalReferencePlanePlaneNormaltoCurve	= 45020,
	SheetMetalReferencePlaneShowAllReferencePlanes	= 40228,
	SheetMetalReferencePlaneHideAllReferencePlanes	= 40229,
	SheetMetalReferencePlaneShowAllReferenceAxes	= 40224,
	SheetMetalReferencePlaneHideAllReferenceAxes	= 40225,
	SheetMetalReferencePlaneCoordinateSystem	= 25061,
	SheetMetalReferencePlanePlaneby3Points	= 45058,
	SheetMetalReferencePlaneCoincidentPlanebyAxis	= 45012,
	SheetMetalSwitchEnvironmentsSwitchtofromPart	= 45024,
	SheetMetalSketchSketch	= 45026,
	SheetMetalSketchShowAllSketches	= 40251,
	SheetMetalSketchHideAllSketches	= 40252,
	SheetMetalConstructionExtrudedSurface	= 45036,
	SheetMetalConstructionRevolvedSurface	= 45037,
	SheetMetalConstructionSweptSurface	= 45041,
	SheetMetalConstructionLoftedSurface	= 45042,
	SheetMetalConstructionOffsetSurface	= 45038,
	SheetMetalConstructionStitchSurface	= 45055,
	SheetMetalConstructionIntersectionCurve	= 45035,
	SheetMetalConstructionIntersectionPoint	= 45043,
	SheetMetalConstructionProjectCurve	= 45044,
	SheetMetalConstructionKeypointCurve	= 45070,
	SheetMetalConstructionContourCurve	= 45049,
	SheetMetalConstructionShowAllSurfaces	= 40257,
	SheetMetalConstructionHideAllSurfaces	= 40259,
	SheetMetalConstructionShowAllCurves	= 40258,
	SheetMetalConstructionHideAllCurves	= 40260,
	SheetMetalConstructionPartCopy	= 40254,
	SheetMetalConstructionBooleanFeature	= 45052,
	SheetMetalConstructionCurvebyTable	= 45067,
	SheetMetalConstructionDropParents	= 40547,
	SheetMetalConstructionMakeBaseFeature	= 40549,
	SheetMetalConstructionBoundedSurface	= 45074,
	SheetMetalConstructionExtendSurface	= 45072,
	SheetMetalConstructionTrimSurface	= 45073,
	SheetMetalConstructionDerivedCurve	= 45075,
	SheetMetalConstructionCopySurface	= 45076,
	SheetMetalConstructionSplitCurve	= 40301,
	SheetMetalConstructionShowNonStitchedEdges	= 40302,
	SheetMetalSimplifyFeaturesDeleteFaces	= 58010,
	SheetMetalModelDesign	= 45064,
	SheetMetalModelFlatPattern	= 45066,
	SheetMetalModelSimplify	= 45065,
	SheetMetalConstructionInterPartCopy	= 40267,
	SheetMetalConstructionMirrorCopyGeometry	= 45050,
	SheetMetalConstructionMidSurface	= 45067,
	SheetMetalRipEdge	= 45177,
	SheetMetalConvToSM	= 45178
    } 	SheetMetalCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum SimplifyCommandConstants
    {	SimplifyFilePrint	= 57607,
	SimplifyEditCut	= 57635,
	SimplifyEditCopy	= 57634,
	SimplifyEditPaste	= 57637,
	SimplifyEditUndo	= 57643,
	SimplifyEditRedo	= 57644,
	SimplifyEditDelete	= 40212,
	SimplifyFormatFormatView	= 40215,
	SimplifyFormatStyle	= 25030,
	SimplifyToolsSelectTool	= 45000,
	SimplifyToolsUpdateRelationships	= 40235,
	SimplifyToolsToDoList	= 25055,
	SimplifyToolsEdgeBar	= 32899,
	SimplifyToolsConstructionDisplay	= 45040,
	SimplifyToolsAutomaticUpdate	= 40238,
	SimplifyToolsUpdateAllLinks	= 40236,
	SimplifyToolsMeasureDistance	= 25070,
	SimplifyToolsMeasureMinimumDistance	= 40276,
	SimplifyToolsMeasureAngle	= 25071,
	SimplifyToolsInquireElement	= 25072,
	SimplifyToolsVariables	= 25036,
	SimplifyToolsMacro	= 25040,
	SimplifyToolsCustomize	= 40010,
	SimplifyToolsOptions	= 25042,
	SimplifyToolsAddInManager	= 40016,
	SimplifyViewZoomArea	= 25049,
	SimplifyViewZoom	= 32820,
	SimplifyViewFit	= 32821,
	SimplifyViewPan	= 32818,
	SimplifyViewNamedViews	= 25053,
	SimplifyViewPerspective	= 32823,
	SimplifyViewShade	= 32824,
	SimplifyViewToolbars	= 40009,
	SimplifyViewRefreshWindow	= 32876,
	SimplifyViewRotate	= 45027,
	SimplifyViewSpinAbout	= 45028,
	SimplifyViewCommonViews	= 45029,
	SimplifyViewLookatFace	= 45030,
	SimplifyViewAlignEdge	= 45031,
	SimplifyViewPreviousView	= 25046,
	SimplifyViewBottomView	= 33110,
	SimplifyViewFrontView	= 32811,
	SimplifyViewISOView	= 32810,
	SimplifyViewLeftView	= 33109,
	SimplifyViewRightView	= 32812,
	SimplifyViewTopView	= 32813,
	SimplifyViewRotatePositiveY	= 32815,
	SimplifyViewRotateNegativeY	= 32826,
	SimplifyViewRotatePositiveX	= 32814,
	SimplifyViewRotateNegativeX	= 32825,
	SimplifyViewRotatePositiveZ	= 32816,
	SimplifyViewRotateNegativeZ	= 32827,
	SimplifyWindowNewWindow	= 57648,
	SimplifyWindowArrange	= 40004,
	SimplifyHelpHelp	= 57669,
	SimplifyHelpSolidEdgeHelp	= 57666,
	SimplifyHelpSolidEdgeWelcome	= 40017,
	SimplifyHelpWhatsNew	= 40253,
	SimplifyHelpHelpforAutoCADUsers	= 40250,
	SimplifyHelpTutorials	= 40218,
	SimplifyHelpProgrammingwithSolidEdge	= 40232,
	SimplifyHelpTipoftheDay	= 25062,
	SimplifyHelpSolidEdgeontheWeb	= 40500,
	SimplifyHelpAboutSolidEdge	= 25065,
	SimplifySimplifyFeaturesProtrusion	= 45002,
	SimplifySimplifyFeaturesRevolvedProtrusion	= 45018,
	SimplifySimplifyFeaturesCutout	= 45001,
	SimplifySimplifyFeaturesRevolvedCutout	= 45017,
	SimplifySimplifyFeaturesDeleteFace	= 65054,
	SimplifySimplifyFeaturesDeleteRegion	= 65059,
	SimplifyReferencePlaneCoincidentPlane	= 58111,
	SimplifyReferencePlaneCoincidentPlanebyAxis	= 45012,
	SimplifyReferencePlaneParallelPlane	= 45013,
	SimplifyReferencePlaneAngledPlane	= 45014,
	SimplifyReferencePlanePerpendicularPlane	= 45015,
	SimplifyReferencePlanePlaneNormaltoCurve	= 45020,
	SimplifyReferencePlaneShowAllReferencePlanes	= 40228,
	SimplifyReferencePlaneHideAllReferencePlanes	= 40229,
	SimplifyReferencePlaneShowAllReferenceAxes	= 40224,
	SimplifyReferencePlaneHideAllReferenceAxes	= 40225,
	SimplifyReferencePlaneCoordinateSystem	= 25061,
	SimplifyReferencePlanePlaneby3Points	= 45058
    } 	SimplifyCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum WeldmentCommandConstants
    {	WeldmentFileNew	= 57600,
	WeldmentFileOpen	= 57601,
	WeldmentFileSave	= 57603,
	WeldmentFileClose	= 57602,
	WeldmentFilePrint	= 57607,
	WeldmentFileSend	= 40002,
	WeldmentFileRoutingSlip	= 40003,
	WeldmentFileSaveAs	= 57604,
	WeldmentFileSaveAll	= 40008,
	WeldmentFileSaveAsImage	= 58000,
	WeldmentFileProperties	= 40001,
	WeldmentEditCut	= 57635,
	WeldmentEditCopy	= 57634,
	WeldmentEditPaste	= 57637,
	WeldmentEditUndo	= 57643,
	WeldmentEditRedo	= 57644,
	WeldmentEditDelete	= 40212,
	WeldmentEditBinder	= 33090,
	WeldmentFormatFormatView	= 40215,
	WeldmentFormatPartPainter	= 40314,
	WeldmentFormatStyle	= 25030,
	WeldmentFormatWireFrame	= 58110,
	WeldmentFormatShaded	= 58106,
	WeldmentFormatVisibleandHiddenEdges	= 58108,
	WeldmentFormatVisibleEdges	= 58109,
	WeldmentFormatShadedwithVisibleEdges	= 58107,
	WeldmentToolsSelectTool	= 45000,
	WeldmentToolsUpdateRelationships	= 40235,
	WeldmentToolsToDoList	= 25055,
	WeldmentToolsEdgeBar	= 32899,
	WeldmentToolsConstruction	= 45039,
	WeldmentToolsConstructionDisplay	= 45040,
	WeldmentToolsAutomaticUpdate	= 40238,
	WeldmentToolsUpdateAllLinks	= 40236,
	WeldmentToolsMeasureDistance	= 25070,
	WeldmentToolsMeasureMinimumDistance	= 40276,
	WeldmentToolsMeasureAngle	= 25071,
	WeldmentToolsInquireElement	= 25072,
	WeldmentToolsPhysicalProperties	= 25038,
	WeldmentToolsVariables	= 25036,
	WeldmentToolsAttachProperties	= 40271,
	WeldmentToolsPropertyTables	= 40272,
	WeldmentToolsQueryProperties	= 40273,
	WeldmentToolsShowProperties	= 40274,
	WeldmentToolsMacro	= 25040,
	WeldmentToolsCustomize	= 40010,
	WeldmentToolsOptions	= 25042,
	WeldmentToolsAddInManager	= 40016,
	WeldmentToolsInterPartManager	= 40277,
	WeldmentToolsColorManager	= 40313,
	WeldmentToolsMeasureNormalDistance	= 32881,
	WeldmentToolsPropertyManager	= 50005,
	WeldmentViewZoomArea	= 25049,
	WeldmentViewZoom	= 32820,
	WeldmentViewFit	= 32821,
	WeldmentViewPan	= 32818,
	WeldmentViewNamedViews	= 25053,
	WeldmentViewPerspective	= 32823,
	WeldmentViewShade	= 32824,
	WeldmentViewToolbars	= 40009,
	WeldmentViewRefreshWindow	= 32876,
	WeldmentViewRotate	= 45027,
	WeldmentViewSpinAbout	= 45028,
	WeldmentViewCommonViews	= 45029,
	WeldmentViewLookatFace	= 45030,
	WeldmentViewAlignEdge	= 45031,
	WeldmentViewPreviousView	= 25046,
	WeldmentViewSharpen	= 58100,
	WeldmentViewClipping	= 58105,
	WeldmentViewSetClippingPlanes	= 58104,
	WeldmentViewBackView	= 45079,
	WeldmentViewBottomView	= 33110,
	WeldmentViewDimetricView	= 45078,
	WeldmentViewFrontView	= 32811,
	WeldmentViewISOView	= 32810,
	WeldmentViewLeftView	= 33109,
	WeldmentViewRightView	= 32812,
	WeldmentViewTopView	= 32813,
	WeldmentViewTrimetricView	= 45077,
	WeldmentViewRotatePositiveY	= 32815,
	WeldmentViewRotateNegativeY	= 32826,
	WeldmentViewRotatePositiveX	= 32814,
	WeldmentViewRotateNegativeX	= 32825,
	WeldmentViewRotatePositiveZ	= 32816,
	WeldmentViewRotateNegativeZ	= 32827,
	WeldmentWindowNewWindow	= 57648,
	WeldmentWindowArrange	= 40004,
	WeldmentHelpHelp	= 57669,
	WeldmentHelpSolidEdgeHelp	= 57666,
	WeldmentHelpSolidEdgeWelcome	= 40017,
	WeldmentHelpWhatsNew	= 40253,
	WeldmentHelpHelpforAutoCADUsers	= 40250,
	WeldmentHelpTutorials	= 40218,
	WeldmentHelpProgrammingwithSolidEdge	= 40232,
	WeldmentHelpTipoftheDay	= 25062,
	WeldmentHelpSolidEdgeontheWeb	= 40500,
	WeldmentHelpAboutSolidEdge	= 25065,
	WeldmentWeldmentFeaturesFilletWeld	= 57655,
	WeldmentWeldmentFeaturesCutout	= 45060,
	WeldmentWeldmentFeaturesRevolvedCutout	= 45062,
	WeldmentWeldmentFeaturesProtrusion	= 45002,
	WeldmentWeldmentFeaturesHole	= 45061,
	WeldmentWeldmentFeaturesRevolvedProtrusion	= 45018,
	WeldmentWeldmentFeaturesRound	= 45008,
	WeldmentWeldmentFeaturesChamfer	= 45009,
	WeldmentWeldmentFeaturesSweptProtrusion	= 45019,
	WeldmentWeldmentFeaturesLabelWeld	= 57658,
	WeldmentWeldmentFeaturesSaveSelectedModel	= 57657,
	WeldmentWeldmentFeaturesPattern	= 45010,
	WeldmentWeldmentFeaturesMirrorCopyFeature	= 40243,
	WeldmentWeldmentFeaturesWeldment	= 40280,
	WeldmentWeldmentFeaturesStitchWeld	= 57660,
	WeldmentPatternPattern	= 45010,
	WeldmentPatternMirrorCopyFeature	= 40243,
	WeldmentReferencePlaneCoincidentPlane	= 58111,
	WeldmentReferencePlaneParallelPlane	= 45013,
	WeldmentReferencePlaneAngledPlane	= 45014,
	WeldmentReferencePlanePerpendicularPlane	= 45015,
	WeldmentReferencePlanePlaneNormaltoCurve	= 45020,
	WeldmentReferencePlaneShowAllReferencePlanes	= 40228,
	WeldmentReferencePlaneHideAllReferencePlanes	= 40229,
	WeldmentReferencePlaneShowAllReferenceAxes	= 40224,
	WeldmentReferencePlaneHideAllReferenceAxes	= 40225,
	WeldmentReferencePlaneCoordinateSystem	= 25061,
	WeldmentReferencePlanePlaneby3Points	= 45058,
	WeldmentReferencePlaneCoincidentPlanebyAxis	= 45012,
	WeldmentSketchSketch	= 45026,
	WeldmentSketchShowAllSketches	= 40251,
	WeldmentSketchHideAllSketches	= 40252,
	WeldmentConstructionShowAllSurfaces	= 40257,
	WeldmentConstructionHideAllSurfaces	= 40259,
	WeldmentConstructionShowAllCurves	= 40258,
	WeldmentConstructionHideAllCurves	= 40260,
	WeldmentConstructionInterPartCopy	= 40267
    } 	WeldmentCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum HoleTypeToDeleteConstants
    {	seHoleTypeToDeleteFeaturesOnly	= 0,
	seHoleTypeToDeleteCylindersAndConesOnly	= 1,
	seHoleTypeToDeleteAll	= 2
    } 	HoleTypeToDeleteConstants;

typedef /* [helpstring][helpcontext] */ 
enum WeldmentSectionTypeConstants
    {	seWeldmentSectionTypeComponent	= 0,
	seWeldmentSectionTypeSurfacePrep	= 1,
	seWeldmentSectionTypeBead	= 2,
	seWeldmentSectionTypeMachining	= 3
    } 	WeldmentSectionTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum FilletWeldSetbackConstants
    {	seFilletWeldEqualSetback	= 0,
	seFilletWeldUnequalSetback	= 1,
	seFilletWeldThickness	= 2
    } 	FilletWeldSetbackConstants;

typedef /* [helpstring][helpcontext] */ 
enum ParasolidVersionConstants
    {	seParasolidCurrentVersion	= 0,
	seParasolidVersion70	= 70,
	seParasolidVersion71	= 71,
	seParasolidVersion80	= 80,
	seParasolidVersion90	= 90,
	seParasolidVersion91	= 91,
	seParasolidVersion100	= 100,
	seParasolidVersion101	= 101,
	seParasolidVersion110	= 110,
	seParasolidVersion111	= 111,
	seParasolidVersion120	= 120,
	seParasolidVersion121	= 121,
	seParasolidVersion130	= 130
    } 	ParasolidVersionConstants;

typedef /* [helpstring][helpcontext] */ 
enum SaveBodyConstants
    {	seSaveBodyAsPartDocument	= 0,
	seSaveBodyAsSheetMetalDocument	= 1,
	seSaveBodyAsParasolidText	= 2,
	seSaveBodyAsParasolidBinary	= 3
    } 	SaveBodyConstants;

typedef /* [helpstring][helpcontext] */ 
enum PartBaseStylesConstants
    {	sePartBaseStyle	= 0,
	seConstructionBaseStyle	= 1,
	seThreadedCylindersBaseStyle	= 2
    } 	PartBaseStylesConstants;

typedef /* [helpstring][helpcontext] */ 
enum FlangeFeatureConstants
    {	seFlangeBendOnlyCornerRelief	= 1,
	seFlangeBendAndFaceCornerRelief	= 2,
	seFlangeBendAndFaceChainRelief	= 3,
	seFlangeMaterialInside	= 4,
	seFlangeMaterialOutside	= 5,
	seFlangeBendOutside	= 6,
	seFlangeBendReliefSquare	= 7,
	seFlangeBendReliefRound	= 8,
	seFlangeBendReliefNone	= 9,
	seFlangeCornerReliefNone	= 10
    } 	FlangeFeatureConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyWeldmentOccurrencesOptionsConstants
    {	seIncludeAllOccurrences	= 1,
	seIncludeInputOccurrences	= 2,
	seExcludeInputOccurrences	= 3
    } 	AssemblyWeldmentOccurrencesOptionsConstants;

typedef /* [helpstring][helpcontext] */ 
enum WeldmentLinkStatusConstants
    {	seLinkOK	= 1,
	seLinkOutOfDate	= 2,
	seLinkBroken	= 3
    } 	WeldmentLinkStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum StitchWeldType
    {	seStitchOnly	= 1,
	seStitchPlusOffsets	= 2,
	seOffsetsOnly	= 3
    } 	StitchWeldType;

typedef /* [helpstring][helpcontext] */ 
enum StitchWeldAnnotationFormat
    {	seLengthPitch	= 1,
	seNXL	= 2,
	seNXL_E	= 3
    } 	StitchWeldAnnotationFormat;

typedef /* [helpstring][helpcontext] */ 
enum DerivedCurveTypeConstants
    {	igDCComposite	= 1,
	igDCCurve	= 2
    } 	DerivedCurveTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum TrimSurfaceAreaSideConstants
    {	igTSLeft	= 1,
	igTSRight	= 2
    } 	TrimSurfaceAreaSideConstants;

typedef /* [helpstring][helpcontext] */ 
enum ExtendSurfaceExtentTypeConstants
    {	igESNatural	= 1,
	igESLinear	= 2,
	igESLinearTangentContinuous	= 3,
	igESLinearCurvatureContinuous	= 4,
	igESReflective	= 5
    } 	ExtendSurfaceExtentTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum CopySurfaceInternalBoundaryConstants
    {	igCopySurfaceRemoveInternalBoundaries	= 1,
	igCopySurfaceCopyInternalBoundaries	= 2
    } 	CopySurfaceInternalBoundaryConstants;

typedef /* [helpstring][helpcontext] */ 
enum CopySurfaceExternalBoundaryConstants
    {	igCopySurfaceRemoveExternalBoundaries	= 1,
	igCopySurfaceCopyExternalBoundaries	= 2
    } 	CopySurfaceExternalBoundaryConstants;

typedef /* [helpstring][helpcontext] */ 
enum DeleteFaceConstants
    {	igDeleteFaceApplyHeal	= 1,
	igDeleteFaceApplyNoHeal	= 2
    } 	DeleteFaceConstants;

typedef /* [helpstring][helpcontext] */ 
enum SurfaceByBoundaryConstants
    {	igSurfaceByBoundaryPreferPlanar	= 1,
	igSurfaceByBoundaryTangent	= 2
    } 	SurfaceByBoundaryConstants;

typedef /* [helpstring][helpcontext] */ 
enum BlendShapeConstants
    {	igBlendShapeConstantRadius	= 1,
	igBlendShapeConstantWidth	= 2,
	igBlendShapeChamfer	= 3,
	igBlendShapeRatioChamfer	= 4,
	igBlendShapeConic	= 5,
	igBlendShapeG2Continuous	= 6
    } 	BlendShapeConstants;

typedef /* [helpstring][helpcontext] */ 
enum FlattenPatternModelTypeConstants
    {	igFlattenPatternModelTypeDevelopable	= 0,
	igFlattenPatternModelTypeNonDevelopable	= 1,
	igFlattenPatternModelTypeFlattenAnything	= 2
    } 	FlattenPatternModelTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum HoleDataUnitsConstants
    {	igHoleDataUnitsInches	= 0,
	igHoleDataUnitsMillimeters	= 1
    } 	HoleDataUnitsConstants;

typedef /* [helpstring][helpcontext] */ 
enum PatternTransformTypeConstants
    {	sePatternTransformLinear	= 0,
	sePatternTransformFullRotation	= 1,
	sePatternTransformProjectedRotation	= 2,
	sePatternTransformFullRotationFromSurface	= 3
    } 	PatternTransformTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum PatternTransformRotateTypeConstants
    {	sePatternTransformRotateOnCurvePosition	= 0,
	sePatternTransformRotateOnFeaturePosition	= 1
    } 	PatternTransformRotateTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum PatternCurveAnchorSideConstants
    {	sePatternCurveLeftSide	= igLeft,
	sePatternCurveRightSide	= igRight
    } 	PatternCurveAnchorSideConstants;

typedef /* [helpstring][helpcontext] */ 
enum OffsetSideConstants
    {	seOffsetNone	= igNone,
	seOffsetLeft	= igLeft,
	seOffsetRight	= igRight
    } 	OffsetSideConstants;

typedef /* [helpstring][helpcontext] */ 
enum DraftSideConstants
    {	seDraftNone	= igNone,
	seDraftInside	= igInside,
	seDraftOutside	= igOutside
    } 	DraftSideConstants;

typedef /* [helpstring][helpcontext] */ 
enum TreatmentTypeConstants
    {	seTreatmentNone	= igNone,
	seTreatmentDraft	= igTreatmentDraft,
	seTreatmentCrown	= igTreatmentCrown
    } 	TreatmentTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum TreatmentCrownTypeConstants
    {	seTreatmentCrownNone	= 0,
	seTreatmentCrownByRadius	= 1,
	seTreatmentCrownByRadiusAndTakeOffAngle	= 2,
	seTreatmentCrownByOffset	= 3,
	seTreatmentCrownByOffsetAndTakeOffAngle	= 4
    } 	TreatmentCrownTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum TreatmentCrownSideConstants
    {	seTreatmentCrownSideNone	= igNone,
	seTreatmentCrownSideInside	= igInside,
	seTreatmentCrownSideOutside	= igOutside
    } 	TreatmentCrownSideConstants;

typedef /* [helpstring][helpcontext] */ 
enum TreatmentCrownCurvatureSideConstants
    {	seTreatmentCrownCurvatureNone	= igNone,
	seTreatmentCrownCurvatureInside	= igInside,
	seTreatmentCrownCurvatureOutside	= igOutside
    } 	TreatmentCrownCurvatureSideConstants;

typedef /* [helpstring][helpcontext] */ 
enum VentExtentSideConstants
    {	seVentSketchPlaneNormalSide	= igRight,
	seVentReverseSketchPlaneNormalSide	= igLeft
    } 	VentExtentSideConstants;

typedef /* [helpstring][helpcontext] */ 
enum VentDraftSideConstants
    {	seVentDraftSideOutward	= igOutside,
	seVentDraftSideInward	= igInside
    } 	VentDraftSideConstants;

typedef /* [helpstring][helpcontext] */ 
enum VentExtentTypeConstants
    {	seVentExtentTypeThroughNext	= igToNext,
	seVentExtentTypeThroughAll	= igThroughAll,
	seVentExtentTypeFinite	= igFinite,
	seVentExtentToKeyPoint	= igToKeyPoint
    } 	VentExtentTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum PhysicalPropertiesStatusConstants
    {	sePhysicalPropertiesStatus_None	= 0,
	sePhysicalPropertiesStatus_Model	= 1,
	sePhysicalPropertiesStatus_User	= 2
    } 	PhysicalPropertiesStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum MeasureVariableTypeConstants
    {	MeasureVariableTypeConstants_Distance	= 1,
	MeasureVariableTypeConstants_MinimumDistance	= 2,
	MeasureVariableTypeConstants_NormalDistance	= 3,
	MeasureVariableTypeConstants_Angle	= 4
    } 	MeasureVariableTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum MeasureVariableValueConstants
    {	MeasureVariableValueConstants_TrueMeasure	= 1
    } 	MeasureVariableValueConstants;

typedef /* [helpstring][helpcontext] */ 
enum FaceMoveConstants
    {	igFaceMoveNone	= 0,
	igFaceMoveAlong2PointVector	= 1,
	igFaceMoveAlongFaceNormal	= 2,
	igFaceMoveAlongEdge	= 3,
	igFaceMoveInPlane	= 4,
	igFaceMoveIgnoreBlends	= 5,
	igFaceMoveRecreateBlends	= 6,
	igFaceMoveAlongVector	= 7,
	igFaceMoveReverseVector	= 8,
	igFaceMoveOffsetAlongVector	= 9,
	igFaceMoveOffsetReverseVector	= 10
    } 	FaceMoveConstants;

typedef /* [helpstring][helpcontext] */ 
enum FaceRotateConstants
    {	igFaceRotateNone	= 0,
	igFaceRotateByPoints	= 1,
	igFaceRotateByGeometry	= 2,
	igFaceRotateAxisStart	= 3,
	igFaceRotateAxisEnd	= 4,
	igFaceRotateIgnoreBlends	= 5,
	igFaceRotateRecreateBlends	= 6
    } 	FaceRotateConstants;

typedef /* [helpstring][helpcontext] */ 
enum GussetConstants
    {	igGussetNone	= 0,
	igAutomaticProfile	= 1,
	igUserDrawnProfile	= 2,
	igRoundShape	= 3,
	igSquareShape	= 4,
	igIncludeRounding	= 5,
	igPatternFit	= 6,
	igPatternFixed	= 7,
	igPatternFill	= 8
    } 	GussetConstants;

typedef /* [helpstring][helpcontext] */ 
enum PartCopyUpdateModeConstants
    {	igPartCopyUpdatePrompt	= 0,
	igPartCopyUpdateAutomatic	= 1,
	igPartCopyUpdateManual	= 2
    } 	PartCopyUpdateModeConstants;

typedef /* [helpstring][helpcontext] */ 
enum BendDirectionConstants
    {	seBendDirectionUnknown	= 0,
	seBendDirectionUp	= 1,
	seBendDirectionDown	= 2
    } 	BendDirectionConstants;

typedef /* [helpstring][helpcontext] */ 
enum HemFeatureConstants
    {	seHemTypeClosed	= 1,
	seHemTypeOpen	= 2,
	seHemTypeSFlange	= 3,
	seHemTypeCurl	= 4,
	seHemTypeOpenLoop	= 5,
	seHemTypeClosedLoop	= 6,
	seHemTypeCenteredLoop	= 7,
	seHemSideMaterialInside	= 8,
	seHemSideMaterialOutside	= 9,
	seHemBendOutside	= 10,
	seHemNoBendRelief	= 11,
	seHemRectBendRelief	= 12,
	seHemRoundBendRelief	= 13,
	seHemNoMiter	= 14,
	seHemMiterCorner	= 15
    } 	HemFeatureConstants;

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
//ASSEMBLY CONSTANTS AND ENUMS
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
typedef /* [hidden][helpstring][helpcontext] */ 
enum PartStatusConstants
    {	igPartStatusWellDefined	= 0x1,
	igPartStatusFixed	= 0x2,
	igPartStatusUnderDefined	= 0x4,
	igPartStatusOverDefined	= 0x8008,
	igPartStatusNotConsistent	= 0x8010,
	igPartStatusNotChanged	= 0x8020,
	igPartStatusNonAlgebraic	= 0x8040,
	igPartStatusUnknown	= 0x8080
    } 	PartStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum OccurrenceStatusConstants
    {	seOccurrenceStatusWellDefined	= 0x1,
	seOccurrenceStatusFixed	= 0x2,
	seOccurrenceStatusUnderDefined	= 0x4,
	seOccurrenceStatusOverDefined	= 0x8008,
	seOccurrenceStatusNotConsistent	= 0x8010,
	seOccurrenceStatusNotChanged	= 0x8020,
	seOccurrenceStatusNonAlgebraic	= 0x8040,
	seOccurrenceStatusUnknown	= 0x8080
    } 	OccurrenceStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum Relation3dStatusConstants
    {	igRelation3dStatusUnsolved	= 0,
	igRelation3dStatusSolved	= 0x1
    } 	Relation3dStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum Relation3dOrientationConstants
    {	igRelation3dOrientationNotspecified	= 0,
	igRelation3dOrientationAlign	= 0x1,
	igRelation3dOrientationAntialign	= 0x2
    } 	Relation3dOrientationConstants;

typedef /* [helpstring][helpcontext] */ 
enum Relation3dGeometryConstants
    {	igRelation3dGeometryPlane	= 0x1,
	igRelation3dGeometryLine	= 0x2,
	igRelation3dGeometryPoint	= 0x3,
	igRelation3dStartPoint	= 0x4,
	igRelation3dMidPoint	= 0x5,
	igRelation3dEndPoint	= 0x6,
	igRelation3dCenterPoint	= 0x7,
	igRelation3dPointUnknown	= 0x8,
	igRelation3dGeometrySphere	= 0x9,
	igRelation3dGeometryCone	= 0xa,
	igRelation3dGeometrySurface	= 0xb,
	igRelation3dGeometrySweepSurface	= 0xc
    } 	Relation3dGeometryConstants;

typedef /* [helpstring][helpcontext] */ 
enum InterferenceComparisonConstants
    {	seInterferenceComparisonSet1vsSet2	= 1,
	seInterferenceComparisonSet1vsAllOther	= 2,
	seInterferenceComparisonSet1vsVisible	= 3,
	seInterferenceComparisonSet1vsItself	= 4
    } 	InterferenceComparisonConstants;

typedef /* [helpstring][helpcontext] */ 
enum InterferenceReportConstants
    {	seInterferenceReportPartNames	= 1,
	seInterferenceReportPartCentersOfGravity	= 2,
	seInterferenceReportInterferenceCenterOfGravity	= 4,
	seInterferenceReportInterferenceVolume	= 8
    } 	InterferenceReportConstants;

typedef /* [helpstring][helpcontext] */ 
enum InterferenceStatusConstants
    {	seInterferenceStatusNoInterference	= 1,
	seInterferenceStatusConfirmedInterference	= 2,
	seInterferenceStatusProbableInterference	= 3,
	seInterferenceStatusConfirmedAndProbableInterference	= 4,
	seInterferenceStatusIncompleteAnalysis	= 5
    } 	InterferenceStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum LayoutStatusConstants
    {	seLayoutAddedNewLayout	= 0,
	seLayoutReturnedExistingLayout	= 0x1,
	seLayoutFailedBecauseOfExisting	= 0x2
    } 	LayoutStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyGlobalConstants
    {	seAssemblyGlobalTubeWallThickness	= 1,
	seAssemblyGlobalTubeBendRadius	= 2,
	seAssemblyGlobalTubeOuterDiameter	= 3,
	seAssemblyGlobalTubeMinimumFlatLength	= 4,
	seAssemblyGlobalTubeEndTreatmentOutsideDiameter	= 5,
	seAssemblyGlobalTubeEndTreatmentInsideDiameter	= 6,
	seAssemblyGlobalTubeEndTreatmentDepth	= 7,
	seAssemblyGlobalTubeEndTreatmentAngle	= 8,
	seAssemblyGlobalTubeEndTreatmentRadius	= 9,
	seAssemblyGlobalDefaultPartDensity	= 10,
	seAssemblyGlobalDefaultAccuracyForPartDensity	= 11,
	seAssemblyGlobalWireHarnessDefaultSlackCompensation	= 12,
	seAssemblyGlobalWireHarnessDefaultHoleClearance	= 13,
	seAssemblyGlobalWireHarnessDefaultBundleClearance	= 14,
	seAssemblyGlobalWireHarnessDefaultWireAdder	= 15,
	seAssemblyGlobalWireHarnessDefaultCableAdder	= 16,
	seAssemblyGlobalWireHarnessDefaultBundleAdder	= 17,
	seAssemblyGlobalAutomaticUpdate	= 18
    } 	AssemblyGlobalConstants;

typedef /* [helpstring][helpcontext] */ 
enum TubeSegmentAdditionStatusConstants
    {	seTubeSegmentAdditionStatusSucceeded	= 1,
	seTubeSegmentAdditionStatusFailedSplit	= 2,
	seTubeSegmentAdditionStatusFailedDisjoint	= 3,
	seTubeSegmentAdditionStatusFailedUnknownReason	= 4
    } 	TubeSegmentAdditionStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum TubeSegmentRemovalStatusConstants
    {	seTubeSegmentRemovalStatusSucceeded	= 1,
	seTubeSegmentRemovalStatusFailedNotPartOfTube	= 2,
	seTubeSegmentRemovalStatusFailedDueToDisjoint	= 3,
	seTubeSegmentRemovalStatusFailedUnknownReason	= 4
    } 	TubeSegmentRemovalStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum TubeEndTreatmentTypeConstants
    {	seTubeEndTreatmentTypeNone	= 1,
	seTubeEndTreatmentTypeExpand	= 2,
	seTubeEndTreatmentTypeFlange	= 3,
	seTubeEndTreatmentTypeClose	= 4,
	seTubeEndTreatmentTypeReduce	= 5
    } 	TubeEndTreatmentTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum SegmentRelation3dGeometryConstants
    {	seSegmentRelation3dStartPoint	= 0x1,
	seSegmentRelation3dEndPoint	= 0x2,
	seSegmentRelation3dUnbounded	= 0x3,
	seSegmentRelation3dArcCenter	= 0x4,
	seSegmentRelation3dEllipseCenter	= 0x5,
	seSegmentRelation3dLineStartPoint	= 0x6,
	seSegmentRelation3dLineEndPoint	= 0x7,
	seSegmentRelation3dRefPlane	= 0x8,
	seSegmentRelation3dArc	= 0x9
    } 	SegmentRelation3dGeometryConstants;

typedef /* [helpstring][helpcontext] */ 
enum SegmentRelation3dStatusConstants
    {	seSegmentRelation3dStatusUnsolved	= 0,
	seSegmentRelation3dStatusSolved	= 0x1
    } 	SegmentRelation3dStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum SegmentRelation3dDistanceConstants
    {	seSegmentRelation3dDistanceNormal	= 0,
	seSegmentRelation3dDistanceReverse	= 0x1,
	seSegmentRelation3dDistanceTrueLength	= 0x2
    } 	SegmentRelation3dDistanceConstants;

typedef /* [helpstring][helpcontext] */ 
enum SegmentRelation3dDirectionConstants
    {	seSegmentRelation3dDirectionParallel	= 0,
	seSegmentRelation3dDirectionPerpendicular	= 0x1,
	seSegmentRelation3dDirectionCoincident	= 0x2
    } 	SegmentRelation3dDirectionConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyCommandConstants
    {	AssemblyFileNew	= 57600,
	AssemblyFileOpen	= 57601,
	AssemblyFileSave	= 57603,
	AssemblyFileClose	= 57602,
	AssemblyFilePrint	= 33064,
	AssemblyFileSendMail	= 40002,
	AssemblyFileAddEditRoutingSlip	= 40003,
	AssemblyFileSaveAs	= 57604,
	AssemblyFileSaveAll	= 40008,
	AssemblyFileSaveAsImage	= 58000,
	AssemblyFileFileProperties	= 40001,
	AssemblyFileExit	= 57665,
	AssemblyFileCloseandReturn	= 40013,
	AssemblyFileSaveCopy	= 57611,
	AssemblyFileRevert	= 40011,
	AssemblyEditCut	= 57635,
	AssemblyEditCopy	= 57634,
	AssemblyEditPaste	= 57637,
	AssemblyEditEditProperties	= 40025,
	AssemblyEditDelete	= 40212,
	AssemblyEditOpenObject	= 57873,
	AssemblyEditActivateembeddedorlinkedobject	= 57872,
	AssemblyEditBinder	= 33090,
	AssemblyEditEditLinks	= 57857,
	AssemblyAssemblyToolsSelect	= 45000,
	AssemblyAssemblyToolsEdgeBar	= 32899,
	AssemblyAssemblyToolsDisplayConfigurations	= 32826,
	AssemblyAssemblyToolsToDoList	= 65059,
	AssemblyAssemblyToolsShow	= 33093,
	AssemblyAssemblyToolsHide	= 33094,
	AssemblyAssemblyToolsShowOnly	= 33085,
	AssemblyAssemblyToolsShowAll	= 33071,
	AssemblyAssemblyToolsHideAll	= 33072,
	AssemblyAssemblyToolsActivate	= 33091,
	AssemblyAssemblyToolsInactivate	= 33092,
	AssemblyAssemblyToolsUnloadHiddenParts	= 33086,
	AssemblyAssemblyToolsCutawayView	= 33101,
	AssemblyAssemblyToolsMultiPartCutout	= 25067,
	AssemblyAssemblyToolsUpdateRelationships	= 33067,
	AssemblyAssemblyToolsAutomaticUpdate	= 33066,
	AssemblyAssemblyToolsUpdateAllLinks	= 33068,
	AssemblyAssemblyToolsCheckInterference	= 25039,
	AssemblyAssemblyToolsAllPartsSameColor	= 33065,
	AssemblyAssemblyToolsReports	= 25043,
	AssemblyAssemblyToolsMeasureDistance	= 25070,
	AssemblyAssemblyToolsMeasureMinimumDistance	= 40276,
	AssemblyAssemblyToolsMeasureAngle	= 25071,
	AssemblyAssemblyToolsInquireElement	= 25072,
	AssemblyAssemblyToolsPhysicalProperties	= 25038,
	AssemblyAssemblyToolsVariables	= 25036,
	AssemblyAssemblyToolsMacro	= 25040,
	AssemblyAssemblyToolsCustomize	= 40010,
	AssemblyAssemblyToolsOptions	= 25042,
	AssemblyAssemblyToolsHideAllReferencePlanes	= 40018,
	AssemblyAssemblyToolsAddInManager	= 40016,
	AssemblyAssemblyToolsInterPartManager	= 40277,
	AssemblyAssemblyToolsSketch	= 33054,
	AssemblyAssemblyToolsPatternParts	= 57667,
	AssemblyViewNamedViews	= 25053,
	AssemblyViewZoomArea	= 33049,
	AssemblyViewZoom	= 32820,
	AssemblyViewFit	= 33022,
	AssemblyViewPan	= 33003,
	AssemblyViewPerspective	= 32828,
	AssemblyViewShade	= 32825,
	AssemblyViewToolbars	= 40009,
	AssemblyViewRefreshWindow	= 32876,
	AssemblyViewRotate	= 45027,
	AssemblyViewSpinAbout	= 45028,
	AssemblyViewCommonViews	= 45029,
	AssemblyViewLookatFace	= 45030,
	AssemblyViewAlignEdge	= 45031,
	AssemblyViewPreviousView	= 25046,
	AssemblyViewHidePreviousLevel	= 33061,
	AssemblyViewBottomView	= 33110,
	AssemblyViewFrontView	= 32811,
	AssemblyViewISOView	= 32810,
	AssemblyViewLeftView	= 33109,
	AssemblyViewRightView	= 32812,
	AssemblyViewTopView	= 32813,
	AssemblyViewRotatePositiveY	= 32815,
	AssemblyViewRotateNegativeY	= 32822,
	AssemblyViewRotatePositiveX	= 32814,
	AssemblyViewRotateNegativeX	= 32821,
	AssemblyViewRotatePositiveZ	= 32816,
	AssemblyViewRotateNegativeZ	= 32823,
	AssemblyViewZoomIn	= 33077,
	AssemblyViewZoomOut	= 33078,
	AssemblyFormatView	= 33056,
	AssemblyFormatFaces	= 33057,
	AssemblyFormatStyles	= 33058,
	AssemblyWindowNewWindow	= 57648,
	AssemblyWindowArrange	= 40004,
	AssemblyHelpHelp	= 57669,
	AssemblyHelpSolidEdgeHelp	= 57666,
	AssemblyHelpSolidEdgeWelcome	= 40017,
	AssemblyHelpWhatsNew	= 40253,
	AssemblyHelpHelpforAutoCADUsers	= 40250,
	AssemblyHelpTutorials	= 40218,
	AssemblyHelpProgrammingwithSolidEdge	= 40232,
	AssemblyHelpTipoftheDay	= 25062,
	AssemblyHelpSolidEdgeontheWeb	= 40500,
	AssemblyHelpAboutSolidEdge	= 25065,
	AssemblyAssemblyRelationshipsMate	= 32772,
	AssemblyAssemblyRelationshipsPlanarAlign	= 25080,
	AssemblyAssemblyRelationshipsAxialAlign	= 25081,
	AssemblyAssemblyRelationshipsInsert	= 32794,
	AssemblyAssemblyRelationshipsConnect	= 33100,
	AssemblyAssemblyRelationshipsGround	= 32774,
	AssemblyAssemblyRelationshipsMovePart	= 32807,
	AssemblyAssemblyRelationshipsReplacePart	= 32808,
	AssemblyAssemblyRelationshipsAngle	= 32777,
	AssemblyAssemblyRelationshipsTangent	= 32796,
	AssemblyAssemblyRelationshipsCaptureFit	= 65517,
	AssemblyReferencePlanesCoincidentPlane	= 45012,
	AssemblyReferencePlanesParallelPlane	= 45013,
	AssemblyReferencePlanesAngledPlane	= 45014,
	AssemblyReferencePlanesCoordinateSystem	= 25061,
	AssemblyEnvironmentsExplodedView	= 33079,
	AssemblyEnvironmentsVirtualStudio	= 33102,
	AssemblyEnvironmentsXpresRoute	= 33104,
	AssemblyEnvironmentsMotion	= 65090,
	AssemblyEnvironmentsExit	= 10231,
	AssemblyFenceSelectParts	= 10281,
	AssemblySelectAllIdenticalParts	= 10282,
	AssemblySelectAllIdenticalSubassemblyParts	= 10283,
	AssemblySelectSmallParts	= 10284,
	AssemblySelectVisibleParts	= 10285,
	AssemblySelectPartsConstrainedTo	= 10286
    } 	AssemblyCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum ExplodeCommandConstants
    {	ExplodeFilePrint	= 33064,
	ExplodeFileSaveAsImage	= 58000,
	ExplodeEditCut	= 57635,
	ExplodeEditCopy	= 57634,
	ExplodeEditPaste	= 57637,
	ExplodeEditEditProperties	= 40025,
	ExplodeEditDelete	= 40212,
	ExplodeEditOpenObject	= 57873,
	ExplodeEditActivateembeddedorlinkedobject	= 57872,
	ExplodeEditBinder	= 33090,
	ExplodeEditEditLinks	= 57857,
	ExplodeAssemblyToolsSelect	= 45000,
	ExplodeAssemblyToolsEdgeBar	= 32899,
	ExplodeAssemblyToolsDisplayConfigurations	= 32826,
	ExplodeAssemblyToolsShow	= 33093,
	ExplodeAssemblyToolsHide	= 33094,
	ExplodeAssemblyToolsShowOnly	= 33085,
	ExplodeAssemblyToolsActivate	= 33091,
	ExplodeAssemblyToolsInactivate	= 33092,
	ExplodeAssemblyToolsUnloadHiddenParts	= 33086,
	ExplodeAssemblyToolsAllPartsSameColor	= 33065,
	ExplodeAssemblyToolsReports	= 25043,
	ExplodeAssemblyToolsMacro	= 25040,
	ExplodeAssemblyToolsCustomize	= 40010,
	ExplodeAssemblyToolsOptions	= 25042,
	ExplodeAssemblyToolsAddInManager	= 40016,
	ExplodeViewNamedViews	= 25053,
	ExplodeViewZoomArea	= 33049,
	ExplodeViewZoom	= 32820,
	ExplodeViewFit	= 33022,
	ExplodeViewPan	= 33003,
	ExplodeViewPerspective	= 32828,
	ExplodeViewShade	= 32825,
	ExplodeViewToolbars	= 40009,
	ExplodeViewRefreshWindow	= 32876,
	ExplodeViewRotate	= 45027,
	ExplodeViewSpinAbout	= 45028,
	ExplodeViewCommonViews	= 45029,
	ExplodeViewLookatFace	= 45030,
	ExplodeViewAlignEdge	= 45031,
	ExplodeViewPreviousView	= 25046,
	ExplodeViewHidePreviousLevel	= 33061,
	ExplodeViewBottomView	= 33110,
	ExplodeViewFrontView	= 32811,
	ExplodeViewISOView	= 32810,
	ExplodeViewLeftView	= 33109,
	ExplodeViewRightView	= 32812,
	ExplodeViewTopView	= 32813,
	ExplodeViewRotatePositiveY	= 32815,
	ExplodeViewRotateNegativeY	= 32822,
	ExplodeViewRotatePositiveX	= 32814,
	ExplodeViewRotateNegativeX	= 32821,
	ExplodeViewRotatePositiveZ	= 32816,
	ExplodeViewRotateNegativeZ	= 32823,
	ExplodeViewZoomIn	= 33077,
	ExplodeViewZoomOut	= 33078,
	ExplodeFormatView	= 33056,
	ExplodeFormatFaces	= 33057,
	ExplodeFormatStyles	= 33058,
	ExplodeWindowNewWindow	= 57648,
	ExplodeWindowArrange	= 40004,
	ExplodeHelpHelp	= 57669,
	ExplodeHelpSolidEdgeHelp	= 57666,
	ExplodeHelpSolidEdgeWelcome	= 40017,
	ExplodeHelpWhatsNew	= 40253,
	ExplodeHelpHelpforAutoCADUsers	= 40250,
	ExplodeHelpTutorials	= 40218,
	ExplodeHelpProgrammingwithSolidEdge	= 40232,
	ExplodeHelpTipoftheDay	= 25062,
	ExplodeHelpSolidEdgeontheWeb	= 40500,
	ExplodeHelpAboutSolidEdge	= 25065,
	ExplodeExplodedViewAutomaticExplode	= 65062,
	ExplodeExplodedViewExplode	= 65064,
	ExplodeExplodedViewAdjustSpreadDistance	= 65065,
	ExplodeExplodedViewReposition	= 65066,
	ExplodeExplodedViewRemove	= 65067,
	ExplodeExplodedViewCollapse	= 65069,
	ExplodeExplodedViewAddJoggle	= 65071,
	ExplodeExplodedViewRemoveJoggle	= 65072,
	ExplodeExplodedViewUnexplode	= 65068,
	ExplodeExplodedViewBindSubassembly	= 58001,
	ExplodeExplodedViewUnbindSubassembly	= 58002,
	ExplodeExplodedViewMovePart	= 32807,
	ExplodeExplodedViewFlowLines	= 33095,
	ExplodeExplodedViewFlowLineTerminators	= 33096
    } 	ExplodeCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum LayoutCommandConstants
    {	LayoutFileSaveAsImage	= 58000,
	LayoutFilePrint	= 57607,
	LayoutFileProperties	= 10146,
	LayoutEditCut	= 57635,
	LayoutEditCopy	= 57634,
	LayoutEditPaste	= 57637,
	LayoutEditUndo	= 57643,
	LayoutEditRedo	= 57644,
	LayoutEditProperties	= 57645,
	LayoutEditUndoAll	= 25060,
	LayoutEditDelete	= 10100,
	LayoutEditSelectAll	= 40023,
	LayoutViewZoomArea	= 10201,
	LayoutViewZoom	= 10194,
	LayoutViewFit	= 10202,
	LayoutViewPan	= 12041,
	LayoutViewNamedViews	= 57894,
	LayoutViewPerspective	= 57896,
	LayoutViewRotate	= 45027,
	LayoutViewSpinAbout	= 45028,
	LayoutViewCommonViews	= 45029,
	LayoutViewLookatFace	= 45030,
	LayoutViewAlignEdge	= 45031,
	LayoutViewPreviousView	= 25046,
	LayoutViewShade	= 57895,
	LayoutViewToolbars	= 40009,
	LayoutViewRefreshWindow	= 32876,
	LayoutFormatFormatView	= 40027,
	LayoutFormatStyle	= 40038,
	LayoutToolsSelectTool	= 45000,
	LayoutToolsSketchPoint	= 10502,
	LayoutToolsPartEdgeLocate	= 40051,
	LayoutToolsActivatePart	= 10519,
	LayoutToolsShowLinks	= 25052,
	LayoutToolsConstructionDisplay	= 45040,
	LayoutToolsTextProfile	= 25058,
	LayoutToolsVariables	= 40043,
	LayoutToolsUpdateSketch	= 25051,
	LayoutToolsShowOnly	= 25056,
	LayoutToolsShowAll	= 25055,
	LayoutToolsAttachDimension	= 10950,
	LayoutToolsRelationshipAssistant	= 25057,
	LayoutToolsMeasureDistance	= 10921,
	LayoutToolsMeasureArea	= 10922,
	LayoutToolsMeasureTotalLength	= 25059,
	LayoutToolsAreaProperties	= 10515,
	LayoutToolsAlignmentIndicator	= 11302,
	LayoutToolsRelationshipHandles	= 10210,
	LayoutToolsIntelliSketch	= 10507,
	LayoutToolsMacro	= 40049,
	LayoutToolsCustomize	= 40010,
	LayoutToolsOptions	= 25034,
	LayoutToolsAddInManager	= 40016,
	LayoutToolsConstruction	= 57900,
	LayoutToolsAutomaticallyRepositionTarget	= 11300,
	LayoutToolsRepositionTarget	= 11301,
	LayoutToolsSketchPointLockX	= 11303,
	LayoutToolsSketchPointOnOff	= 11304,
	LayoutToolsSketchPointLockY	= 11305,
	LayoutWindowNewWindow	= 57648,
	LayoutWindowArrangeAllWindows	= 57651,
	LayoutDrawingLine	= 25010,
	LayoutDrawingTangentArc	= 25016,
	LayoutDrawingArcby3Points	= 25017,
	LayoutDrawingArcbyCenter	= 25018,
	LayoutDrawingLineArcContinuous	= 11089,
	LayoutDrawingCirclebyCenter	= 25011,
	LayoutDrawingCircleby3Points	= 25012,
	LayoutDrawingTangentCircle	= 25013,
	LayoutDrawingEllipsebyCenter	= 25015,
	LayoutDrawingEllipseby3Points	= 25014,
	LayoutDrawingRectangle	= 25022,
	LayoutDrawingCurve	= 25021,
	LayoutDrawingPoint	= 10911,
	LayoutDrawingFreesketch	= 10913,
	LayoutDrawingFreeform	= 10912,
	LayoutDrawingHoleCircle	= 25024,
	LayoutDrawingInclude	= 50011,
	LayoutDrawingAxisofRevolution	= 25003,
	LayoutDrawingOffset	= 50012,
	LayoutDrawingSymmetricOffset	= 45050,
	LayoutDimensionSmartDimension	= 10914,
	LayoutDimensionDistanceBetween	= 10917,
	LayoutDimensionAngleBetween	= 10918,
	LayoutDimensionCoordinateDimension	= 10915,
	LayoutDimensionSymmetricDiameter	= 10919,
	LayoutDimensionDimensionAxis	= 10916,
	LayoutTrimFillet	= 10923,
	LayoutTrimChamfer	= 10924,
	LayoutTrimExtendtoNext	= 10959,
	LayoutTrimTrim	= 10956,
	LayoutTrimTrimCorner	= 10957,
	LayoutTrimMove	= 10930,
	LayoutTrimRotate	= 10929,
	LayoutTrimMirror	= 10931,
	LayoutTrimScale	= 10933,
	LayoutHelpHelp	= 57669,
	LayoutHelpSolidEdgeHelp	= 57666,
	LayoutHelpSolidEdgeWelcome	= 40017,
	LayoutHelpWhatsNew	= 40253,
	LayoutHelpHelpforAutoCADUsers	= 40250,
	LayoutHelpTutorials	= 40218,
	LayoutHelpProgrammingwithSolidEdge	= 40232,
	LayoutHelpTipoftheDay	= 25062,
	LayoutHelpSolidEdgeontheWeb	= 40500,
	LayoutHelpAboutSolidEdge	= 25065,
	LayoutReferencePlaneShowAllReferencePlanes	= 40228,
	LayoutReferencePlaneHideAllReferencePlanes	= 40229,
	LayoutPatternRectangularPattern	= 10927,
	LayoutPatternCircularPattern	= 10928,
	Layout3DAnnotationLeader	= 32855,
	Layout3DAnnotationBalloon	= 32856,
	Layout3DAnnotationCallout	= 32854,
	Layout3DAnnotationSurfaceTextureSymbol	= 32857,
	Layout3DAnnotationWeldSymbol	= 32858,
	Layout3DAnnotationEdgeCondition	= 32873,
	Layout3DAnnotationFeatureControlFrame	= 33102,
	Layout3DAnnotationDatumFrame	= 33103,
	Layout3DAnnotationDatumTarget	= 33104,
	LayoutRelationshipsConnect	= 10940,
	LayoutRelationshipsHorizontalVertical	= 10941,
	LayoutRelationshipsParallelRelationship	= 10939,
	LayoutRelationshipsPerpendicular	= 10942,
	LayoutRelationshipsTangent	= 10943,
	LayoutRelationshipsCollinear	= 10946,
	LayoutRelationshipsConcentric	= 10947,
	LayoutRelationshipsSymmetricRelationship	= 10945,
	LayoutRelationshipsEqual	= 10944,
	LayoutRelationshipsSetSymmetryAxis	= 10949
    } 	LayoutCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum MotionCommandConstants
    {	MotionFileSave	= 57603,
	MotionFileSaveAs	= 57604,
	MotionFileSaveAsImage	= 58000,
	MotionFilePrint	= 33064,
	MotionAssemblyToolsSelect	= 45000,
	MotionAssemblyToolsEdgeBar	= 32899,
	MotionAssemblyToolsDisplayConfigurations	= 32826,
	MotionAssemblyToolsShow	= 33093,
	MotionAssemblyToolsHide	= 33094,
	MotionAssemblyToolsShowOnly	= 33085,
	MotionAssemblyToolsActivate	= 33091,
	MotionAssemblyToolsInactivate	= 33092,
	MotionAssemblyToolsUnloadHiddenParts	= 33086,
	MotionAssemblyToolsAllPartsSameColor	= 33065,
	MotionAssemblyToolsMeasureDistance	= 25070,
	MotionAssemblyToolsMeasureMinimumDistance	= 40276,
	MotionAssemblyToolsMeasureAngle	= 25071,
	MotionAssemblyToolsCheckInterference	= 25039,
	MotionAssemblyToolsInquireElement	= 25072,
	MotionAssemblyToolsPhysicalProperties	= 25038,
	MotionAssemblyToolsMacro	= 25040,
	MotionAssemblyToolsCustomize	= 40010,
	MotionAssemblyToolsOptions	= 25042,
	MotionViewNamedViews	= 25053,
	MotionViewZoomArea	= 33049,
	MotionViewZoom	= 32820,
	MotionViewFit	= 33022,
	MotionViewPan	= 33003,
	MotionViewPerspective	= 32828,
	MotionViewShade	= 32825,
	MotionViewToolbars	= 40009,
	MotionViewRefreshWindow	= 32876,
	MotionViewRotate	= 45027,
	MotionViewSpinAbout	= 45028,
	MotionViewCommonViews	= 45029,
	MotionViewLookatFace	= 45030,
	MotionViewAlignEdge	= 45031,
	MotionViewPreviousView	= 25046,
	MotionViewHidePreviousLevel	= 33061,
	MotionViewBottomView	= 33110,
	MotionViewFrontView	= 32811,
	MotionViewISOView	= 32810,
	MotionViewLeftView	= 33109,
	MotionViewRightView	= 32812,
	MotionViewTopView	= 32813,
	MotionViewRotatePositiveY	= 32815,
	MotionViewRotateNegativeY	= 32822,
	MotionViewRotatePositiveX	= 32814,
	MotionViewRotateNegativeX	= 32821,
	MotionViewRotatePositiveZ	= 32816,
	MotionViewRotateNegativeZ	= 32823,
	MotionViewZoomIn	= 33077,
	MotionViewZoomOut	= 33078,
	MotionFormatView	= 33056,
	MotionFormatFaces	= 33057,
	MotionFormatStyles	= 33058,
	MotionWindowNewWindow	= 57648,
	MotionWindowArrange	= 40004
    } 	MotionCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum StudioCommandConstants
    {	StudioFilePrint	= 33064,
	StudioFileSaveAsImage	= 58000,
	StudioFileSaveAsMovie	= 40262,
	StudioAssemblyToolsSelect	= 45000,
	StudioAssemblyToolsEdgeBar	= 32899,
	StudioAssemblyToolsTimelineandPlayback	= 33097,
	StudioAssemblyToolsAllPartsSameColor	= 33065,
	StudioAssemblyToolsDisplayConfigurations	= 32826,
	StudioAssemblyToolsAddInManager	= 40016,
	StudioAssemblyToolsMacro	= 25040,
	StudioAssemblyToolsCustomize	= 40010,
	StudioAssemblyToolsOptions	= 25042,
	StudioAssemblyToolsCutawayView	= 33101,
	StudioViewNamedViews	= 25053,
	StudioViewZoomArea	= 33049,
	StudioViewZoom	= 32820,
	StudioViewFit	= 33022,
	StudioViewPan	= 33003,
	StudioViewPerspective	= 32828,
	StudioViewShade	= 32825,
	StudioViewToolbars	= 40009,
	StudioViewRefreshWindow	= 32876,
	StudioViewRotate	= 45027,
	StudioViewSpinAbout	= 45028,
	StudioViewCommonViews	= 45029,
	StudioViewLookatFace	= 45030,
	StudioViewAlignEdge	= 45031,
	StudioViewPreviousView	= 25046,
	StudioViewHidePreviousLevel	= 33061,
	StudioViewBottomView	= 33110,
	StudioViewFrontView	= 32811,
	StudioViewISOView	= 32810,
	StudioViewLeftView	= 33109,
	StudioViewRightView	= 32812,
	StudioViewTopView	= 32813,
	StudioViewRotatePositiveY	= 32815,
	StudioViewRotateNegativeY	= 32822,
	StudioViewRotatePositiveX	= 32814,
	StudioViewRotateNegativeX	= 32821,
	StudioViewRotatePositiveZ	= 32816,
	StudioViewRotateNegativeZ	= 32823,
	StudioViewZoomIn	= 33077,
	StudioViewZoomOut	= 33078,
	StudioFormatRenderSetup	= 40275,
	StudioFormatRenderScene	= 40265,
	StudioFormatRenderArea	= 40264,
	StudioFormatView	= 33056,
	StudioFormatFaces	= 33057,
	StudioFormatStyles	= 33058,
	StudioWindowNewWindow	= 57648,
	StudioWindowArrange	= 40004,
	StudioHelpHelp	= 57669,
	StudioHelpSolidEdgeHelp	= 57666,
	StudioHelpSolidEdgeWelcome	= 40017,
	StudioHelpWhatsNew	= 40253,
	StudioHelpHelpforAutoCADUsers	= 40250,
	StudioHelpTutorials	= 40218,
	StudioHelpProgrammingwithSolidEdge	= 40232,
	StudioHelpTipoftheDay	= 25062,
	StudioHelpSolidEdgeontheWeb	= 40500,
	StudioHelpAboutSolidEdge	= 25065,
	StudioAnimateFlightPathWizard	= 40273,
	StudioAnimateAddFrames	= 33098,
	StudioAnimateRemoveFrames	= 33099
    } 	StudioCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum TubingCommandConstants
    {	TubingFileSave	= 57603,
	TubingFileClose	= 57602,
	TubingFilePrint	= 33064,
	TubingFileSendMail	= 40002,
	TubingFileAddEditRoutingSlip	= 40003,
	TubingFileSaveAs	= 57604,
	TubingFileSaveAll	= 40008,
	TubingFileSaveAsImage	= 58000,
	TubingFileFileProperties	= 40001,
	TubingFileExit	= 57665,
	TubingAssemblyToolsSelect	= 45000,
	TubingAssemblyToolsEdgeBar	= 32899,
	TubingAssemblyToolsDisplayConfigurations	= 32826,
	TubingAssemblyToolsToDoList	= 65059,
	TubingAssemblyToolsShow	= 33093,
	TubingAssemblyToolsHide	= 33094,
	TubingAssemblyToolsShowOnly	= 33085,
	TubingAssemblyToolsShowAll	= 33071,
	TubingAssemblyToolsHideAll	= 33072,
	TubingAssemblyToolsActivate	= 33091,
	TubingAssemblyToolsInactivate	= 33092,
	TubingAssemblyToolsUnloadHiddenParts	= 33086,
	TubingAssemblyToolsCutawayView	= 33101,
	TubingAssemblyToolsUpdateRelationships	= 33067,
	TubingAssemblyToolsAutomaticUpdate	= 33066,
	TubingAssemblyToolsUpdateAllLinks	= 33068,
	TubingAssemblyToolsCheckInterference	= 25039,
	TubingAssemblyToolsAllPartsSameColor	= 33065,
	TubingAssemblyToolsReports	= 25043,
	TubingAssemblyToolsMeasureDistance	= 25070,
	TubingAssemblyToolsMeasureMinimumDistance	= 40276,
	TubingAssemblyToolsMeasureAngle	= 25071,
	TubingAssemblyToolsInquireElement	= 25072,
	TubingAssemblyToolsPhysicalProperties	= 25038,
	TubingAssemblyToolsVariables	= 25036,
	TubingAssemblyToolsMacro	= 25040,
	TubingAssemblyToolsCustomize	= 40010,
	TubingAssemblyToolsOptions	= 25042,
	TubingAssemblyToolsHideAllReferencePlanes	= 40018,
	TubingAssemblyToolsAddInManager	= 40016,
	TubingAssemblyToolsSketch	= 33054,
	TubingViewNamedViews	= 25053,
	TubingViewZoomArea	= 33049,
	TubingViewZoom	= 32820,
	TubingViewFit	= 33022,
	TubingViewPan	= 33003,
	TubingViewPerspective	= 32828,
	TubingViewShade	= 32825,
	TubingViewToolbars	= 40009,
	TubingViewRefreshWindow	= 32876,
	TubingViewRotate	= 45027,
	TubingViewSpinAbout	= 45028,
	TubingViewCommonViews	= 45029,
	TubingViewLookatFace	= 45030,
	TubingViewAlignEdge	= 45031,
	TubingViewPreviousView	= 25046,
	TubingViewHidePreviousLevel	= 33061,
	TubingViewBottomView	= 33110,
	TubingViewFrontView	= 32811,
	TubingViewISOView	= 32810,
	TubingViewLeftView	= 33109,
	TubingViewRightView	= 32812,
	TubingViewTopView	= 32813,
	TubingViewRotatePositiveY	= 32815,
	TubingViewRotateNegativeY	= 32822,
	TubingViewRotatePositiveX	= 32814,
	TubingViewRotateNegativeX	= 32821,
	TubingViewRotatePositiveZ	= 32816,
	TubingViewZoomIn	= 33077,
	TubingViewZoomOut	= 33078,
	TubingViewRotateNegativeZ	= 32823,
	TubingFormatView	= 33056,
	TubingFormatFaces	= 33057,
	TubingFormatStyles	= 33058,
	TubingWindowNewWindow	= 57648,
	TubingWindowArrange	= 40004,
	TubingHelpHelp	= 57669,
	TubingHelpSolidEdgeHelp	= 57666,
	TubingHelpSolidEdgeWelcome	= 40017,
	TubingHelpWhatsNew	= 40253,
	TubingHelpHelpforAutoCADUsers	= 40250,
	TubingHelpTutorials	= 40218,
	TubingHelpProgrammingwithSolidEdge	= 40232,
	TubingHelpTipoftheDay	= 25062,
	TubingHelpSolidEdgeontheWeb	= 40500,
	TubingHelpAboutSolidEdge	= 25065,
	TubingXpresRoutePathXpres	= 33111,
	TubingXpresRouteLineSegment	= 65074,
	TubingXpresRouteArcSegment	= 65087,
	TubingXpresRouteMoveSegment	= 65084,
	TubingXpresRouteSplitSegment	= 65088,
	TubingXpresRouteSmartDimension	= 65092,
	TubingXpresRouteAxisDimension	= 65076,
	TubingXpresRouteAngle	= 65518,
	TubingXpresRouteCoaxial	= 65077,
	TubingXpresRouteConnect	= 65078,
	TubingXpresRouteParallel	= 65079,
	TubingXpresRouteTangent	= 65089,
	TubingXpresRouteTube	= 65080,
	TubingXpresRouteShowPath	= 65081,
	TubingXpresRouteHidePath	= 65082,
	TubingXpresRouteBendTable	= 33107,
	TubingXpresRouteRelationshipHandles	= 10210,
	TubingReferencePlanesCoincidentPlane	= 45012,
	TubingReferencePlanesParallelPlane	= 45013,
	TubingReferencePlanesAngledPlane	= 45014,
	TubingReferencePlanesCoordinateSystem	= 25061
    } 	TubingCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum QueryScopeConstants
    {	seQueryScopeAllParts	= 0,
	seQueryScopeShownParts	= 1,
	seQueryScopeHiddenParts	= 2,
	seQueryScopeSelectedParts	= 3
    } 	QueryScopeConstants;

typedef /* [helpstring][helpcontext] */ 
enum QueryConditionConstants
    {	seQueryConditionContains	= 0,
	seQueryConditionIs	= 1,
	seQueryConditionIsNot	= 2
    } 	QueryConditionConstants;

typedef /* [helpstring][helpcontext] */ 
enum QueryPropertyConstants
    {	seQueryPropertyName	= 0,
	seQueryPropertyTitle	= 1,
	seQueryPropertySubject	= 2,
	seQueryPropertyAuthor	= 3,
	seQueryPropertyManager	= 4,
	seQueryPropertyCompany	= 5,
	seQueryPropertyCategory	= 6,
	seQueryPropertyKeywords	= 7,
	seQueryPropertyComments	= 8,
	seQueryPropertyDocumentNumber	= 9,
	seQueryPropertyRevisionNumber	= 10,
	seQueryPropertyProject	= 11,
	seQueryPropertyMaterial	= 12,
	seQueryPropertyStatus	= 13,
	seQueryPropertyReference	= 14,
	seQueryPropertyCustom	= 15
    } 	QueryPropertyConstants;

typedef /* [helpstring][helpcontext] */ 
enum QueryReferenceConstants
    {	seQueryReferenceExcludedFromBOM	= 0,
	seQueryReferenceHiddenInDrawing	= 1,
	seQueryReferenceHiddenNextLevel	= 2,
	seQueryReferenceExcludedFromPhysProps	= 3,
	seQueryReferenceNotSelectable	= 4,
	seQueryReferenceDisplayAsReference	= 5,
	seQueryReferenceExcludedFromInterference	= 6
    } 	QueryReferenceConstants;

typedef /* [helpstring][helpcontext] */ 
enum QueryStatusConstants
    {	seQueryStatusAvailable	= 0,
	seQueryStatusInWork	= 1,
	seQueryStatusInReview	= 2,
	seQueryStatusReleased	= 3
    } 	QueryStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyFamilyMemberPropertyConstants
    {	seAssemblyFamilyMemberPropertyDocumentNumber	= 0,
	seAssemblyFamilyMemberPropertyRevisionNumber	= 1,
	seAssemblyFamilyMemberPropertyProjectName	= 2
    } 	AssemblyFamilyMemberPropertyConstants;

typedef /* [helpstring][helpcontext] */ 
enum WirePathConstants
    {	seSingleWirePath	= 0,
	seCableWirePathMaster	= 1,
	seCableWirePathMember	= 2
    } 	WirePathConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyReportConstants
    {	seAssemblyReportWirePathName	= 1,
	seAssemblyReportWirePathType	= 2,
	seAssemblyReportWirePathDescription	= 4,
	seAssemblyReportWirePathStartConnector	= 8,
	seAssemblyReportWirePathEndConnector	= 16,
	seAssemblyReportWirePathLength	= 32
    } 	AssemblyReportConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyReportTypeConstants
    {	seAssemblyWireReportAtomic	= 0,
	seAssemblyWireReportExpanded	= 1
    } 	AssemblyReportTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum CurveSegmentWhichKeypointsConstants
    {	seCurveSegmentWhichKeypoints_mid_points	= 1,
	seCurveSegmentWhichKeypoints_end_points	= 2,
	seCurveSegmentWhichKeypoints_all_points	= 3
    } 	CurveSegmentWhichKeypointsConstants;

typedef /* [helpstring][helpcontext] */ 
enum CurveSegmentValidationConstants
    {	seCurveSegmentValidation_valid	= 0,
	seCurveSegmentValidation_break	= 0x1,
	seCurveSegmentValidation_angle	= 0x2,
	seCurveSegmentValidation_length	= 0x4,
	seCurveSegmentValidation_intersection	= 0x8,
	seCurveSegmentValidation_fork	= 0x10,
	seCurveSegmentValidation_duplicate_segment	= 0x20,
	seCurveSegmentValidation_loop	= 0x40,
	seCurveSegmentValidation_unknown_segment	= 0x80,
	seCurveSegmentValidation_unknown	= 0x100,
	seCurveSegmentValidation_empty	= 0x200,
	seCurveSegmentValidation_single_segment	= 0x400,
	seCurveSegmentValidation_connectivity	= 0x800,
	seCurveSegmentValidation_calculation	= 0x1000,
	seCurveSegmentValidation_status	= 0x2000
    } 	CurveSegmentValidationConstants;

typedef /* [helpstring][helpcontext] */ 
enum CurveSegmentPathAdditionStatusConstants
    {	seCurveSegmentPathAdditionStatusSucceeded	= 0,
	seCurveSegmentPathAdditionStatusFailedUnknownReason	= 1,
	seCurveSegmentPathAdditionStatusFailedBreak	= 2,
	seCurveSegmentPathAdditionStatusFailedDuplicate	= 3,
	seCurveSegmentPathAdditionStatusFailedFork	= 4,
	seCurveSegmentPathAdditionStatusFailedIntersection	= 5,
	seCurveSegmentPathAdditionStatusFailedLoop	= 6,
	seCurveSegmentPathAdditionStatusFailedUnknownSegment	= 7,
	seCurveSegmentPathAdditionStatusFailedLength	= 8
    } 	CurveSegmentPathAdditionStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum CurveSegmentPathRemovalStatusConstants
    {	seCurveSegmentPathRemovalStatusSucceeded	= 0,
	seCurveSegmentPathRemovalStatusFailedUnknownReason	= 1,
	seCurveSegmentPathRemovalStatusFailedBreak	= 2,
	seCurveSegmentPathRemovalStatusFailedNotInPath	= 3,
	seCurveSegmentPathRemovalStatusFailedSingle	= 4,
	seCurveSegmentPathRemovalStatusFailedEmpty	= 5
    } 	CurveSegmentPathRemovalStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum TubePropertyPidConstants
    {	seTubePropertyPid_TubeBendRadius	= 1508,
	seTubePropertyPid_TubeOuterDiameter	= 1509,
	seTubePropertyPid_TubeMinimumFlatLength	= 1510,
	seTubePropertyPid_TubeWallThickness	= 1511,
	seTubePropertyPid_TubeFlatLength	= 1512,
	seTubePropertyPid_TubeAreaInsideDiameter	= 1513,
	seTubePropertyPid_TubeVolumeInsideDiameter	= 1514,
	seTubePropertyPid_TubeEndTreatmentTypeEnd1	= 1515,
	seTubePropertyPid_TubeEndTreatmentTypeEnd2	= 1516
    } 	TubePropertyPidConstants;

typedef /* [helpstring][helpcontext] */ 
enum CopySketchErrorStatusConstants
    {	seCopySketchErrorStatus_success_no_error	= 0,
	seCopySketchErrorStatus_failure_unknown_error	= 1,
	seCopySketchErrorStatus_warning_profile_text_not_copied	= 2,
	seCopySketchErrorStatus_failure_no_valid_elements_copied	= 3,
	seCopySketchErrorStatus_failure_checkout_for_writeaccess	= 4,
	seCopySketchErrorStatus_failure_activate_part	= 5,
	seCopySketchErrorStatus_failure_nonassoc_create_copy	= 6,
	seCopySketchErrorStatus_failure_assoc_create_copy	= 7,
	seCopySketchErrorStatus_failure_invalidarg	= 8,
	seCopySketchErrorStatus_failure_assoc_copy_not_allowed_with_foa	= 9
    } 	CopySketchErrorStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum StructuralFrameEndConditionConstants
    {	seMiter	= 0,
	seButt1	= 1,
	seButt2	= 2,
	seNone	= 3,
	seRadius	= 4,
	seExtend	= 5
    } 	StructuralFrameEndConditionConstants;

typedef /* [helpstring][helpcontext] */ 
enum VirtualComponentTypeConstants
    {	seVirtualComponentType_Unknown	= 1,
	seVirtualComponentType_Assembly	= 2,
	seVirtualComponentType_Part	= 3,
	seVirtualComponentType_Sheetmetal	= 4
    } 	VirtualComponentTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum PipeFittingEndTreatmentConstants
    {	sePipeFittingEndTreatmentNone	= 0,
	sePipeFittingEndTreatmentSocketWeld	= 1,
	sePipeFittingEndTreatmentButtWeld	= 2,
	sePipeFittingEndTreatmentFlange	= 3,
	sePipeFittingEndTreatmentThread	= 4,
	sePipeFittingEndTreatmentPipePenetration	= 5
    } 	PipeFittingEndTreatmentConstants;

typedef /* [helpstring][helpcontext] */ 
enum PipeFittingTypeConstants
    {	sePipeFittingTypeNone	= 0,
	sePipeFittingTypeElbow	= 1,
	sePipeFittingTypeY	= 2,
	sePipeFittingTypeTee	= 3,
	sePipeFittingTypeCoupling	= 4,
	sePipeFittingTypeReducer	= 5,
	sePipeFittingTypeCross	= 6,
	sePipeFittingTypePlug	= 7,
	sePipeFittingTypeCompanionFlange	= 8,
	sePipeFittingTypeReturn180	= 9
    } 	PipeFittingTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum VirtualComponentPublishConstants
    {	seVCPublishOn_FrontView	= 1,
	seVCPublishOn_TopView	= 2,
	seVCPublishOn_RightView	= 3,
	seVCPublishOn_SketchView	= 4
    } 	VirtualComponentPublishConstants;

typedef /* [helpstring][helpcontext] */ 
enum VirtualComponentStatusConstants
    {	seVCStatus_Success	= 1,
	seVCStatus_Fail	= 2,
	seVCStatus_AddUnManagedToManaged	= 3,
	seVCStatus_AddManagedToUnManaged	= 4,
	seVCStatus_ReplaceConflictWithVirtualComponent	= 5,
	seVCStatus_SourceFileNotFound	= 6,
	seVCStatus_NameConflictWithVirtualComponent	= 7,
	seVCStatus_NameConflictWithPreDefinedComponent	= 8,
	seVCStatus_DuplicateNameConflictWithVirtualComponent	= 9,
	seVCStatus_CannotAddToComponent	= 10,
	seVCStatus_ComponentSketchMissing	= 11
    } 	VirtualComponentStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum ConfigurationTypeConstants
    {	seConfigurationType_Display	= 0,
	seConfigurationType_Explode	= 1
    } 	ConfigurationTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum HarnessTypeConstants
    {	seHarnessType_Wire	= 1,
	seHarnessType_Cable	= 2,
	seHarnessType_Bundle	= 3,
	seHarnessType_Wires	= 4,
	seHarnessType_Cables	= 5,
	seHarnessType_Bundles	= 6
    } 	HarnessTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyBaseStylesConstants
    {	seAssemblyConstructionStyle	= 1,
	seAssemblyWeldBeadStyle	= 4
    } 	AssemblyBaseStylesConstants;

typedef /* [helpstring][helpcontext] */ 
enum HarnessSaveAsEcadStatusConstants
    {	seHarnessSaveAsEcadStatus_Success	= 0,
	seHarnessSaveAsEcadStatus_Failed	= 1,
	seHarnessSaveAsEcadStatus_FailedBadArgs	= 2,
	seHarnessSaveAsEcadStatus_FailedNoComps	= 3,
	seHarnessSaveAsEcadStatus_FailedNoConns	= 4,
	seHarnessSaveAsEcadStatus_FailedDupComps	= 5,
	seHarnessSaveAsEcadStatus_FailedDupConns	= 6,
	seHarnessSaveAsEcadStatus_FailedComps	= 7,
	seHarnessSaveAsEcadStatus_FailedConns	= 8,
	seHarnessSaveAsEcadStatus_FailedBoth	= 9,
	seHarnessSaveAsEcadStatus_FailedBadConfig	= 10
    } 	HarnessSaveAsEcadStatusConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyWireHarnessReportTypeConstants
    {	seAssemblyWireHarnessReportComponents	= 1,
	seAssemblyWireHarnessReportConnections	= 2
    } 	AssemblyWireHarnessReportTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyWireHarnessReportOnConstants
    {	seAssemblyWireHarnessReportOnAll	= 1,
	seAssemblyWireHarnessReportOnCurrentlySelected	= 2,
	seAssemblyWireHarnessReportOnCurrentlyVisible	= 3
    } 	AssemblyWireHarnessReportOnConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyWireHarnessComponentPropertiesConstants
    {	seWireHarnessComponentPropertyAuthor	= 1,
	seWireHarnessComponentPropertyFileName	= 2,
	seWireHarnessComponentPropertyKeywords	= 3,
	seWireHarnessComponentPropertyComments	= 4,
	seWireHarnessComponentPropertyTemplate	= 5,
	seWireHarnessComponentPropertyCreatedDate	= 6,
	seWireHarnessComponentPropertyModifiedDate	= 7,
	seWireHarnessComponentPropertyCreatingApplication	= 8,
	seWireHarnessComponentPropertySavingApplication	= 9,
	seWireHarnessComponentPropertyCategory	= 10,
	seWireHarnessComponentPropertyManager	= 11,
	seWireHarnessComponentPropertyCompany	= 12,
	seWireHarnessComponentPropertyUniqueId	= 13,
	seWireHarnessComponentPropertyComponentName	= 14,
	seWireHarnessComponentPropertyComponentDescription	= 15,
	seWireHarnessComponentPropertyOccurrenceName	= 16
    } 	AssemblyWireHarnessComponentPropertiesConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyWireHarnessConnectionPropertiesConstants
    {	seWireHarnessConnectionPropertyWireId	= 1,
	seWireHarnessConnectionPropertyFromComponentId	= 2,
	seWireHarnessConnectionPropertyFromComponentTerminal	= 3,
	seWireHarnessConnectionPropertyToComponentId	= 4,
	seWireHarnessConnectionPropertyToComponentTerminal	= 5,
	seWireHarnessConnectionPropertyCableId	= 6,
	seWireHarnessConnectionPropertyWireDiameter	= 7,
	seWireHarnessConnectionPropertyWireGauge	= 8,
	seWireHarnessConnectionPropertyWireColor	= 9,
	seWireHarnessConnectionPropertyWireMaterial	= 10,
	seWireHarnessConnectionPropertyWireType	= 11,
	seWireHarnessConnectionPropertyWireDescription	= 12,
	seWireHarnessConnectionPropertyCutLength	= 13,
	seWireHarnessConnectionPropertyPartNumber	= 14,
	seWireHarnessConnectionPropertyBendRadius	= 15
    } 	AssemblyWireHarnessConnectionPropertiesConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyWireHarnessSortOrderConstants
    {	seWireHarnessReportAscending	= 1,
	seWireHarnessReportDescending	= 2
    } 	AssemblyWireHarnessSortOrderConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyWireHarnessJustificationConstants
    {	seWireHarnessReportLeft	= 1,
	seWireHarnessReportCenter	= 2,
	seWireHarnessReportRight	= 3
    } 	AssemblyWireHarnessJustificationConstants;

typedef /* [helpstring][helpcontext] */ 
enum seAssemblyBodyTypeConstants
    {	seAssemblyBodyType_WeldBeadBody	= 1,
	seAssemblyBodyType_HarnessBody	= 2,
	seAssemblyBodyType_GenericAssemblyBody	= 3
    } 	seAssemblyBodyTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum Relation3dGearTypeConstants
    {	igRelation3dGearTypeRotaryRotary	= 0,
	igRelation3dGearTypeRotaryLinear	= 0x1,
	igRelation3dGearTypeLinearLinear	= 0x2
    } 	Relation3dGearTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum Relation3dGearRatioTypeConstants
    {	igRelation3dGearRatioTypeNumberOfTurns	= 0,
	igRelation3dGearRatioTypeNumberOfTeeth	= 0x1
    } 	Relation3dGearRatioTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyPathfinderUpdateConstants
    {	seUpdate	= 1,
	seRebuild	= 2,
	seSuspend	= 3,
	seResume	= 4
    } 	AssemblyPathfinderUpdateConstants;

typedef /* [helpstring][helpcontext] */ 
enum UpdateStructureCacheConstants
    {	seUseOpenDocuments	= 1,
	seWalkFilesOnDisk	= 2
    } 	UpdateStructureCacheConstants;

typedef /* [helpstring][helpcontext] */ 
enum InterferenceOptionsConstants
    {	seIntfOptIgnoreSameNominalDia	= 1,
	seIntfOptIgnoreThreadVsNonThreaded	= 2
    } 	InterferenceOptionsConstants;

typedef /* [helpstring][helpcontext] */ 
enum MoveMultipleMoveTypeConstants
    {	seMoveMultipleMove	= 1,
	seMoveMultipleCopy	= 2
    } 	MoveMultipleMoveTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum MoveMultipleRelationshipConstants
    {	seMoveMultipleMaintainInternalRelationships	= 1,
	seMoveMultipleDropInternalRelationships	= 2,
	seMoveMultipleDropInternalRelationshipsAndGround	= 3
    } 	MoveMultipleRelationshipConstants;

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
//DRAFT CONSTANTS AND ENUMS
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
typedef /* [helpstring][helpcontext] */ 
enum DrawingViewTypeConstants
    {	igNullView	= 0,
	igPrincipleView	= 1,
	igIsometricView	= 2,
	igAuxiliaryView	= 3,
	igXSectionView	= 4,
	igDetailView	= 5,
	igIsoXSectionView	= 6,
	igUserView	= 7,
	igRevolvedSectionView	= 8,
	igBrokenView	= 9
    } 	DrawingViewTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum AssemblyDrawingViewTypeConstants
    {	seAssemblyDesignedView	= 0,
	seAssemblySimplifiedView	= 1,
	seAssemblyConfigurationSimplifiedView	= 2
    } 	AssemblyDrawingViewTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum PartDrawingViewTypeConstants
    {	sePartDesignedView	= 0,
	sePartSimplifiedView	= 1
    } 	PartDrawingViewTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum SheetMetalDrawingViewTypeConstants
    {	seSheetMetalDesignedView	= 0,
	seSheetMetalSimplifiedView	= 1,
	seSheetMetalFlatView	= 2
    } 	SheetMetalDrawingViewTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum WeldmentDrawingViewTypeConstants
    {	seWeldmentMachinedView	= 0,
	seWeldmentWeldedView	= 1,
	seWeldmentAssembledView	= 2
    } 	WeldmentDrawingViewTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum FoldTypeConstants
    {	igNullFold	= 0,
	igFoldUp	= 1,
	igFoldDown	= 2,
	igFoldRight	= 3,
	igFoldLeft	= 4,
	igFoldUpRight	= 5,
	igFoldUpLeft	= 6,
	igFoldDownRight	= 7,
	igFoldDownLeft	= 8
    } 	FoldTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum ModelMemberDisplayTypeConstants
    {	seShowPart	= 0,
	seHidePart	= 1,
	seSectionPart	= 2,
	seUndefinedDisplay	= 3
    } 	ModelMemberDisplayTypeConstants;

typedef /* [hidden][helpstring][helpcontext] */ 
enum ModelMemberTypeConstants
    {	seAssemblyMember	= 0,
	sePartMember	= 1,
	seConstructionMember	= 2
    } 	ModelMemberTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum ModelMemberComponentTypeConstants
    {	seAssemblyMemberType	= 0,
	sePartMemberType	= 1,
	seConstructionMemberType	= 2,
	seWeldmentMemberType	= 3,
	seWeldPartMemberType	= 4,
	seWeldBeadMemberType	= 5,
	seSheetMetalMemberType	= 6,
	seSolidBodyMemberType	= 7,
	seReferencePlaneMemberType	= 8,
	seSketchMemberType	= 9,
	seTubeCenterlineMemberType	= 10,
	seCoordinateSystemMemberType	= 11
    } 	ModelMemberComponentTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum GraphicMemberEdgeTypeConstants
    {	seUnknownEdgeType	= 0,
	seModelEdgeType	= 1,
	seSilhouetteEdgeType	= 2,
	seSectionEdgeType	= 3,
	seSnapshotEdgeType	= 4,
	seThreadEdgeType	= 5,
	seBendCenterlineEdgeType	= 6,
	seCoordinateSystemType	= 7
    } 	GraphicMemberEdgeTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum ModelLinkTypeConstants
    {	igPartLink	= 0,
	igAssemblyLink	= 1,
	igWeldmentLink	= 2
    } 	ModelLinkTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum CoordinateSystem2dAxisConstants
    {	seCoordinateSystem2dAxisLow	= 0,
	seCoordinateSystem2dAxisHigh	= 1
    } 	CoordinateSystem2dAxisConstants;

typedef /* [helpstring][helpcontext] */ 
enum ModelNodeTypeConstants
    {	igPartNode	= 0,
	igAssemblyNode	= 1
    } 	ModelNodeTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum HTHoleTypeConstants
    {	seHTOther	= 0,
	seHTSimple	= 1,
	seHTCounterbore	= 2,
	seHTCountersink	= 3,
	seHTSimpleThreaded	= 4,
	seHTCounterboreThreaded	= 5,
	seHTCountersinkThreaded	= 6
    } 	HTHoleTypeConstants;

typedef /* [helpstring][helpcontext] */ 
enum DetailCommandConstants
    {	DetailFileNew	= 57600,
	DetailFileOpen	= 57601,
	DetailFileSave	= 57603,
	DetailFileClose	= 57602,
	DetailFilePrint	= 57607,
	DetailFileSendMail	= 57612,
	DetailFileAddRoutingSlip	= 40003,
	DetailFileSaveAs	= 57604,
	DetailFileSaveAll	= 40008,
	DetailFileSaveAsImage	= 58000,
	DetailFileFileProperties	= 40001,
	DetailFileExit	= 57665,
	DetailFileSheetSetup	= 10002,
	DetailEditCut	= 57635,
	DetailEditCopy	= 57634,
	DetailEditCopytoSymbolLibrary	= 10114,
	DetailEditPaste	= 57637,
	DetailEditUndo	= 57643,
	DetailEditRedo	= 57644,
	DetailEditProperties	= 10108,
	DetailEditDelete	= 10100,
	DetailEditPasteSpecial	= 57639,
	DetailEditBinder	= 33090,
	DetailEditEditLinks	= 57857,
	DetailEditSelectAllInView	= 10101,
	DetailEditGoToSheet	= 10107,
	DetailToolSelectTool	= 57082,
	DetailToolEdgeBar	= 32899,
	DetailToolDraw	= 10512,
	DetailToolLabel	= 10509,
	DetailToolRelationships	= 10510,
	DetailToolSketchPoint	= 10502,
	DetailToolSketchPointLockX	= 11303,
	DetailToolSketchPointLockY	= 11305,
	DetailToolRepositionTarget	= 11300,
	DetailToolSketchPointOnOff	= 11304,
	DetailToolVariables	= 10504,
	DetailToolHyperLink	= 32903,
	DetailToolMeasureDistance	= 10921,
	DetailToolMeasureArea	= 10922,
	DetailToolAreaProperties	= 10515,
	DetailToolMeasureTotalLength	= 45051,
	DetailToolIntelliSketch	= 10507,
	DetailToolReduceFile	= 32895,
	DetailToolMacro	= 10505,
	DetailToolCustomize	= 40010,
	DetailToolChangesvariouscategoriesofSolidEdgeDraftoptions	= 10508,
	DetailToolAddInManager	= 40016,
	DetailToolShowGroups	= 10932,
	DetailToolLocateGroups	= 10934,
	DetailViewZoomArea	= 10201,
	DetailViewZoom	= 10209,
	DetailViewFit	= 10202,
	DetailViewPan	= 10203,
	DetailViewRefreshWindow	= 32876,
	DetailViewPreviousView	= 10200,
	DetailViewZoomTool	= 33500,
	DetailViewToolbars	= 40009,
	DetailViewBackgroundSheet	= 10211,
	DetailViewWorkingsheet	= 10212,
	DetailViewDeleteSheet	= 10106,
	DetailViewInsertSheet	= 10302,
	DetailViewNextView	= 32959,
	DetailHelpHelp	= 57669,
	DetailHelpSolidEdgeHelp	= 57666,
	DetailHelpSolidEdgeWelcome	= 40017,
	DetailHelpWhatsNew	= 40253,
	DetailHelpHelpforAutoCADUsers	= 40250,
	DetailHelpTutorials	= 40218,
	DetailHelpProgrammingwithSolidEdge	= 40232,
	DetailHelpTipoftheDay	= 10702,
	DetailHelpSolidEdgeontheWeb	= 40500,
	DetailHelpAboutSolidEdge	= 57664,
	DetailWindowNewWindow	= 57648,
	DetailWindowArrangeAllWindows	= 10600,
	DetailDrawingViewsViewofPart	= 25101,
	DetailDrawingViewsPrincipalView	= 32871,
	DetailDrawingViewsAuxiliaryView	= 32930,
	DetailDrawingViewsCuttingPlane	= 32922,
	DetailDrawingViewsSectionView	= 32921,
	DetailDrawingViewsDetailView	= 32788,
	DetailDrawingViewsDraftView	= 32931,
	DetailDrawingViewsPartsList	= 32784,
	DetailDrawingViewsEdgeDisplay	= 32794,
	DetailDrawingViewsUpdateViews	= 57083,
	DetailDrawingViewsSnapshotView	= 32872,
	DetailDrawingViewsOutOfDateInfo	= 32902,
	DetailDimensionSmartDimension	= 10914,
	DetailDimensionDistanceBetween	= 10917,
	DetailDimensionAngleBetween	= 10918,
	DetailDimensionCoordinateDimension	= 33105,
	DetailDimensionSymmetricDiameter	= 32801,
	DetailDimensionChamfer	= 25041,
	DetailDimensionAngularCoordinate	= 25045,
	DetailDimensionAlignDimension	= 25044,
	DetailDimensionDimensionAxis	= 33106,
	DetailDimensionPrefixCopier	= 11308,
	DetailDimensionAttachDimension	= 10950,
	DetailDimensionTrackDimensionChanges	= 32888,
	DetailDimensionRelationshipAssistant	= 32896,
	DetailDimensionHoleTable	= 10516,
	DetailDimensionUpdatePropertyText	= 32901,
	DetailDimensionRetrieveDimensions	= 32803,
	DetailDimensionCenterMark	= 32808,
	DetailDimensionFeatureControlFrame	= 33102,
	DetailDimensionDatumFrame	= 33103,
	DetailDimensionDatumTarget	= 33104,
	DetailDimensionFill	= 33107,
	DetailDimensionCenterLine	= 32807,
	DetailTextText	= 10949,
	DetailTextCharacterMap	= 10954,
	DetailTextCallout	= 32854,
	DetailTextLeader	= 32855,
	DetailTextBalloon	= 32856,
	DetailTextSurfaceTextureSymbol	= 32857,
	DetailTextWeldSymbol	= 32858,
	DetailTextEdgeCondition	= 32873,
	DetailDrawLine	= 10900,
	DetailDrawTangentArc	= 10901,
	DetailDrawArcby3Points	= 10902,
	DetailDrawArcbyCenterPoint	= 10903,
	DetailDrawTangentCircle	= 10904,
	DetailDrawCircleby3Points	= 10905,
	DetailDrawCirclebyCenterPoint	= 10906,
	DetailDrawEllipseby3Points	= 10907,
	DetailDrawEllipsebyCenterPoint	= 10908,
	DetailDrawRectangle	= 10909,
	DetailDrawCurve	= 10910,
	DetailDrawPoint	= 10130,
	DetailDrawFreeSketch	= 10913,
	DetailDrawFreeForm	= 10912,
	DetailDrawShowEdges	= 11102,
	DetailDrawHideEdges	= 11103,
	DetailDrawEdgePainter	= 40233,
	DetailDrawOffset	= 11307,
	DetailDrawSymmetricOffset	= 45050,
	DetailGroupGroup	= 10925,
	DetailGroupUngroup	= 10926,
	DetailGroupRectangularPattern	= 10927,
	DetailGroupCircularPattern	= 10928,
	DetailRelationshipsFillet	= 10923,
	DetailRelationshipsChamfer	= 10924,
	DetailRelationshipsExtendtoNext	= 10959,
	DetailRelationshipsTrim	= 10956,
	DetailRelationshipsTrimCorner	= 10957,
	DetailRelationshipsMove	= 10930,
	DetailRelationshipsRotate	= 10929,
	DetailRelationshipsMirror	= 10931,
	DetailRelationshipsScale	= 10933,
	DetailRelationshipsStretch	= 10990,
	DetailRelationshipsAlignViews	= 11100,
	DetailRelationshipsUnalignViews	= 11101,
	DetailRelationshipsBringtoFront	= 10935,
	DetailRelationshipsSendtoBack	= 10936,
	DetailRelationshipsPullUp	= 10937,
	DetailRelationshipsPushDown	= 10938
    } 	DetailCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum DrawingViewEditCommandConstants
    {	DrawingViewEditFileNew	= 57600,
	DrawingViewEditFileOpen	= 57601,
	DrawingViewEditFileSave	= 57603,
	DrawingViewEditFileClose	= 57602,
	DrawingViewEditFilePrint	= 57607,
	DrawingViewEditFileSendMail	= 57612,
	DrawingViewEditFileAddRoutingSlip	= 40003,
	DrawingViewEditFileSaveAs	= 57604,
	DrawingViewEditFileSaveAll	= 40008,
	DrawingViewEditFileSaveAsImage	= 58000,
	DrawingViewEditFileFileProperties	= 40001,
	DrawingViewEditFileExit	= 57665,
	DrawingViewEditFileSheetSetup	= 10002,
	DrawingViewEditEditCut	= 57635,
	DrawingViewEditEditCopy	= 57634,
	DrawingViewEditEditCopytoSymbolLibrary	= 10114,
	DrawingViewEditEditPaste	= 57637,
	DrawingViewEditEditUndo	= 57643,
	DrawingViewEditEditRedo	= 57644,
	DrawingViewEditEditProperties	= 10108,
	DrawingViewEditEditDelete	= 10100,
	DrawingViewEditEditPasteSpecial	= 57639,
	DrawingViewEditEditEditLinks	= 57857,
	DrawingViewEditEditBinder	= 33090,
	DrawingViewEditEditSelectAllInView	= 10101,
	DrawingViewEditToolSelectTool	= 57082,
	DrawingViewEditToolEdgeBar	= 32899,
	DrawingViewEditToolDraw	= 10512,
	DrawingViewEditToolLabel	= 10509,
	DrawingViewEditToolRelationships	= 10510,
	DrawingViewEditToolSketchPoint	= 10502,
	DrawingViewEditToolVariables	= 10504,
	DrawingViewEditToolMeasureDistance	= 10921,
	DrawingViewEditToolMeasureArea	= 10922,
	DrawingViewEditToolAreaProperties	= 10515,
	DrawingViewEditToolMeasureTotalLength	= 45051,
	DrawingViewEditToolIntelliSketch	= 10507,
	DrawingViewEditToolReduceFile	= 32895,
	DrawingViewEditToolMacro	= 10505,
	DrawingViewEditToolCustomize	= 40010,
	DrawingViewEditToolChangesvariouscategoriesofSolidEdgeDraftoptions	= 10508,
	DrawingViewEditToolAddInManager	= 40016,
	DrawingViewEditToolShowGroups	= 10932,
	DrawingViewEditToolLocateGroups	= 10934,
	DrawingViewEditViewZoomArea	= 10201,
	DrawingViewEditViewZoom	= 10209,
	DrawingViewEditViewFit	= 10202,
	DrawingViewEditViewPan	= 10203,
	DrawingViewEditViewRefreshWindow	= 32876,
	DrawingViewEditViewPreviousView	= 10200,
	DrawingViewEditViewNextView	= 32959,
	DrawingViewEditViewZoomTool	= 33500,
	DrawingViewEditViewToolbars	= 40009,
	DrawingViewEditViewBackgroundSheet	= 10211,
	DrawingViewEditViewWorkingsheet	= 10212,
	DrawingViewEditViewDeleteSheet	= 10106,
	DrawingViewEditViewInsertSheet	= 10302,
	DrawingViewEditHelpHelp	= 57669,
	DrawingViewEditHelpSolidEdgeHelp	= 57666,
	DrawingViewEditHelpSolidEdgeWelcome	= 40017,
	DrawingViewEditHelpWhatsNew	= 40253,
	DrawingViewEditHelpHelpforAutoCADUsers	= 40250,
	DrawingViewEditHelpTutorials	= 40218,
	DrawingViewEditHelpProgrammingwithSolidEdge	= 40232,
	DrawingViewEditHelpTipoftheDay	= 10702,
	DrawingViewEditHelpSolidEdgeontheWeb	= 40500,
	DrawingViewEditHelpAboutSolidEdge	= 57664,
	DrawingViewEditDrawLine	= 10900,
	DrawingViewEditDrawTangentArc	= 10901,
	DrawingViewEditDrawArcby3Points	= 10902,
	DrawingViewEditDrawArcbyCenterPoint	= 10903,
	DrawingViewEditDrawTangentCircle	= 10904,
	DrawingViewEditDrawCircleby3Points	= 10905,
	DrawingViewEditDrawCirclebyCenterPoint	= 10906,
	DrawingViewEditDrawEllipseby3Points	= 10907,
	DrawingViewEditDrawEllipsebyCenterPoint	= 10908,
	DrawingViewEditDrawRectangle	= 10909,
	DrawingViewEditDrawCurve	= 10910,
	DrawingViewEditDrawPoint	= 10130,
	DrawingViewEditDrawFreeSketch	= 10913,
	DrawingViewEditDrawFreeForm	= 10912,
	DrawingViewEditDrawShowEdges	= 11102,
	DrawingViewEditDrawHideEdges	= 11103,
	DrawingViewEditDrawEdgePainter	= 40233,
	DrawingViewEditDrawOffset	= 11307,
	DrawingViewEditDrawSymmetricOffset	= 45050,
	DrawingViewEditRelationshipsFillet	= 10923,
	DrawingViewEditRelationshipsChamfer	= 10924,
	DrawingViewEditRelationshipsExtendtoNext	= 10959,
	DrawingViewEditRelationshipsTrim	= 10956,
	DrawingViewEditRelationshipsTrimCorner	= 10957,
	DrawingViewEditRelationshipsMove	= 10930,
	DrawingViewEditRelationshipsRotate	= 10929,
	DrawingViewEditRelationshipsMirror	= 10931,
	DrawingViewEditRelationshipsScale	= 10933,
	DrawingViewEditRelationshipsStretch	= 10990,
	DrawingViewEditRelationshipsAlignViews	= 11100,
	DrawingViewEditRelationshipsUnalignViews	= 11101,
	DrawingViewEditRelationshipsBringtoFront	= 10935,
	DrawingViewEditRelationshipsSendtoBack	= 10936,
	DrawingViewEditRelationshipsPullUp	= 10937,
	DrawingViewEditRelationshipsPushDown	= 10938,
	DrawingViewEditGroupGroup	= 10925,
	DrawingViewEditGroupUngroup	= 10926,
	DrawingViewEditGroupRectangularPattern	= 10927,
	DrawingViewEditGroupCircularPattern	= 10928,
	DrawingViewEditDimensionSmartDimension	= 10914,
	DrawingViewEditDimensionDistanceBetween	= 10917,
	DrawingViewEditDimensionAngleBetween	= 10918,
	DrawingViewEditDimensionCoordinateDimension	= 33105,
	DrawingViewEditDimensionSymmetricDiameter	= 32801,
	DrawingViewEditDimensionChamfer	= 25041,
	DrawingViewEditDimensionDimensionAxis	= 33106,
	DrawingViewEditDimensionPrefixCopier	= 11308,
	DrawingViewEditDimensionAttachDimension	= 10950,
	DrawingViewEditDimensionTrackDimensionChanges	= 32888,
	DrawingViewEditDimensionRelationshipAssistant	= 32896,
	DrawingViewEditDimensionHoleTable	= 10516,
	DrawingViewEditDimensionUpdatePropertyText	= 32901,
	DrawingViewEditDimensionRetrieveDimensions	= 32803,
	DrawingViewEditDimensionCenterMark	= 32808,
	DrawingViewEditDimensionFeatureControlFrame	= 33102,
	DrawingViewEditDimensionDatumFrame	= 33103,
	DrawingViewEditDimensionDatumTarget	= 33104,
	DrawingViewEditDimensionFill	= 33107,
	DrawingViewEditDimensionCenterLine	= 32807,
	DrawingViewEditTextText	= 10949,
	DrawingViewEditTextCharacterMap	= 10954,
	DrawingViewEditTextCallout	= 32854,
	DrawingViewEditTextLeader	= 32855,
	DrawingViewEditTextBalloon	= 32856,
	DrawingViewEditTextSurfaceTextureSymbol	= 32857,
	DrawingViewEditTextWeldSymbol	= 32858,
	DrawingViewEditTextEdgeCondition	= 32873
    } 	DrawingViewEditCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum CuttingPlaneLineCommandConstants
    {	CuttingPlaneLineDrawingLine	= 10900,
	CuttingPlaneLineDrawingArcbyCenterPoint	= 10903,
	CuttingPlaneLineChangeTrim	= 10956,
	CuttingPlaneLineChangeTrimCorner	= 10957,
	CuttingPlaneLineToolSelectTool	= 57082,
	CuttingPlaneLineToolIntelliSketch	= 10507,
	CuttingPlaneLineHelpHelp	= 57669,
	CuttingPlaneLineHelpSolidEdgeHelp	= 57666,
	CuttingPlaneLineHelpSolidEdgeWelcome	= 40017,
	CuttingPlaneLineHelpWhatsNew	= 40253,
	CuttingPlaneLineHelpHelpforAutoCADUsers	= 40250,
	CuttingPlaneLineHelpTutorials	= 40218,
	CuttingPlaneLineHelpProgrammingwithSolidEdge	= 40232,
	CuttingPlaneLineHelpTipoftheDay	= 10702,
	CuttingPlaneLineHelpSolidEdgeontheWeb	= 40500,
	CuttingPlaneLineHelpAboutSolidEdge	= 57664,
	CuttingPlaneLineEditUndo	= 57643,
	CuttingPlaneLineEditRedo	= 57644,
	CuttingPlaneLineEditUndoList	= 10112,
	CuttingPlaneLineEditRedoList	= 10113,
	CuttingPlaneLineRelationshipsConnect	= 10940,
	CuttingPlaneLineRelationshipsHorizontalVertical	= 10941,
	CuttingPlaneLineRelationshipsParallel	= 10939,
	CuttingPlaneLineRelationshipsPerpendicular	= 10942,
	CuttingPlaneLineRelationshipsColinear	= 10946,
	CuttingPlaneLineDimensionDistanceBetween	= 10917,
	CuttingPlaneLineDimensionAngleBetween	= 10918,
	CuttingPlaneLineViewZoomArea	= 10201,
	CuttingPlaneLineViewZoom	= 10209,
	CuttingPlaneLineViewFit	= 10202,
	CuttingPlaneLineViewPreviousView	= 10200,
	CuttingPlaneLineViewZoomTool	= 33500,
	CuttingPlaneLineViewRefreshWindow	= 32876
    } 	CuttingPlaneLineCommandConstants;

typedef /* [helpstring][helpcontext] */ 
enum DraftGlobalConstants
    {	seDraftSelectToolWireFrameFilter	= 1,
	seDraftSelectToolRelationHandleFilter	= 2,
	seDraftSelectToolDimensionAnnotationFilter	= 3,
	seDraftSelectToolTextFilter	= 4,
	seDraftSelectToolDrawingViewFilter	= 5,
	seDraftSelectToolActiveLayerFilter	= 6
    } 	DraftGlobalConstants;

typedef /* [helpstring][helpcontext] */ 
enum DrawingViewShadingQualityConstants
    {	igShadingQualityLevel1	= 1,
	igShadingQualityLevel2	= 2,
	igShadingQualityLevel3	= 3,
	igShadingQualityLevel4	= 4
    } 	DrawingViewShadingQualityConstants;

typedef /* [helpstring][helpcontext] */ 
enum DrawingViewSnapShotQualityConstants
    {	igViewIsNotSnapShot	= -1,
	igSnapShotQualityLevel1	= 1,
	igSnapShotQualityLevel2	= 2,
	igSnapShotQualityLevel3	= 3,
	igSnapShotQualityLevel4	= 4,
	igSnapShotQualityLevel5	= 5
    } 	DrawingViewSnapShotQualityConstants;

typedef /* [helpstring][helpcontext] */ 
enum DrawingViewVHL_ToleranceOverrideQualityConstants
    {	igViewNotVHL	= -1,
	igVHL_Tolerance_Use_SE_Default	= 0,
	igVHL_ToleranceOverrideQualityLevel1	= 1,
	igVHL_ToleranceOverrideQualityLevel2	= 2,
	igVHL_ToleranceOverrideQualityLevel3	= 3,
	igVHL_ToleranceOverrideQualityLevel4	= 4,
	igVHL_ToleranceOverrideQualityLevel5	= 5
    } 	DrawingViewVHL_ToleranceOverrideQualityConstants;

typedef /* [helpstring][helpcontext] */ 
enum DrawingViewBsplineSimplificationConstants
    {	igAlwaysSimplify	= 0,
	igSimplifyNonPlanarOnly	= 1,
	igNeverSimplify	= 2
    } 	DrawingViewBsplineSimplificationConstants;

typedef /* [helpstring][helpcontext] */ 
enum DrawingViewIntersectionProcessingConstants
    {	igNoIntersectionProcessing	= 0,
	igNoInterferenceEdges	= 1,
	igInterferenceEdgesThreadedPartsOnly	= 2,
	igInterferenceEdgesAllParts	= 3
    } 	DrawingViewIntersectionProcessingConstants;

typedef /* [helpstring][helpcontext] */ 
enum TitlePosition
    {	igHeader	= 0,
	igFooter	= 1,
	igFooterAndHeader	= 2,
	igNeither	= 3
    } 	TitlePosition;

typedef /* [helpstring][helpcontext] */ 
enum DimensionTrackerReasonCode
    {	igDTRC_Unknown	= 0,
	igDTRC_ValueChanged	= 1,
	igDTRC_TerminatorMoved	= 2,
	igDTRC_DetachedRebindFailure	= 3,
	igDTRC_DetachedNoEdgeInformation	= 4,
	igDTRC_Deleted	= 5,
	igDTRC_ReattachedToAvailableGeometry	= 6,
	igDTRC_ContentChanged	= 7
    } 	DimensionTrackerReasonCode;


EXTERN_C const IID LIBID_SolidEdgeConstants;
#endif /* __SolidEdgeConstants_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


