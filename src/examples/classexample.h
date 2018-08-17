#ifndef CLASSEXAMPLE_H
#define CLASSEXAMPLE_H

#include <napi.h>
#include "actualclass.h"

class ClassExample : public Napi::ObjectWrap<ClassExample>
{
public:
  static Napi::Object Init(Napi::Env env, Napi::Object exports);
  ClassExample(const Napi::CallbackInfo &info);
  ActualClass *GetInternalInstance();

private:
  static Napi::FunctionReference constructor;
  Napi::Value GetValue(const Napi::CallbackInfo &info);
  Napi::Value Add(const Napi::CallbackInfo &info);
  ActualClass *actualClass_;
};

#endif
