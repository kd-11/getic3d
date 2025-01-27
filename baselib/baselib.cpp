// --------------------------------------------------------------------------------------
// Copyright (c) 2000-2005 Zalsoft Inc
// Copyright: zalsoft Inc
// --------------------------------------------------------------------------------------

#include "baselib.h"
#include "basecont.h"

#define _PLATFORM_ "LINUX"

#ifndef _PLATFORM_
#error("Error:  Please define platform: _CFG_WIN32_WIN, GNU_WIN or GNU_LINUX")
#else
#warning(_PLATFORM_)
#endif //


CLR ZBLACK(0, 0, 0);
CLR ZLIGHTGRAY(192,192,192);
CLR ZGREY(128,128,128);
CLR ZMEDIUMGRAY(128,128,128);
CLR ZRED(255,0,0);
CLR ZGREEN(0,255,0);
CLR ZYELLOW(255,255,0);
CLR ZBLUE(0,0,255);
CLR ZWHITE(255,255,255);
CLR ZCYAN(0,255,255);
CLR ZREDLIGHT(255,119,119);
CLR ZBLUELIGHT(119,119,255);
CLR ZGREENLIGHT(119,255,119);


V3 VX(1.0,0.0,0.0);
V3 VZ(0.0,0.0,1.0);
V3 VY(0.0,1.0,0.0);
V3 V0(0.0,0.0,0.0);
V3 V1(1.0,1.0,1.0);

// bounding box corner normals. used to clip box against it's movement
V3   Box::_norms[8]=
{	V3(-Cosr(PIPE4),-Cosr(PIPE4),-Cosr(PIPE4)),			
    V3( Cosr(PIPE4), Cosr(PIPE4), Cosr(PIPE4)),			
    V3( Cosr(PIPE4),-Cosr(PIPE4),-Cosr(PIPE4)),			
    V3(-Cosr(PIPE4), Cosr(PIPE4), Cosr(PIPE4)),			
    V3( Cosr(PIPE4), Cosr(PIPE4),-Cosr(PIPE4)),			
    V3(-Cosr(PIPE4),-Cosr(PIPE4), Cosr(PIPE4)),			
    V3(-Cosr(PIPE4), Cosr(PIPE4),-Cosr(PIPE4)),			
    V3( Cosr(PIPE4),-Cosr(PIPE4), Cosr(PIPE4))	
};


BOOL   Sphere::FindRayIP(const V3& start, const V3& end, V3& ip)
{
	return 0;   
}

