#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec2;
class Vec3;
struct ActorDataSeatOffsetComponent;
// clang-format on

struct PositionPassengerUtility {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3 getNewPassengerPosition(::ActorDataSeatOffsetComponent const&, ::Vec3 const&, ::Vec2 const&);
    // NOLINTEND
};
#else // @header-generator platform
struct PositionPassengerUtility {};
#endif // @header-generator platform
