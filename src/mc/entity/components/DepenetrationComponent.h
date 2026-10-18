#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/phys/AABB.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on
#endif // @header-generator platform

struct DepenetrationComponent {
public:
    // DepenetrationComponent inner types define
    enum class Bit : int {
        IsAlwaysOneWayCollision = 0,
        WasPenetratingLastFrame = 1,
        IsStuckInCollider       = 2,
        IsStuckItem             = 3,
        PushTowardsClosestSpace = 4,
        Count                   = 5,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using Bitset = std::bitset<5>;
#else // @header-generator platform
    using Bitset = ::std::bitset<5>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::bitset<5>>       mBits;
    ::ll::TypedStorage<4, 12, ::Vec3>              mMinDepenetration;
    ::ll::TypedStorage<8, 24, std::vector<AABB>>   mOneWayPhysicsBlocks;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mTemporaryOverride;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::std::bitset<5>>         mBits;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mMinDepenetration;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>>   mOneWayPhysicsBlocks;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mTemporaryOverride;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DepenetrationComponent& operator=(DepenetrationComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
