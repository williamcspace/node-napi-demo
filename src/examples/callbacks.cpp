#include "callbacks.h"

void callbacks::RunCallback(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();
  Napi::Function cb = info[0].As<Napi::Function>();
  cb.Call(env.Global(), {Napi::String::New(env, "hello world")});
}

Napi::Object callbacks::Init(Napi::Env env, Napi::Object exports)
{
  exports.Set("callback", Napi::Function::New(env, callbacks::RunCallback));
  return exports;
}
