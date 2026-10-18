#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/JigsawJunction.h"
#include "mc/world/level/levelgen/v2/Rigid.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
namespace br::worldgen { class StructureCache; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace br::worldgen { struct JigsawJunction; }
namespace br::worldgen { struct Rigid; }
#endif // @header-generator platform
// clang-format on

namespace br::worldgen {

class Beardifier {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<br::worldgen::Rigid>>          mPieces;
    ::ll::TypedStorage<8, 24, std::vector<br::worldgen::JigsawJunction>> mJunctions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::br::worldgen::Rigid>>          mPieces;
    ::ll::TypedStorage<8, 24, ::std::vector<::br::worldgen::JigsawJunction>> mJunctions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Beardifier();

    MCNAPI double compute(::BlockPos) const;

    MCNAPI bool empty() const;
#else // @header-generator platform
    MCAPI double compute(::BlockPos pos) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::br::worldgen::Beardifier forStructuresInChunk(::br::worldgen::StructureCache const&, ::ChunkPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static ::br::worldgen::Beardifier
    forStructuresInChunk(::br::worldgen::StructureCache const& structureCache, ::ChunkPos pos);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
