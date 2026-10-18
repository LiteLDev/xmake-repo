#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
class ChunkPos;
#endif // @header-generator platform
// clang-format on

class ChunkTickOffsetManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ChunkPos>> mTickingChunksOffset;
    ::ll::TypedStorage<8, 24, std::vector<ChunkPos>> mClientTickingChunksOffset;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkPos>> mTickingChunksOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkPos>> mClientTickingChunksOffset;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChunkTickOffsetManager();

    MCNAPI std::vector<ChunkPos> const& getClientTickingOffsets() const;

    MCNAPI std::vector<ChunkPos> getSortedPositionsFromClientOffsets(std::vector<ChunkPos> const&) const;

    MCNAPI void initialize(uint);

    MCNAPI void shuffleTickingOffsets(::Random&);
#else // @header-generator platform
    MCAPI void initialize(uint serverTickRange);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<ChunkPos>
    getSortedPositionsFromClientOffsets(std::vector<ChunkPos> const&, std::vector<ChunkPos> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static ::std::vector<::ChunkPos> getSortedPositionsFromClientOffsets(
        ::std::vector<::ChunkPos> const& centers,
        ::std::vector<::ChunkPos> const& offsets
    );
#endif // @header-generator platform
    // NOLINTEND
};
