#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/UpdateSubChunkBlocksChangedInfo.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class SubChunkPos;
struct UpdateSubChunkNetworkBlockInfo;
// clang-format on

struct UpdateSubChunkBlocksPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::UpdateSubChunkBlocksChangedInfo> mBlocksChanged;
    ::ll::TypedStorage<4, 12, ::BlockPos>                        mSubChunkBlockPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSubChunkBlocksPacketPayload& operator=(UpdateSubChunkBlocksPacketPayload const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<UpdateSubChunkNetworkBlockInfo> const& getExtraBlocks() const;

    MCNAPI ~UpdateSubChunkBlocksPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
