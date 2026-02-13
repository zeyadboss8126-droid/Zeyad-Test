/**
 * @file adder.h
 * @brief Header file for addition functionality.
 */

#pragma once

#ifdef _WIN32
  #ifdef ADDER_EXPORTS
    #define ADDER_API __declspec(dllexport)
  #else
    #define ADDER_API __declspec(dllimport)
  #endif
#else
  #define ADDER_API
#endif

/**
 * @brief Adds two integers.
 *
 * This function takes two integer values and returns their sum.
 *
 * @param a First integer value.
 * @param b Second integer value.
 * @return int The sum of a and b.
 */
extern "C" ADDER_API int add(int a, int b);

