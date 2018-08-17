#include "functionfactory.h"

Napi::String functionfactory::MyFunction(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();
  return Napi::String::New(env, "hello world");
}

Napi::Function functionfactory::CreateFunction(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();
  Napi::Function fn = Napi::Function::New(env, functionfactory::MyFunction, "theFunction");
  return fn;
}

Napi::Object functionfactory::Init(Napi::Env env, Napi::Object exports)
{
  exports.Set("createFunction", Napi::Function::New(env, functionfactory::CreateFunction));
  return exports;
}
