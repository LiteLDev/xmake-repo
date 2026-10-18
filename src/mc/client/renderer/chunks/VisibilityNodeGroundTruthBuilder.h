#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/VisibilityNode.h"
#include "mc/client/renderer/game/ChunkVisibilityCacheElement.h"
#include "mc/legacy/facing/Name.h"
#include "mc/world/level/SubChunkBlockPos.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

class VisibilityNodeGroundTruthBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 6, ::VisibilityNode>                                            mVisibilityNode;
    ::ll::TypedStorage<8, 24, std::map<Facing::Name, std::vector<SubChunkBlockPos>>>      mStartingBlockPositions;
    ::ll::TypedStorage<1, 4096, std::array<bool, 4096>>                                   mOpacityGrid;
    ::ll::TypedStorage<1, 4096, std::array<bool, 4096>>                                   mReachedGrid;
    ::ll::TypedStorage<4, 4, ::SubChunkBlockPos>                                          mStartingPosition;
    ::ll::UntypedStorage<1, 32768>                                                        mWorkingGrid;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                                              mSource;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                              mRenderChunkPos;
    ::ll::TypedStorage<8, 48, std::queue<SubChunkBlockPos, std::deque<SubChunkBlockPos>>> mManhattanQueue;
    // NOLINTEND

public:
    // prevent constructor by default
    VisibilityNodeGroundTruthBuilder& operator=(VisibilityNodeGroundTruthBuilder const&);
    VisibilityNodeGroundTruthBuilder(VisibilityNodeGroundTruthBuilder const&);
    VisibilityNodeGroundTruthBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _updateNeighbor(::Facing::Name, ::SubChunkBlockPos const&, short);

    MCNAPI ::VisibilityNode compute();

    MCNAPI ~VisibilityNodeGroundTruthBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class VisibilityNodeGroundTruthBuilder {};
#endif // @header-generator platform
