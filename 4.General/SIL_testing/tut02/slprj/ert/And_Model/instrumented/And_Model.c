#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_And_Model_phits;

#define __MW_INSTRUM_HITS_TABLE_VAR_NAME __mw_instrum_And_Model_phits

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void)((++__mw_instrum_And_Model_phits[id - 1u]) || ((__mw_instrum_And_Model_phits[id - 1u] = (~0u))!=0)))
#define __MW_INSTRUM_RECORD_HIT(id) (__mw_instrum_And_Model_phits ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_2() \
  __MW_INSTRUM_RECORD_HIT(11U + __mw_instrum_And_Model_curr_combination_idx_2)

#define __MW_INSTRUM_NODE_4(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(4U), (__mw_instrum_And_Model_curr_combination_idx_2 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(5U), (__mw_instrum_And_Model_curr_combination_idx_2 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_6(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(6U), (__mw_instrum_And_Model_curr_combination_idx_2 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(7U), (0 == 1)))
#define __MW_INSTRUM_NODE_2(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(2U), __MW_INSTRUM_RECORD_COMBINATION_HIT_2(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(3U), __MW_INSTRUM_RECORD_COMBINATION_HIT_2(), (0 == 1)))


#define __MW_INSTRUM_FCN_ENTER_1() \
  unsigned int __mw_instrum_And_Model_curr_combination_idx_2 = 0U; 
#define __MW_INSTRUM_FCN_ENTER_2() 

#define __MW_INSTRUM_NODE_1() (__MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_8() (__MW_INSTRUM_RECORD_HIT(8U))
#define __MW_INSTRUM_NODE_9() (__MW_INSTRUM_RECORD_HIT(9U))
#define __MW_INSTRUM_NODE_10() (__MW_INSTRUM_RECORD_HIT(10U))
#ifdef __cplusplus
template<typename T>
static T *__mw_instrum_address_of(T& arg)
{
  return reinterpret_cast<T*>(
               &const_cast<char&>(
                   reinterpret_cast<const volatile char&>(arg)));
}
#endif

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#define __mw_instrum_address_of(x) &(x)

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_4CZ_And__Model_0020_0028ModelRefSIL_0029(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_4(...) (__MW_INSTRUM_RECORD_HIT_4CZ_And__Model_0020_0028ModelRefSIL_0029(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_4(exp) (__MW_INSTRUM_RECORD_HIT_4CZ_And__Model_0020_0028ModelRefSIL_0029(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_6CZ_And__Model_0020_0028ModelRefSIL_0029(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_6(...) (__MW_INSTRUM_RECORD_HIT_6CZ_And__Model_0020_0028ModelRefSIL_0029(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_6(exp) (__MW_INSTRUM_RECORD_HIT_6CZ_And__Model_0020_0028ModelRefSIL_0029(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_2DA_4_6Z_And__Model_0020_0028ModelRefSIL_0029(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_2(...) (__MW_INSTRUM_RECORD_HIT_2DA_4_6Z_And__Model_0020_0028ModelRefSIL_0029(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_2(exp) (__MW_INSTRUM_RECORD_HIT_2DA_4_6Z_And__Model_0020_0028ModelRefSIL_0029(exp))
#endif


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_FCN_ENTER_2() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_And__Model_0020_0028ModelRefSIL_0029(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_And__Model_0020_0028ModelRefSIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_8XZ_And__Model_0020_0028ModelRefSIL_0029(void) { }
#define __MW_INSTRUM_NODE_8() __MW_INSTRUM_RECORD_HIT_8XZ_And__Model_0020_0028ModelRefSIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_9EZ_And__Model_0020_0028ModelRefSIL_0029(void) { }
#define __MW_INSTRUM_NODE_9() __MW_INSTRUM_RECORD_HIT_9EZ_And__Model_0020_0028ModelRefSIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_10XZ_And__Model_0020_0028ModelRefSIL_0029(void) { }
#define __MW_INSTRUM_NODE_10() __MW_INSTRUM_RECORD_HIT_10XZ_And__Model_0020_0028ModelRefSIL_0029()


#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

# 1 "D:\\ME\\Career\\04.MBD\\Tutorials\\SIL_testing\\tut02\\slprj\\ert\\And_Model\\And_Model.c"
# 16 "D:\\ME\\Career\\04.MBD\\Tutorials\\SIL_testing\\tut02\\slprj\\ert\\And_Model\\And_Model.h"
#ifndef And_Model_h_
#define And_Model_h_
#ifndef And_Model_COMMON_INCLUDES_
#define And_Model_COMMON_INCLUDES_
# 11 "D:\\ME\\Career\\04.MBD\\Tutorials\\SIL_testing\\tut02\\slprj\\ert\\_sharedutils\\rtwtypes.h"
#ifndef RTWTYPES_H
#define RTWTYPES_H



#ifndef false
#define false (0U)
#endif /* false */

#ifndef true
#define true (1U)
#endif /* true */
# 42
typedef signed char int8_T; 
typedef unsigned char uint8_T; 
typedef short int16_T; 
typedef unsigned short uint16_T; 
typedef int int32_T; 
typedef unsigned uint32_T; 
typedef float real32_T; 
typedef double real64_T; 
# 55
typedef double real_T; 
typedef double time_T; 
typedef unsigned char boolean_T; 
typedef int int_T; 
typedef unsigned uint_T; 
typedef unsigned long ulong_T; 
typedef char char_T; 
typedef unsigned char uchar_T; 
typedef char_T byte_T; 
# 73
typedef 
# 70
struct  { 
real32_T re; 
real32_T im; 
} creal32_T; 




typedef 
# 75
struct  { 
real64_T re; 
real64_T im; 
} creal64_T; 




typedef 
# 80
struct  { 
real_T re; 
real_T im; 
} creal_T; 
# 90
typedef 
# 87
struct  { 
int8_T re; 
int8_T im; 
} cint8_T; 
# 97
typedef 
# 94
struct  { 
uint8_T re; 
uint8_T im; 
} cuint8_T; 
# 104
typedef 
# 101
struct  { 
int16_T re; 
int16_T im; 
} cint16_T; 
# 111
typedef 
# 108
struct  { 
uint16_T re; 
uint16_T im; 
} cuint16_T; 
# 118
typedef 
# 115
struct  { 
int32_T re; 
int32_T im; 
} cint32_T; 
# 125
typedef 
# 122
struct  { 
uint32_T re; 
uint32_T im; 
} cuint32_T; 
# 143
typedef void *pointer_T; 

#endif /* RTWTYPES_H */
# 6 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\math.h" 3
#ifndef _MATH_H_
#define _MATH_H_
# 7 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
#ifndef _INC_CRTDEFS
#define _INC_CRTDEFS
# 7 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifndef _INC__MINGW_H
#define _INC__MINGW_H
# 7 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw_mac.h" 3
#ifndef _INC_CRTDEFS_MACRO
#define _INC_CRTDEFS_MACRO
# 167
#ifndef __C89_NAMELESS
#define __C89_NAMELESS __MINGW_EXTENSION
# 184
#endif /* __C89_NAMELESS */

#ifndef __GNU_EXTENSION
#define __GNU_EXTENSION __MINGW_EXTENSION
#endif /* __GNU_EXTENSION */
# 294
#endif /* _INC_CRTDEFS_MACRO */
# 7 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw_secapi.h" 3
#ifndef _INC_MINGW_SECAPI
#define _INC_MINGW_SECAPI
# 73
#endif /* _INC_MINGW_SECAPI */
# 33 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifdef __stdcall
#undef __stdcall
#endif /* __stdcall */
# 50
#ifndef __MINGW_IMPORT
#define __MINGW_IMPORT extern __attribute__ ((__dllimport__))


#endif /* __MINGW_IMPORT */
# 225
#ifndef __MSVCRT_VERSION__
#define __MSVCRT_VERSION__ 0x700

#endif /* __MSVCRT_VERSION__ */


#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x502
#endif /* _WIN32_WINNT */

#ifndef _INT128_DEFINED
#define _INT128_DEFINED
# 252
#endif /* _INT128_DEFINED */




#ifndef __unaligned
#define __unaligned
#endif /* __unaligned */
#ifndef __w64
#define __w64
#endif /* __w64 */
# 6 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\vadefs.h" 3
#ifndef _INC_VADEFS
#define _INC_VADEFS
# 569 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifndef MINGW_SDK_INIT
#define MINGW_SDK_INIT
# 5 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\sdks\\_mingw_directx.h" 3
#ifndef MINGW_HAS_DDRAW_H
#define MINGW_HAS_DDRAW_H 1

#endif /* MINGW_HAS_DDRAW_H */
# 1 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\sdks\\_mingw_ddk.h" 3
#ifndef MINGW_DDK_H
#define MINGW_DDK_H



#endif /* MINGW_DDK_H */
# 582 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#endif /* MINGW_SDK_INIT */
# 22 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\vadefs.h" 3
#ifndef __GNUC_VA_LIST
#define __GNUC_VA_LIST
# 14
#pragma pack ( push, 8 )
# 24
typedef __builtin_va_list __gnuc_va_list; 
#endif /* __GNUC_VA_LIST */


#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED

typedef __gnuc_va_list va_list; 





#endif /* _VA_LIST_DEFINED */
# 106
#endif /* _INC_VADEFS */
# 294 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifndef _W64
#define _W64
#endif /* _W64 */
# 306
#ifndef _CRTIMP2
#define _CRTIMP2 _CRTIMP
#endif /* _CRTIMP2 */

#ifndef _CRTIMP_ALTERNATIVE
#define _CRTIMP_ALTERNATIVE _CRTIMP

#endif /* _CRTIMP_ALTERNATIVE */

#ifndef _MRTIMP2
#define _MRTIMP2 _CRTIMP
#endif /* _MRTIMP2 */
# 328
#ifndef _MT
#define _MT
#endif /* _MT */

#ifndef _MCRTIMP
#define _MCRTIMP _CRTIMP
#endif /* _MCRTIMP */

#ifndef _CRTIMP_PURE
#define _CRTIMP_PURE _CRTIMP
#endif /* _CRTIMP_PURE */

#ifndef _PGLOBAL
#define _PGLOBAL
#endif /* _PGLOBAL */

#ifndef _AGLOBAL
#define _AGLOBAL
#endif /* _AGLOBAL */




#ifndef _CRT_INSECURE_DEPRECATE_MEMORY
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement) 
#endif /* _CRT_INSECURE_DEPRECATE_MEMORY */

#ifndef _CRT_INSECURE_DEPRECATE_GLOBALS
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement) 
#endif /* _CRT_INSECURE_DEPRECATE_GLOBALS */

#ifndef _CRT_MANAGED_HEAP_DEPRECATE
#define _CRT_MANAGED_HEAP_DEPRECATE
#endif /* _CRT_MANAGED_HEAP_DEPRECATE */

#ifndef _CRT_OBSOLETE
#define _CRT_OBSOLETE(_NewItem) 
#endif /* _CRT_OBSOLETE */
# 375
#ifndef _CONST_RETURN
#define _CONST_RETURN
#endif /* _CONST_RETURN */
# 397
#ifndef __CRTDECL
#define __CRTDECL __cdecl
#endif /* __CRTDECL */



#ifndef _TRUNCATE
#define _TRUNCATE ((size_t)-1)
#endif /* _TRUNCATE */

#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif /* _CRT_UNUSED */
# 460
#ifndef __ANONYMOUS_DEFINED
#define __ANONYMOUS_DEFINED
# 471
#endif /* __ANONYMOUS_DEFINED */
# 103 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\vadefs.h" 3
#pragma pack ( pop )
# 552 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw.h" 3
__attribute((__cdecl__)) __attribute((gnu_inline)) extern __inline__ void __debugbreak(void); 
__attribute((__always_inline__, __gnu_inline__)) __attribute((__cdecl__)) extern __inline__ void __debugbreak(void) 
{ 
__asm__ volatile("int {$}3" : :); 
} 




const char *__mingw_get_crt_info(void); 





#endif /* _INC__MINGW_H */
# 23 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
#ifndef _CRTNOALIAS
#define _CRTNOALIAS
#endif /* _CRTNOALIAS */

#ifndef _CRTRESTRICT
#define _CRTRESTRICT
#endif /* _CRTRESTRICT */

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
# 15
#pragma pack ( push, 8 )
# 35
__extension__ typedef unsigned long long size_t; 



#endif /* _SIZE_T_DEFINED */

#ifndef _SSIZE_T_DEFINED
#define _SSIZE_T_DEFINED


__extension__ typedef long long ssize_t; 



#endif /* _SSIZE_T_DEFINED */

#ifndef _RSIZE_T_DEFINED
#define _RSIZE_T_DEFINED
# 52
typedef size_t rsize_t; 

#endif /* _RSIZE_T_DEFINED */

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#ifndef __intptr_t_defined
#define __intptr_t_defined


__extension__ typedef long long intptr_t; 



#endif /* __intptr_t_defined */
#endif /* _INTPTR_T_DEFINED */

#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#ifndef __uintptr_t_defined
#define __uintptr_t_defined


__extension__ typedef unsigned long long uintptr_t; 



#endif /* __uintptr_t_defined */
#endif /* _UINTPTR_T_DEFINED */

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#ifndef _PTRDIFF_T_
#define _PTRDIFF_T_


__extension__ typedef long long ptrdiff_t; 



#endif /* _PTRDIFF_T_ */
#endif /* _PTRDIFF_T_DEFINED */
# 102
#ifndef _WCTYPE_T_DEFINED
#define _WCTYPE_T_DEFINED
#ifndef _WINT_T
#define _WINT_T
typedef unsigned short wint_t; 
typedef unsigned short wctype_t; 
#endif /* _WINT_T */
#endif /* _WCTYPE_T_DEFINED */

#ifndef _ERRCODE_DEFINED
#define _ERRCODE_DEFINED
typedef int errno_t; 
#endif /* _ERRCODE_DEFINED */

#ifndef _TIME32_T_DEFINED
#define _TIME32_T_DEFINED
typedef long __time32_t; 
#endif /* _TIME32_T_DEFINED */

#ifndef _TIME64_T_DEFINED
#define _TIME64_T_DEFINED
__extension__ typedef long long __time64_t; 
#endif /* _TIME64_T_DEFINED */
# 133
#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED



typedef __time64_t time_t; 

#endif /* _TIME_T_DEFINED */

#ifndef _CRT_SECURE_CPP_NOTHROW
#define _CRT_SECURE_CPP_NOTHROW throw()
#endif /* _CRT_SECURE_CPP_NOTHROW */
# 422
struct threadlocaleinfostruct; 
struct threadmbcinfostruct; 
typedef struct threadlocaleinfostruct *pthreadlocinfo; 
typedef struct threadmbcinfostruct *pthreadmbcinfo; 
struct __lc_time_data; 




typedef 
# 428
struct localeinfo_struct { 
pthreadlocinfo locinfo; 
pthreadmbcinfo mbcinfo; 
} _locale_tstruct, *_locale_t; 

#ifndef _TAGLC_ID_DEFINED
#define _TAGLC_ID_DEFINED




typedef 
# 435
struct tagLC_ID { 
unsigned short wLanguage; 
unsigned short wCountry; 
unsigned short wCodePage; 
} LC_ID, *LPLC_ID; 
#endif /* _TAGLC_ID_DEFINED */

#ifndef _THREADLOCALEINFO
#define _THREADLOCALEINFO
# 468
typedef 
# 444
struct threadlocaleinfostruct { 
int refcount; 
unsigned lc_codepage; 
unsigned lc_collate_cp; 
unsigned long lc_handle[6]; 
LC_ID lc_id[6]; 
struct  { 
char *locale; 
unsigned short *wlocale; 
int *refcount; 
int *wrefcount; 
} lc_category[6]; 
int lc_clike; 
int mb_cur_max; 
int *lconv_intl_refcount; 
int *lconv_num_refcount; 
int *lconv_mon_refcount; 
struct lconv *lconv; 
int *ctype1_refcount; 
unsigned short *ctype1; 
const unsigned short *pctype; 
const unsigned char *pclmap; 
const unsigned char *pcumap; 
struct __lc_time_data *lc_time_curr; 
} threadlocinfo; 
#endif /* _THREADLOCALEINFO */

#ifndef __crt_typefix
#define __crt_typefix(ctype) 
#endif /* __crt_typefix */





#endif /* _INC_CRTDEFS */
# 476
#pragma pack ( pop )
# 15 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\math.h" 3
struct _exception; 
# 57
#ifndef __MINGW_FPCLASS_DEFINED
#define __MINGW_FPCLASS_DEFINED 1
# 70
#endif /* __MINGW_FPCLASS_DEFINED */





# 97
#define __mingw_types_compatible_p(type1,type2) __builtin_types_compatible_p (type1, type2)







#define __mingw_choose_expr __builtin_choose_expr
# 114
#ifndef __MINGW_SOFTMATH
#define __MINGW_SOFTMATH
# 17
#pragma pack ( push, 8 )
# 125
typedef 
# 119
union __mingw_dbl_type_t { 
double x; 
unsigned long long val; 


__extension__ 
# 122
struct  { 
unsigned low, high; 
} lh; 
} __mingw_dbl_type_t; 




typedef 
# 127
union __mingw_flt_type_t { 
float x; 
unsigned val; 
} __mingw_flt_type_t; 
# 141
typedef 
# 132
union __mingw_ldbl_type_t { 

long double x; 
# 140
__extension__ 
# 135
struct  { 
unsigned low, high; 
int sign_exponent:16; 
int res1:16; 
int res0:32; 
} lh; 
} __mingw_ldbl_type_t; 
# 151
typedef 
# 143
union __mingw_fp_types_t { 

long double *ld; 
double *d; 
float *f; 
__mingw_ldbl_type_t *ldt; 
__mingw_dbl_type_t *dt; 
__mingw_flt_type_t *ft; 
} __mingw_fp_types_t; 

#endif /* __MINGW_SOFTMATH */

#ifndef _HUGE
#define _HUGE (* __MINGW_IMP_SYMBOL(_HUGE))
# 156
extern double *__imp__HUGE; 

#endif /* _HUGE */
# 166
#ifndef _EXCEPTION_DEFINED
#define _EXCEPTION_DEFINED
struct _exception { 
int type; 
const char *name; 
double arg1; 
double arg2; 
double retval; 
}; 

void __mingw_raise_matherr(int typ, const char * name, double a1, double a2, double rslt); 

void __mingw_setusermatherr(int ( __attribute((__cdecl__))*)(struct _exception *) ); 
__attribute((__dllimport__)) void __setusermatherr(int ( __attribute((__cdecl__))*)(struct _exception *) ); 

#endif /* _EXCEPTION_DEFINED */

__attribute((__cdecl__)) double sin(double _X); 
__attribute((__cdecl__)) double cos(double _X); 
__attribute((__cdecl__)) double tan(double _X); 
__attribute((__cdecl__)) double sinh(double _X); 
__attribute((__cdecl__)) double cosh(double _X); 
__attribute((__cdecl__)) double tanh(double _X); 
__attribute((__cdecl__)) double asin(double _X); 
__attribute((__cdecl__)) double acos(double _X); 
__attribute((__cdecl__)) double atan(double _X); 
__attribute((__cdecl__)) double atan2(double _Y, double _X); 
__attribute((__cdecl__)) double exp(double _X); 
__attribute((__cdecl__)) double log(double _X); 
__attribute((__cdecl__)) double log10(double _X); 
__attribute((__cdecl__)) double pow(double _X, double _Y); 
__attribute((__cdecl__)) double sqrt(double _X); 
__attribute((__cdecl__)) double ceil(double _X); 
__attribute((__cdecl__)) double floor(double _X); 


__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ float fabsf(float x); 
__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ long double fabsl(long double); 
__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ double fabs(double _X); 



__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ float fabsf(float x) 
{ 

return __builtin_fabsf(x); 
# 217
} 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define fabsf(x) __builtin_mw_fabsf(x)
#endif
# 219
__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ long double fabsl(long double x) 
{ 



long double res = (0.0L); 
__asm__ volatile("fabs;" : "=t" (res) : "0" (x)); 
return res; 

} 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define fabsl(x) __builtin_mw_fabsl(x)
#endif
# 230
__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ double fabs(double x) 
{ 

return __builtin_fabs(x); 
# 239
} 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define fabs(x) __builtin_mw_fabs(x)
#endif
__attribute((__cdecl__)) double ldexp(double _X, int _Y); 
__attribute((__cdecl__)) double frexp(double _X, int * _Y); 
__attribute((__cdecl__)) double modf(double _X, double * _Y); 
__attribute((__cdecl__)) double fmod(double _X, double _Y); 

__attribute((__cdecl__)) void sincos(double __x, double * p_sin, double * p_cos); 
__attribute((__cdecl__)) void sincosl(long double __x, long double * p_sin, long double * p_cos); 
__attribute((__cdecl__)) void sincosf(float __x, float * p_sin, float * p_cos); 

#ifndef _CRT_ABS_DEFINED
#define _CRT_ABS_DEFINED
__attribute((__cdecl__)) int abs(int _X); 
__attribute((__cdecl__)) long labs(long _X); 
#endif /* _CRT_ABS_DEFINED */
#ifndef _CRT_ATOF_DEFINED
#define _CRT_ATOF_DEFINED
__attribute((__cdecl__)) double atof(const char * _String); 
__attribute((__cdecl__)) double _atof_l(const char * _String, _locale_t _Locale); 
#endif /* _CRT_ATOF_DEFINED */
# 268
#ifndef _COMPLEX_DEFINED
#define _COMPLEX_DEFINED
struct _complex { 
double x; 
double y; 
}; 
#endif /* _COMPLEX_DEFINED */

__attribute((__cdecl__)) double _cabs(struct _complex _ComplexA); 
__attribute((__cdecl__)) double _hypot(double _X, double _Y); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _j0(double _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _j1(double _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _jn(int _X, double _Y); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _y0(double _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _y1(double _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _yn(int _X, double _Y); 
#ifndef _CRT_MATHERR_DEFINED
#define _CRT_MATHERR_DEFINED
__attribute((__dllimport__)) __attribute((__cdecl__)) int _matherr(struct _exception *); 
#endif /* _CRT_MATHERR_DEFINED */
# 295
#ifndef _SIGN_DEFINED
#define _SIGN_DEFINED
__attribute((__dllimport__)) __attribute((__cdecl__)) double _chgsign(double _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _copysign(double _Number, double _Sign); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _logb(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _nextafter(double, double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _scalb(double, long); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _finite(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _fpclass(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _isnan(double); 
#endif /* _SIGN_DEFINED */





__attribute((__dllimport__)) __attribute((__cdecl__)) double j0(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double j1(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double jn(int, double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double y0(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double y1(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double yn(int, double); 

__attribute((__dllimport__)) __attribute((__cdecl__)) double chgsign(double); 
# 327
__attribute((__dllimport__)) __attribute((__cdecl__)) int finite(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int fpclass(double); 
# 372
typedef float float_t; 
typedef double double_t; 
# 393
#define FP_NAN 0x0100
#define FP_NORMAL 0x0400
#define FP_INFINITE (FP_NAN | FP_NORMAL)
# 407
__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ int __fpclassifyl(long double); 
__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ int __fpclassifyf(float); 
__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ int __fpclassify(double); 


__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ int __fpclassifyl(long double x) { 

__mingw_fp_types_t hlp; 
unsigned e; 
hlp.ld = &x; 
e = ((hlp.ldt->lh).sign_exponent) & 0x7fff; { 
if (!e) 
{ 
unsigned h = (hlp.ldt->lh).high; { 
if (!(((hlp.ldt->lh).low) | h)) { 
return 0x4000; } else { { 
if (!(h & 0x80000000U)) { 
return (0x400 | 0x4000); }  } }  } 
} else { { 
if (e == (0x7fff)) { 
return ((((((hlp.ldt->lh).high) & (0x7fffffff)) | ((hlp.ldt->lh).low)) == (0)) ? (0x100 | 0x400) : 0x100); }  } }  } 

return 0x400; 
# 437
} 
__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ int __fpclassify(double x) { 

__mingw_fp_types_t hlp; 
unsigned l, h; 

hlp.d = &x; 
h = (hlp.ldt->lh).high; 
l = ((hlp.ldt->lh).low) | (h & (0xfffff)); 
h &= (0x7ff00000); { 
if ((h | l) == (0)) { 
return 0x4000; }  } { 
if (!h) { 
return (0x400 | 0x4000); }  } { 
if (h == (0x7ff00000)) { 
return (l ? 0x100 : (0x100 | 0x400)); }  } 
return 0x400; 
# 459
} 
__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ int __fpclassifyf(float x) { 

__mingw_fp_types_t hlp; 

hlp.f = &x; 
hlp.ft->val &= (0x7fffffff); { 
if (hlp.ft->val == (0)) { 
return 0x4000; }  } { 
if (hlp.ft->val < (0x800000)) { 
return (0x400 | 0x4000); }  } { 
if (hlp.ft->val >= (0x7f800000)) { 
return ((hlp.ft->val > (0x7f800000)) ? 0x100 : (0x100 | 0x400)); }  } 
return 0x400; 
# 478
} 


# 494
#define __dfp_expansion(__call,__fin,x) __fin


#define fpclassify(x) __mingw_choose_expr ( __mingw_types_compatible_p (__typeof__ (x), double), __fpclassify(x), __mingw_choose_expr ( __mingw_types_compatible_p (__typeof__ (x), float), __fpclassifyf(x), __mingw_choose_expr ( __mingw_types_compatible_p (__typeof__ (x), long double), __fpclassifyl(x), __dfp_expansion(__fpclassify,(__builtin_trap(),0),x))))
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isfinite(x) __builtin_mw_isfinite(x)
#else
# 511
#define isfinite(x) ((fpclassify(x) & FP_NAN) == 0)
#endif
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isinf(x) __builtin_mw_isinf(x)
#else
# 514
#define isinf(x) (fpclassify(x) == FP_INFINITE)
#endif




__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ int __isnan(double); 
__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ int __isnanf(float); 
__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ int __isnanl(long double); 


__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ int __isnan(double _x) 
{ 

__mingw_fp_types_t hlp; 
int l, h; 

hlp.d = &_x; 
l = (hlp.dt->lh).low; 
h = ((hlp.dt->lh).high) & (0x7fffffff); 
h |= ((unsigned)(l | (-l))) >> 31; 
h = 0x7ff00000 - h; 
return ((int)((unsigned)h)) >> 31; 
# 544
} 

__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ int __isnanf(float _x) 
{ 

__mingw_fp_types_t hlp; 
int i; 

hlp.f = &_x; 
i = (hlp.ft->val) & (0x7fffffff); 
i = 0x7f800000 - i; 
return (int)(((unsigned)i) >> 31); 
# 563
} 

__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ int __isnanl(long double _x) 
{ 

__mingw_fp_types_t ld; 
int xx, signexp; 

ld.ld = &_x; 
signexp = (((ld.ldt->lh).sign_exponent) & 0x7fff) << 1; 
xx = (int)(((ld.ldt->lh).low) | (((ld.ldt->lh).high) & 0x7fffffffU)); 
signexp |= ((unsigned)(xx | (-xx))) >> 31; 
signexp = 0xfffe - signexp; 
return ((int)((unsigned)signexp)) >> 16; 
# 586
} 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isnan(x) __builtin_mw_isnan(x)
#else

#define isnan(x) __mingw_choose_expr ( __mingw_types_compatible_p (__typeof__ (x), double), __isnan(x), __mingw_choose_expr ( __mingw_types_compatible_p (__typeof__ (x), float), __isnanf(x), __mingw_choose_expr ( __mingw_types_compatible_p (__typeof__ (x), long double), __isnanl(x), __dfp_expansion(__isnan,(__builtin_trap(),x),x))))
#endif
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isnormal(x) __builtin_mw_isnormal(x)
#else
# 604
#define isnormal(x) (fpclassify(x) == FP_NORMAL)
#endif

__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ int __signbit(double); 
__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ int __signbitf(float); 
__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ int __signbitl(long double); 

__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ int __signbit(double x) { 

__mingw_fp_types_t hlp; 

hlp.d = &x; 
return ((((hlp.dt->lh).high) & 0x80000000U) != (0)); 
# 622
} 

__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ int __signbitf(float x) { 

__mingw_fp_types_t hlp; 
hlp.f = &x; 
return (((hlp.ft->val) & 0x80000000U) != (0)); 
# 634
} 

__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ int __signbitl(long double x) { 

__mingw_fp_types_t ld; 
ld.ld = &x; 
return ((((ld.ldt->lh).sign_exponent) & 0x8000) != 0); 
# 648
} 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define signbit(x) __builtin_mw_signbit(x)
#else
# 651
#define signbit(x) __mingw_choose_expr ( __mingw_types_compatible_p (__typeof__ (x), double), __signbit(x), __mingw_choose_expr ( __mingw_types_compatible_p (__typeof__ (x), float), __signbitf(x), __mingw_choose_expr ( __mingw_types_compatible_p (__typeof__ (x), long double), __signbitl(x), __dfp_expansion(__signbit,(__builtin_trap(),x),x))))
#endif
# 664
__attribute((__cdecl__)) extern float sinf(float _X); 
__attribute((__cdecl__)) extern long double sinl(long double); 

__attribute((__cdecl__)) extern float cosf(float _X); 
__attribute((__cdecl__)) extern long double cosl(long double); 

__attribute((__cdecl__)) extern float tanf(float _X); 
__attribute((__cdecl__)) extern long double tanl(long double); 
__attribute((__cdecl__)) extern float asinf(float _X); 
__attribute((__cdecl__)) extern long double asinl(long double); 

__attribute((__cdecl__)) extern float acosf(float); 
__attribute((__cdecl__)) extern long double acosl(long double); 

__attribute((__cdecl__)) extern float atanf(float); 
__attribute((__cdecl__)) extern long double atanl(long double); 

__attribute((__cdecl__)) extern float atan2f(float, float); 
__attribute((__cdecl__)) extern long double atan2l(long double, long double); 


__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ float sinhf(float _X); 

__attribute((__gnu_inline__)) extern __inline__ float sinhf(float _X) { return ((float)sinh((double)_X)); } 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define sinhf(x) __builtin_mw_sinhf(x)
#endif
# 689
__attribute((__cdecl__)) extern long double sinhl(long double); 

__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ float coshf(float _X); 

__attribute((__gnu_inline__)) extern __inline__ float coshf(float _X) { return ((float)cosh((double)_X)); } 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define coshf(x) __builtin_mw_coshf(x)
#endif
# 695
__attribute((__cdecl__)) extern long double coshl(long double); 

__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ float tanhf(float _X); 

__attribute((__gnu_inline__)) extern __inline__ float tanhf(float _X) { return ((float)tanh((double)_X)); } 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define tanhf(x) __builtin_mw_tanhf(x)
#endif
# 701
__attribute((__cdecl__)) extern long double tanhl(long double); 



__attribute((__cdecl__)) extern double acosh(double); 
__attribute((__cdecl__)) extern float acoshf(float); 
__attribute((__cdecl__)) extern long double acoshl(long double); 


__attribute((__cdecl__)) extern double asinh(double); 
__attribute((__cdecl__)) extern float asinhf(float); 
__attribute((__cdecl__)) extern long double asinhl(long double); 


__attribute((__cdecl__)) extern double atanh(double); 
__attribute((__cdecl__)) extern float atanhf(float); 
__attribute((__cdecl__)) extern long double atanhl(long double); 



__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ float expf(float _X); 

__attribute((__gnu_inline__)) extern __inline__ float expf(float _X) { return ((float)exp((double)_X)); } 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define expf(x) __builtin_mw_expf(x)
#endif
# 725
__attribute((__cdecl__)) extern long double expl(long double); 


__attribute((__cdecl__)) extern double exp2(double); 
__attribute((__cdecl__)) extern float exp2f(float); 
__attribute((__cdecl__)) extern long double exp2l(long double); 



__attribute((__cdecl__)) extern double expm1(double); 
__attribute((__cdecl__)) extern float expm1f(float); 
__attribute((__cdecl__)) extern long double expm1l(long double); 


extern __attribute((gnu_inline)) __inline__ float frexpf(float _X, int * _Y); 

__attribute((__gnu_inline__)) extern __inline__ float frexpf(float _X, int *_Y) { return ((float)frexp((double)_X, _Y)); } 

__attribute((__cdecl__)) extern long double frexpl(long double, int *); 




__attribute((__cdecl__)) extern int ilogb(double); 
__attribute((__cdecl__)) extern int ilogbf(float); 
__attribute((__cdecl__)) extern int ilogbl(long double); 


__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ float ldexpf(float _X, int _Y); 

__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ float ldexpf(float x, int expn) { return (float)ldexp((double)x, expn); } 

__attribute((__cdecl__)) extern long double ldexpl(long double, int); 


__attribute((__cdecl__)) extern float logf(float); 
__attribute((__cdecl__)) extern long double logl(long double); 


__attribute((__cdecl__)) extern float log10f(float); 
__attribute((__cdecl__)) extern long double log10l(long double); 


__attribute((__cdecl__)) extern double log1p(double); 
__attribute((__cdecl__)) extern float log1pf(float); 
__attribute((__cdecl__)) extern long double log1pl(long double); 


__attribute((__cdecl__)) extern double log2(double); 
__attribute((__cdecl__)) extern float log2f(float); 
__attribute((__cdecl__)) extern long double log2l(long double); 


__attribute((__cdecl__)) extern double logb(double); 
__attribute((__cdecl__)) extern float logbf(float); 
__attribute((__cdecl__)) extern long double logbl(long double); 
# 863
__attribute((__cdecl__)) extern float modff(float, float *); 
__attribute((__cdecl__)) extern long double modfl(long double, long double *); 


__attribute((__cdecl__)) extern double scalbn(double, int); 
__attribute((__cdecl__)) extern float scalbnf(float, int); 
__attribute((__cdecl__)) extern long double scalbnl(long double, int); 

__attribute((__cdecl__)) extern double scalbln(double, long); 
__attribute((__cdecl__)) extern float scalblnf(float, long); 
__attribute((__cdecl__)) extern long double scalblnl(long double, long); 



__attribute((__cdecl__)) extern double cbrt(double); 
__attribute((__cdecl__)) extern float cbrtf(float); 
__attribute((__cdecl__)) extern long double cbrtl(long double); 


__attribute((__cdecl__)) extern double hypot(double, double); 
__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ float hypotf(float x, float y); 

__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ float hypotf(float x, float y) { return (float)hypot((double)x, (double)y); } 

__attribute((__cdecl__)) extern long double hypotl(long double, long double); 


__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ float powf(float _X, float _Y); 

__attribute((__gnu_inline__)) extern __inline__ float powf(float _X, float _Y) { return ((float)pow((double)_X, (double)_Y)); } 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define powf(x,y) __builtin_mw_powf(x,y)
#endif
# 894
__attribute((__cdecl__)) extern long double powl(long double, long double); 


__attribute((__cdecl__)) extern float sqrtf(float); 
extern long double sqrtl(long double); 


__attribute((__cdecl__)) extern double erf(double); 
__attribute((__cdecl__)) extern float erff(float); 
__attribute((__cdecl__)) extern long double erfl(long double); 


__attribute((__cdecl__)) extern double erfc(double); 
__attribute((__cdecl__)) extern float erfcf(float); 
__attribute((__cdecl__)) extern long double erfcl(long double); 


__attribute((__cdecl__)) extern double lgamma(double); 
__attribute((__cdecl__)) extern float lgammaf(float); 
__attribute((__cdecl__)) extern long double lgammal(long double); 

extern int signgam; 


__attribute((__cdecl__)) extern double tgamma(double); 
__attribute((__cdecl__)) extern float tgammaf(float); 
__attribute((__cdecl__)) extern long double tgammal(long double); 


__attribute((__cdecl__)) extern float ceilf(float); 
__attribute((__cdecl__)) extern long double ceill(long double); 


__attribute((__cdecl__)) extern float floorf(float); 
__attribute((__cdecl__)) extern long double floorl(long double); 


__attribute((__cdecl__)) extern double nearbyint(double); 
__attribute((__cdecl__)) extern float nearbyintf(float); 
__attribute((__cdecl__)) extern long double nearbyintl(long double); 



__attribute((__cdecl__)) extern double rint(double); 
__attribute((__cdecl__)) extern float rintf(float); 
__attribute((__cdecl__)) extern long double rintl(long double); 


__attribute((__cdecl__)) extern long lrint(double); 
__attribute((__cdecl__)) extern long lrintf(float); 
__attribute((__cdecl__)) extern long lrintl(long double); 

__extension__ __attribute((__cdecl__)) long long llrint(double); 
__extension__ __attribute((__cdecl__)) long long llrintf(float); 
__extension__ __attribute((__cdecl__)) long long llrintl(long double); 
# 1030
__attribute((__cdecl__)) extern double round(double); 
__attribute((__cdecl__)) extern float roundf(float); 
__attribute((__cdecl__)) extern long double roundl(long double); 


__attribute((__cdecl__)) extern long lround(double); 
__attribute((__cdecl__)) extern long lroundf(float); 
__attribute((__cdecl__)) extern long lroundl(long double); 
__extension__ __attribute((__cdecl__)) long long llround(double); 
__extension__ __attribute((__cdecl__)) long long llroundf(float); 
__extension__ __attribute((__cdecl__)) long long llroundl(long double); 



__attribute((__cdecl__)) extern double trunc(double); 
__attribute((__cdecl__)) extern float truncf(float); 
__attribute((__cdecl__)) extern long double truncl(long double); 


__attribute((__cdecl__)) extern float fmodf(float, float); 
__attribute((__cdecl__)) extern long double fmodl(long double, long double); 


__attribute((__cdecl__)) extern double remainder(double, double); 
__attribute((__cdecl__)) extern float remainderf(float, float); 
__attribute((__cdecl__)) extern long double remainderl(long double, long double); 


__attribute((__cdecl__)) extern double remquo(double, double, int *); 
__attribute((__cdecl__)) extern float remquof(float, float, int *); 
__attribute((__cdecl__)) extern long double remquol(long double, long double, int *); 


__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ double copysign(double, double); 
__attribute((__cdecl__)) extern __attribute((gnu_inline)) __inline__ float copysignf(float, float); 
__attribute((__cdecl__)) extern long double copysignl(long double, long double); 



__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ double copysign(double x, double y) 
{ 
__mingw_dbl_type_t hx, hy; 
hx.x = x; hy.x = y; 
(hx.lh).high = (((hx.lh).high) & (0x7fffffff)) | (((hy.lh).high) & 0x80000000U); 
return hx.x; 
} 
__attribute((__gnu_inline__)) __attribute((__cdecl__)) extern __inline__ float copysignf(float x, float y) 
{ 
__mingw_flt_type_t hx, hy; 
hx.x = x; hy.x = y; 
hx.val = ((hx.val) & (0x7fffffff)) | ((hy.val) & 0x80000000U); 
return hx.x; 
} 




__attribute((__cdecl__)) extern double nan(const char * tagp); 
__attribute((__cdecl__)) extern float nanf(const char * tagp); 
__attribute((__cdecl__)) extern long double nanl(const char * tagp); 
# 1098
__attribute((__cdecl__)) extern double nextafter(double, double); 
__attribute((__cdecl__)) extern float nextafterf(float, float); 
__attribute((__cdecl__)) extern long double nextafterl(long double, long double); 


__attribute((__cdecl__)) extern double nexttoward(double, long double); 
__attribute((__cdecl__)) extern float nexttowardf(float, long double); 
__attribute((__cdecl__)) extern long double nexttowardl(long double, long double); 



__attribute((__cdecl__)) extern double fdim(double x, double y); 
__attribute((__cdecl__)) extern float fdimf(float x, float y); 
__attribute((__cdecl__)) extern long double fdiml(long double x, long double y); 
# 1119
__attribute((__cdecl__)) extern double fmax(double, double); 
__attribute((__cdecl__)) extern float fmaxf(float, float); 
__attribute((__cdecl__)) extern long double fmaxl(long double, long double); 


__attribute((__cdecl__)) extern double fmin(double, double); 
__attribute((__cdecl__)) extern float fminf(float, float); 
__attribute((__cdecl__)) extern long double fminl(long double, long double); 



__attribute((__cdecl__)) extern double fma(double, double, double); 
__attribute((__cdecl__)) extern float fmaf(float, float, float); 
__attribute((__cdecl__)) extern long double fmal(long double, long double, long double); 
# 1181
__attribute((__dllimport__)) __attribute((__cdecl__)) float _copysignf(float _Number, float _Sign); 
__attribute((__dllimport__)) __attribute((__cdecl__)) float _chgsignf(float _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) float _logbf(float _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) float _nextafterf(float _X, float _Y); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _finitef(float _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _isnanf(float _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _fpclassf(float _X); 



__attribute((__cdecl__)) extern long double _chgsignl(long double); 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define _copysignl __builtin_mw__copysignl
#else
# 1192
#define _copysignl copysignl
#endif
# 1583
#endif /* _MATH_H_ */
# 22 "D:\\ME\\Career\\04.MBD\\Tutorials\\SIL_testing\\tut02\\slprj\\ert\\And_Model\\And_Model.h"
#endif /* And_Model_COMMON_INCLUDES_ */
# 16 "D:\\ME\\Career\\04.MBD\\Tutorials\\SIL_testing\\tut02\\slprj\\ert\\And_Model\\And_Model_types.h"
#ifndef And_Model_types_h_
#define And_Model_types_h_
# 1581 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024a\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\math.h" 3
#pragma pack ( pop )
# 20 "D:\\ME\\Career\\04.MBD\\Tutorials\\SIL_testing\\tut02\\slprj\\ert\\And_Model\\And_Model_types.h"
typedef struct tag_RTM_And_Model_T RT_MODEL_And_Model_T; 

#endif /* And_Model_types_h_ */
# 27 "D:\\ME\\Career\\04.MBD\\Tutorials\\SIL_testing\\tut02\\slprj\\ert\\And_Model\\And_Model.h"
struct tag_RTM_And_Model_T { 
const char_T **errorStatus; 
}; 



typedef 
# 31
struct  { 
RT_MODEL_And_Model_T rtm; 
} MdlrefDW_And_Model_T; 


extern void And_Model_initialize(const char_T ** rt_errorStatus, RT_MODEL_And_Model_T *const  And_Model_M); 

extern void And_Model(const boolean_T * rtu_In1, const boolean_T * rtu_In2, boolean_T * rty_Out1); 
# 57
#endif /* And_Model_h_ */
# 16 "D:\\ME\\Career\\04.MBD\\Tutorials\\SIL_testing\\tut02\\slprj\\ert\\And_Model\\And_Model_private.h"
#ifndef And_Model_private_h_
#define And_Model_private_h_




#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm) (*((rtm)->errorStatus))
#endif /* rtmGetErrorStatus */

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm,val) (*((rtm)->errorStatus) = (val))
#endif /* rtmSetErrorStatus */

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm) (rtm)->errorStatus
#endif /* rtmGetErrorStatusPointer */

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm,val) ((rtm)->errorStatus = (val))
#endif /* rtmSetErrorStatusPointer */
#endif /* And_Model_private_h_ */
# 21 "D:\\ME\\Career\\04.MBD\\Tutorials\\SIL_testing\\tut02\\slprj\\ert\\And_Model\\And_Model.c"
void And_Model(const boolean_T *rtu_In1, const boolean_T *rtu_In2, boolean_T *
rty_Out1) 
{ __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); 

*rty_Out1 = __MW_INSTRUM_NODE_2((__MW_INSTRUM_NODE_4(*rtu_In1)) && (__MW_INSTRUM_NODE_6(*rtu_In2))); __MW_INSTRUM_NODE_8(); 
} 


void And_Model_initialize(const char_T **rt_errorStatus, RT_MODEL_And_Model_T *const 
And_Model_M) 
{ __MW_INSTRUM_FCN_ENTER_2(); __MW_INSTRUM_NODE_9(); 



And_Model_M->errorStatus = rt_errorStatus; __MW_INSTRUM_NODE_10(); 
} 
