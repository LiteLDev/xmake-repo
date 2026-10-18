#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
#if defined(LL_PLAT_A) // @header-generator platform
class Dimension;
#else // @header-generator platform
#endif // @header-generator platform
class LevelChunk;
// clang-format on

class Seasons {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>          mDimension;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise> mSnowNoise;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk7e578e;
    ::ll::UntypedStorage<8, 40> mUnk88ff00;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Seasons& operator=(Seasons const&);
    Seasons(Seasons const&);
    Seasons();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Seasons(::Dimension&);

    MCNAPI void postProcess(::LevelChunk&, ::BlockSource&, ::ChunkPos const&);
#else // @header-generator platform
    MCNAPI void postProcess(::LevelChunk& levelChunk, ::BlockSource& region, ::ChunkPos const& chunkPos);
#endif // @header-generator platform

    MCNAPI void tick();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
