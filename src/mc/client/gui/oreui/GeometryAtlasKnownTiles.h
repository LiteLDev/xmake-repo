#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { class IGeometryAtlasKnownTilesReader; }
namespace OreUI { class IGeometryAtlasKnownTilesWriter; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { class IGeometryAtlasKnownTilesReader; }
namespace OreUI { class IGeometryAtlasKnownTilesWriter; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct GeometryAtlasKnownTiles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<OreUI::IGeometryAtlasKnownTilesWriter>> mWriter;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OreUI::IGeometryAtlasKnownTilesReader>> mReader;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct GeometryAtlasKnownTiles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::IGeometryAtlasKnownTilesWriter>> mWriter;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::IGeometryAtlasKnownTilesReader>> mReader;
    // NOLINTEND
};
#else // @header-generator platform
struct GeometryAtlasKnownTiles {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
