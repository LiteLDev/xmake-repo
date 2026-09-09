#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/JigsawJunction.h"
#include "mc/world/level/levelgen/v2/Rigid.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
namespace br::worldgen { class StructureCache; }
// clang-format on

namespace br::worldgen {

class Beardifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<br::worldgen::Rigid>>          mPieces;
    ::ll::TypedStorage<8, 24, std::vector<br::worldgen::JigsawJunction>> mJunctions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Beardifier();

    MCNAPI double compute(::BlockPos) const;

    MCNAPI bool empty() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::Beardifier forStructuresInChunk(::br::worldgen::StructureCache const&, ::ChunkPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace br::worldgen
