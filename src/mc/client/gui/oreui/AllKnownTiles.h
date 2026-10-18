#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { class IGeometryAtlasKnownTilesReader; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { class IGeometryAtlasKnownTilesReader; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class AllKnownTiles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<OreUI::IGeometryAtlasKnownTilesReader>> mItems;
    ::ll::TypedStorage<8, 16, std::weak_ptr<OreUI::IGeometryAtlasKnownTilesReader>> mDolls;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class AllKnownTiles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::OreUI::IGeometryAtlasKnownTilesReader>> mItems;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::OreUI::IGeometryAtlasKnownTilesReader>> mDolls;
    // NOLINTEND
};
#else // @header-generator platform
class AllKnownTiles {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
