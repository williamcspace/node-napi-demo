# N-api Demo




## api reference
https://nodejs.github.io/node-addon-api/class_napi_1_1_object_wrap.html

std::string

### inclue <napi.h>
Napi::String
Napi::Number
  - Int32Value()
  - DoubleValue()
Napi::Object
Napi::CallbackInfo&
  - Napi::Env env = info.Env()
  - info.Length()
Napi::Env
Napi::Function
Napi::TypeError
  - Napi::TypeError::New(env, "Number expected").ThrowAsJavaScriptException();
Napi::Value
  - IsNumber
  - As<Napi::Number>()
  - As<Napi::Function>()
Napi::FunctionReference
Napi::ObjectWrap
Napi::HandleScope
Napi::Persistent
Napi::HandleScope 

