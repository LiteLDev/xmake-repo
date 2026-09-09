#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

class ChunkTickOffsetManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ChunkPos>> mTickingChunksOffset;
    ::ll::TypedStorage<8, 24, std::vector<ChunkPos>> mClientTickingChunksOffset;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkTickOffsetManager();

    MCNAPI std::vector<ChunkPos> const& getClientTickingOffsets() const;

    MCNAPI std::vector<ChunkPos> getSortedPositionsFromClientOffsets(std::vector<ChunkPos> const&) const;

    MCNAPI void initialize(uint);

    MCNAPI void shuffleTickingOffsets(::Random&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<ChunkPos>
    getSortedPositionsFromClientOffsets(std::vector<ChunkPos> const&, std::vector<ChunkPos> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
