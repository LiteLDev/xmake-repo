#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/FrequencyReductionMethod.h"
#include "mc/world/level/levelgen/v2/RandomSpreadPlacement.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
namespace br::worldgen { struct ChunkGeneratorStructureState; }
// clang-format on

namespace br::worldgen {

struct StructurePlacement {
public:
    // StructurePlacement inner types define
    using Type = std::variant<br::worldgen::RandomSpreadPlacement>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                              mFrequency;
    ::ll::TypedStorage<4, 4, int>                                                mSalt;
    ::ll::TypedStorage<8, 8, bool (*)(long, long, ::ChunkPos, float)>            mReducer;
    ::ll::TypedStorage<4, 16, std::variant<br::worldgen::RandomSpreadPlacement>> mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isStructureChunk(::br::worldgen::ChunkGeneratorStructureState const&, ::ChunkPos) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::StructurePlacement
    randomeSpread(int, int, int, ::br::worldgen::RandomSpreadPlacement::Type);
    // NOLINTEND
};

} // namespace br::worldgen
