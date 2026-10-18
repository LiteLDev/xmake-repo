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
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
