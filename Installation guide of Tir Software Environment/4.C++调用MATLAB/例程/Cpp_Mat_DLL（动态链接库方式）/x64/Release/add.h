//
// MATLAB Compiler: 6.5 (R2017b)
// Date: Thu Oct 12 20:52:11 2017
// Arguments:
// "-B""macro_default""-B""cpplib:add""-W""cpplib:add""-T""link:lib""add.m"
//

#ifndef __add_h
#define __add_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" {
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_add_C_API 
#define LIB_add_C_API /* No special import/export declaration */
#endif

/* GENERAL LIBRARY FUNCTIONS -- START */

extern LIB_add_C_API 
bool MW_CALL_CONV addInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_add_C_API 
bool MW_CALL_CONV addInitialize(void);

extern LIB_add_C_API 
void MW_CALL_CONV addTerminate(void);

extern LIB_add_C_API 
void MW_CALL_CONV addPrintStackTrace(void);

/* GENERAL LIBRARY FUNCTIONS -- END */

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_add_C_API 
bool MW_CALL_CONV mlxAdd(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

#ifdef __cplusplus
}
#endif


/* C++ INTERFACE -- WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__MINGW64__)

#ifdef EXPORTING_add
#define PUBLIC_add_CPP_API __declspec(dllexport)
#else
#define PUBLIC_add_CPP_API __declspec(dllimport)
#endif

#define LIB_add_CPP_API PUBLIC_add_CPP_API

#else

#if !defined(LIB_add_CPP_API)
#if defined(LIB_add_C_API)
#define LIB_add_CPP_API LIB_add_C_API
#else
#define LIB_add_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_add_CPP_API void MW_CALL_CONV add(int nargout, mwArray& a, mwArray& b, const mwArray& x, const mwArray& y);

/* C++ INTERFACE -- WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */
#endif

#endif
