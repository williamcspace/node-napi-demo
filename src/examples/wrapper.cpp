#include "wrapper.h"

std::string wrapper::hello()
{
  return "World Wrapper";
}

int wrapper::add(int a, int b)
{
  return a + b;
}

Napi::String wrapper::HelloWrapper(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();
  Napi::String value = Napi::String::New(env, wrapper::hello());
  return value;
}

Napi::Number wrapper::AddWrapper(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();
  if (info.Length() < 2 || !info[0].IsNumber() || !info[1].IsNumber())
  {
    Napi::TypeError::New(env, "Number expected").ThrowAsJavaScriptException();
  }

  Napi::Number first = info[0].As<Napi::Number>();
  Napi::Number second = info[1].As<Napi::Number>();

  int value = wrapper::add(first.Int32Value(), second.Int32Value());

  return Napi::Number::New(env, value);
}

Napi::Object wrapper::Init(Napi::Env env, Napi::Object exports)
{
  exports.Set("helloWrapper", Napi::Function::New(env, wrapper::HelloWrapper));
  exports.Set("addWrapper", Napi::Function::New(env, wrapper::AddWrapper));
  return exports;
}
