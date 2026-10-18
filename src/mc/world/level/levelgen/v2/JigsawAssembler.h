#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"
#include "mc/world/level/levelgen/v2/JigsawExpansion.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace br::worldgen { class GenerationStub; }
namespace br::worldgen { class WorldGenContext; }
namespace br::worldgen { struct DimensionPadding; }
namespace br::worldgen { struct GenerationContext; }
namespace br::worldgen { struct MaxDistanceFromCenter; }
// clang-format on

namespace br::worldgen {

struct JigsawAssembler {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<br::worldgen::GenerationStub> construct(
        ::br::worldgen::GenerationContext&,
        ::br::worldgen::WorldGenContext const&,
        std::string_view,
        std::string_view,
        int,
        ::BlockPos,
        ::br::worldgen::HeightmapProjection::Type,
        ::br::worldgen::MaxDistanceFromCenter,
        ::br::worldgen::DimensionPadding,
        ::PoolAliasBinding::PoolAliasLookup&&,
        ::br::worldgen::JigsawExpansion,
        ::br::worldgen::LiquidSettings
#else // @header-generator platform
    MCAPI static ::std::optional<::br::worldgen::GenerationStub> construct(
        ::br::worldgen::GenerationContext&        context,
        ::br::worldgen::WorldGenContext const&    worldGenContext,
        ::std::string_view                        startPool,
        ::std::string_view                        startJigsawName,
        int                                       maxDepth,
        ::BlockPos                                startPos,
        ::br::worldgen::HeightmapProjection::Type heightmapProjection,
        ::br::worldgen::MaxDistanceFromCenter     maxDistanceFromCenter,
        ::br::worldgen::DimensionPadding          dimensionPadding,
        ::PoolAliasBinding::PoolAliasLookup&&     poolAliasLookup,
        ::br::worldgen::JigsawExpansion           expansion,
        ::br::worldgen::LiquidSettings            liquidSettings
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace br::worldgen
