#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/vanilla_components/StrictActorIDEntityContextPair.h"
#include "mc/platform/brstd/bitset.h"

struct VehicleInputIntentComponent {
public:
    // VehicleInputIntentComponent inner types define
    enum class DoVehicleTicks : uchar {
        MoveAndRotation                     = 0,
        MoveAndRotationFreeCameraControlled = 1,
        VerticalMovementAction              = 2,
#if defined(LL_PLAT_A) // @header-generator platform
        _Count                              = 3,
#else // @header-generator platform
        Count                               = 3,
#endif // @header-generator platform
    };

    using DoControllersBitset = ::brstd::bitset<3, uchar>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mWASDGroundControlled;
    ::ll::TypedStorage<1, 1, bool>                              mWASDFreeCameraControlled;
    ::ll::TypedStorage<1, 1, bool>                              mControlledByPlayer;
    ::ll::TypedStorage<1, 1, bool>                              mIsClientPredicted;
    ::ll::TypedStorage<1, 1, bool>                              mUsePaddleForce;
    ::ll::TypedStorage<4, 4, int>                               mJumpAmount;
    ::ll::TypedStorage<4, 8, ::Vec2>                            mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mLocalMovementVelocity;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::array<float, 2>>              mPaddleForces;
    ::ll::TypedStorage<1, 2, std::array<bool, 2>>               mIsPaddling;
    ::ll::UntypedStorage<1, 1>                                  mDoControllers;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::array<float, 2>>            mPaddleForces;
    ::ll::TypedStorage<1, 2, ::std::array<bool, 2>>             mIsPaddling;
    ::ll::TypedStorage<1, 1, ::brstd::bitset<3, uchar>>         mDoControllers;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::StrictActorIDEntityContextPair> mControllingEntity;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                             mCurrentTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                            mCurrentTick;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    VehicleInputIntentComponent& operator=(VehicleInputIntentComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
