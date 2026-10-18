#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, typename T1>
struct TypeWrapper {};
#else // @header-generator platform
template <typename T, typename Tag>
struct TypeWrapper : T {
    TypeWrapper() = default;
    TypeWrapper(T const& other) : T(other) {}
};
#endif // @header-generator platform
