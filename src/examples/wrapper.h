#ifndef WRAPPER_H
#define WRAPPER_H

#include <napi.h>

namespace wrapper
{
std::string hello();
Napi::String HelloWrapper(const Napi::CallbackInfo &info);

int add(int a, int b);
Napi::Number AddWrapper(const Napi::CallbackInfo &info);

Napi::Object Init(Napi::Env env, Napi::Object exports);
}

#endif
