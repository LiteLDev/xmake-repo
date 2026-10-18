#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/float4x4_t.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct Matrix4 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> un;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Matrix4 {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::TypedStorage<4, 64, float[16]>        val;
        ::ll::TypedStorage<4, 64, ::bx::float4x4_t> f4x4;
    } un;
    // NOLINTEND
};
#else // @header-generator platform
struct Matrix4 {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx
