#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
namespace br::worldgen { struct ChunkGeneratorStructureState; }
namespace br::worldgen { struct StructurePlacement; }
// clang-format on

namespace br::worldgen {

struct RandomSpreadPlacement {
public:
    // RandomSpreadPlacement inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Type : uchar {
        LINEAR     = 0,
        TRIANGULAR = 1,
#else // @header-generator platform
    enum class Type : uchar {
        Linear     = 0,
        Triangular = 1,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                         mSeparation;
    ::ll::TypedStorage<4, 4, int>                                         mSpacing;
    ::ll::TypedStorage<1, 1, ::br::worldgen::RandomSpreadPlacement::Type> mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ChunkPos placementChunk(
        ::br::worldgen::StructurePlacement const&,
        ::br::worldgen::ChunkGeneratorStructureState const&,
        ::ChunkPos const
#else // @header-generator platform
    MCAPI ::ChunkPos placementChunk(
        ::br::worldgen::StructurePlacement const&           def,
        ::br::worldgen::ChunkGeneratorStructureState const& state,
        ::ChunkPos                                          chunkPos
#endif // @header-generator platform
    ) const;
    // NOLINTEND
};

} // namespace br::worldgen
