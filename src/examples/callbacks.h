#ifndef CALLBACKS_H
#define CALLBACKS_H

#include <napi.h>

namespace callbacks
{
void RunCallback(const Napi::CallbackInfo &info);
Napi::Object Init(Napi::Env env, Napi::Object exports);
} // namespace callbacks

#endif
