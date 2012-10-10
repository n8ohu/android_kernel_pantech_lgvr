#ifndef _CUST_SKY_FILE_
#define _CUST_SKY_FILE_

/* MODEL_ID  */
#define MODEL_EF33S      0x3004
#define MODEL_EF34K      0x3005
#define MODEL_EF35L      0x3006
#define MODEL_EF40K      0x3007 /*yjw*/

/* BOARD_VER */
#define EV10	((MODEL_EF33S<<8)+0x02)
#define WS10	((MODEL_EF33S<<8)+0x03)
#define WS20	((MODEL_EF33S<<8)+0x04)
#define TP10	((MODEL_EF33S<<8)+0x05)
#define TP15	((MODEL_EF33S<<8)+0x06)
#define TP20	((MODEL_EF33S<<8)+0x07)

#define BOARD_VER_L(a)                  (BOARD_VER < a)
#define BOARD_VER_LE(a)                 (BOARD_VER <= a)
#define BOARD_VER_E(a)                  (BOARD_VER == a)
#define BOARD_VER_GE(a)                 (BOARD_VER >= a)
#define BOARD_VER_G(a)                  (BOARD_VER > a)

/* EF33S MACRO */
#define IS_EF33S                        (MODEL_ID == MODEL_EF33S)
#define NOT_EF33S                       (MODEL_ID != MODEL_EF33S)
#define EF33S_BDVER_L(a)                ((MODEL_ID == MODEL_EF33S) && (BOARD_VER < a))
#define EF33S_BDVER_LE(a)               ((MODEL_ID == MODEL_EF33S) && (BOARD_VER <= a))
#define EF33S_BDVER_E(a)                ((MODEL_ID == MODEL_EF33S) && (BOARD_VER == a))
#define EF33S_BDVER_GE(a)               ((MODEL_ID == MODEL_EF33S) && (BOARD_VER >= a))
#define EF33S_BDVER_G(a)                ((MODEL_ID == MODEL_EF33S) && (BOARD_VER > a))

/* EF34K MACRO */
#define IS_EF34K                        (MODEL_ID == MODEL_EF34K)
#define NOT_EF34K                       (MODEL_ID != MODEL_EF34K)
#define EF34K_BDVER_L(a)                ((MODEL_ID == MODEL_EF34K) && (BOARD_VER < a))
#define EF34K_BDVER_LE(a)               ((MODEL_ID == MODEL_EF34K) && (BOARD_VER <= a))
#define EF34K_BDVER_E(a)                ((MODEL_ID == MODEL_EF34K) && (BOARD_VER == a))
#define EF34K_BDVER_GE(a)               ((MODEL_ID == MODEL_EF34K) && (BOARD_VER >= a))
#define EF34K_BDVER_G(a)                ((MODEL_ID == MODEL_EF34K) && (BOARD_VER > a))

/* EF35L MACRO */
#define IS_EF35L                        (MODEL_ID == MODEL_EF35L)
#define NOT_EF35L                       (MODEL_ID != MODEL_EF35L)
#define EF35L_BDVER_L(a)                ((MODEL_ID == MODEL_EF35L) && (BOARD_VER < a))
#define EF35L_BDVER_LE(a)               ((MODEL_ID == MODEL_EF35L) && (BOARD_VER <= a))
#define EF35L_BDVER_E(a)                ((MODEL_ID == MODEL_EF35L) && (BOARD_VER == a))
#define EF35L_BDVER_GE(a)               ((MODEL_ID == MODEL_EF35L) && (BOARD_VER >= a))
#define EF35L_BDVER_G(a)                ((MODEL_ID == MODEL_EF35L) && (BOARD_VER > a))

/* EF40K MACRO *//*yjw*/
#define IS_EF40K                        (MODEL_ID == MODEL_EF40K)
#define NOT_EF40K                       (MODEL_ID != MODEL_EF40K)
#define EF40K_BDVER_L(a)                ((MODEL_ID == MODEL_EF40K) && (BOARD_VER < a))
#define EF40K_BDVER_LE(a)               ((MODEL_ID == MODEL_EF40K) && (BOARD_VER <= a))
#define EF40K_BDVER_E(a)                ((MODEL_ID == MODEL_EF40K) && (BOARD_VER == a))
#define EF40K_BDVER_GE(a)               ((MODEL_ID == MODEL_EF40K) && (BOARD_VER >= a))
#define EF40K_BDVER_G(a)                ((MODEL_ID == MODEL_EF40K) && (BOARD_VER > a))

#define MODEL_SKY 1
#define BOARD_VER WS20
#define MODEL_ID MODEL_EF35L
#define FIRM_VER "S0000000"
#define SYS_MODEL_NAME "EF35L"
#define SKY_MODEL_NAME "IM-A780L"

#define FEATURE_EF35L_FACTORY

#ifndef CONFIG_EF35_BOARD
#define CONFIG_EF35_BOARD
#endif

#define FEATURE_SKY_RAWDATA_ACCESS
#define FEATURE_AARM_RELEASE_MODE

/* Global features for SKY camera framework. */
#include "CUST_SKYCAM.h"
/* [PS3] Kang Seong-Goo framework features about SurfaceFlinger */
#include "CUST_SKYDISP.h"

#define FEATURE_SKYSND

/*
  2011/03/02 권오윤
  PANTECH multimedia engine/codec 개발 관련 feature 정의파일 (최상위 FEATURE_PANTECH_MMP 등)
*/
#include "cust_pantech_mmp.h"

#endif/*_CUST_SKY_FILE_*/
