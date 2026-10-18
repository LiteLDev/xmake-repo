#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
class BlockPos;
#endif // @header-generator platform
// clang-format on

struct ClientChunkGenerationDifferenceData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mDifferentBlocksCount;
    ::ll::TypedStorage<4, 4, uint> mSubChunksCheckedCount;
    ::ll::TypedStorage<4, 4, uint> mSubChunksFoundDifferentCount;
    ::ll::TypedStorage<8, 16, ::std::map<::std::pair<::Block const*, ::Block const*>, uint>> mDifferentBlocksMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, ::BlockPos>>>                 mDifferentBlockList;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                            mSharedMutex;
#endif // @header-generator platform
    // NOLINTEND
};
