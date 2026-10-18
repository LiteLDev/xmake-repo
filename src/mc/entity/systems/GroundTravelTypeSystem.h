#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockType;
#else // @header-generator platform
#endif // @header-generator platform
class IConstBlockSource;
class Vec3;
struct TickingSystemWithInfo;
// clang-format on

struct GroundTravelTypeSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float calcMoveRelativeSpeed(
        ::IConstBlockSource const&,
        ::Vec3 const&,
        ::AABB const&,
        float,
        bool,
        ::BaseGameVersion const&
#else // @header-generator platform
    MCAPI static float calcMoveRelativeSpeed(
        ::IConstBlockSource const& region,
        ::Vec3 const&              pos,
        ::AABB const&              aabb,
        float                      speed,
        bool                       hasSoulSpeedEnchant,
        ::BaseGameVersion const&   version
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo create(::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo create(::BaseGameVersion const& version);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BaseGameVersion const& FRICTION_FIX_VERSION();
#else // @header-generator platform
    MCAPI static ::BaseGameVersion const& FRICTION_FIX_VERSION();
#endif // @header-generator platform
    // NOLINTEND
};
