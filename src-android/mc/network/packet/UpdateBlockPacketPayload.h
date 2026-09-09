#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class ILevel;
// clang-format on

struct UpdateBlockPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
    ::ll::TypedStorage<4, 4, uint>        mLayer;
    ::ll::TypedStorage<1, 1, uchar>       mUpdateFlags;
    ::ll::TypedStorage<4, 4, uint>        mRuntimeId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpdateBlockPacketPayload(::BlockPos const&, uint, uint const, uchar);

    MCNAPI ::Block const& getBlock(::ILevel const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, uint, uint const, uchar);
    // NOLINTEND
};
