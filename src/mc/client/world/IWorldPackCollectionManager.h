#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/services/download/IMarketplacePackDownloader.h"
#include "mc/client/world/PackActionError.h"

// auto generated forward declare list
// clang-format off
struct ContentSource;
struct PackContentItem;
struct PackSettingsInfo;
struct WorldContentItemCollectionsModel;
namespace Bedrock::PubSub { class Subscription; }
namespace World { struct PendingPackAction; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/services/download/IMarketplacePackDownloader.h"
#include "mc/client/world/PackActionError.h"

// auto generated forward declare list
// clang-format off
struct ContentSource;
struct PackContentItem;
struct PackSettingsInfo;
struct WorldContentItemCollectionsModel;
namespace Bedrock::PubSub { class Subscription; }
namespace World { struct PendingPackAction; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class IWorldPackCollectionManager {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IWorldPackCollectionManager() = default;

    virtual void tick() = 0;

    virtual void setContentSource(std::unique_ptr<ContentSource>&&) = 0;

    virtual void resetContent() = 0;

    virtual void reloadPacks() = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToContentItemCollectionDirtySubscription(std::function<void ()>&&) = 0;

    virtual ::WorldContentItemCollectionsModel getWorldCollectionsModel() const = 0;

    virtual std::optional<::World::PackActionError> activatePack(std::string const&, ::ContentType, bool) = 0;

    virtual std::optional<::World::PackActionError> deactivatePack(std::string const&, ::ContentType, bool) = 0;

    virtual std::optional<::World::PackActionError> continuePendingPackAction() = 0;

    virtual void clearPendingPackAction() = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToPendingPackActionPublisher(std::function<void (std::optional<::World::PendingPackAction>)>) = 0;

    virtual std::optional<::World::PackActionError> changePackPriority(std::string const&, ::ContentType, int, int) = 0;

    virtual std::optional<PackSettingsInfo> getPackSettingsForPackIdVersion(std::string const&) = 0;

    virtual std::shared_ptr<const PackContentItem> getPackItemForPackIdVersion(std::string_view) = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToMarketplacePackDownloadStatus(std::function<void (IMarketplacePackDownloader::MarketplacePackDownloadStatus)>&&) = 0;

    virtual void setEditorEnabled(bool) = 0;

    virtual bool getEditorEnabled() const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IWorldPackCollectionManager {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldPackCollectionManager() = default;

    virtual void tick() = 0;

    virtual void setContentSource(::std::unique_ptr<::ContentSource>&& contentSource) = 0;

    virtual void resetContent() = 0;

    virtual void reloadPacks() = 0;

    virtual ::Bedrock::PubSub::Subscription
    subscribeToContentItemCollectionDirtySubscription(::std::function<void()>&& callback) = 0;

    virtual ::WorldContentItemCollectionsModel getWorldCollectionsModel() const = 0;

    virtual ::std::optional<::World::PackActionError>
    activatePack(::std::string const& packIdVersion, ::ContentType packType, bool ignoreWarnings) = 0;

    virtual ::std::optional<::World::PackActionError>
    deactivatePack(::std::string const& packIdVersion, ::ContentType packType, bool ignoreWarnings) = 0;

    virtual ::std::optional<::World::PackActionError> continuePendingPackAction() = 0;

    virtual void clearPendingPackAction() = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToPendingPackActionPublisher(
        ::std::function<void(::std::optional<::World::PendingPackAction>)> callback
    ) = 0;

    virtual ::std::optional<::World::PackActionError> changePackPriority(
        ::std::string const& packIdVersion,
        ::ContentType        packType,
        int                  fromPosition,
        int                  toPosition
    ) = 0;

    virtual ::std::optional<::PackSettingsInfo> getPackSettingsForPackIdVersion(::std::string const& packIdVersion) = 0;

    virtual ::std::shared_ptr<::PackContentItem const>
    getPackItemForPackIdVersion(::std::string_view packIdVersion) = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToMarketplacePackDownloadStatus(
        ::std::function<void(::IMarketplacePackDownloader::MarketplacePackDownloadStatus)>&& onDownloadStatusChange
    ) = 0;

    virtual void setEditorEnabled(bool isEditorEnabled) = 0;

    virtual bool getEditorEnabled() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IWorldPackCollectionManager {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
