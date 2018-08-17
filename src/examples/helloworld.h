#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <napi.h>

namespace helloworld
{
Napi::String HelloMethod(const Napi::CallbackInfo &info);
Napi::Object Init(Napi::Env env, Napi::Object exports);
}

#endif
