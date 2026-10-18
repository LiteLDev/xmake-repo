#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class IGeometryAtlasKnownTilesReader {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IGeometryAtlasKnownTilesReader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::GeometryAtlas::IAtlasTile> tryGet(uint id) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IGeometryAtlasKnownTilesReader {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
