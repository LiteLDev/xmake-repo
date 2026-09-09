#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/MoveActorDeltaData.h"

struct MoveActorDeltaPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::MoveActorDeltaData> mMoveData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MoveActorDeltaPacketPayload(::MoveActorDeltaData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MoveActorDeltaData const&);
    // NOLINTEND
};
