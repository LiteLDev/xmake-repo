#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
class Dimension;
class ILevelChunkEventManagerConnector;
class LevelChunk;
class LevelSettings;
// clang-format on

class ChunkTickRangeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoaded;
    ::ll::TypedStorage<4, 4, uint>                             mChunkTickRange;
    ::ll::TypedStorage<4, 4, uint>                             mMaxSimRadiusInChunks;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkTickRangeManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkTickRangeManager(uint, uint);

    MCNAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk&, int);

    MCNAPI uint getAdjustedChunkTickRange(::LevelSettings const&);

    MCNAPI bool isChunkInTickRange(::LevelChunk const&, std::optional<int>) const;

    MCNAPI bool isChunkInTickRange(::ChunkPos const&, ::Dimension const&, bool, float, int, int) const;

    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, uint);
    // NOLINTEND
};
