#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/services/download/IMarketplacePackDownloader.h"
#include "mc/client/world/IWorldPackCollectionManager.h"
#include "mc/client/world/PackAction.h"
#include "mc/client/world/PackActionError.h"
#include "mc/client/world/PendingPackAction.h"
#include "mc/client/world/WorldContentItemCollectionsModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/PublishedValue.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
class ContentTierIncompatibleReason;
class IContentTierManager;
class IEntitlementManager;
class IMarketplacePackDownloader;
class MutableContentItemCollection;
struct ContentItem;
struct ContentSource;
struct MoveResourcePackResult;
struct PackContentItem;
struct PackContentItemListPosition;
struct PackIdVersion;
struct PackMoveResult;
struct PackSettingsInfo;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace ContentItemCollectionViewUtils { struct SelectedReloadProps; }
// clang-format on

namespace World {

class WorldPackCollectionManagerImpl : public ::World::IWorldPackCollectionManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mEntitlementManager;
    ::ll::UntypedStorage<8, 24> mContentTierManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IMarketplacePackDownloader>> mMarketplacePackDownloader;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMarketplacePackDownloaderStatusSub;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentSource>> mContentSource;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MutableContentItemCollection>> mContentItemCollection;
    ::ll::UntypedStorage<8, 40> mContentItemCollectionDirtyPublisher;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContentItemCollectionViewUtils::SelectedReloadProps>> mSelectedReloadProps;
    ::ll::TypedStorage<1, 1, bool> mIsEditorEnabled;
    ::ll::TypedStorage<8, 96, ::WorldContentItemCollectionsModel> mWorldContentItemCollectionsModel;
    ::ll::UntypedStorage<8, 112> mPendingPackAction;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPackCollectionManagerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldPackCollectionManagerImpl();

    virtual void tick();

    virtual void setContentSource(std::unique_ptr<ContentSource>&&);

    virtual void resetContent();

    virtual void reloadPacks();

    virtual ::Bedrock::PubSub::Subscription subscribeToContentItemCollectionDirtySubscription(std::function<void ()>&&);

    virtual ::WorldContentItemCollectionsModel getWorldCollectionsModel() const;

    virtual std::optional<::World::PackActionError> activatePack(std::string const&, ::ContentType, bool);

    virtual std::optional<::World::PackActionError> deactivatePack(std::string const&, ::ContentType, bool);

    virtual std::optional<::World::PackActionError> continuePendingPackAction();

    virtual void clearPendingPackAction();

    virtual ::Bedrock::PubSub::Subscription subscribeToPendingPackActionPublisher(std::function<void (std::optional<::World::PendingPackAction>)>);

    virtual std::optional<::World::PackActionError> changePackPriority(std::string const&, ::ContentType, int, int);

    virtual std::optional<PackSettingsInfo> getPackSettingsForPackIdVersion(std::string const&);

    virtual std::shared_ptr<const PackContentItem> getPackItemForPackIdVersion(std::string_view);

    virtual ::Bedrock::PubSub::Subscription subscribeToMarketplacePackDownloadStatus(std::function<void (IMarketplacePackDownloader::MarketplacePackDownloadStatus)>&&);

    virtual void setEditorEnabled(bool);

    virtual bool getEditorEnabled() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::WorldContentItemCollectionsModel _generatePackCollectionsModel();

    MCNAPI std::shared_ptr<ContentItemCollection> _getAvailableContentItemCollection(::ContentType) const;

    MCNAPI std::shared_ptr<ContentItemCollection> _getMarketplacePassContentItemCollection(::ContentType) const;

    MCNAPI std::shared_ptr<ContentItemCollection> _getSelectedContentItemCollection(::ContentType) const;

    MCNAPI std::optional<::World::PackActionError>
           _movePackContent(std::string const&, ::ContentType, ::World::PackAction, bool);

    MCNAPI void _reloadAndReapplyPendingChanges();

    MCNAPI void _reloadContentSource();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick();

    MCNAPI void $setContentSource(std::unique_ptr<ContentSource>&&);

    MCNAPI void $resetContent();

    MCNAPI void $reloadPacks();

    MCNAPI ::Bedrock::PubSub::Subscription $subscribeToContentItemCollectionDirtySubscription(std::function<void()>&&);

    MCNAPI ::WorldContentItemCollectionsModel $getWorldCollectionsModel() const;

    MCNAPI std::optional<::World::PackActionError> $activatePack(std::string const&, ::ContentType, bool);

    MCNAPI std::optional<::World::PackActionError> $deactivatePack(std::string const&, ::ContentType, bool);

    MCNAPI std::optional<::World::PackActionError> $continuePendingPackAction();

    MCNAPI void $clearPendingPackAction();

    MCNAPI ::Bedrock::PubSub::Subscription
        $subscribeToPendingPackActionPublisher(std::function<void(std::optional<::World::PendingPackAction>)>);

    MCNAPI std::optional<::World::PackActionError> $changePackPriority(std::string const&, ::ContentType, int, int);

    MCNAPI std::optional<PackSettingsInfo> $getPackSettingsForPackIdVersion(std::string const&);

    MCNAPI std::shared_ptr<const PackContentItem> $getPackItemForPackIdVersion(std::string_view);

    MCNAPI ::Bedrock::PubSub::Subscription $subscribeToMarketplacePackDownloadStatus(
        std::function<void(IMarketplacePackDownloader::MarketplacePackDownloadStatus)>&&
    );

    MCNAPI void $setEditorEnabled(bool);

    MCNAPI bool $getEditorEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
