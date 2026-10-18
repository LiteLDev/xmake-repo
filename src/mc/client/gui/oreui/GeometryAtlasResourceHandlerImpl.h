#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class TemporaryTextureHolder; }
namespace OreUI { class IGeometryAtlasKnownTilesWriter; }
namespace OreUI { class ITileResourceResolver; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct ResourceRequest; }
namespace OreUI { class IGeometryAtlasKnownTilesWriter; }
namespace OreUI { class ITileResourceResolver; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class GeometryAtlasResourceHandlerImpl : public ::Gameface::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<OreUI::ITileResourceResolver>>>          mTileResolver;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<OreUI::IGeometryAtlasKnownTilesWriter>>> mKnownTiles;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                                      mTextureHolder;
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryAtlasResourceHandlerImpl& operator=(GeometryAtlasResourceHandlerImpl const&);
    GeometryAtlasResourceHandlerImpl(GeometryAtlasResourceHandlerImpl const&);
    GeometryAtlasResourceHandlerImpl();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GeometryAtlasResourceHandlerImpl : public ::Gameface::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::OreUI::ITileResourceResolver>>> mTileResolver;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::OreUI::IGeometryAtlasKnownTilesWriter>>> mKnownTiles;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&> mTextureHolder;
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryAtlasResourceHandlerImpl& operator=(GeometryAtlasResourceHandlerImpl const&);
    GeometryAtlasResourceHandlerImpl(GeometryAtlasResourceHandlerImpl const&);
    GeometryAtlasResourceHandlerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&) /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Gameface::ResourceHandlerStatus
    $onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response);

    MCFOLD ::Gameface::ResourceHandlerStatus
    $onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&);

    MCAPI void $update();
    // NOLINTEND
};
#else // @header-generator platform
class GeometryAtlasResourceHandlerImpl {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
