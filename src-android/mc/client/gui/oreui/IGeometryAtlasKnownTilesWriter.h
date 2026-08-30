#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
namespace GeometryAtlas { struct TileDefinition; }
// clang-format on

namespace OreUI {

class IGeometryAtlasKnownTilesWriter {
public:
    // IGeometryAtlasKnownTilesWriter inner types define
    using TileFactory =
        ::brstd::move_only_function<std::shared_ptr<GeometryAtlas::IAtlasTile>(const GeometryAtlas::TileDefinition&)>;
};

} // namespace OreUI
