#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
#ifndef LL_GENERATED_ANDROID_BASE_STUB_CONSTANTBUFFERIMPLEMENTATION
#define LL_GENERATED_ANDROID_BASE_STUB_CONSTANTBUFFERIMPLEMENTATION
class ConstantBufferImplementation {};
#endif
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ConstantBuffer : public ::ConstantBufferImplementation {};
#else // @header-generator platform
class ConstantBuffer {};
#endif // @header-generator platform

} // namespace mce
