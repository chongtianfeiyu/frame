﻿/*
 * frame_msghandle.h
 *
 *  Created on: 2014年1月23日
 *      Author: jimm
 */

#ifndef FRAME_MSGHANDLE_H_
#define FRAME_MSGHANDLE_H_

#include "common/common_object.h"
#include "frame_impl.h"
#include "frame_namespace.h"

#include <stdarg.h>

FRAME_NAMESPACE_BEGIN

typedef int32_t (CBaseObject::*i32_pco_pmh_pmb)(CBaseObject *, IMsgHead *, IMsgBody *);
typedef int32_t	(CBaseObject::*i32_pco_pu8_i32)(CBaseObject *, uint8_t *, int32_t);
typedef int32_t (CBaseObject::*i32_pco_pmh_pmb_pu8_i32)(CBaseObject *, IMsgHead *, IMsgBody *, uint8_t *, int32_t);
typedef int32_t (CBaseObject::*i32_pco_pmh_pu8_i32)(CBaseObject *, IMsgHead *, uint8_t *, int32_t);
typedef int32_t (CBaseObject::*i32_pch_pmh_pmb_pu8_i32)(ICtlHead *, IMsgHead *, IMsgBody *, uint8_t *, int32_t);
typedef int32_t (CBaseObject::*i32_pch_pmh_pu8_i32)(ICtlHead *, IMsgHead *, uint8_t *, int32_t);

enum ProcCodeFlag
{
	enmProcCodeFlag_Invalid						= 0,
	enmProcCodeFlag_i32_pco_pmh_pmb				= 1,
	enmProcCodeFlag_i32_pco_pu8_i32				= 2,
	enmProcCodeFlag_i32_pco_pmh_pmb_pu8_i32		= 3,
	enmProcCodeFlag_i32_pco_pmh_pu8_i32			= 4,
	enmProcCodeFlag_i32_pch_pmh_pmb_pu8_i32		= 5,
	enmProcCodeFlag_i32_pch_pmh_pu8_i32			= 6,
};

class CMsgMapDecl;
class CFrame;

int32_t FrameMsgCallBack(CFrame *pFrame, CMsgMapDecl &stMsgMap, int32_t nMsgID, va_list ap);


FRAME_NAMESPACE_END

#endif /* FRAME_MSGHANDLE_H_ */
