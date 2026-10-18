#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/options/AutoUpdateMode.h"
#include "mc/client/resources/LoadImportedLevelData.h"
#include "mc/client/services/download/ContentEventType.h"
#include "mc/client/services/download/DlcId.h"
#include "mc/client/services/download/IContentAcquisition.h"
#include "mc/client/services/download/IContentDiscoveryListener.h"
#include "mc/client/services/download/IContentEventListener.h"
#include "mc/client/services/download/InitiatorCategory.h"
#include "mc/client/services/download/acquisition_status/AcquisitionResult.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/util/RetryDelay.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ContentCatalogService;
class ContentDiscovery;
class DlcBatchThrottleBridge;
class IContentTracker;
class IMinecraftEventing;
class IResourcePackRepository;
class IToastManager;
class ImportContext;
class PackManifest;
class PackSourceFactory;
class RateLimiter;
class ResourcePackManager;
class Scheduler;
class SearchQuery;
class TaskGroup;
class WorldTemplateManager;
struct DownloadStateObject;
struct DurableDocument;
struct PackIdVersion;
struct PackImportStateObject;
struct TrackerStats;
namespace Core { class Path; }
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class ContentAcquisition : public ::IContentEventListener,
                           public ::IContentDiscoveryListener,
                           public ::IContentAcquisition {
#else // @header-generator platform
class ContentAcquisition {
#endif // @header-generator platform
public:
    // ContentAcquisition inner types declare
    // clang-format off
    struct DownloadCallback;
#if defined(LL_PLAT_A) // @header-generator platform
    struct PackImportCallbackInfo;
#else // @header-generator platform
#endif // @header-generator platform
    struct DownloadHistory;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PackImportCallbackInfo;
#endif // @header-generator platform
    // clang-format on

    // ContentAcquisition inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class DownloadHistoryEntryResult : int {
        NotStarted = 0,
        InProgress = 1,
        Success    = 2,
        Failure    = 3,
        Cancelled  = 4,
    };
#else // @header-generator platform
    enum class DownloadHistoryEntryResult : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct DownloadCallback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mShouldCheckExistence;
        ::ll::UntypedStorage<8, 24>    mExistenceTracker;
        ::ll::UntypedStorage<8, 48>    mCallback;
        // NOLINTEND
#else // @header-generator platform
    struct DownloadCallback {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        DownloadCallback& operator=(DownloadCallback const&);
        DownloadCallback(DownloadCallback const&);
#else // @header-generator platform
    struct DownloadHistory {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~DownloadCallback();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PackImportCallbackInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                 mShouldCheckExistence;
        ::ll::UntypedStorage<8, 8>                     mCallbackId;
        ::ll::TypedStorage<8, 16, std::weak_ptr<bool>> mExistenceTracker;
        ::ll::UntypedStorage<8, 48>                    mCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        PackImportCallbackInfo& operator=(PackImportCallbackInfo const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PackImportCallbackInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct DownloadHistory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                                            mDownloadSize;
        ::ll::TypedStorage<1, 1, bool>                                             mHasDownloadSize;
        ::ll::TypedStorage<4, 4, ::ContentAcquisition::DownloadHistoryEntryResult> mStatus;
        ::ll::TypedStorage<8, 24, std::string>                                     mTitle;
        ::ll::TypedStorage<1, 1, bool>                                             mHasTitle;
        // NOLINTEND

    public:
        // prevent constructor by default
        DownloadHistory(DownloadHistory const&);
    };

    using Importer = std::function<void(
        std::shared_ptr<ImportContext>,
        const Core::PathBuffer<std::string>&,
        bool,
        LoadImportedLevelData,
        bool,
        bool
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                               mCatalogService;
    ::ll::UntypedStorage<8, 48>                                                               mImporter;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>                                      mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                          mResourcePackManager;
    ::ll::UntypedStorage<8, 24>                                                               mTemplateManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                           mEventing;
    ::ll::TypedStorage<8, 8, ::IToastManager&>                                                mToastManager;
    ::ll::UntypedStorage<8, 40>                                                               mAppPlatformRef;
    ::ll::TypedStorage<1, 1, bool>                                                            mStarted;
    ::ll::TypedStorage<4, 20, ::RetryDelay>                                                   mAutoSaveRetry;
    ::ll::TypedStorage<4, 20, ::RetryDelay>                                                   mContentDiscoveryRetry;
    ::ll::UntypedStorage<8, 16>                                                               mSerializedState;
    ::ll::TypedStorage<4, 4, ::AutoUpdateMode>                                                mAutoUpdateMode;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentDiscovery>>                               mContentDiscovery;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<IContentTracker>>>                  mContentTrackers;
    ::ll::TypedStorage<8, 24, std::vector<ContentAcquisition::DownloadCallback>>              mDownloadCallbacks;
    ::ll::UntypedStorage<8, 48>                                                               mUpdateFoundCallback;
    ::ll::TypedStorage<8, 24, std::vector<ContentAcquisition::PackImportCallbackInfo>>        mPackImportCallbacks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DlcBatchThrottleBridge>>                         mThrottleBridge;
    ::ll::TypedStorage<8, 40, std::unordered_map<DlcId, ContentAcquisition::DownloadHistory>> mDownloadHistory;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DlcId>>                         mCachedProductIdLookup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                                      mIOTaskGroup;
    ::ll::TypedStorage<8, 8, ulong>                                                           batchCallbackIdServer;
    ::ll::UntypedStorage<8, 16>                                                               mTreatmentPackLimiter;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentAcquisition& operator=(ContentAcquisition const&);
    ContentAcquisition(ContentAcquisition const&);
    ContentAcquisition();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContentAcquisition();

    virtual void onDownloadEvent(::ContentEventType, ::InitiatorCategory, ::DlcId const&, std::string const&, std::vector<PackIdVersion> const&, ulong, double, int, bool, std::string const&, int, int);

    virtual void onImportEvent(::ContentEventType, ::InitiatorCategory, ::DlcId const&, std::string const&, std::vector<PackIdVersion> const&, bool, bool, std::string const&);

    virtual void onPackImportEvent(std::string const&, ::PackManifest const*, bool);

    virtual void triggerBlockingPendingImports();

    virtual void triggerPendingImportsFor(::PackIdVersion const&);

    virtual std::vector<DlcId> getPendingImports() const;

    virtual std::vector<DlcId> getPendingAndActiveImports() const;

    virtual void searchForDlcIdsByPackIds(std::vector<PackIdVersion> const&, std::function<void (const std::vector<DlcId>&)>);

    virtual void checkStorageRequirements(std::vector<DlcId> const&, std::function<void (IContentAcquisition::HasSpaceResults, ulong)>);

    virtual void getTitles(std::vector<DlcId> const&, std::function<void (const std::vector<std::string>&)>);

    virtual void beginPackDownload(::DlcId const&, ::InitiatorCategory, bool);

    virtual void beginTreatmentPackDownload(::DlcId const&);

    virtual void beginWorldPackDownload(::DlcId const&);

    virtual void interruptAllDownloads();

    virtual void removeFromCancelledDownloads(std::vector<DlcId> const&);

    virtual void removeCompletedDownload(::PackIdVersion const&);

    virtual void pauseAllDownloads();

    virtual void pauseDownload(::DlcId const&);

    virtual void resumeAllDownloads();

    virtual void resumeDownload(::DlcId const&);

    virtual void cancelAllDownloads();

    virtual void cancelDownload(::DlcId const&);

    virtual void cancelInactiveDownload(::DlcId const&);

    virtual void cancelPendingDownload(::DlcId const&);

    virtual void cancelPendingImport(::DlcId const&);

    virtual void addDownloadCallback(std::weak_ptr<bool>, std::function<void (DownloadStateObject&)>);

    virtual void addUpdateFoundCallback(std::function<void (const std::string&, const DurableDocument&)>);

    virtual ::IContentAcquisition::ImportCallbackId addPackImportCallback(std::weak_ptr<bool>, std::function<void (PackImportStateObject&)>);

    virtual void removePackImportCallback(::IContentAcquisition::ImportCallbackId);

    virtual bool areAnyDownloadsActive() const;

    virtual bool isDownloadActiveForAny(std::vector<DlcId> const&) const;

    virtual bool isDownloadActiveFor(::DlcId const&) const;

    virtual ulong getDownloadSize(::DlcId const&) const;

    virtual ulong getDownloadedBytes(::DlcId const&) const;

    virtual float getDownloadProgress(::DlcId const&) const;

    virtual float getAllDownloadProgress() const;

    virtual bool isDownloadComplete(::DlcId const&) const;

    virtual bool isContentTrackerDownloadComplete(::DlcId const&) const;

    virtual void clearCompletedDownloads();

    virtual bool hasDownloadFailedForAny(std::vector<DlcId> const&) const;

    virtual bool hasDownloadCancelledForAny(std::vector<DlcId> const&) const;

    virtual bool hasDownloadFailedFor(::DlcId const&) const;

    virtual bool areAnyImportsWaiting() const;

    virtual bool areAnyImportsActive() const;

    virtual bool areAnyBlockingImportsWaiting() const;

    virtual bool areAnyBlockingImportsActive() const;

    virtual bool isImportActiveForAny(std::vector<DlcId> const&) const;

    virtual bool isImportActiveFor(::DlcId const&) const;

    virtual bool isImportWaitingFor(::DlcId const&) const;

    virtual ulong getImportTotal(::DlcId const&) const;

    virtual ulong getImportedCount(::DlcId const&) const;

    virtual float getImportProgress(::DlcId const&) const;

    virtual float getAllImportProgress() const;

    virtual bool isDownloadOrImportInProgressFor(::DlcId const&) const;

    virtual bool isDownloadOrImportInProgressForAny(std::vector<DlcId> const&) const;

    virtual void onUpdateFound(std::string const&, ::DurableDocument const&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<DlcBatchThrottleBridge>> getThrottleBridge();

    virtual ::IContentTracker& createContentTrackerFor(::DlcId const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContentAcquisition(
        ::Scheduler&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> const&,
        ::IMinecraftEventing&,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::PackSourceFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::IToastManager&,
        std::function<void(
            std::shared_ptr<ImportContext>,
            const Core::PathBuffer<std::string>&,
            bool,
            LoadImportedLevelData,
            bool,
            bool
        )>,
        ::ServiceReference<AppPlatform>
    );

    MCNAPI void _discoverUpdates();

    MCNAPI void _reportUgcAcquisitionStateTelemetry(
        ::AcquisitionStatus::AcquisitionResult,
        ::DlcId const&,
        ulong,
        bool,
        int,
        bool,
        std::string const&,
        int,
        int
    ) const;

    MCNAPI void _sendDlcStorageSpaceFullTelemetry(std::string const&, ulong);

    MCNAPI void setAutoUpdateMode(::AutoUpdateMode);

    MCNAPI void start();

    MCNAPI void update(bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> _getContentTrackerStateSavePath(::ServiceReference<AppPlatform>&);

    MCNAPI static void _tryAutoSaveState(
        ::ServiceReference<AppPlatform>&,
        ::RetryDelay&,
        std::vector<std::shared_ptr<IContentTracker>>,
        ::gsl::not_null<TaskGroup*>,
        bool,
        bool
    );

    MCNAPI static void _updateContentTrackers(
        int,
        bool,
        std::vector<std::shared_ptr<IContentTracker>>&,
        std::unordered_map<DlcId, ContentAcquisition::DownloadHistory>&,
        ::RetryDelay&,
        ::gsl::not_null<TaskGroup*>,
        ::ServiceReference<AppPlatform>&,
        bool,
        ::RateLimiter&
    );

    MCNAPI static std::string getOutOfMemoryText(::IContentAcquisition::HasSpaceResults, std::string const&);

    MCNAPI static ::Core::PathBuffer<std::string> getSmallDownloadPath(::ServiceReference<AppPlatform> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scheduler&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> const&,
        ::IMinecraftEventing&,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::PackSourceFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::IToastManager&,
        std::function<void(
            std::shared_ptr<ImportContext>,
            const Core::PathBuffer<std::string>&,
            bool,
            LoadImportedLevelData,
            bool,
            bool
        )>,
        ::ServiceReference<AppPlatform>
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
    MCNAPI void $onDownloadEvent(
        ::ContentEventType,
        ::InitiatorCategory,
        ::DlcId const&,
        std::string const&,
        std::vector<PackIdVersion> const&,
        ulong,
        double,
        int,
        bool,
        std::string const&,
        int,
        int
    );

    MCNAPI void $onImportEvent(
        ::ContentEventType,
        ::InitiatorCategory,
        ::DlcId const&,
        std::string const&,
        std::vector<PackIdVersion> const&,
        bool,
        bool,
        std::string const&
    );

    MCNAPI void $onPackImportEvent(std::string const&, ::PackManifest const*, bool);

    MCNAPI void $triggerBlockingPendingImports();

    MCNAPI void $triggerPendingImportsFor(::PackIdVersion const&);

    MCNAPI std::vector<DlcId> $getPendingImports() const;

    MCNAPI std::vector<DlcId> $getPendingAndActiveImports() const;

    MCNAPI void
    $searchForDlcIdsByPackIds(std::vector<PackIdVersion> const&, std::function<void(const std::vector<DlcId>&)>);

    MCNAPI void $checkStorageRequirements(
        std::vector<DlcId> const&,
        std::function<void(IContentAcquisition::HasSpaceResults, ulong)>
    );

    MCNAPI void $getTitles(std::vector<DlcId> const&, std::function<void(const std::vector<std::string>&)>);

    MCNAPI void $beginPackDownload(::DlcId const&, ::InitiatorCategory, bool);

    MCNAPI void $beginTreatmentPackDownload(::DlcId const&);

    MCNAPI void $beginWorldPackDownload(::DlcId const&);

    MCNAPI void $interruptAllDownloads();

    MCNAPI void $removeFromCancelledDownloads(std::vector<DlcId> const&);

    MCNAPI void $removeCompletedDownload(::PackIdVersion const&);

    MCNAPI void $pauseAllDownloads();

    MCNAPI void $pauseDownload(::DlcId const&);

    MCNAPI void $resumeAllDownloads();

    MCNAPI void $resumeDownload(::DlcId const&);

    MCNAPI void $cancelAllDownloads();

    MCNAPI void $cancelDownload(::DlcId const&);

    MCNAPI void $cancelInactiveDownload(::DlcId const&);

    MCNAPI void $cancelPendingDownload(::DlcId const&);

    MCNAPI void $cancelPendingImport(::DlcId const&);

    MCNAPI void $addDownloadCallback(std::weak_ptr<bool>, std::function<void(DownloadStateObject&)>);

    MCNAPI void $addUpdateFoundCallback(std::function<void(const std::string&, const DurableDocument&)>);

    MCNAPI ::IContentAcquisition::ImportCallbackId
        $addPackImportCallback(std::weak_ptr<bool>, std::function<void(PackImportStateObject&)>);

    MCNAPI void $removePackImportCallback(::IContentAcquisition::ImportCallbackId);

    MCNAPI bool $areAnyDownloadsActive() const;

    MCNAPI bool $isDownloadActiveForAny(std::vector<DlcId> const&) const;

    MCNAPI bool $isDownloadActiveFor(::DlcId const&) const;

    MCNAPI ulong $getDownloadSize(::DlcId const&) const;

    MCNAPI ulong $getDownloadedBytes(::DlcId const&) const;

    MCNAPI float $getDownloadProgress(::DlcId const&) const;

    MCNAPI float $getAllDownloadProgress() const;

    MCNAPI bool $isDownloadComplete(::DlcId const&) const;

    MCNAPI bool $isContentTrackerDownloadComplete(::DlcId const&) const;

    MCNAPI void $clearCompletedDownloads();

    MCNAPI bool $hasDownloadFailedForAny(std::vector<DlcId> const&) const;

    MCNAPI bool $hasDownloadCancelledForAny(std::vector<DlcId> const&) const;

    MCNAPI bool $hasDownloadFailedFor(::DlcId const&) const;

    MCNAPI bool $areAnyImportsWaiting() const;

    MCNAPI bool $areAnyImportsActive() const;

    MCNAPI bool $areAnyBlockingImportsWaiting() const;

    MCNAPI bool $areAnyBlockingImportsActive() const;

    MCNAPI bool $isImportActiveForAny(std::vector<DlcId> const&) const;

    MCNAPI bool $isImportActiveFor(::DlcId const&) const;

    MCNAPI bool $isImportWaitingFor(::DlcId const&) const;

    MCNAPI ulong $getImportTotal(::DlcId const&) const;

    MCNAPI ulong $getImportedCount(::DlcId const&) const;

    MCNAPI float $getImportProgress(::DlcId const&) const;

    MCNAPI float $getAllImportProgress() const;

    MCNAPI bool $isDownloadOrImportInProgressFor(::DlcId const&) const;

    MCNAPI bool $isDownloadOrImportInProgressForAny(std::vector<DlcId> const&) const;

    MCNAPI void $onUpdateFound(std::string const&, ::DurableDocument const&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<DlcBatchThrottleBridge>> $getThrottleBridge();

    MCNAPI ::IContentTracker& $createContentTrackerFor(::DlcId const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct PackImportCallbackInfo {};
#endif // @header-generator platform
};
