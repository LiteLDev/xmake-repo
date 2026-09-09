#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
class Dimension;
class LevelChunk;
// clang-format on

class Seasons {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>          mDimension;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise> mSnowNoise;
    // NOLINTEND

public:
    // prevent constructor by default
    Seasons& operator=(Seasons const&);
    Seasons(Seasons const&);
    Seasons();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Seasons(::Dimension&);

    MCNAPI void postProcess(::LevelChunk&, ::BlockSource&, ::ChunkPos const&);

    MCNAPI void tick();

    MCNAPI ~Seasons();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
