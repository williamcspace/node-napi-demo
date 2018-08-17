#ifndef MYWRAPPEDOBJECT_H
#define MYWRAPPEDOBJECT_H

#include <napi.h>

class MyWrappedObject : public Napi::ObjectWrap<MyWrappedObject>
{
public:
  static Napi::Object Init(Napi::Env env, Napi::Object exports);
  MyWrappedObject(const Napi::CallbackInfo &info);

private:
  static Napi::FunctionReference constructor;

  Napi::Value GetValue(const Napi::CallbackInfo &info);
  Napi::Value PlusOne(const Napi::CallbackInfo &info);
  Napi::Value Multiply(const Napi::CallbackInfo &info);

  double value_;
};

#endif
