#include <napi.h>
#include "examples/helloworld.h"
#include "examples/functionarguments.h"
#include "examples/wrapper.h"
#include "examples/callbacks.h"
#include "examples/objectfactory.h"
#include "examples/functionfactory.h"
#include "examples/classexample.h"

/**
* This code is our entry-point. We receive two arguments here, the first is the
* environment that represent an independent instance of the JavaScript runtime,
* the second is exports, the same as module.exports in a .js file.
* You can either add properties to the exports object passed in or create your
* own exports object. In either case you must return the object to be used as
* the exports for the module when you return from the Init function.
*/
Napi::Object Init(Napi::Env env, Napi::Object exports)
{
  //return exports;
  helloworld::Init(env, exports);
  functionarguments::Init(env, exports);
  wrapper::Init(env, exports);
  callbacks::Init(env, exports);
  objectfactory::Init(env, exports);
  functionfactory::Init(env, exports);
  // functionexample::Init(env, exports);
  return ClassExample::Init(env, exports);
}

/**
* This code defines the entry-point for the Node addon, it tells Node where to go
* once the library has been loaded into active memory. The first argument must
* match the "target" in our *binding.gyp*. Using NODE_GYP_MODULE_NAME ensures
* that the argument will be correct, as long as the module is built with
* node-gyp (which is the usual way of building modules). The second argument
* points to the function to invoke. The function must not be namespaced.
*/
NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init)
