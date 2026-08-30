#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/MoveActorAbsoluteData.h"

struct MoveActorAbsolutePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::MoveActorAbsoluteData> mMoveData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MoveActorAbsolutePacketPayload(::MoveActorAbsoluteData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MoveActorAbsoluteData const&);
    // NOLINTEND
};
