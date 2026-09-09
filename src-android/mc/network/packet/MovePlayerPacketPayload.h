#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/MovePlayerTeleportData.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/PlayerInputTick.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

struct MovePlayerPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                       mPlayerID;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mPos;
    ::ll::TypedStorage<4, 8, ::Vec2>                                 mRot;
    ::ll::TypedStorage<4, 4, float>                                  mYHeadRot;
    ::ll::UntypedStorage<1, 1>                                       mResetPosition;
    ::ll::TypedStorage<1, 1, bool>                                   mOnGround;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                       mRidingID;
    ::ll::TypedStorage<4, 12, std::optional<MovePlayerTeleportData>> mTeleportData;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>                      mTick;
    // NOLINTEND

public:
    // prevent constructor by default
    MovePlayerPacketPayload& operator=(MovePlayerPacketPayload const&);
    MovePlayerPacketPayload(MovePlayerPacketPayload const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MovePlayerPacketPayload(::Player const&, ::Vec3 const&);

    MCNAPI MovePlayerPacketPayload(::Player const&, ::PlayerPositionModeComponent::PositionMode, int, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const&, ::Vec3 const&);

    MCNAPI void* $ctor(::Player const&, ::PlayerPositionModeComponent::PositionMode, int, int);
    // NOLINTEND
};
