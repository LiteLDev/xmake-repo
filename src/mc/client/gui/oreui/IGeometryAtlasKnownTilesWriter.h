#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
namespace GeometryAtlas { struct TileDefinition; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
namespace GeometryAtlas { struct TileDefinition; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class IGeometryAtlasKnownTilesWriter {
public:
    // IGeometryAtlasKnownTilesWriter inner types define
    using TileFactory =
        ::brstd::move_only_function<std::shared_ptr<GeometryAtlas::IAtlasTile>(const GeometryAtlas::TileDefinition&)>;
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IGeometryAtlasKnownTilesWriter {
public:
    // IGeometryAtlasKnownTilesWriter inner types define
    using TileFactory = ::brstd::move_only_function<
        ::std::shared_ptr<::GeometryAtlas::IAtlasTile>(::GeometryAtlas::TileDefinition const&)>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::gsl::not_null<::std::shared_ptr<::GeometryAtlas::IAtlasTile>>
    getOrCreate(::GeometryAtlas::TileDefinition const& definition) = 0;

    virtual void garbageCollect() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IGeometryAtlasKnownTilesWriter {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
