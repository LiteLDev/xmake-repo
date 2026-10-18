#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/network/packet/PlayerAuthInputPacket.h"

struct ServerPlayerCurrentMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 232>      mCurrentUpdate;
    ::ll::TypedStorage<4, 12, ::Vec3> mOldPosition;
    ::ll::TypedStorage<4, 8, ::Vec2>  mPrevRotation;
    ::ll::TypedStorage<4, 8, ::Vec2>  mNewRotation;
    ::ll::TypedStorage<1, 1, bool>    mShouldCorrectForSneaking;
#else // @header-generator platform
    ::ll::TypedStorage<8, 232, ::PlayerAuthInputPacket> mCurrentUpdate;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mOldPosition;
    ::ll::TypedStorage<4, 8, ::Vec2>                    mPrevRotation;
    ::ll::TypedStorage<4, 8, ::Vec2>                    mNewRotation;
    ::ll::TypedStorage<1, 1, bool>                      mShouldCorrectForSneaking;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ServerPlayerCurrentMovementComponent& operator=(ServerPlayerCurrentMovementComponent const&);
    ServerPlayerCurrentMovementComponent(ServerPlayerCurrentMovementComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
