#ifndef FUNCTIONFACTORY_H
#define FUNCTIONFACTORY_H

#include <napi.h>

namespace functionfactory
{
Napi::String MyFunction(const Napi::CallbackInfo &info);
Napi::Function CreateFunction(const Napi::CallbackInfo &info);
Napi::Object Init(Napi::Env env, Napi::Object exports);
}

#endif
