#pragma once

#if defined(_WIN32)
  #if defined(MATHS_EXPORTS)
    #define MATHS_API __declspec(dllexport)
  #else
    #define MATHS_API __declspec(dllimport)
  #endif
#else
  #define MATHS_API
#endif

extern "C" MATHS_API int add(int a, int b);

