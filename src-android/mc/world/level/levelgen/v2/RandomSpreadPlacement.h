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
    enum Type : uchar {
        LINEAR     = 0,
        TRIANGULAR = 1,
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
    MCNAPI ::ChunkPos placementChunk(
        ::br::worldgen::StructurePlacement const&,
        ::br::worldgen::ChunkGeneratorStructureState const&,
        ::ChunkPos const
    ) const;
    // NOLINTEND
};

} // namespace br::worldgen
