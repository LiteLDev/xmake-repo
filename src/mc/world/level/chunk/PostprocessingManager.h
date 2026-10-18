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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::shared_ptr<LevelChunk>> mChunk;
        ::ll::UntypedStorage<8, 16>                            mChunkLock;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelChunk>>                               mChunk;
        ::ll::TypedStorage<8, 16, ::Bedrock::Threading::UniqueLock<::Bedrock::Threading::Mutex>> mChunkLock;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        LockedChunk& operator=(LockedChunk const&);
        LockedChunk(LockedChunk const&);
        LockedChunk();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<PostprocessingManager::LockedChunk>>
           tryLock(::ChunkPos const&, ::ChunkSource&, std::optional<ChunkState>);
#else // @header-generator platform
    MCAPI ::std::optional<::std::vector<::PostprocessingManager::LockedChunk>>
    tryLock(::ChunkPos const& center, ::ChunkSource& neighborhood, ::std::optional<::ChunkState> minimumChunkState);
#endif // @header-generator platform
    // NOLINTEND
};
