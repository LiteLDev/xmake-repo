#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/phys/rope/RopePoint.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct RopePoints {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
