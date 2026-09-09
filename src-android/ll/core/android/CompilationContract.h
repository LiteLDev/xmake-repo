#pragma once

#if !defined(__ANDROID__) || !defined(__aarch64__)
#error LeviLamina Android kernel requires the Android AArch64 compiler
#endif
#if !defined(LL_PLAT_A) || defined(LL_PLAT_C) || defined(LL_PLAT_S)
#error LL_PLAT_A must be the only LL platform macro
#endif
#if __ANDROID_API__ != 28
#error P6 binary API must be 28
#endif
#if __cplusplus != 202002L
#error P6 requires C++20
#endif
#if defined(__EXCEPTIONS) || defined(__GXX_RTTI)
#error P6 requires exceptions and RTTI to be disabled
#endif
#if defined(_HAS_CXX23) || (defined(_LIBCPP_STD_VER) && _LIBCPP_STD_VER != 20)
#error Desktop C++23 implementation macros must not enter the Android kernel
#endif
