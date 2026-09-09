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
    );
    // NOLINTEND
};

} // namespace br::worldgen
