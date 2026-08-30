#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Rotation.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockTessellator;
class Tessellator;
struct TextureUVCoordinateSet;
namespace DeclarativeBlockTessellation { struct Cube; }
// clang-format on

class BlockTessellatorDetail {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _tessellateDeclarative(
        ::BlockTessellator&,
        ::Tessellator&,
        ::Block const&,
        ::BlockPos const&,
        ::gsl::span<const DeclarativeBlockTessellation::Cube>,
        ::TextureUVCoordinateSet const*,
        ::Facing::Rotation const
    );
    // NOLINTEND
};
