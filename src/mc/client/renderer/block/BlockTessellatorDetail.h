#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    MCAPI static bool _tessellateDeclarative(
        ::BlockTessellator&                                     bt,
        ::Tessellator&                                          tessellator,
        ::Block const&                                          block,
        ::BlockPos const&                                       p,
        ::gsl::span<::DeclarativeBlockTessellation::Cube const> cubes,
        ::TextureUVCoordinateSet const*                         optionalOverrideTexture,
        ::Facing::Rotation const                                applyRotation
    );
    // NOLINTEND
};
#else // @header-generator platform
class BlockTessellatorDetail {};
#endif // @header-generator platform
#endif // @header-generator platform
