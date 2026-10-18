#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/phys/rope/RopePoint.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
struct RopePoint;
#endif // @header-generator platform
// clang-format on

struct RopePoints {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                   mSize;
    ::ll::TypedStorage<8, 24, std::vector<RopePoint>> mPoints;
    // NOLINTEND

public:
    // prevent constructor by default
    RopePoints(RopePoints const&);
    RopePoints();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Vec3 getInterpolated(ulong, float) const;

    MCNAPI ulong size() const;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                      mSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::RopePoint>> mPoints;
#endif // @header-generator platform
    // NOLINTEND
};
