#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ClubsService;
class ContentItemCollection;
class IClientInstance;
class IContentTierManager;
class IEntitlementManager;
class IMarketplacePackDownloader;
class IOfferRepository;
class RealmsAPI;
class WorldFileDownloadManager;
struct ContentSource;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class Router; }
namespace Realms { class AdminLogManager; }
namespace Realms { class IRealmsEntitlements; }
namespace Realms { class IRealmsMembers; }
namespace Realms { class IRealmsUGCPackUploader; }
namespace Realms { class LegacyRealmsPurchase; }
namespace Realms { class LegacyRealmsPurchaseReconciler; }
namespace Realms { class OpenAndCloseRealmManager; }
namespace Realms { class RealmsBackupDownloader; }
namespace Realms { class RealmsBackups; }
namespace Realms { class RealmsCommits; }
namespace Realms { class RealmsDeleteManager; }
namespace Realms { class RealmsDownloader; }
namespace Realms { class RealmsList; }
namespace Realms { class RealmsMembership; }
namespace Realms { class RealmsPlayerList; }
namespace Realms { class RealmsPlayerManagement; }
namespace Realms { class RealmsRegionSettings; }
namespace Realms { class RealmsRolesAndPermissions; }
namespace Realms { class RealmsSavesManager; }
namespace Realms { class RealmsServerSettingsManager; }
namespace Realms { class RealmsSubscriptions; }
namespace Realms { class RealmsUploader; }
namespace Realms { class RealmsWorldContext; }
namespace Realms { class RealmsWorldEditor; }
namespace Realms { class RealmsWorldPackContext; }
namespace Realms { class RealmsWorldPackEditor; }
namespace Realms { class SubscriptionService; }
namespace Realms { struct Content; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Realms::Stories { class FacetStateManager; }
namespace Realms::Stories { class RealmEventsManager; }
namespace Realms::Stories { class RealmsFeedModeration; }
namespace Social { class IUserManager; }
// clang-format on

namespace Realms {

class RealmsSystem : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, float> mLastTimestampMs;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsAPI;
    ::ll::UntypedStorage<8, 24> mClient;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::RealmEventsManager>> mRealmEventsManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::RealmsFeedModeration>> mRealmsFeedModerationManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::AdminLogManager>> mAdminLogManager;
    ::ll::UntypedStorage<8, 16> mRealmsSavesManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Realms::RealmsBackupDownloader>> mRealmsBackupDownloader;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldContext>> mRealmsWorldContext;
    ::ll::UntypedStorage<8, 16> mRealmsWorldPackContext;
    ::ll::TypedStorage<8, 40, std::unordered_map<SubClientId, std::shared_ptr<Realms::RealmsList>>> mRealmsLists;
    ::ll::TypedStorage<8, 40, std::unordered_map<SubClientId, std::shared_ptr<Realms::RealmsList>>> mUnpairedRealmsLists;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsSubscriptions>> mRealmsSubscriptions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::LegacyRealmsPurchase>> mRealmsPurchase;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::LegacyRealmsPurchaseReconciler>> mRealmsPurchaseReconciler;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsMembership>> mRealmsMembership;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::OpenAndCloseRealmManager>> mOpenAndCloseRealmManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsUploader>> mRealmsUploader;
    ::ll::UntypedStorage<8, 16> mRealmsUGCPackUploader;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsDownloader>> mRealmsDownloader;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    ::ll::UntypedStorage<8, 16> mRealmsWorldPackEditor;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsRegionSettings>> mRealmsRegionSettings;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsBackups>> mRealmsBackups;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsCommits>> mRealmsCommits;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsPlayerManagement>> mRealmsPlayerManagement;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsPlayerList>> mRealmsPlayerList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsRolesAndPermissions>> mRealmsRolesAndPermissions;
    ::ll::UntypedStorage<8, 16> mRealmsEntitlements;
    ::ll::UntypedStorage<8, 16> mRealmsMembers;
    ::ll::UntypedStorage<8, 16> mRealmsServerSettingsManager;
    ::ll::UntypedStorage<8, 16> mRealmsDeleteManager;
    ::ll::UntypedStorage<1, 16> mIsRealmsTrialAvailable;
    ::ll::UntypedStorage<8, 48> mIsRealmsEnabled;
    ::ll::UntypedStorage<1, 16> mIsEditorModeEnabled;
    ::ll::UntypedStorage<8, 48> mIsDeviceBeingSunset;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRouteChangedSubscription;
    ::ll::UntypedStorage<1, 16> mBlockPolling;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSystem();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsSystem(
        std::weak_ptr<RealmsAPI>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::SubscriptionService>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        std::weak_ptr<ClubsService>,
        std::function<bool()>,
        std::function<bool()>,
        std::shared_ptr<ContentItemCollection>,
        ::brstd::move_only_function<
            std::unique_ptr<ContentSource>(Realms::RealmId, const std::vector<Realms::Content>&)>&&,
        ::brstd::move_only_function<std::unique_ptr<IMarketplacePackDownloader>()>,
        ::brstd::move_only_function<std::shared_ptr<WorldFileDownloadManager>()>,
        bool
    );

    MCNAPI bool _checkRealmsTrialAvailable() const;

    MCNAPI bool canUserDoRealmRoleAction(::Realms::World const&, ::Realms::PlayerRoleActions) const;

    MCNAPI std::shared_ptr<Realms::AdminLogManager> getAdminLogManager();

    MCNAPI std::shared_ptr<Realms::LegacyRealmsPurchase> getLegacyRealmsPurchase();

    MCNAPI std::shared_ptr<Realms::LegacyRealmsPurchaseReconciler> getLegacyRealmsPurchaseReconciler();

    MCNAPI std::shared_ptr<Realms::OpenAndCloseRealmManager> getOpenAndCloseRealmManager();

    MCNAPI std::shared_ptr<Realms::Stories::RealmEventsManager> getRealmEventsManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsBackupDownloader>> getRealmsBackupDownloader();

    MCNAPI std::shared_ptr<Realms::RealmsBackups> getRealmsBackups();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsDeleteManager>> getRealmsDeleteManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::IRealmsEntitlements>> getRealmsEntitlements() const;

    MCNAPI std::shared_ptr<Realms::Stories::RealmsFeedModeration> getRealmsFeedModerationManager();

    MCNAPI std::shared_ptr<Realms::RealmsList> getRealmsList(::SubClientId);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::IRealmsMembers>> getRealmsMembers() const;

    MCNAPI std::shared_ptr<Realms::RealmsMembership> getRealmsMembership();

    MCNAPI std::shared_ptr<Realms::RealmsPlayerList> getRealmsPlayerList();

    MCNAPI std::shared_ptr<Realms::RealmsPlayerManagement> getRealmsPlayerManagement();

    MCNAPI std::shared_ptr<Realms::RealmsRegionSettings> getRealmsRegionSettings();

    MCNAPI std::shared_ptr<Realms::RealmsRolesAndPermissions> getRealmsRolesAndPermissions();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsSavesManager>> getRealmsSavesManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsServerSettingsManager>>
    getRealmsServerSettingsManager() const;

    MCNAPI std::shared_ptr<Realms::Stories::FacetStateManager> getRealmsStoriesFacetStateManager();

    MCNAPI std::shared_ptr<Realms::RealmsSubscriptions> getRealmsSubscriptions();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::IRealmsUGCPackUploader>> getRealmsUGCPackUploader();

    MCNAPI std::shared_ptr<Realms::RealmsUploader> getRealmsUploader();

    MCNAPI std::shared_ptr<Realms::RealmsWorldContext> getRealmsWorldContext();

    MCNAPI std::shared_ptr<Realms::RealmsWorldEditor> getRealmsWorldEditor();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsWorldPackContext>> getRealmsWorldPackContext();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsWorldPackEditor>> getRealmsWorldPackEditor();

    MCNAPI std::shared_ptr<Realms::RealmsList> getUnpairedRealmsList(::SubClientId);

    MCNAPI bool isRealmJoinable(::Realms::RealmId) const;

    MCNAPI bool isRealmsTrialAvailable() const;

    MCNAPI void setupRouterListener(::OreUI::Router&);

    MCNAPI void update(double);

    MCNAPI void updateRealmsTrialAvailable();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::weak_ptr<RealmsAPI>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::SubscriptionService>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        std::weak_ptr<ClubsService>,
        std::function<bool()>,
        std::function<bool()>,
        std::shared_ptr<ContentItemCollection>,
        ::brstd::move_only_function<
            std::unique_ptr<ContentSource>(Realms::RealmId, const std::vector<Realms::Content>&)>&&,
        ::brstd::move_only_function<std::unique_ptr<IMarketplacePackDownloader>()>,
        ::brstd::move_only_function<std::shared_ptr<WorldFileDownloadManager>()>,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Realms
