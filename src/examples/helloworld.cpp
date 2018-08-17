#include "helloworld.h"

Napi::String helloworld::HelloMethod(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();
  return Napi::String::New(env, "world");
}

Napi::Object helloworld::Init(Napi::Env env, Napi::Object exports)
{
  exports.Set(Napi::String::New(env, "hello"), Napi::Function::New(env, helloworld::HelloMethod));
  return exports;
}
