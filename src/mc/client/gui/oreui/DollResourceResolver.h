#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/DollUrlInfo.h"
#include "mc/client/gui/oreui/ITileResourceResolver.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IPaperDollHandleFactory; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/DollUrlInfo.h"
#include "mc/client/gui/oreui/ITileResourceResolver.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
namespace GeometryAtlas { class IGeometryAtlas; }
namespace GeometryAtlas { class IPaperDollHandleFactory; }
namespace GeometryAtlas { class InitializeCallbackPayload; }
namespace GeometryAtlas { struct TileDefinition; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class DollResourceResolver : public ::OreUI::ITileResourceResolver {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class DollResourceResolver : public ::OreUI::ITileResourceResolver {
#else // @header-generator platform
class DollResourceResolver {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // DollResourceResolver inner types declare
    // clang-format off
    class Request;
    // clang-format on

    // DollResourceResolver inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class Request : public ::OreUI::ITileResourceResolver::ITileResourceRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::OreUI::DollUrlInfo> mInfo;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<GeometryAtlas::IPaperDollHandleFactory>>> mFactory;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class Request : public ::OreUI::ITileResourceResolver::ITileResourceRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::OreUI::DollUrlInfo> mInfo;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::GeometryAtlas::TileDefinition const& getDefinition() const /*override*/;

        virtual void
        submitUpdate(::GeometryAtlas::IAtlasTile& tile, ::GeometryAtlas::InitializeCallbackPayload init) const
            /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCFOLD ::GeometryAtlas::TileDefinition const& $getDefinition() const;

        MCAPI void
        $submitUpdate(::GeometryAtlas::IAtlasTile& tile, ::GeometryAtlas::InitializeCallbackPayload init) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::GeometryAtlas::IPaperDollHandleFactory>>> mFactory;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::GeometryAtlas::IAtlasTile>
    createTile(::GeometryAtlas::IGeometryAtlas& atlas, ::GeometryAtlas::TileDefinition const& definition) /*override*/;

    virtual ::std::unique_ptr<::OreUI::ITileResourceResolver::ITileResourceRequest>
    tryResolveRequest(::std::string_view url) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::GeometryAtlas::IAtlasTile>
    $createTile(::GeometryAtlas::IGeometryAtlas& atlas, ::GeometryAtlas::TileDefinition const& definition);

    MCAPI ::std::unique_ptr<::OreUI::ITileResourceResolver::ITileResourceRequest>
    $tryResolveRequest(::std::string_view url);
    // NOLINTEND
#else // @header-generator platform
    class Request {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
