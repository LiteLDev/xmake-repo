#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct TapGestureParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                  maxTouches;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> timeTolerance;
    ::ll::TypedStorage<4, 4, float>                                                 distanceToleranceCm;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TapGestureParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                        maxTouches;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds> timeTolerance;
    ::ll::TypedStorage<4, 4, float>                       distanceToleranceCm;
    // NOLINTEND
};
#else // @header-generator platform
struct TapGestureParameters {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
