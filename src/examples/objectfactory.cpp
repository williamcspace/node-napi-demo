#include "objectfactory.h"

Napi::Object objectfactory::CreateObject(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();
  Napi::Object obj = Napi::Object::New(env);
  obj.Set(Napi::String::New(env, "msg"), info[0].ToString());

  return obj;
}

Napi::Object objectfactory::Init(Napi::Env env, Napi::Object exports)
{
  exports.Set("createObject", Napi::Function::New(env, objectfactory::CreateObject));
  return exports;
}
