#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/UpdateSubChunkNetworkBlockInfo.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
struct ActorBlockSyncMessage;
// clang-format on

struct UpdateSubChunkBlocksChangedInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<UpdateSubChunkNetworkBlockInfo>> mStandards;
    ::ll::TypedStorage<8, 24, std::vector<UpdateSubChunkNetworkBlockInfo>> mExtras;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSubChunkBlocksChangedInfo& operator=(UpdateSubChunkBlocksChangedInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpdateSubChunkBlocksChangedInfo(::UpdateSubChunkBlocksChangedInfo const&);

    MCNAPI void add(::BlockPos const&, uint, ::Block const&, int, ::ActorBlockSyncMessage const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UpdateSubChunkBlocksChangedInfo const&);
    // NOLINTEND
};
