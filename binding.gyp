{
  "targets": [
    {
      "target_name": "napidemo",
      "sources": [
        "src/index.cpp",
        "src/examples/helloworld.cpp",
        "src/examples/functionarguments.cpp",
        "src/examples/wrapper.cpp",
        "src/examples/callbacks.cpp",
        "src/examples/objectfactory.cpp",
        "src/examples/functionfactory.cpp",
        "src/examples/actualclass.cpp",
        "src/examples/classexample.cpp"
      ],

      "include_dirs": ["<!@(node -p \"require('node-addon-api').include\")"],
      "dependencies": ["<!(node -p \"require('node-addon-api').gyp\")"],

      'cflags!': [ '-fno-exceptions' ],
      'cflags_cc!': [ '-fno-exceptions' ],
      'xcode_settings': {
        'GCC_ENABLE_CPP_EXCEPTIONS': 'YES',
        'CLANG_CXX_LIBRARY': 'libc++',
        'MACOSX_DEPLOYMENT_TARGET': '10.7',
      },
      'msvs_settings': {
        'VCCLCompilerTool': { 'ExceptionHandling': 1 },
      },
      'defines': [ 'NAPI_DISABLE_CPP_EXCEPTIONS' ]
    }
  ],
}
