// $Log: /CurrZ-Appx/appxsdk/include/SEConstants.h $ 
// 
// 2     2/09/99 5:12p Jedelmas
// Mass Update:  Changing Intergraph string to Unigraphics Solutions.
// Adding $Log: VSS keyword to enable check-in comments to be inserted
// into file.

/*
    Copyright (C) 1999 Unigraphics Solutions.  All rights reserved.
	Constant for the Solid Edge mouse control.
*/


enum 
{
	igLocateOff	= 0,
	igLocateSimple = 1,
	igLocateQuickPick = 2
} LocateModeConstants; 

enum
{
	igDynamicsOff = 0,
	igDynamicsLine = 1,
	igDynamicsCircleByCenter = 2,
	igDynamicsRectangle = 3
} DynamicModeConstants;

enum 
{
	igLocateGeometry2d = 0,
	igLocateArc2d = 1,
	igLocateBspCurve2d = 2,
	igLocateCircle2d = 3,
	igLocateComplexString2d = 4,
	igLocateCurve2d = 5,
	igLocateEllipse2d = 6,
	igLocateLine2d = 7,
	igLocateLineString2d = 8,
	igLocatePoint2d = 9,
	igLocateBoundary2d = 10,
	igLocateProfile = 11,
	igLocateHole2d = 12,
	igLocatePoint	= 13,
	igLocateLine = 14,
	igLocateLineString = 15,
	igLocateEllipse = 16,
	igLocateArc = 17,
	igLocateBspCurve = 18, 
	igLocateComplexString = 19,
	igLocatePlane = 20,
	igLocateCone = 21,
	igLocateSphere = 22,
	igLocateTorus = 23,
	igLocateProjectedFace = 24,
	igLocateRevolvedFace = 25,
	igLocateBspSurfaceFace = 26,
	igLocateBoundary = 27,
	igLocateRuledFace = 28,
	igLocatePolyMesh = 29,
	igLocateRefPlane = 30,
	igLocateEdge = 31,
	igLocateFace = 32,
	igLocateVertex = 33,
	igLocateDrivingDimension = 34,
	igLocateFeature = 35,
	igLocateRefAxis = 36,
	igLocatePart = 37,
	igLocateCenterMark = 38,
	igLocateCenterLine = 39,
	igLocateCuttingPlane = 40,
	igLocateDrawingView = 41,
	igLocateDetailEnvelope = 42,
	igLocateViewPlane = 43,
	igLocateCrossSection = 44,
	igLocateLeader = 45,
	igLocateDatumFrame = 46,
	igLocateDatumTarget = 47,
	igLocateFeatureControlFrame = 48,
	igLocateSurfaceFinishSymbols = 49,
	igLocateWeldSymbols = 50,
	igLocateBalloon = 51,
	igLocateSmartFrame2d = 52,
	igLocateTextBox = 53,
	igLocateCallout = 54,
	igLocateRelation2d = 55,
} LocateFilterConstants; 
