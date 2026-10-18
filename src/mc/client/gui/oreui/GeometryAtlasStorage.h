#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/GeometryProtocolType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IResourceHandler; }
namespace Gameface { class TemporaryTextureHolder; }
namespace GeometryAtlas { class IGeometryAtlas; }
namespace GeometryAtlas { class IGeometryAtlasCaptureService; }
namespace GeometryAtlas { class IPaperDollHandleFactory; }
namespace OreUI { class AllKnownTiles; }
namespace OreUI { class IGeometryAtlasKnownTilesReader; }
namespace OreUI { class IItemHandleFactory; }
namespace OreUI { class ILiveViewCollectionPublisher; }
namespace OreUI { struct LiveViewCollection; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/GeometryProtocolType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IResourceHandler; }
namespace Gameface { class TemporaryTextureHolder; }
namespace GeometryAtlas { class IGeometryAtlas; }
namespace GeometryAtlas { class IGeometryAtlasCaptureService; }
namespace GeometryAtlas { class IPaperDollHandleFactory; }
namespace OreUI { class IGeometryAtlasKnownTilesReader; }
namespace OreUI { class IItemHandleFactory; }
namespace OreUI { class ILiveViewCollectionPublisher; }
namespace OreUI { struct LiveViewCollection; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI {

class GeometryAtlasStorage {
public:
    // GeometryAtlasStorage inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // GeometryAtlasStorage inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryAtlas::IGeometryAtlas>>               mGeometryAtlas;
        ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryAtlas::IGeometryAtlasCaptureService>> mCaptureService;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                              mTileChangeSubscription;
        ::ll::TypedStorage<8, 16, std::shared_ptr<OreUI::IGeometryAtlasKnownTilesReader>>       mKnownItems;
        ::ll::TypedStorage<8, 16, std::shared_ptr<OreUI::IGeometryAtlasKnownTilesReader>>       mKnownDolls;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Impl();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::GeometryAtlasStorage::Impl>> mImpl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GeometryAtlasStorage();

    MCNAPI explicit GeometryAtlasStorage(std::shared_ptr<GeometryAtlas::IGeometryAtlas>);

    MCNAPI std::unique_ptr<Gameface::IResourceHandler> createGeometryAtlasResourceHandler(
        std::unique_ptr<OreUI::IItemHandleFactory>,
        std::unique_ptr<GeometryAtlas::IPaperDollHandleFactory>,
        std::shared_ptr<OreUI::ILiveViewCollectionPublisher>,
        ::Gameface::TemporaryTextureHolder&,
        ::OreUI::GeometryProtocolType
    );

    MCNAPI ::OreUI::LiveViewCollection createLiveViewCollection();

    MCNAPI ::gsl::not_null<std::shared_ptr<GeometryAtlas::IGeometryAtlasCaptureService>> getCaptureService();

    MCNAPI ::gsl::not_null<std::shared_ptr<GeometryAtlas::IGeometryAtlas>> getGeometryAtlas();

    MCNAPI ~GeometryAtlasStorage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::shared_ptr<GeometryAtlas::IGeometryAtlas>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::IGeometryAtlas>>               mGeometryAtlas;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::IGeometryAtlasCaptureService>> mCaptureService;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mTileChangeSubscription;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::IGeometryAtlasKnownTilesReader>> mKnownItems;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::IGeometryAtlasKnownTilesReader>> mKnownDolls;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit Impl(::std::shared_ptr<::GeometryAtlas::IGeometryAtlas> atlas);

        MCAPI ~Impl();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::shared_ptr<::GeometryAtlas::IGeometryAtlas> atlas);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::GeometryAtlasStorage::Impl>> mImpl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GeometryAtlasStorage();

    MCAPI explicit GeometryAtlasStorage(::std::shared_ptr<::GeometryAtlas::IGeometryAtlas> atlas);

    MCAPI ::std::unique_ptr<::Gameface::IResourceHandler> createGeometryAtlasResourceHandler(
        ::std::unique_ptr<::OreUI::IItemHandleFactory>              itemFactory,
        ::std::unique_ptr<::GeometryAtlas::IPaperDollHandleFactory> dollFactory,
        ::std::shared_ptr<::OreUI::ILiveViewCollectionPublisher>    publisher,
        ::Gameface::TemporaryTextureHolder&                         textureHolder,
        ::OreUI::GeometryProtocolType                               type
    );

    MCAPI ::OreUI::LiveViewCollection createLiveViewCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::shared_ptr<::GeometryAtlas::IGeometryAtlas> atlas);
    // NOLINTEND
#else // @header-generator platform
    struct Impl {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
