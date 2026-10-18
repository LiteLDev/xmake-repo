#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/levelgen/ChunkGenPlayerSnapshot.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class LevelChunkBuilderData;
struct ChunkGenSessionContext;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct ChunkGenContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ChunkPos>                             mChunkPosition;
    ::ll::TypedStorage<4, 24, std::optional<ChunkGenPlayerSnapshot>> mNearestPlayer;
    ::ll::TypedStorage<4, 4, ::DimensionType>                        mDimension;
    ::ll::TypedStorage<8, 8, ::LevelSeed64>                          mWorldSeed;
    ::ll::TypedStorage<4, 4, int>                                    mConcurrentChunks;
    ::ll::TypedStorage<4, 4, int>                                    mQueueDepth;
    ::ll::TypedStorage<1, 1, bool>                                   mWasLoadedFromDisk;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void resolveFromSession(::ChunkPos const&, ::ChunkGenSessionContext const&, ::LevelChunkBuilderData const&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                 mChunkPosition;
    ::ll::TypedStorage<4, 24, ::std::optional<::ChunkGenPlayerSnapshot>> mNearestPlayer;
    ::ll::TypedStorage<4, 4, ::DimensionType>                            mDimension;
    ::ll::TypedStorage<8, 8, ::LevelSeed64>                              mWorldSeed;
    ::ll::TypedStorage<4, 4, int>                                        mConcurrentChunks;
    ::ll::TypedStorage<4, 4, int>                                        mQueueDepth;
    ::ll::TypedStorage<1, 1, bool>                                       mWasLoadedFromDisk;
#endif // @header-generator platform
    // NOLINTEND
};
