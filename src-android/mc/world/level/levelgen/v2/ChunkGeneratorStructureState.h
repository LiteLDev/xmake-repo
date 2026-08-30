#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
class Dimension;
class HashedString;
namespace br::worldgen { class StructureSetRegistry; }
namespace br::worldgen { struct StructureSet; }
// clang-format on

namespace br::worldgen {

struct ChunkGeneratorStructureState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>                                                            mLevelSeed;
    ::ll::TypedStorage<8, 8, long>                                                            mRingsSeed;
    ::ll::TypedStorage<8, 8, ulong>                                                           mMaxStructureCount;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const br::worldgen::StructureSet>>> mPossibleStructures;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkGeneratorStructureState(ChunkGeneratorStructureState const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos>
    findNearestStructureFeature(::Dimension&, ::HashedString, ::BlockPos const&, ::BiomeSource const&, bool) const;

    MCNAPI ~ChunkGeneratorStructureState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::ChunkGeneratorStructureState
    createFlat(long, ::BiomeSource const&, std::vector<std::shared_ptr<const br::worldgen::StructureSet>>);

    MCNAPI static ::br::worldgen::ChunkGeneratorStructureState
    createNormal(long, ::BiomeSource const&, ::br::worldgen::StructureSetRegistry const&);

    MCNAPI static ::br::worldgen::ChunkGeneratorStructureState createVoid(long);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
