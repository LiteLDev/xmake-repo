#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class BlockType;
class IConstBlockSource;
class Vec3;
struct TickingSystemWithInfo;
// clang-format on

struct GroundTravelTypeSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float calcMoveRelativeSpeed(
        ::IConstBlockSource const&,
        ::Vec3 const&,
        ::AABB const&,
        float,
        bool,
        ::BaseGameVersion const&
    );

    MCNAPI static ::TickingSystemWithInfo create(::BaseGameVersion const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& FRICTION_FIX_VERSION();
    // NOLINTEND
};
