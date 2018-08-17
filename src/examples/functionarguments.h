#ifndef FUNCTIONARGUMENTS_H
#define FUNCTIONARGUMENTS_H

#include <napi.h>

namespace functionarguments
{
Napi::Value Add(const Napi::CallbackInfo &info);
Napi::Object Init(Napi::Env env, Napi::Object exports);
}

#endif
