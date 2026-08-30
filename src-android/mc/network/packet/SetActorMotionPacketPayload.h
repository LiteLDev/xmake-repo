#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/PlayerInputTick.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct SetActorMotionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>  mRuntimeId;
    ::ll::TypedStorage<4, 12, ::Vec3>           mMotion;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick> mTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SetActorMotionPacketPayload(::Actor const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const&);
    // NOLINTEND
};
