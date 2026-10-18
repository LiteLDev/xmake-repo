#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/MovePlayerTeleportData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/legacy/ActorRuntimeID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/packet/MovePlayerTeleportData.h"
#endif // @header-generator platform
#include "mc/network/packet/PlayerInputTick.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

struct MovePlayerPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                       mPlayerID;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mPos;
    ::ll::TypedStorage<4, 8, ::Vec2>                                 mRot;
    ::ll::TypedStorage<4, 4, float>                                  mYHeadRot;
    ::ll::UntypedStorage<1, 1>                                       mResetPosition;
    ::ll::TypedStorage<1, 1, bool>                                   mOnGround;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                       mRidingID;
    ::ll::TypedStorage<4, 12, std::optional<MovePlayerTeleportData>> mTeleportData;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>                      mTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                            mPlayerID;
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mPos;
    ::ll::TypedStorage<4, 8, ::Vec2>                                      mRot;
    ::ll::TypedStorage<4, 4, float>                                       mYHeadRot;
    ::ll::TypedStorage<1, 1, ::PlayerPositionModeComponent::PositionMode> mResetPosition;
    ::ll::TypedStorage<1, 1, bool>                                        mOnGround;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                            mRidingID;
    ::ll::TypedStorage<4, 12, ::std::optional<::MovePlayerTeleportData>>  mTeleportData;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>                           mTick;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    MovePlayerPacketPayload& operator=(MovePlayerPacketPayload const&);
    MovePlayerPacketPayload(MovePlayerPacketPayload const&);
#else // @header-generator platform
    MovePlayerPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MovePlayerPacketPayload(::Player const&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI MovePlayerPacketPayload(::Player const& player, ::Vec3 const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MovePlayerPacketPayload(::Player const&, ::PlayerPositionModeComponent::PositionMode, int, int);
#else // @header-generator platform
    MCAPI MovePlayerPacketPayload(
        ::Player const&                             player,
        ::PlayerPositionModeComponent::PositionMode resetPosition,
        int                                         cause,
        int                                         sourceEntityType
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Player const&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Player const& player, ::Vec3 const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Player const&, ::PlayerPositionModeComponent::PositionMode, int, int);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Player const&                             player,
        ::PlayerPositionModeComponent::PositionMode resetPosition,
        int                                         cause,
        int                                         sourceEntityType
    );
#endif // @header-generator platform
    // NOLINTEND
};
