#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PlayerActionType.h"
#include "mc/platform/Result.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct PlayerBlockActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PlayerActionType> mPlayerActionType;
    ::ll::TypedStorage<4, 12, ::BlockPos>        mPos;
    ::ll::TypedStorage<4, 4, int>                mFacing;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerBlockActionData& operator=(PlayerBlockActionData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerBlockActionData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
