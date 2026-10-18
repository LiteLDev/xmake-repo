#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/v2/WorldGenRandom.h"

// auto generated forward declare list
// clang-format off
class JigsawStructureRegistry;
namespace br::worldgen { class ChunkAccessor; }
// clang-format on

namespace br::worldgen {

struct GenerationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::JigsawStructureRegistry const&> mPools;
    ::ll::TypedStorage<8, 56, ::br::worldgen::WorldGenRandom>  mRandom;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long>                             mLevelSeed;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64>                            mLevelSeed;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ChunkPos>                       mChunkPos;
    ::ll::TypedStorage<8, 8, ::br::worldgen::ChunkAccessor&>   mChunkAccessor;
    // NOLINTEND

public:
    // prevent constructor by default
    GenerationContext& operator=(GenerationContext const&);
    GenerationContext(GenerationContext const&);
    GenerationContext();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GenerationContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace br::worldgen
