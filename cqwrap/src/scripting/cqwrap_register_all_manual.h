﻿#ifndef __Jsb_RegisterAll_H__
#define __Jsb_RegisterAll_H__

#include "ScriptingCore.h"
#include "jsb_cocos2dx_auto.hpp"
#include "cocos2d_specifics.hpp"

extern JSClass  *jsb_WebSocket_Class;
extern JSObject *jsb_WebSocket_prototype;
void register_cqwrap_websocket(JSContext* cx, JSObject* obj);

extern JSClass  *jsb_HttpRequest_Class;
extern JSObject *jsb_HttpRequest_prototype;
void register_cqwrap_httprequest(JSContext* cx, JSObject* obj);

void register_all_misc_manual(JSContext* cx, JSObject* obj);

#endif