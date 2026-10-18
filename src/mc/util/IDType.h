#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct IDType {};
#else // @header-generator platform
template <typename T>
struct IDType {
    std::optional<uint64> mID;
};
#endif // @header-generator platform
