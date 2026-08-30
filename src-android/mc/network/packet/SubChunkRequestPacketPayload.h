#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SubChunkPacketPayload.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

struct SubChunkRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    ::ll::UntypedStorage<8, 24>               mSubChunkPosOffsets;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>  mCenterPos;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SubChunkRequestPacketPayload(::DimensionType const, ::SubChunkPos const&, std::vector<SubChunkPos> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DimensionType const, ::SubChunkPos const&, std::vector<SubChunkPos> const&);
    // NOLINTEND
};
