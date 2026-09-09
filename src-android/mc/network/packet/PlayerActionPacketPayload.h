#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/PlayerActionType.h"
#include "mc/world/level/BlockPos.h"

struct PlayerActionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>        mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>        mResultPos;
    ::ll::TypedStorage<4, 4, int>                mFace;
    ::ll::TypedStorage<4, 4, ::PlayerActionType> mAction;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>   mRuntimeId;
    ::ll::TypedStorage<1, 1, bool>               mIsFromServerPlayerMovementSystem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerActionPacketPayload(::PlayerActionType, ::ActorRuntimeID);

    MCNAPI PlayerActionPacketPayload(::PlayerActionType, ::BlockPos const&, ::ActorRuntimeID);

    MCNAPI PlayerActionPacketPayload(::PlayerActionType, int, ::ActorRuntimeID);

    MCNAPI PlayerActionPacketPayload(::PlayerActionType, ::BlockPos const&, uchar, ::ActorRuntimeID);

    MCNAPI PlayerActionPacketPayload(::PlayerActionType, ::BlockPos const&, int, ::ActorRuntimeID);

    MCNAPI PlayerActionPacketPayload(::PlayerActionType, ::BlockPos const&, ::BlockPos const&, int, ::ActorRuntimeID);

    MCNAPI bool getIsFromServerPlayerMovementSystem() const;

    MCNAPI void setFromServerPlayerMovementSystem(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerActionType, ::ActorRuntimeID);

    MCNAPI void* $ctor(::PlayerActionType, ::BlockPos const&, ::ActorRuntimeID);

    MCNAPI void* $ctor(::PlayerActionType, int, ::ActorRuntimeID);

    MCNAPI void* $ctor(::PlayerActionType, ::BlockPos const&, uchar, ::ActorRuntimeID);

    MCNAPI void* $ctor(::PlayerActionType, ::BlockPos const&, int, ::ActorRuntimeID);

    MCNAPI void* $ctor(::PlayerActionType, ::BlockPos const&, ::BlockPos const&, int, ::ActorRuntimeID);
    // NOLINTEND
};
