

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Tue Mar 08 19:38:43 2011
 */
/* Compiler settings for earth.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "earth.h"

#define TYPE_FORMAT_STRING_SIZE   1443                              
#define PROC_FORMAT_STRING_SIZE   3949                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _earth_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } earth_MIDL_TYPE_FORMAT_STRING;

typedef struct _earth_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } earth_MIDL_PROC_FORMAT_STRING;

typedef struct _earth_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } earth_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const earth_MIDL_TYPE_FORMAT_STRING earth__MIDL_TypeFormatString;
extern const earth_MIDL_PROC_FORMAT_STRING earth__MIDL_ProcFormatString;
extern const earth_MIDL_EXPR_FORMAT_STRING earth__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITimeGE_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITimeGE_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITimeIntervalGE_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITimeIntervalGE_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ICameraInfoGE_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICameraInfoGE_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITourControllerGE_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITourControllerGE_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISearchControllerGE_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISearchControllerGE_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAnimationControllerGE_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAnimationControllerGE_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IViewExtentsGE_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IViewExtentsGE_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFeatureGE_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFeatureGE_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFeatureCollectionGE_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFeatureCollectionGE_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPointOnTerrainGE_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPointOnTerrainGE_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IApplicationGE_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IApplicationGE_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IKHViewInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IKHViewInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IKHViewExtents_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IKHViewExtents_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IKHFeature_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IKHFeature_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IKHInterface_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IKHInterface_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const earth_MIDL_PROC_FORMAT_STRING earth__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_Type */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pType */

/* 24 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Type */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x8 ),	/* 8 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 60 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hasView */


	/* Procedure get_Count */


	/* Procedure get_Year */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x9 ),	/* 9 */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x24 ),	/* 36 */
/* 86 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 88 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter count */


	/* Parameter pYear */

/* 96 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Year */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0xa ),	/* 10 */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter year */

/* 132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ZeroElevationExaggeration */


	/* Procedure get_Highlighted */


	/* Procedure get_Month */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0xb ),	/* 11 */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x24 ),	/* 36 */
/* 158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pZeroExag */


	/* Parameter pVal */


	/* Parameter pMonth */

/* 168 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Month */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0xc ),	/* 12 */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 196 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter month */

/* 204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Cycles */


	/* Procedure get_Day */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0xd ),	/* 13 */
/* 224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x24 ),	/* 36 */
/* 230 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCycles */


	/* Parameter pDay */

/* 240 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Cycles */


	/* Procedure put_Day */

/* 252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0xe ),	/* 14 */
/* 260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 266 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 268 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cycles */


	/* Parameter day */

/* 276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 284 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Hour */

/* 288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0xf ),	/* 15 */
/* 296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x24 ),	/* 36 */
/* 302 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 304 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pHour */

/* 312 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 320 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Hour */

/* 324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x10 ),	/* 16 */
/* 332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 340 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hour */

/* 348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Minute */

/* 360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x11 ),	/* 17 */
/* 368 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x24 ),	/* 36 */
/* 374 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 376 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMinute */

/* 384 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Minute */

/* 396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x12 ),	/* 18 */
/* 404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 410 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 412 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter minute */

/* 420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 422 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 428 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Second */

/* 432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x13 ),	/* 19 */
/* 440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x24 ),	/* 36 */
/* 446 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 448 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSecond */

/* 456 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 458 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Second */

/* 468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x14 ),	/* 20 */
/* 476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 482 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 484 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter second */

/* 492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TimeZone */

/* 504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x15 ),	/* 21 */
/* 512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x2c ),	/* 44 */
/* 518 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 520 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTimeZone */

/* 528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 532 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TimeZone */

/* 540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x16 ),	/* 22 */
/* 548 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 550 */	NdrFcShort( 0x10 ),	/* 16 */
/* 552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 554 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 556 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timeZone */

/* 564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 568 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x17 ),	/* 23 */
/* 584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 592 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTime */

/* 600 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 604 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConvertToZone */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x18 ),	/* 24 */
/* 620 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 622 */	NdrFcShort( 0x10 ),	/* 16 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timeZone */

/* 636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 640 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pTime */

/* 642 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 646 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 650 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BeginTime */

/* 654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x7 ),	/* 7 */
/* 662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 668 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 670 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTime */

/* 678 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 682 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndTime */

/* 690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 698 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 704 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 706 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTime */

/* 714 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 718 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_north */


	/* Procedure get_latitude */


	/* Procedure get_Latitude */


	/* Procedure get_North */


	/* Procedure get_FocusPointLatitude */

/* 726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x7 ),	/* 7 */
/* 734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x2c ),	/* 44 */
/* 740 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 742 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pLat */


	/* Parameter pLat */


	/* Parameter pVal */


	/* Parameter pLat */

/* 750 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 752 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 754 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 758 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_latitude */


	/* Procedure put_FocusPointLatitude */

/* 762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 772 */	NdrFcShort( 0x10 ),	/* 16 */
/* 774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 776 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 778 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lat */


	/* Parameter lat */

/* 786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 788 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 790 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_east */


	/* Procedure get_longitude */


	/* Procedure get_Altitude */


	/* Procedure get_East */


	/* Procedure get_Speed */


	/* Procedure get_FocusPointLongitude */

/* 798 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x9 ),	/* 9 */
/* 806 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x2c ),	/* 44 */
/* 812 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 814 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pLon */


	/* Parameter pAlt */


	/* Parameter pVal */


	/* Parameter pSpeed */


	/* Parameter pLon */

/* 822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 826 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_longitude */


	/* Procedure put_Speed */


	/* Procedure put_FocusPointLongitude */

/* 834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0xa ),	/* 10 */
/* 842 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 844 */	NdrFcShort( 0x10 ),	/* 16 */
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 850 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lon */


	/* Parameter speed */


	/* Parameter lon */

/* 858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 860 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 862 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_range */


	/* Procedure get_PauseDelay */


	/* Procedure get_FocusPointAltitude */

/* 870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0xb ),	/* 11 */
/* 878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x2c ),	/* 44 */
/* 884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 886 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pRange */


	/* Parameter pPauseDelay */


	/* Parameter pAlt */

/* 894 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 898 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_range */


	/* Procedure put_PauseDelay */


	/* Procedure put_FocusPointAltitude */

/* 906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0xc ),	/* 12 */
/* 914 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 916 */	NdrFcShort( 0x10 ),	/* 16 */
/* 918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 920 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 922 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter range */


	/* Parameter pauseDelay */


	/* Parameter alt */

/* 930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 934 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FocusPointAltitudeMode */

/* 942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0xd ),	/* 13 */
/* 950 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x24 ),	/* 36 */
/* 956 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 958 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAltMode */

/* 966 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 970 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FocusPointAltitudeMode */

/* 978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0xe ),	/* 14 */
/* 986 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 992 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 994 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter altMode */

/* 1002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1006 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 1008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1010 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_azimuth */


	/* Procedure get_Range */

/* 1014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0xf ),	/* 15 */
/* 1022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1028 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1030 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAzimuth */


	/* Parameter pRange */

/* 1038 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1042 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_azimuth */


	/* Procedure put_Range */

/* 1050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1058 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1060 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1062 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1064 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1066 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter azimuth */


	/* Parameter range */

/* 1074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1076 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1078 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1082 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tilt */

/* 1086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1094 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1100 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1102 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTilt */

/* 1110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1112 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1114 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1118 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Tilt */

/* 1122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1130 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1132 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1136 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1138 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tilt */

/* 1146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1150 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Azimuth */

/* 1158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1172 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1174 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAzimuth */

/* 1182 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1186 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Azimuth */

/* 1194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1202 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1204 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1208 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1210 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter azimuth */

/* 1218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1222 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1226 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Play */


	/* Procedure PlayOrPause */

/* 1230 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1238 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1244 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1246 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 1254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1256 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Pause */


	/* Procedure Stop */

/* 1260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1274 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1276 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 1284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Search */

/* 1290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1304 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1306 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter searchString */

/* 1314 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1318 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 1320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_streamingProgressPercentage */


	/* Procedure get_Visibility */


	/* Procedure IsSearchInProgress */

/* 1326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1340 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1342 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter inProgress */

/* 1350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1358 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetResults */

/* 1362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1376 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1378 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pResults */

/* 1386 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1390 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 1392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearResults */

/* 1398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0xa ),	/* 10 */
/* 1406 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1412 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1414 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SliderTimeInterval */

/* 1428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1442 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1444 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pInterval */

/* 1452 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1456 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Return value */

/* 1458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentTimeInterval */

/* 1464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1470 */	NdrFcShort( 0xa ),	/* 10 */
/* 1472 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1478 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1480 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pInterval */

/* 1488 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1490 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1492 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Return value */

/* 1494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1496 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CurrentTimeInterval */

/* 1500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0xb ),	/* 11 */
/* 1508 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1514 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1516 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter interval */

/* 1524 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1526 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1528 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 1530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1532 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_south */


	/* Procedure get_Longitude */


	/* Procedure get_South */

/* 1536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1544 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1550 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1552 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pLon */


	/* Parameter pVal */

/* 1560 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1562 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1564 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1568 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_west */


	/* Procedure get_West */

/* 1572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1578 */	NdrFcShort( 0xa ),	/* 10 */
/* 1580 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1586 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1588 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1596 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1600 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 1608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1622 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1624 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 1632 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1636 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 1638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Visibility */

/* 1644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1650 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1658 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1660 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1670 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1676 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StreamingProgressPercentage */


	/* Procedure get_ProjectedOntoGlobe */


	/* Procedure get_HasView */

/* 1680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0xa ),	/* 10 */
/* 1688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1694 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1696 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pProjected */


	/* Parameter pVal */

/* 1704 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1712 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Highlight */

/* 1716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0xc ),	/* 12 */
/* 1724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1730 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1732 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParent */

/* 1746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1752 */	NdrFcShort( 0xd ),	/* 13 */
/* 1754 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1760 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1762 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pParent */

/* 1770 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1772 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1774 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Return value */

/* 1776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetChildren */

/* 1782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0xe ),	/* 14 */
/* 1790 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1796 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1798 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pChildren */

/* 1806 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1808 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1810 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 1812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1814 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TimeInterval */

/* 1818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0xf ),	/* 15 */
/* 1826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1832 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1834 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pInterval */

/* 1842 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1846 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Return value */

/* 1848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 1854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1862 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1868 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1870 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppUnk */

/* 1878 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1880 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1882 */	NdrFcShort( 0x9c ),	/* Type Offset=156 */

	/* Return value */

/* 1884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1886 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 1890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1898 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1904 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1906 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 1914 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFeature */

/* 1920 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1922 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1924 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Return value */

/* 1926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCamera */

/* 1932 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1940 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1946 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1948 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter considerTerrain */

/* 1956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1958 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCamera */

/* 1962 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1964 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1966 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Return value */

/* 1968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1970 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCamera */

/* 1974 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1982 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1984 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1988 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1990 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter camera */

/* 1998 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2000 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2002 */	NdrFcShort( 0xb6 ),	/* Type Offset=182 */

	/* Parameter speed */

/* 2004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2006 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2008 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2012 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCameraParams */

/* 2016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2024 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 2026 */	NdrFcShort( 0x78 ),	/* 120 */
/* 2028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2030 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x9,		/* 9 */
/* 2032 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lat */

/* 2040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2044 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter lon */

/* 2046 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2048 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2050 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter alt */

/* 2052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2054 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2056 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter altMode */

/* 2058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2060 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2062 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter range */

/* 2064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2066 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2068 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter tilt */

/* 2070 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2072 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2074 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter azimuth */

/* 2076 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2078 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2080 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter speed */

/* 2082 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2084 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 2086 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2090 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 2092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveScreenShot */

/* 2094 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0xb ),	/* 11 */
/* 2102 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2108 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2110 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fileName */

/* 2118 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2120 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2122 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter quality */

/* 2124 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2126 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2132 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenKmlFile */

/* 2136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0xc ),	/* 12 */
/* 2144 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2150 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2152 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fileName */

/* 2160 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2164 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter suppressMessages */

/* 2166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2168 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2174 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadKmlData */

/* 2178 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0xd ),	/* 13 */
/* 2186 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2192 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2194 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter kmlData */

/* 2202 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2204 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2206 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 2208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2210 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AutoPilotSpeed */

/* 2214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0xe ),	/* 14 */
/* 2222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2226 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2228 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2230 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2238 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2242 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AutoPilotSpeed */

/* 2250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0xf ),	/* 15 */
/* 2258 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2260 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2264 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2266 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2274 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2276 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2278 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2282 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ViewExtents */

/* 2286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2294 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2300 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2302 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2310 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2312 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2314 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Return value */

/* 2316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2318 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFeatureByName */

/* 2322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2330 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2336 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2338 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2346 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2348 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2350 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter pFeature */

/* 2352 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2354 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2356 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Return value */

/* 2358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2360 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFeatureByHref */

/* 2364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2370 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2372 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2378 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2380 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2384 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter href */

/* 2388 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2390 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2392 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter pFeature */

/* 2394 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2396 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2398 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Return value */

/* 2400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2402 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetFeatureView */

/* 2406 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2412 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2414 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2416 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2420 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2422 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter feature */

/* 2430 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2434 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter speed */

/* 2436 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2438 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2440 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2444 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPointOnTerrainFromScreenCoords */

/* 2448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2456 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2458 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2462 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter screen_x */

/* 2472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2476 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter screen_y */

/* 2478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2480 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2482 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pPoint */

/* 2484 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2486 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2488 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Return value */

/* 2490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2492 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VersionMajor */

/* 2496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2504 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2508 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2510 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2512 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter major */

/* 2520 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2522 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2528 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VersionMinor */

/* 2532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2546 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2548 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter minor */

/* 2556 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isClientInitialized */


	/* Procedure get_VersionBuild */

/* 2568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2582 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2584 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter isInitialized */


	/* Parameter build */

/* 2592 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2594 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2600 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VersionAppType */

/* 2604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2610 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2618 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2620 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appType */

/* 2628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2630 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2632 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsInitialized */

/* 2640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x19 ),	/* 25 */
/* 2648 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2654 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2656 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter isInitialized */

/* 2664 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsOnline */

/* 2676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2688 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2690 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2692 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter isOnline */

/* 2700 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Login */

/* 2712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x1b ),	/* 27 */
/* 2720 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2726 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2728 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2736 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Logout */

/* 2742 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2750 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2756 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2758 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShowDescriptionBalloon */

/* 2772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2786 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2788 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter feature */

/* 2796 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2800 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 2802 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HideDescriptionBalloons */

/* 2808 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2816 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2822 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2824 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2834 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetHighlightedFeature */

/* 2838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2844 */	NdrFcShort( 0x1f ),	/* 31 */
/* 2846 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2852 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2854 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFeature */

/* 2862 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2864 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2866 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Return value */

/* 2868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2870 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMyPlaces */

/* 2874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2882 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2888 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2890 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMyPlaces */

/* 2898 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2902 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Return value */

/* 2904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTemporaryPlaces */

/* 2910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2918 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2924 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2926 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTemporaryPlaces */

/* 2934 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2938 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Return value */

/* 2940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2942 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLayersDatabases */

/* 2946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2952 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2954 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2960 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2962 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pDatabases */

/* 2970 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2972 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2974 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 2976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2978 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ElevationExaggeration */

/* 2982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2988 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2990 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2996 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2998 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pExaggeration */

/* 3006 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3008 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3010 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3014 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ElevationExaggeration */

/* 3018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3024 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3026 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3028 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3034 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter exaggeration */

/* 3042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3046 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3050 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMainHwnd */

/* 3054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x25 ),	/* 37 */
/* 3062 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3066 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3068 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3070 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 3078 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TourController */

/* 3090 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x26 ),	/* 38 */
/* 3098 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3104 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3106 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTourController */

/* 3114 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3118 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Return value */

/* 3120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3122 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SearchController */

/* 3126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3132 */	NdrFcShort( 0x27 ),	/* 39 */
/* 3134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3140 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3142 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSearchController */

/* 3150 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3154 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 3156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3158 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AnimationController */

/* 3162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3168 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3176 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3178 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAnimationController */

/* 3186 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3190 */	NdrFcShort( 0x124 ),	/* Type Offset=292 */

	/* Return value */

/* 3192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRenderHwnd */

/* 3198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3204 */	NdrFcShort( 0x29 ),	/* 41 */
/* 3206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3210 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3212 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3214 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 3222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3230 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_autopilotSpeed */


	/* Procedure get_tilt */

/* 3234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3240 */	NdrFcShort( 0xd ),	/* 13 */
/* 3242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3246 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3250 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pTilt */

/* 3258 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3262 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_autopilotSpeed */


	/* Procedure put_tilt */

/* 3270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3276 */	NdrFcShort( 0xe ),	/* 14 */
/* 3278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3280 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3284 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3286 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter tilt */

/* 3294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3298 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_visibility */

/* 3306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3312 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3318 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3320 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3322 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_visibility */

/* 3342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3356 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3358 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure currentView */

/* 3378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3386 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3392 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3394 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter terrain */

/* 3402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pView */

/* 3408 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3412 */	NdrFcShort( 0x13a ),	/* Type Offset=314 */

	/* Return value */

/* 3414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveScreenShot */

/* 3420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3428 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3434 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3436 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3440 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fileName */

/* 3444 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3448 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter quality */

/* 3450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenFile */

/* 3462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3468 */	NdrFcShort( 0xa ),	/* 10 */
/* 3470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3476 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3478 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3482 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fileName */

/* 3486 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3490 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 3492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QuitApplication */

/* 3498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0xb ),	/* 11 */
/* 3506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetRenderWindowSize */

/* 3528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3534 */	NdrFcShort( 0xc ),	/* 12 */
/* 3536 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3538 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3544 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter width */

/* 3552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 3558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentViewExtents */

/* 3570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3576 */	NdrFcShort( 0xf ),	/* 15 */
/* 3578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3584 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3594 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3598 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */

	/* Return value */

/* 3600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setView */

/* 3606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3612 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3614 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3616 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3620 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3622 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter view */

/* 3630 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3634 */	NdrFcShort( 0x13e ),	/* Type Offset=318 */

	/* Parameter terrain */

/* 3636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter speed */

/* 3642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3646 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3650 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadKml */

/* 3654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3660 */	NdrFcShort( 0x11 ),	/* 17 */
/* 3662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3668 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3670 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter kmlData */

/* 3678 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3682 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 3684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getFeatureByName */

/* 3690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3696 */	NdrFcShort( 0x12 ),	/* 18 */
/* 3698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3704 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3706 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3710 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3714 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3718 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter pFeature */

/* 3720 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3724 */	NdrFcShort( 0x166 ),	/* Type Offset=358 */

	/* Return value */

/* 3726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setViewParams */

/* 3732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3738 */	NdrFcShort( 0x13 ),	/* 19 */
/* 3740 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 3742 */	NdrFcShort( 0x68 ),	/* 104 */
/* 3744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3746 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 3748 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lat */

/* 3756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3760 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter lon */

/* 3762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3766 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter range */

/* 3768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3770 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3772 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter tilt */

/* 3774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3776 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3778 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter azimuth */

/* 3780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3782 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3784 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter terrain */

/* 3786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3788 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter speed */

/* 3792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3794 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3796 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3800 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setFeatureView */

/* 3804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3810 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3812 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3814 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3818 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3820 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter feature */

/* 3828 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3832 */	NdrFcShort( 0x16a ),	/* Type Offset=362 */

	/* Parameter speed */

/* 3834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3838 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3842 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPointOnTerrainFromScreenCoords */

/* 3846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3852 */	NdrFcShort( 0x15 ),	/* 21 */
/* 3854 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3856 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3860 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3862 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3864 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter screen_x */

/* 3870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3874 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter screen_y */

/* 3876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3880 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter coords */

/* 3882 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3884 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3886 */	NdrFcShort( 0x598 ),	/* Type Offset=1432 */

	/* Return value */

/* 3888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3890 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCurrentVersion */

/* 3894 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3900 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3902 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3906 */	NdrFcShort( 0x78 ),	/* 120 */
/* 3908 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 3910 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter major */

/* 3918 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter minor */

/* 3924 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3926 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter build */

/* 3930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter appType */

/* 3936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3938 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3940 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 3942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3944 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const earth_MIDL_TYPE_FORMAT_STRING earth__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0xe,		/* FC_ENUM32 */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  8 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 12 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 14 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 16 */	NdrFcShort( 0x2 ),	/* Offset= 2 (18) */
/* 18 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 20 */	NdrFcLong( 0xe39391ae ),	/* -476868178 */
/* 24 */	NdrFcShort( 0x51c0 ),	/* 20928 */
/* 26 */	NdrFcShort( 0x4fbd ),	/* 20413 */
/* 28 */	0x90,		/* 144 */
			0x42,		/* 66 */
/* 30 */	0xf9,		/* 249 */
			0xc5,		/* 197 */
/* 32 */	0xb6,		/* 182 */
			0x9,		/* 9 */
/* 34 */	0x44,		/* 68 */
			0x45,		/* 69 */
/* 36 */	
			0x12, 0x0,	/* FC_UP */
/* 38 */	NdrFcShort( 0xe ),	/* Offset= 14 (52) */
/* 40 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 42 */	NdrFcShort( 0x2 ),	/* 2 */
/* 44 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 46 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 48 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 50 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 52 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (40) */
/* 58 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 60 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 62 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x4 ),	/* 4 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0xffde ),	/* Offset= -34 (36) */
/* 72 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 74 */	NdrFcShort( 0x2 ),	/* Offset= 2 (76) */
/* 76 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 78 */	NdrFcLong( 0x851d25e7 ),	/* -2061687321 */
/* 82 */	NdrFcShort( 0x785f ),	/* 30815 */
/* 84 */	NdrFcShort( 0x4db7 ),	/* 19895 */
/* 86 */	0x95,		/* 149 */
			0xf9,		/* 249 */
/* 88 */	0xa0,		/* 160 */
			0xef,		/* 239 */
/* 90 */	0x7e,		/* 126 */
			0x83,		/* 131 */
/* 92 */	0x6c,		/* 108 */
			0x44,		/* 68 */
/* 94 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 96 */	NdrFcShort( 0x2 ),	/* Offset= 2 (98) */
/* 98 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 100 */	NdrFcLong( 0xd794fe36 ),	/* -678101450 */
/* 104 */	NdrFcShort( 0x10b1 ),	/* 4273 */
/* 106 */	NdrFcShort( 0x4e7e ),	/* 20094 */
/* 108 */	0x95,		/* 149 */
			0x9d,		/* 157 */
/* 110 */	0x96,		/* 150 */
			0x38,		/* 56 */
/* 112 */	0x79,		/* 121 */
			0x4d,		/* 77 */
/* 114 */	0x2a,		/* 42 */
			0x1b,		/* 27 */
/* 116 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 118 */	NdrFcShort( 0x6 ),	/* Offset= 6 (124) */
/* 120 */	
			0x13, 0x0,	/* FC_OP */
/* 122 */	NdrFcShort( 0xffba ),	/* Offset= -70 (52) */
/* 124 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x4 ),	/* 4 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (120) */
/* 134 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 136 */	NdrFcShort( 0x2 ),	/* Offset= 2 (138) */
/* 138 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 140 */	NdrFcLong( 0x92547b06 ),	/* -1839957242 */
/* 144 */	NdrFcShort( 0x7 ),	/* 7 */
/* 146 */	NdrFcShort( 0x4820 ),	/* 18464 */
/* 148 */	0xb7,		/* 183 */
			0x6a,		/* 106 */
/* 150 */	0xc8,		/* 200 */
			0x4e,		/* 78 */
/* 152 */	0x40,		/* 64 */
			0x2c,		/* 44 */
/* 154 */	0xa7,		/* 167 */
			0x9,		/* 9 */
/* 156 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 158 */	NdrFcShort( 0x2 ),	/* Offset= 2 (160) */
/* 160 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 172 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 174 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 176 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 178 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 180 */	NdrFcShort( 0x2 ),	/* Offset= 2 (182) */
/* 182 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 184 */	NdrFcLong( 0x8d46bcd ),	/* 148138957 */
/* 188 */	NdrFcShort( 0xaf56 ),	/* -20650 */
/* 190 */	NdrFcShort( 0x4175 ),	/* 16757 */
/* 192 */	0x99,		/* 153 */
			0x9e,		/* 158 */
/* 194 */	0x6d,		/* 109 */
			0xdc,		/* 220 */
/* 196 */	0x37,		/* 55 */
			0x71,		/* 113 */
/* 198 */	0xc6,		/* 198 */
			0x4e,		/* 78 */
/* 200 */	
			0x11, 0x0,	/* FC_RP */
/* 202 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (62) */
/* 204 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 206 */	NdrFcShort( 0x2 ),	/* Offset= 2 (208) */
/* 208 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 210 */	NdrFcLong( 0x865ab2c1 ),	/* -2040876351 */
/* 214 */	NdrFcShort( 0x38c5 ),	/* 14533 */
/* 216 */	NdrFcShort( 0x492b ),	/* 18731 */
/* 218 */	0x8b,		/* 139 */
			0x71,		/* 113 */
/* 220 */	0xac,		/* 172 */
			0x73,		/* 115 */
/* 222 */	0xf5,		/* 245 */
			0xa7,		/* 167 */
/* 224 */	0xa4,		/* 164 */
			0x3d,		/* 61 */
/* 226 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 228 */	NdrFcShort( 0x2 ),	/* Offset= 2 (230) */
/* 230 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 232 */	NdrFcLong( 0xf4f7b301 ),	/* -185093375 */
/* 236 */	NdrFcShort( 0x7c59 ),	/* 31833 */
/* 238 */	NdrFcShort( 0x4851 ),	/* 18513 */
/* 240 */	0xba,		/* 186 */
			0x97,		/* 151 */
/* 242 */	0xc5,		/* 197 */
			0x1f,		/* 31 */
/* 244 */	0x11,		/* 17 */
			0xb,		/* 11 */
/* 246 */	0x59,		/* 89 */
			0xf,		/* 15 */
/* 248 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 250 */	NdrFcShort( 0x2 ),	/* Offset= 2 (252) */
/* 252 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 254 */	NdrFcLong( 0xd08577e0 ),	/* -796559392 */
/* 258 */	NdrFcShort( 0x365e ),	/* 13918 */
/* 260 */	NdrFcShort( 0x4216 ),	/* 16918 */
/* 262 */	0xb1,		/* 177 */
			0xa4,		/* 164 */
/* 264 */	0x19,		/* 25 */
			0x35,		/* 53 */
/* 266 */	0x3e,		/* 62 */
			0xac,		/* 172 */
/* 268 */	0x16,		/* 22 */
			0x2,		/* 2 */
/* 270 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 272 */	NdrFcShort( 0x2 ),	/* Offset= 2 (274) */
/* 274 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 276 */	NdrFcLong( 0x524e5b0f ),	/* 1380866831 */
/* 280 */	NdrFcShort( 0xd593 ),	/* -10861 */
/* 282 */	NdrFcShort( 0x45a6 ),	/* 17830 */
/* 284 */	0x9f,		/* 159 */
			0x87,		/* 135 */
/* 286 */	0x1b,		/* 27 */
			0xae,		/* 174 */
/* 288 */	0x7d,		/* 125 */
			0x33,		/* 51 */
/* 290 */	0x83,		/* 131 */
			0x73,		/* 115 */
/* 292 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 294 */	NdrFcShort( 0x2 ),	/* Offset= 2 (296) */
/* 296 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 298 */	NdrFcLong( 0xbe5e5f15 ),	/* -1101111531 */
/* 302 */	NdrFcShort( 0x8ec4 ),	/* -28988 */
/* 304 */	NdrFcShort( 0x4dcc ),	/* 19916 */
/* 306 */	0xb4,		/* 180 */
			0x8d,		/* 141 */
/* 308 */	0x99,		/* 153 */
			0x57,		/* 87 */
/* 310 */	0xd2,		/* 210 */
			0xde,		/* 222 */
/* 312 */	0x4d,		/* 77 */
			0x5,		/* 5 */
/* 314 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 316 */	NdrFcShort( 0x2 ),	/* Offset= 2 (318) */
/* 318 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 320 */	NdrFcLong( 0x45f89e39 ),	/* 1173921337 */
/* 324 */	NdrFcShort( 0x7a46 ),	/* 31302 */
/* 326 */	NdrFcShort( 0x4ca4 ),	/* 19620 */
/* 328 */	0x97,		/* 151 */
			0xe3,		/* 227 */
/* 330 */	0x8c,		/* 140 */
			0x5a,		/* 90 */
/* 332 */	0xa2,		/* 162 */
			0x52,		/* 82 */
/* 334 */	0x53,		/* 83 */
			0x1c,		/* 28 */
/* 336 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 338 */	NdrFcShort( 0x2 ),	/* Offset= 2 (340) */
/* 340 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 342 */	NdrFcLong( 0xd05d6e91 ),	/* -799183215 */
/* 346 */	NdrFcShort( 0x72da ),	/* 29402 */
/* 348 */	NdrFcShort( 0x4654 ),	/* 18004 */
/* 350 */	0xb8,		/* 184 */
			0xa7,		/* 167 */
/* 352 */	0xbc,		/* 188 */
			0xbd,		/* 189 */
/* 354 */	0x3b,		/* 59 */
			0x87,		/* 135 */
/* 356 */	0xe3,		/* 227 */
			0xb6,		/* 182 */
/* 358 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 360 */	NdrFcShort( 0x2 ),	/* Offset= 2 (362) */
/* 362 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 364 */	NdrFcLong( 0x7f46615 ),	/* 133457429 */
/* 368 */	NdrFcShort( 0x1857 ),	/* 6231 */
/* 370 */	NdrFcShort( 0x40cf ),	/* 16591 */
/* 372 */	0x9a,		/* 154 */
			0xa9,		/* 169 */
/* 374 */	0x87,		/* 135 */
			0x2c,		/* 44 */
/* 376 */	0x98,		/* 152 */
			0x58,		/* 88 */
/* 378 */	0xe7,		/* 231 */
			0x69,		/* 105 */
/* 380 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 382 */	NdrFcShort( 0x41a ),	/* Offset= 1050 (1432) */
/* 384 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 386 */	NdrFcShort( 0x2 ),	/* Offset= 2 (388) */
/* 388 */	
			0x13, 0x0,	/* FC_OP */
/* 390 */	NdrFcShort( 0x400 ),	/* Offset= 1024 (1414) */
/* 392 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 394 */	NdrFcShort( 0x18 ),	/* 24 */
/* 396 */	NdrFcShort( 0xa ),	/* 10 */
/* 398 */	NdrFcLong( 0x8 ),	/* 8 */
/* 402 */	NdrFcShort( 0x5a ),	/* Offset= 90 (492) */
/* 404 */	NdrFcLong( 0xd ),	/* 13 */
/* 408 */	NdrFcShort( 0x90 ),	/* Offset= 144 (552) */
/* 410 */	NdrFcLong( 0x9 ),	/* 9 */
/* 414 */	NdrFcShort( 0xc2 ),	/* Offset= 194 (608) */
/* 416 */	NdrFcLong( 0xc ),	/* 12 */
/* 420 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1138) */
/* 422 */	NdrFcLong( 0x24 ),	/* 36 */
/* 426 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (1186) */
/* 428 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 432 */	NdrFcShort( 0x32a ),	/* Offset= 810 (1242) */
/* 434 */	NdrFcLong( 0x10 ),	/* 16 */
/* 438 */	NdrFcShort( 0x344 ),	/* Offset= 836 (1274) */
/* 440 */	NdrFcLong( 0x2 ),	/* 2 */
/* 444 */	NdrFcShort( 0x35e ),	/* Offset= 862 (1306) */
/* 446 */	NdrFcLong( 0x3 ),	/* 3 */
/* 450 */	NdrFcShort( 0x378 ),	/* Offset= 888 (1338) */
/* 452 */	NdrFcLong( 0x14 ),	/* 20 */
/* 456 */	NdrFcShort( 0x392 ),	/* Offset= 914 (1370) */
/* 458 */	NdrFcShort( 0xffff ),	/* Offset= -1 (457) */
/* 460 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 462 */	NdrFcShort( 0x4 ),	/* 4 */
/* 464 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 470 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 472 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 474 */	NdrFcShort( 0x4 ),	/* 4 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x1 ),	/* 1 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	0x13, 0x0,	/* FC_OP */
/* 486 */	NdrFcShort( 0xfe4e ),	/* Offset= -434 (52) */
/* 488 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 490 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 492 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 494 */	NdrFcShort( 0x8 ),	/* 8 */
/* 496 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 498 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 500 */	NdrFcShort( 0x4 ),	/* 4 */
/* 502 */	NdrFcShort( 0x4 ),	/* 4 */
/* 504 */	0x11, 0x0,	/* FC_RP */
/* 506 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (460) */
/* 508 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 510 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 512 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 524 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 526 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 528 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 530 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 540 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 544 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 546 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 548 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (512) */
/* 550 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 552 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x6 ),	/* Offset= 6 (564) */
/* 560 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 562 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 564 */	
			0x11, 0x0,	/* FC_RP */
/* 566 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (530) */
/* 568 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 570 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 580 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 582 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 584 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 586 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 596 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 600 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 602 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 604 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (568) */
/* 606 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 608 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x6 ),	/* Offset= 6 (620) */
/* 616 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 618 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 620 */	
			0x11, 0x0,	/* FC_RP */
/* 622 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (586) */
/* 624 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 626 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 628 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 630 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 632 */	NdrFcShort( 0x2 ),	/* Offset= 2 (634) */
/* 634 */	NdrFcShort( 0x10 ),	/* 16 */
/* 636 */	NdrFcShort( 0x2f ),	/* 47 */
/* 638 */	NdrFcLong( 0x14 ),	/* 20 */
/* 642 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 644 */	NdrFcLong( 0x3 ),	/* 3 */
/* 648 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 650 */	NdrFcLong( 0x11 ),	/* 17 */
/* 654 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 656 */	NdrFcLong( 0x2 ),	/* 2 */
/* 660 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 662 */	NdrFcLong( 0x4 ),	/* 4 */
/* 666 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 668 */	NdrFcLong( 0x5 ),	/* 5 */
/* 672 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 674 */	NdrFcLong( 0xb ),	/* 11 */
/* 678 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 680 */	NdrFcLong( 0xa ),	/* 10 */
/* 684 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 686 */	NdrFcLong( 0x6 ),	/* 6 */
/* 690 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (922) */
/* 692 */	NdrFcLong( 0x7 ),	/* 7 */
/* 696 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 698 */	NdrFcLong( 0x8 ),	/* 8 */
/* 702 */	NdrFcShort( 0xfdba ),	/* Offset= -582 (120) */
/* 704 */	NdrFcLong( 0xd ),	/* 13 */
/* 708 */	NdrFcShort( 0xdc ),	/* Offset= 220 (928) */
/* 710 */	NdrFcLong( 0x9 ),	/* 9 */
/* 714 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (568) */
/* 716 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 720 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (946) */
/* 722 */	NdrFcLong( 0x24 ),	/* 36 */
/* 726 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (954) */
/* 728 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 732 */	NdrFcShort( 0xde ),	/* Offset= 222 (954) */
/* 734 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 738 */	NdrFcShort( 0x10e ),	/* Offset= 270 (1008) */
/* 740 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 744 */	NdrFcShort( 0x10c ),	/* Offset= 268 (1012) */
/* 746 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 750 */	NdrFcShort( 0x10a ),	/* Offset= 266 (1016) */
/* 752 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 756 */	NdrFcShort( 0x108 ),	/* Offset= 264 (1020) */
/* 758 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 762 */	NdrFcShort( 0x106 ),	/* Offset= 262 (1024) */
/* 764 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 768 */	NdrFcShort( 0x104 ),	/* Offset= 260 (1028) */
/* 770 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 774 */	NdrFcShort( 0xee ),	/* Offset= 238 (1012) */
/* 776 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 780 */	NdrFcShort( 0xec ),	/* Offset= 236 (1016) */
/* 782 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 786 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (1032) */
/* 788 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 792 */	NdrFcShort( 0xec ),	/* Offset= 236 (1028) */
/* 794 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 798 */	NdrFcShort( 0xee ),	/* Offset= 238 (1036) */
/* 800 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 804 */	NdrFcShort( 0xec ),	/* Offset= 236 (1040) */
/* 806 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 810 */	NdrFcShort( 0xea ),	/* Offset= 234 (1044) */
/* 812 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 816 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (1048) */
/* 818 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 822 */	NdrFcShort( 0xee ),	/* Offset= 238 (1060) */
/* 824 */	NdrFcLong( 0x10 ),	/* 16 */
/* 828 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 830 */	NdrFcLong( 0x12 ),	/* 18 */
/* 834 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 836 */	NdrFcLong( 0x13 ),	/* 19 */
/* 840 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 842 */	NdrFcLong( 0x15 ),	/* 21 */
/* 846 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 848 */	NdrFcLong( 0x16 ),	/* 22 */
/* 852 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 854 */	NdrFcLong( 0x17 ),	/* 23 */
/* 858 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 860 */	NdrFcLong( 0xe ),	/* 14 */
/* 864 */	NdrFcShort( 0xcc ),	/* Offset= 204 (1068) */
/* 866 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 870 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (1078) */
/* 872 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 876 */	NdrFcShort( 0xce ),	/* Offset= 206 (1082) */
/* 878 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 882 */	NdrFcShort( 0x82 ),	/* Offset= 130 (1012) */
/* 884 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 888 */	NdrFcShort( 0x80 ),	/* Offset= 128 (1016) */
/* 890 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 894 */	NdrFcShort( 0x7e ),	/* Offset= 126 (1020) */
/* 896 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 900 */	NdrFcShort( 0x74 ),	/* Offset= 116 (1016) */
/* 902 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 906 */	NdrFcShort( 0x6e ),	/* Offset= 110 (1016) */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x0 ),	/* Offset= 0 (912) */
/* 914 */	NdrFcLong( 0x1 ),	/* 1 */
/* 918 */	NdrFcShort( 0x0 ),	/* Offset= 0 (918) */
/* 920 */	NdrFcShort( 0xffff ),	/* Offset= -1 (919) */
/* 922 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 926 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 928 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 940 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 942 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 944 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 946 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 948 */	NdrFcShort( 0x2 ),	/* Offset= 2 (950) */
/* 950 */	
			0x13, 0x0,	/* FC_OP */
/* 952 */	NdrFcShort( 0x1ce ),	/* Offset= 462 (1414) */
/* 954 */	
			0x13, 0x0,	/* FC_OP */
/* 956 */	NdrFcShort( 0x20 ),	/* Offset= 32 (988) */
/* 958 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 960 */	NdrFcLong( 0x2f ),	/* 47 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 970 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 972 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 974 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 976 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 978 */	NdrFcShort( 0x1 ),	/* 1 */
/* 980 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 982 */	NdrFcShort( 0x4 ),	/* 4 */
/* 984 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 986 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 988 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 990 */	NdrFcShort( 0x10 ),	/* 16 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0xa ),	/* Offset= 10 (1004) */
/* 996 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 998 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1000 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (958) */
/* 1002 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1004 */	
			0x13, 0x0,	/* FC_OP */
/* 1006 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (976) */
/* 1008 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1010 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1012 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1014 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1016 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1018 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1020 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1022 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1024 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1026 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1028 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1030 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1032 */	
			0x13, 0x0,	/* FC_OP */
/* 1034 */	NdrFcShort( 0xff90 ),	/* Offset= -112 (922) */
/* 1036 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1038 */	NdrFcShort( 0xfc6a ),	/* Offset= -918 (120) */
/* 1040 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1042 */	NdrFcShort( 0xff8e ),	/* Offset= -114 (928) */
/* 1044 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1046 */	NdrFcShort( 0xfe22 ),	/* Offset= -478 (568) */
/* 1048 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1050 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1052) */
/* 1052 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1054 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1056) */
/* 1056 */	
			0x13, 0x0,	/* FC_OP */
/* 1058 */	NdrFcShort( 0x164 ),	/* Offset= 356 (1414) */
/* 1060 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1062 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1064) */
/* 1064 */	
			0x13, 0x0,	/* FC_OP */
/* 1066 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1086) */
/* 1068 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1070 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1072 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1074 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1076 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1078 */	
			0x13, 0x0,	/* FC_OP */
/* 1080 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1068) */
/* 1082 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1084 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1086 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1088 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1092) */
/* 1094 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1096 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1098 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1100 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1102 */	NdrFcShort( 0xfe22 ),	/* Offset= -478 (624) */
/* 1104 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1106 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1108 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1110 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1116 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1118 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1120 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	0x13, 0x0,	/* FC_OP */
/* 1132 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1086) */
/* 1134 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1136 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1138 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1150) */
/* 1146 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1148 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1150 */	
			0x11, 0x0,	/* FC_RP */
/* 1152 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1106) */
/* 1154 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1156 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1158 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1164 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1166 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1168 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	0x13, 0x0,	/* FC_OP */
/* 1180 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (988) */
/* 1182 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1184 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1186 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1192 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1198) */
/* 1194 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1196 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1198 */	
			0x11, 0x0,	/* FC_RP */
/* 1200 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1154) */
/* 1202 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1206 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1208 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1210 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1212 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1214 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1216 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (1202) */
			0x5b,		/* FC_END */
/* 1220 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1230 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1234 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1236 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1238 */	NdrFcShort( 0xfeca ),	/* Offset= -310 (928) */
/* 1240 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1242 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1244 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0xa ),	/* Offset= 10 (1258) */
/* 1250 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1252 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1254 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1208) */
/* 1256 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1258 */	
			0x11, 0x0,	/* FC_RP */
/* 1260 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1220) */
/* 1262 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1264 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1266 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1272 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1274 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1278 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1280 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1282 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1284 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1286 */	0x13, 0x0,	/* FC_OP */
/* 1288 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1262) */
/* 1290 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1292 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1294 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1296 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1298 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1304 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1306 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1310 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1312 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1314 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1316 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1318 */	0x13, 0x0,	/* FC_OP */
/* 1320 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1294) */
/* 1322 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1324 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1326 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1328 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1330 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1336 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1338 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1342 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1344 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1346 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1348 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1350 */	0x13, 0x0,	/* FC_OP */
/* 1352 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1326) */
/* 1354 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1356 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1358 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1362 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1368 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1370 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1374 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1376 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1378 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1380 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1382 */	0x13, 0x0,	/* FC_OP */
/* 1384 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1358) */
/* 1386 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1388 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1390 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1394 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1396 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1398 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1402 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1404 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1406 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1408 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1410 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1390) */
/* 1412 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1414 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1416 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1418 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1398) */
/* 1420 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1420) */
/* 1422 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1424 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1426 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1428 */	NdrFcShort( 0xfbf4 ),	/* Offset= -1036 (392) */
/* 1430 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1432 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1436 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0xfbe0 ),	/* Offset= -1056 (384) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            }

        };



/* Standard interface: __MIDL_itf_earth_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITimeGE, ver. 0.0,
   GUID={0xE39391AE,0x51C0,0x4FBD,{0x90,0x42,0xF9,0xC5,0xB6,0x09,0x44,0x45}} */

#pragma code_seg(".orpc")
static const unsigned short ITimeGE_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    108,
    144,
    180,
    216,
    252,
    288,
    324,
    360,
    396,
    432,
    468,
    504,
    540,
    576,
    612
    };

static const MIDL_STUBLESS_PROXY_INFO ITimeGE_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &ITimeGE_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITimeGE_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &ITimeGE_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _ITimeGEProxyVtbl = 
{
    &ITimeGE_ProxyInfo,
    &IID_ITimeGE,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::get_Type */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::put_Type */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::get_Year */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::put_Year */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::get_Month */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::put_Month */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::get_Day */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::put_Day */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::get_Hour */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::put_Hour */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::get_Minute */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::put_Minute */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::get_Second */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::put_Second */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::get_TimeZone */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::put_TimeZone */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::Clone */ ,
    (void *) (INT_PTR) -1 /* ITimeGE::ConvertToZone */
};


static const PRPC_STUB_FUNCTION ITimeGE_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITimeGEStubVtbl =
{
    &IID_ITimeGE,
    &ITimeGE_ServerInfo,
    25,
    &ITimeGE_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITimeIntervalGE, ver. 0.0,
   GUID={0xD794FE36,0x10B1,0x4E7E,{0x95,0x9D,0x96,0x38,0x79,0x4D,0x2A,0x1B}} */

#pragma code_seg(".orpc")
static const unsigned short ITimeIntervalGE_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    654,
    690
    };

static const MIDL_STUBLESS_PROXY_INFO ITimeIntervalGE_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &ITimeIntervalGE_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITimeIntervalGE_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &ITimeIntervalGE_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _ITimeIntervalGEProxyVtbl = 
{
    &ITimeIntervalGE_ProxyInfo,
    &IID_ITimeIntervalGE,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITimeIntervalGE::get_BeginTime */ ,
    (void *) (INT_PTR) -1 /* ITimeIntervalGE::get_EndTime */
};


static const PRPC_STUB_FUNCTION ITimeIntervalGE_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITimeIntervalGEStubVtbl =
{
    &IID_ITimeIntervalGE,
    &ITimeIntervalGE_ServerInfo,
    9,
    &ITimeIntervalGE_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ICameraInfoGE, ver. 0.0,
   GUID={0x08D46BCD,0xAF56,0x4175,{0x99,0x9E,0x6D,0xDC,0x37,0x71,0xC6,0x4E}} */

#pragma code_seg(".orpc")
static const unsigned short ICameraInfoGE_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    726,
    762,
    798,
    834,
    870,
    906,
    942,
    978,
    1014,
    1050,
    1086,
    1122,
    1158,
    1194
    };

static const MIDL_STUBLESS_PROXY_INFO ICameraInfoGE_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &ICameraInfoGE_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICameraInfoGE_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &ICameraInfoGE_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(21) _ICameraInfoGEProxyVtbl = 
{
    &ICameraInfoGE_ProxyInfo,
    &IID_ICameraInfoGE,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::get_FocusPointLatitude */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::put_FocusPointLatitude */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::get_FocusPointLongitude */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::put_FocusPointLongitude */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::get_FocusPointAltitude */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::put_FocusPointAltitude */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::get_FocusPointAltitudeMode */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::put_FocusPointAltitudeMode */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::get_Range */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::put_Range */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::get_Tilt */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::put_Tilt */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::get_Azimuth */ ,
    (void *) (INT_PTR) -1 /* ICameraInfoGE::put_Azimuth */
};


static const PRPC_STUB_FUNCTION ICameraInfoGE_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ICameraInfoGEStubVtbl =
{
    &IID_ICameraInfoGE,
    &ICameraInfoGE_ServerInfo,
    21,
    &ICameraInfoGE_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITourControllerGE, ver. 0.0,
   GUID={0xD08577E0,0x365E,0x4216,{0xB1,0xA4,0x19,0x35,0x3E,0xAC,0x16,0x02}} */

#pragma code_seg(".orpc")
static const unsigned short ITourControllerGE_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1230,
    1260,
    798,
    834,
    870,
    906,
    216,
    252
    };

static const MIDL_STUBLESS_PROXY_INFO ITourControllerGE_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &ITourControllerGE_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITourControllerGE_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &ITourControllerGE_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) _ITourControllerGEProxyVtbl = 
{
    &ITourControllerGE_ProxyInfo,
    &IID_ITourControllerGE,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITourControllerGE::PlayOrPause */ ,
    (void *) (INT_PTR) -1 /* ITourControllerGE::Stop */ ,
    (void *) (INT_PTR) -1 /* ITourControllerGE::get_Speed */ ,
    (void *) (INT_PTR) -1 /* ITourControllerGE::put_Speed */ ,
    (void *) (INT_PTR) -1 /* ITourControllerGE::get_PauseDelay */ ,
    (void *) (INT_PTR) -1 /* ITourControllerGE::put_PauseDelay */ ,
    (void *) (INT_PTR) -1 /* ITourControllerGE::get_Cycles */ ,
    (void *) (INT_PTR) -1 /* ITourControllerGE::put_Cycles */
};


static const PRPC_STUB_FUNCTION ITourControllerGE_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITourControllerGEStubVtbl =
{
    &IID_ITourControllerGE,
    &ITourControllerGE_ServerInfo,
    15,
    &ITourControllerGE_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ISearchControllerGE, ver. 0.0,
   GUID={0x524E5B0F,0xD593,0x45A6,{0x9F,0x87,0x1B,0xAE,0x7D,0x33,0x83,0x73}} */

#pragma code_seg(".orpc")
static const unsigned short ISearchControllerGE_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1290,
    1326,
    1362,
    1398
    };

static const MIDL_STUBLESS_PROXY_INFO ISearchControllerGE_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &ISearchControllerGE_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISearchControllerGE_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &ISearchControllerGE_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ISearchControllerGEProxyVtbl = 
{
    &ISearchControllerGE_ProxyInfo,
    &IID_ISearchControllerGE,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ISearchControllerGE::Search */ ,
    (void *) (INT_PTR) -1 /* ISearchControllerGE::IsSearchInProgress */ ,
    (void *) (INT_PTR) -1 /* ISearchControllerGE::GetResults */ ,
    (void *) (INT_PTR) -1 /* ISearchControllerGE::ClearResults */
};


static const PRPC_STUB_FUNCTION ISearchControllerGE_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ISearchControllerGEStubVtbl =
{
    &IID_ISearchControllerGE,
    &ISearchControllerGE_ServerInfo,
    11,
    &ISearchControllerGE_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAnimationControllerGE, ver. 0.0,
   GUID={0xBE5E5F15,0x8EC4,0x4dCC,{0xB4,0x8D,0x99,0x57,0xD2,0xDE,0x4D,0x05}} */

#pragma code_seg(".orpc")
static const unsigned short IAnimationControllerGE_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1230,
    1260,
    1428,
    1464,
    1500
    };

static const MIDL_STUBLESS_PROXY_INFO IAnimationControllerGE_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &IAnimationControllerGE_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAnimationControllerGE_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &IAnimationControllerGE_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IAnimationControllerGEProxyVtbl = 
{
    &IAnimationControllerGE_ProxyInfo,
    &IID_IAnimationControllerGE,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAnimationControllerGE::Play */ ,
    (void *) (INT_PTR) -1 /* IAnimationControllerGE::Pause */ ,
    (void *) (INT_PTR) -1 /* IAnimationControllerGE::get_SliderTimeInterval */ ,
    (void *) (INT_PTR) -1 /* IAnimationControllerGE::get_CurrentTimeInterval */ ,
    (void *) (INT_PTR) -1 /* IAnimationControllerGE::put_CurrentTimeInterval */
};


static const PRPC_STUB_FUNCTION IAnimationControllerGE_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAnimationControllerGEStubVtbl =
{
    &IID_IAnimationControllerGE,
    &IAnimationControllerGE_ServerInfo,
    12,
    &IAnimationControllerGE_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IViewExtentsGE, ver. 0.0,
   GUID={0x865AB2C1,0x38C5,0x492B,{0x8B,0x71,0xAC,0x73,0xF5,0xA7,0xA4,0x3D}} */

#pragma code_seg(".orpc")
static const unsigned short IViewExtentsGE_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    726,
    1536,
    798,
    1572
    };

static const MIDL_STUBLESS_PROXY_INFO IViewExtentsGE_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &IViewExtentsGE_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IViewExtentsGE_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &IViewExtentsGE_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IViewExtentsGEProxyVtbl = 
{
    &IViewExtentsGE_ProxyInfo,
    &IID_IViewExtentsGE,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IViewExtentsGE::get_North */ ,
    (void *) (INT_PTR) -1 /* IViewExtentsGE::get_South */ ,
    (void *) (INT_PTR) -1 /* IViewExtentsGE::get_East */ ,
    (void *) (INT_PTR) -1 /* IViewExtentsGE::get_West */
};


static const PRPC_STUB_FUNCTION IViewExtentsGE_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IViewExtentsGEStubVtbl =
{
    &IID_IViewExtentsGE,
    &IViewExtentsGE_ServerInfo,
    11,
    &IViewExtentsGE_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IFeatureGE, ver. 0.0,
   GUID={0x92547B06,0x0007,0x4820,{0xB7,0x6A,0xC8,0x4E,0x40,0x2C,0xA7,0x09}} */

#pragma code_seg(".orpc")
static const unsigned short IFeatureGE_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1608,
    1326,
    1644,
    1680,
    144,
    1716,
    1746,
    1782,
    1818
    };

static const MIDL_STUBLESS_PROXY_INFO IFeatureGE_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &IFeatureGE_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFeatureGE_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &IFeatureGE_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IFeatureGEProxyVtbl = 
{
    &IFeatureGE_ProxyInfo,
    &IID_IFeatureGE,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeatureGE::get_Name */ ,
    (void *) (INT_PTR) -1 /* IFeatureGE::get_Visibility */ ,
    (void *) (INT_PTR) -1 /* IFeatureGE::put_Visibility */ ,
    (void *) (INT_PTR) -1 /* IFeatureGE::get_HasView */ ,
    (void *) (INT_PTR) -1 /* IFeatureGE::get_Highlighted */ ,
    (void *) (INT_PTR) -1 /* IFeatureGE::Highlight */ ,
    (void *) (INT_PTR) -1 /* IFeatureGE::GetParent */ ,
    (void *) (INT_PTR) -1 /* IFeatureGE::GetChildren */ ,
    (void *) (INT_PTR) -1 /* IFeatureGE::get_TimeInterval */
};


static const PRPC_STUB_FUNCTION IFeatureGE_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFeatureGEStubVtbl =
{
    &IID_IFeatureGE,
    &IFeatureGE_ServerInfo,
    16,
    &IFeatureGE_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IFeatureCollectionGE, ver. 0.0,
   GUID={0x851D25E7,0x785F,0x4DB7,{0x95,0xF9,0xA0,0xEF,0x7E,0x83,0x6C,0x44}} */

#pragma code_seg(".orpc")
static const unsigned short IFeatureCollectionGE_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1854,
    1890,
    72
    };

static const MIDL_STUBLESS_PROXY_INFO IFeatureCollectionGE_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &IFeatureCollectionGE_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFeatureCollectionGE_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &IFeatureCollectionGE_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IFeatureCollectionGEProxyVtbl = 
{
    &IFeatureCollectionGE_ProxyInfo,
    &IID_IFeatureCollectionGE,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFeatureCollectionGE::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IFeatureCollectionGE::get_Item */ ,
    (void *) (INT_PTR) -1 /* IFeatureCollectionGE::get_Count */
};


static const PRPC_STUB_FUNCTION IFeatureCollectionGE_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFeatureCollectionGEStubVtbl =
{
    &IID_IFeatureCollectionGE,
    &IFeatureCollectionGE_ServerInfo,
    10,
    &IFeatureCollectionGE_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPointOnTerrainGE, ver. 0.0,
   GUID={0xF4F7B301,0x7C59,0x4851,{0xBA,0x97,0xC5,0x1F,0x11,0x0B,0x59,0x0F}} */

#pragma code_seg(".orpc")
static const unsigned short IPointOnTerrainGE_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    726,
    1536,
    798,
    1680,
    144
    };

static const MIDL_STUBLESS_PROXY_INFO IPointOnTerrainGE_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &IPointOnTerrainGE_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPointOnTerrainGE_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &IPointOnTerrainGE_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IPointOnTerrainGEProxyVtbl = 
{
    &IPointOnTerrainGE_ProxyInfo,
    &IID_IPointOnTerrainGE,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPointOnTerrainGE::get_Latitude */ ,
    (void *) (INT_PTR) -1 /* IPointOnTerrainGE::get_Longitude */ ,
    (void *) (INT_PTR) -1 /* IPointOnTerrainGE::get_Altitude */ ,
    (void *) (INT_PTR) -1 /* IPointOnTerrainGE::get_ProjectedOntoGlobe */ ,
    (void *) (INT_PTR) -1 /* IPointOnTerrainGE::get_ZeroElevationExaggeration */
};


static const PRPC_STUB_FUNCTION IPointOnTerrainGE_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPointOnTerrainGEStubVtbl =
{
    &IID_IPointOnTerrainGE,
    &IPointOnTerrainGE_ServerInfo,
    12,
    &IPointOnTerrainGE_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IApplicationGE, ver. 0.0,
   GUID={0x2830837B,0xD4E8,0x48C6,{0xB6,0xEE,0x04,0x63,0x33,0x72,0xAB,0xE4}} */

#pragma code_seg(".orpc")
static const unsigned short IApplicationGE_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1932,
    1974,
    2016,
    1680,
    2094,
    2136,
    2178,
    2214,
    2250,
    2286,
    2322,
    2364,
    2406,
    2448,
    2496,
    2532,
    2568,
    2604,
    2640,
    2676,
    2712,
    2742,
    2772,
    2808,
    2838,
    2874,
    2910,
    2946,
    2982,
    3018,
    3054,
    3090,
    3126,
    3162,
    3198
    };

static const MIDL_STUBLESS_PROXY_INFO IApplicationGE_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &IApplicationGE_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IApplicationGE_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &IApplicationGE_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(42) _IApplicationGEProxyVtbl = 
{
    &IApplicationGE_ProxyInfo,
    &IID_IApplicationGE,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::GetCamera */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::SetCamera */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::SetCameraParams */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::get_StreamingProgressPercentage */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::SaveScreenShot */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::OpenKmlFile */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::LoadKmlData */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::get_AutoPilotSpeed */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::put_AutoPilotSpeed */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::get_ViewExtents */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::GetFeatureByName */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::GetFeatureByHref */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::SetFeatureView */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::GetPointOnTerrainFromScreenCoords */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::get_VersionMajor */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::get_VersionMinor */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::get_VersionBuild */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::get_VersionAppType */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::IsInitialized */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::IsOnline */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::Login */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::Logout */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::ShowDescriptionBalloon */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::HideDescriptionBalloons */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::GetHighlightedFeature */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::GetMyPlaces */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::GetTemporaryPlaces */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::GetLayersDatabases */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::get_ElevationExaggeration */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::put_ElevationExaggeration */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::GetMainHwnd */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::get_TourController */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::get_SearchController */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::get_AnimationController */ ,
    (void *) (INT_PTR) -1 /* IApplicationGE::GetRenderHwnd */
};


static const PRPC_STUB_FUNCTION IApplicationGE_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IApplicationGEStubVtbl =
{
    &IID_IApplicationGE,
    &IApplicationGE_ServerInfo,
    42,
    &IApplicationGE_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IKHViewInfo, ver. 0.0,
   GUID={0x45F89E39,0x7A46,0x4CA4,{0x97,0xE3,0x8C,0x5A,0xA2,0x52,0x53,0x1C}} */

#pragma code_seg(".orpc")
static const unsigned short IKHViewInfo_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    726,
    762,
    798,
    834,
    870,
    906,
    3234,
    3270,
    1014,
    1050
    };

static const MIDL_STUBLESS_PROXY_INFO IKHViewInfo_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &IKHViewInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IKHViewInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &IKHViewInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) _IKHViewInfoProxyVtbl = 
{
    &IKHViewInfo_ProxyInfo,
    &IID_IKHViewInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IKHViewInfo::get_latitude */ ,
    (void *) (INT_PTR) -1 /* IKHViewInfo::put_latitude */ ,
    (void *) (INT_PTR) -1 /* IKHViewInfo::get_longitude */ ,
    (void *) (INT_PTR) -1 /* IKHViewInfo::put_longitude */ ,
    (void *) (INT_PTR) -1 /* IKHViewInfo::get_range */ ,
    (void *) (INT_PTR) -1 /* IKHViewInfo::put_range */ ,
    (void *) (INT_PTR) -1 /* IKHViewInfo::get_tilt */ ,
    (void *) (INT_PTR) -1 /* IKHViewInfo::put_tilt */ ,
    (void *) (INT_PTR) -1 /* IKHViewInfo::get_azimuth */ ,
    (void *) (INT_PTR) -1 /* IKHViewInfo::put_azimuth */
};


static const PRPC_STUB_FUNCTION IKHViewInfo_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IKHViewInfoStubVtbl =
{
    &IID_IKHViewInfo,
    &IKHViewInfo_ServerInfo,
    17,
    &IKHViewInfo_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IKHViewExtents, ver. 0.0,
   GUID={0xD05D6E91,0x72DA,0x4654,{0xB8,0xA7,0xBC,0xBD,0x3B,0x87,0xE3,0xB6}} */

#pragma code_seg(".orpc")
static const unsigned short IKHViewExtents_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    726,
    1536,
    798,
    1572
    };

static const MIDL_STUBLESS_PROXY_INFO IKHViewExtents_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &IKHViewExtents_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IKHViewExtents_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &IKHViewExtents_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IKHViewExtentsProxyVtbl = 
{
    &IKHViewExtents_ProxyInfo,
    &IID_IKHViewExtents,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IKHViewExtents::get_north */ ,
    (void *) (INT_PTR) -1 /* IKHViewExtents::get_south */ ,
    (void *) (INT_PTR) -1 /* IKHViewExtents::get_east */ ,
    (void *) (INT_PTR) -1 /* IKHViewExtents::get_west */
};


static const PRPC_STUB_FUNCTION IKHViewExtents_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IKHViewExtentsStubVtbl =
{
    &IID_IKHViewExtents,
    &IKHViewExtents_ServerInfo,
    11,
    &IKHViewExtents_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IKHFeature, ver. 0.0,
   GUID={0x07F46615,0x1857,0x40CF,{0x9A,0xA9,0x87,0x2C,0x98,0x58,0xE7,0x69}} */

#pragma code_seg(".orpc")
static const unsigned short IKHFeature_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3306,
    3342,
    72
    };

static const MIDL_STUBLESS_PROXY_INFO IKHFeature_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &IKHFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IKHFeature_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &IKHFeature_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IKHFeatureProxyVtbl = 
{
    &IKHFeature_ProxyInfo,
    &IID_IKHFeature,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IKHFeature::get_visibility */ ,
    (void *) (INT_PTR) -1 /* IKHFeature::put_visibility */ ,
    (void *) (INT_PTR) -1 /* IKHFeature::get_hasView */
};


static const PRPC_STUB_FUNCTION IKHFeature_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IKHFeatureStubVtbl =
{
    &IID_IKHFeature,
    &IKHFeature_ServerInfo,
    10,
    &IKHFeature_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IKHInterface, ver. 0.0,
   GUID={0x80A43F86,0xE2CD,0x4671,{0xA7,0xFA,0xE5,0x62,0x7B,0x51,0x97,0x11}} */

#pragma code_seg(".orpc")
static const unsigned short IKHInterface_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3378,
    1326,
    3420,
    3462,
    3498,
    3528,
    3234,
    3270,
    3570,
    3606,
    3654,
    3690,
    3732,
    3804,
    3846,
    3894,
    2568
    };

static const MIDL_STUBLESS_PROXY_INFO IKHInterface_ProxyInfo =
    {
    &Object_StubDesc,
    earth__MIDL_ProcFormatString.Format,
    &IKHInterface_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IKHInterface_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    earth__MIDL_ProcFormatString.Format,
    &IKHInterface_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(24) _IKHInterfaceProxyVtbl = 
{
    &IKHInterface_ProxyInfo,
    &IID_IKHInterface,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::currentView */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::get_streamingProgressPercentage */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::SaveScreenShot */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::OpenFile */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::QuitApplication */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::SetRenderWindowSize */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::get_autopilotSpeed */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::put_autopilotSpeed */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::get_currentViewExtents */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::setView */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::LoadKml */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::getFeatureByName */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::setViewParams */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::setFeatureView */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::getPointOnTerrainFromScreenCoords */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::getCurrentVersion */ ,
    (void *) (INT_PTR) -1 /* IKHInterface::isClientInitialized */
};


static const PRPC_STUB_FUNCTION IKHInterface_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IKHInterfaceStubVtbl =
{
    &IID_IKHInterface,
    &IKHInterface_ServerInfo,
    24,
    &IKHInterface_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    earth__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x70001f4, /* MIDL Version 7.0.500 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * _earth_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IPointOnTerrainGEProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFeatureGEProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISearchControllerGEProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAnimationControllerGEProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IKHFeatureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITimeIntervalGEProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IKHViewInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IApplicationGEProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IKHInterfaceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IKHViewExtentsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITimeGEProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IViewExtentsGEProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICameraInfoGEProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITourControllerGEProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFeatureCollectionGEProxyVtbl,
    0
};

const CInterfaceStubVtbl * _earth_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IPointOnTerrainGEStubVtbl,
    ( CInterfaceStubVtbl *) &_IFeatureGEStubVtbl,
    ( CInterfaceStubVtbl *) &_ISearchControllerGEStubVtbl,
    ( CInterfaceStubVtbl *) &_IAnimationControllerGEStubVtbl,
    ( CInterfaceStubVtbl *) &_IKHFeatureStubVtbl,
    ( CInterfaceStubVtbl *) &_ITimeIntervalGEStubVtbl,
    ( CInterfaceStubVtbl *) &_IKHViewInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IApplicationGEStubVtbl,
    ( CInterfaceStubVtbl *) &_IKHInterfaceStubVtbl,
    ( CInterfaceStubVtbl *) &_IKHViewExtentsStubVtbl,
    ( CInterfaceStubVtbl *) &_ITimeGEStubVtbl,
    ( CInterfaceStubVtbl *) &_IViewExtentsGEStubVtbl,
    ( CInterfaceStubVtbl *) &_ICameraInfoGEStubVtbl,
    ( CInterfaceStubVtbl *) &_ITourControllerGEStubVtbl,
    ( CInterfaceStubVtbl *) &_IFeatureCollectionGEStubVtbl,
    0
};

PCInterfaceName const _earth_InterfaceNamesList[] = 
{
    "IPointOnTerrainGE",
    "IFeatureGE",
    "ISearchControllerGE",
    "IAnimationControllerGE",
    "IKHFeature",
    "ITimeIntervalGE",
    "IKHViewInfo",
    "IApplicationGE",
    "IKHInterface",
    "IKHViewExtents",
    "ITimeGE",
    "IViewExtentsGE",
    "ICameraInfoGE",
    "ITourControllerGE",
    "IFeatureCollectionGE",
    0
};

const IID *  _earth_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _earth_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _earth, pIID, n)

int __stdcall _earth_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _earth, 15, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _earth, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _earth, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _earth, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _earth, 15, *pIndex )
    
}

const ExtendedProxyFileInfo earth_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _earth_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _earth_StubVtblList,
    (const PCInterfaceName * ) & _earth_InterfaceNamesList,
    (const IID ** ) & _earth_BaseIIDList,
    & _earth_IID_Lookup, 
    15,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

