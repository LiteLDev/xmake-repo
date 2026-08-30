#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class Vec3;
// clang-format on

struct ClientChunkGenerationDifferenceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                   mDifferentBlocksCount;
    ::ll::TypedStorage<4, 4, uint>                                                   mSubChunksCheckedCount;
    ::ll::TypedStorage<4, 4, uint>                                                   mSubChunksFoundDifferentCount;
    ::ll::TypedStorage<8, 24, std::map<std::pair<const Block*, const Block*>, uint>> mDifferentBlocksMap;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<float, BlockPos>>>               mDifferentBlockList;
    ::ll::UntypedStorage<1, 144>                                                     mSharedMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientChunkGenerationDifferenceData& operator=(ClientChunkGenerationDifferenceData const&);
    ClientChunkGenerationDifferenceData(ClientChunkGenerationDifferenceData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void sortDifferentBlockListByDistance(::Vec3 const&);
    // NOLINTEND
};
