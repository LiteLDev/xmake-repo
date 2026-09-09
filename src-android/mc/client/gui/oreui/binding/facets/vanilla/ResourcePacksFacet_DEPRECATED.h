#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetResourcePack.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetResourcePackId.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FindPackFlags.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/Prompt.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PromptActionVariant.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/PackContentItem.h"
#include "mc/client/gui/screens/models/PackListType.h"
#include "mc/client/services/content/PackSelectResult.h"
#include "mc/client/services/download/DlcCheckResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/resources/PackScope.h"

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class ContentView;
class DlcChecker;
class IClientInstance;
class IContentAcquisition;
class IContentManager;
class IContentManagerContext;
class IContentTierManager;
class IDlcBatchModel;
class IDlcBatcher;
class IDlcValidation;
class IEntitlementManager;
class ILevelListCache;
class IResourcePackRepository;
class IStoreCatalogRepository;
class MainMenuScreenModel;
struct ContentItem;
struct ContentViews;
struct DlcValidationState;
struct LevelSummary;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class IResourceAwaiter; }
namespace OreUI { class Router; }
namespace OreUI { class WorldSettingsProvider_DEPRECATED; }
namespace OreUI { struct PromptAction; }
// clang-format on

namespace OreUI {

class ResourcePacksFacet_DEPRECATED : public ::OreUI::FacetBase_DEPRECATED<OreUI::ResourcePacksFacet_DEPRECATED> {
public:
    // ResourcePacksFacet_DEPRECATED inner types declare
    // clang-format off
    struct PackActivationRequest;
    struct PendingBehaviourPackRemoval;
    struct PackCollection;
    struct FacetPromptDetails;
    struct PackViewAndItem;
    struct SelectedPackState;
    // clang-format on

    // ResourcePacksFacet_DEPRECATED inner types define
    enum class ResourcePacksFacetStatus : uchar {
        Idle                     = 0,
        CheckingResourcePacks    = 1,
        StartDownload            = 2,
        DownloadingResourcePacks = 3,
        ActivateDownloadedPack   = 4,
        WaitingForPrompt         = 5,
    };

    enum class PromptType : int {
        NoInternet                              = 0,
        NoInternet_MissingOwnedWorldTemplateDlc = 1,
        RequiredDependency                      = 2,
        MissingDependency                       = 3,
        NoStore                                 = 4,
        PerformanceIssues                       = 5,
        ContentTierIncompatible                 = 6,
        UnspecifiedError                        = 7,
        DownloadConfirmation                    = 8,
        DataWarning                             = 9,
        ActivationFailure                       = 10,
    };

    enum class PromptActionType : int {
        GoBack              = 0,
        Ok                  = 1,
        Cancel              = 2,
        Continue            = 3,
        ConfirmPackDownload = 4,
        Count               = 5,
    };

    struct PackActivationRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>    mPackId;
        ::ll::TypedStorage<1, 1, bool> mForce;
        // NOLINTEND

    public:
        // prevent constructor by default
        PackActivationRequest& operator=(PackActivationRequest const&);
    };

    struct PendingBehaviourPackRemoval {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const PackContentItem>>> mContentToMove;
        ::ll::TypedStorage<4, 4, ::PackListType>                                       mToPackList;
        ::ll::TypedStorage<8, 16, std::shared_ptr<const PackContentItem>>              mPackItem;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingBehaviourPackRemoval& operator=(PendingBehaviourPackRemoval const&);
        PendingBehaviourPackRemoval(PendingBehaviourPackRemoval const&);
        PendingBehaviourPackRemoval();
    };

    struct PackCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ContentType>                          mContentType;
        ::ll::TypedStorage<8, 24, std::vector<OreUI::FacetResourcePack>> mActive;
        ::ll::TypedStorage<8, 24, std::vector<OreUI::FacetResourcePack>> mGlobal;
        ::ll::TypedStorage<8, 24, std::vector<OreUI::FacetResourcePack>> mAvailable;
        ::ll::TypedStorage<8, 24, std::vector<OreUI::FacetResourcePack>> mRealms;
        ::ll::TypedStorage<8, 24, std::vector<OreUI::FacetResourcePack>> mUnowned;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PackCollection();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct FacetPromptDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mTitle;
        ::ll::TypedStorage<8, 24, std::string> mBody;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~FacetPromptDetails();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PackViewAndItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ContentView*>                mContentView;
        ::ll::TypedStorage<8, 16, std::shared_ptr<ContentItem>> mContentItem;
        // NOLINTEND

    public:
        // prevent constructor by default
        PackViewAndItem& operator=(PackViewAndItem const&);
        PackViewAndItem();
    };

    struct SelectedPackState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>   mPackId;
        ::ll::TypedStorage<4, 4, int> mSubpackIndex;
        // NOLINTEND

    public:
        // prevent constructor by default
        SelectedPackState& operator=(SelectedPackState const&);
        SelectedPackState();
    };

    using OnCompleteCallback = std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mLastLevelId;
    ::ll::TypedStorage<1, 1, bool> mPackActivationRequested;
    ::ll::TypedStorage<1, 1, bool> mPackDeactivationRequested;
    ::ll::TypedStorage<1, 1, bool> mShowPackSettingsRequested;
    ::ll::TypedStorage<1, 1, bool> mUserHasConfirmedDownload;
    ::ll::UntypedStorage<1, 1> mUserHasCancelledDownload;
    ::ll::UntypedStorage<8, 32> mPackActivationRequest;
    ::ll::UntypedStorage<8, 24> mDeactivationPackId;
    ::ll::UntypedStorage<8, 24> mShowSettingsPackId;
    ::ll::UntypedStorage<8, 24> mLastActivatedPackId;
    ::ll::UntypedStorage<8, 24> mDownloadedPackId;
    ::ll::UntypedStorage<8, 24> mMarketplacePackId;
    ::ll::TypedStorage<1, 1, ::OreUI::ResourcePacksFacet_DEPRECATED::ResourcePacksFacetStatus> mFacetStatus;
    ::ll::TypedStorage<1, 1, ::OreUI::ResourcePacksFacet_DEPRECATED::ResourcePacksFacetStatus> mPreviousStatus;
    ::ll::TypedStorage<8, 56, std::optional<OreUI::ResourcePacksFacet_DEPRECATED::PendingBehaviourPackRemoval>> mPendingPackMove;
    ::ll::UntypedStorage<8, 40> mPendingResourcePackActivation;
    ::ll::TypedStorage<8, 128, ::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection> mTexturePacks;
    ::ll::TypedStorage<8, 128, ::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection> mBehaviorPacks;
    ::ll::TypedStorage<8, 128, ::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection> mOldTexturePacks;
    ::ll::TypedStorage<8, 128, ::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection> mOldBehaviorPacks;
    ::ll::TypedStorage<8, 8, ::IContentManager&> mContentManager;
    ::ll::UntypedStorage<8, 24> mEntitlementManager;
    ::ll::UntypedStorage<8, 24> mContentTierManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&> mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&> mLevelListCache;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OreUI::WorldSettingsProvider_DEPRECATED>> mWorldSettingsProvider;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&> mDlcValidation;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDlcBatcher>> mDlcBatcher;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&> mContentAcquisition;
    ::ll::UntypedStorage<8, 8> mStoreCatalogRepository;
    ::ll::UntypedStorage<8, 24> mClientInstance;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&> mRouter;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MainMenuScreenModel>> mMainMenuScreenModel;
    ::ll::TypedStorage<1, 1, bool> mCatalogPackSourceInitialized;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRefreshCatalogPackSourceSubscription;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mExistenceTracker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentManagerContext>> mContentManagerContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentManagerContext>> mGlobalContentManagerContext;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContentViews>> mTexturePackViews;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContentViews>> mBehaviorPackViews;
    ::ll::TypedStorage<8, 16, std::shared_ptr<DlcValidationState>> mDlcState;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DlcChecker>> mDlcChecker;
    ::ll::TypedStorage<8, 8, ::IDlcBatchModel*> mDlcBatchModel;
    ::ll::TypedStorage<8, 48, ::OreUI::ResourcePacksFacet_DEPRECATED::FacetPromptDetails> mResourcePackToDownload;
    ::ll::UntypedStorage<8, 8> mDlcSizeToDownload;
    ::ll::UntypedStorage<8, 48> mOnDownloadCompleteCallback;
    ::ll::TypedStorage<4, 4, float> mDownloadProgress;
    ::ll::TypedStorage<4, 4, float> mImportProgress;
    ::ll::TypedStorage<4, 8, std::optional<OreUI::ResourcePacksFacet_DEPRECATED::PromptType>> mPromptType;
    ::ll::TypedStorage<8, 112, ::OreUI::Prompt> mPrompt;
    ::ll::UntypedStorage<8, 24> mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool> mIsDirty;
    ::ll::UntypedStorage<8, 16> mAwaiter;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePacksFacet_DEPRECATED& operator=(ResourcePacksFacet_DEPRECATED const&);
    ResourcePacksFacet_DEPRECATED(ResourcePacksFacet_DEPRECATED const&);
    ResourcePacksFacet_DEPRECATED();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePacksFacet_DEPRECATED();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePacksFacet_DEPRECATED(
        ::IContentManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> const&,
        ::IResourcePackRepository&,
        ::ILevelListCache&,
        std::shared_ptr<OreUI::WorldSettingsProvider_DEPRECATED>,
        ::IDlcValidation&,
        ::IContentAcquisition&,
        ::IStoreCatalogRepository&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> const&,
        ::OreUI::Router&,
        std::shared_ptr<MainMenuScreenModel>
    );

    MCNAPI void _activatePack(::OreUI::ResourcePacksFacet_DEPRECATED::PackActivationRequest);

    MCNAPI std::unique_ptr<ContentViews> _createContentViewsFor(::ContentType, ::PackScope) const;

    MCNAPI std::optional<OreUI::ResourcePacksFacet_DEPRECATED::PackViewAndItem>
           _findPackVectorInView(::OreUI::FacetResourcePackId const&, ::FindPackFlags, ::ContentViews*);

    MCNAPI std::optional<OreUI::ResourcePacksFacet_DEPRECATED::PackViewAndItem>
           _findPackViewAndContent(::OreUI::FacetResourcePackId const&, ::FindPackFlags);

    MCNAPI std::vector<OreUI::ResourcePacksFacet_DEPRECATED::SelectedPackState>
           _getSelectedPackStates(::ContentViews*) const;

    MCNAPI ::OreUI::ResourcePacksFacet_DEPRECATED::ResourcePacksFacetStatus _handleDlcCheckError(::DlcCheckResult);

    MCNAPI void _initialize(::LevelSummary&);

    MCNAPI void _movePackOnDataWarning();

    MCNAPI void _populatePackDetailsFromView(
        std::vector<OreUI::FacetResourcePack>&,
        std::vector<OreUI::FacetResourcePack>&,
        ::ContentView*,
        ::ContentType
    );

    MCNAPI bool _restoreSelectedPackStates(
        ::ContentViews&,
        std::vector<OreUI::ResourcePacksFacet_DEPRECATED::SelectedPackState> const&
    );

    MCNAPI void _showNoInternetPrompt();

    MCNAPI void _showPackActivationErrorPrompt();

    MCNAPI void _showPackSelectErrorPrompt(::PackSelectResult const&);

    MCNAPI void _showUnspecifiedErrorPrompt();

    MCNAPI void _updateContentView(
        ::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection&,
        ::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection&,
        ::ContentViews&
    );

    MCNAPI void changePackPriority(std::string const&, int, int);

    MCNAPI void clearLastActivatedPackId();

    MCNAPI std::vector<OreUI::FacetResourcePack> const& getActiveBehaviorPacks() const;

    MCNAPI std::vector<OreUI::FacetResourcePack> const& getActiveTexturePacks() const;

    MCNAPI std::vector<OreUI::FacetResourcePack> const& getAvailableBehaviorPacks() const;

    MCNAPI std::vector<OreUI::FacetResourcePack> const& getAvailableTexturePacks() const;

    MCNAPI float getDownloadProgress() const;

    MCNAPI std::vector<OreUI::FacetResourcePack> const& getGlobalTexturePacks() const;

    MCNAPI float getImportProgress() const;

    MCNAPI ::OreUI::FacetResourcePackId const& getLastactivatedPackId() const;

    MCNAPI ::OreUI::FacetResourcePackId const& getMarketplacePackId() const;

    MCNAPI ::OreUI::Prompt const& getPrompt() const;

    MCNAPI std::vector<OreUI::FacetResourcePack> const& getRealmsTexturePacks() const;

    MCNAPI ::OreUI::ResourcePacksFacet_DEPRECATED::FacetPromptDetails const& getResourcePackToDownload() const;

    MCNAPI ::OreUI::ResourcePacksFacet_DEPRECATED::ResourcePacksFacetStatus getStatus() const;

    MCNAPI std::vector<OreUI::FacetResourcePack> const& getUnownedTexturePacks() const;

    MCNAPI bool isRealmsPlusSubscriptionActive() const;

    MCNAPI bool isRealmsPlusSupported() const;

    MCNAPI void notifyDownloadCancellation();

    MCNAPI void requestPackActivation(::OreUI::FacetResourcePackId const&, bool);

    MCNAPI void requestPackDeactivation(::OreUI::FacetResourcePackId const&);

    MCNAPI void requestToShowPackSettings(::OreUI::FacetResourcePackId const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::OreUI::PromptAction
        _getActionForActionType(::OreUI::ResourcePacksFacet_DEPRECATED::PromptActionType, ::OreUI::PromptActionVariant);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[22]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IContentManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> const&,
        ::IResourcePackRepository&,
        ::ILevelListCache&,
        std::shared_ptr<OreUI::WorldSettingsProvider_DEPRECATED>,
        ::IDlcValidation&,
        ::IContentAcquisition&,
        ::IStoreCatalogRepository&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> const&,
        ::OreUI::Router&,
        std::shared_ptr<MainMenuScreenModel>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
