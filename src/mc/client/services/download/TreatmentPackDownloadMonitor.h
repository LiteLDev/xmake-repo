#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/FetchResult.h"
#include "mc/client/services/download/TreatmentPackMetadata.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ScheduledCallback.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/resources/ResourcePackListener.h"
#include "mc/util/RetryDelay.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class DateManager;
class FlightingService;
class IContentAcquisition;
class IMinecraftEventing;
class IResourcePackRepository;
class OptionRegistry;
class ResourceLoadManager;
class ResourcePack;
class ResourcePackManager;
class ResourcePackStack;
class ResourcePackTreatmentQuery;
class TreatmentPackSource;
struct ResourcePackTreatmentDocument;
struct ResourcePackTreatmentSearchResults;
namespace Json { class Value; }
namespace Social { class IUserManager; }
// clang-format on

class TreatmentPackDownloadMonitor : public ::Bedrock::EnableNonOwnerReferences, public ::ResourcePackListener {
#else // @header-generator platform
class TreatmentPackDownloadMonitor {
#endif // @header-generator platform
public:
    // TreatmentPackDownloadMonitor inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class FetchState : int {
        NotStarted = 0,
        Fetching   = 1,
        Complete   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                               mFlightingService;
    ::ll::TypedStorage<8, 8, ::ContentCatalogService&>                        mCatalogService;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                          mDownloadMonitor;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                          mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>                      mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                           mEventing;
    ::ll::TypedStorage<8, 8, ::TreatmentPackSource*>                          mTreatmentPackSource;
    ::ll::UntypedStorage<8, 24>                                               mResourceLoadManager;
    ::ll::UntypedStorage<8, 32>                                               mDateManager;
    ::ll::UntypedStorage<8, 96>                                               mQueryTask;
    ::ll::UntypedStorage<8, 96>                                               mRetryDownloadTask;
    ::ll::TypedStorage<8, 16, std::weak_ptr<const OptionRegistry>>            mPrimaryOptions;
    ::ll::UntypedStorage<4, 16>                                               mFetchState;
    ::ll::UntypedStorage<8, 48>                                               mIsNetworkEnabledCheck;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                          mExistanceTracker;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mTreatmentMonitorSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mPlayFabSignInSubscription;
    ::ll::TypedStorage<1, 1, bool>                                            mDownloadSuccess;
    ::ll::TypedStorage<8, 24, std::set<std::string>>                          mInProgressDownloads;
    ::ll::TypedStorage<8, 24, std::map<std::string, RetryDelay>>              mDownloadAttempts;
    ::ll::TypedStorage<1, 1, bool>                                            mStartedDownloadCallback;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ResourcePackTreatmentQuery>>    mTreatmentQuery;
    ::ll::TypedStorage<4, 40, std::mutex>                                     mCachedTreatmentMutex;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                       mCachedTreatmentTags;
    ::ll::TypedStorage<4, 40, std::mutex>                                     mCachedPackMetadataMutex;
    ::ll::TypedStorage<8, 24, std::map<PackIdVersion, TreatmentPackMetadata>> mCachedPackMetadata;
    // NOLINTEND

public:
    // prevent constructor by default
    TreatmentPackDownloadMonitor& operator=(TreatmentPackDownloadMonitor const&);
    TreatmentPackDownloadMonitor(TreatmentPackDownloadMonitor const&);
    TreatmentPackDownloadMonitor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TreatmentPackDownloadMonitor();

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TreatmentPackDownloadMonitor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<FlightingService>> const&,
        ::ContentCatalogService&,
        ::IContentAcquisition&,
        ::IMinecraftEventing&,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::TreatmentPackSource*,
        std::function<bool()>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>> const,
        std::weak_ptr<const OptionRegistry>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>
    );

    MCNAPI void _queryForTreatmentPacks();

    MCNAPI void _updateAppliedTreatmentPacks();

    MCNAPI std::unique_ptr<ResourcePackStack> buildTreatmentStackPack(bool) const;

    MCNAPI std::vector<std::string> getResourcePackStackTreatmentTags(::ResourcePackStack const&) const;

    MCNAPI void onQueryResults(::FetchResult, ::ResourcePackTreatmentSearchResults const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<FlightingService>> const&,
        ::ContentCatalogService&,
        ::IContentAcquisition&,
        ::IMinecraftEventing&,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::TreatmentPackSource*,
        std::function<bool()>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>> const,
        std::weak_ptr<const OptionRegistry>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>
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
    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class FetchState : int {};
#endif // @header-generator platform
};
