#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/level/chunk/ChunkState.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
class LevelChunk;
// clang-format on

class PostprocessingManager {
public:
    // PostprocessingManager inner types declare
    // clang-format off
    struct LockedChunk;
    // clang-format on

    // PostprocessingManager inner types define
    struct LockedChunk {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<LevelChunk>> mChunk;
        ::ll::UntypedStorage<8, 16>                            mChunkLock;
        // NOLINTEND

    public:
        // prevent constructor by default
        LockedChunk& operator=(LockedChunk const&);
        LockedChunk(LockedChunk const&);
        LockedChunk();
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<std::vector<PostprocessingManager::LockedChunk>>
           tryLock(::ChunkPos const&, ::ChunkSource&, std::optional<ChunkState>);
    // NOLINTEND
};
