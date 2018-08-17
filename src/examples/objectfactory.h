#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H

#include <napi.h>

namespace objectfactory
{
Napi::Object CreateObject(const Napi::CallbackInfo &info);
Napi::Object Init(Napi::Env env, Napi::Object exports);
}

#endif
