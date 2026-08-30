#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/LoadImportedLevelData.h"
#include "mc/client/services/catalog/content_binary/Type.h"
#include "mc/client/services/download/IContentTracker.h"
#include "mc/client/services/download/InitiatorCategory.h"
#include "mc/client/services/download/ProcessSortOrder.h"
#include "mc/client/services/download/ProcessState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/http/Status.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/PropertyBag.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/DownloadState.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class DlcHydrationInfo;
class DlcId;
class DlcImportContext;
class FileDownloadManager;
class IContentEventListener;
class IMinecraftEventing;
class ImportContext;
class PackManifest;
class WatchdogTimer;
struct PackIdVersion;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ContentTracker : public ::IContentTracker, public ::std::enable_shared_from_this<ContentTracker> {
public:
    // ContentTracker inner types declare
    // clang-format off
    class HydrateItemResponseStatus;
    // clang-format on

    // ContentTracker inner types define
    class HydrateItemResponseStatus {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool const>                     mIsSuccess;
        ::ll::TypedStorage<1, 1, bool const>                     mIsFailureButCanRetry;
        ::ll::TypedStorage<1, 1, bool const>                     mCanNoLongerRetry;
        ::ll::TypedStorage<1, 1, bool const>                     mHasValidHydrationInfo;
        ::ll::TypedStorage<8, 24, ::Bedrock::Http::Status const> mResponseStatus;
        // NOLINTEND

    public:
        // prevent constructor by default
        HydrateItemResponseStatus();
    };

    using Importer = ::brstd::move_only_function<void(
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
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mUsePersonaService;
    ::ll::TypedStorage<8, 8, ::IContentEventListener&> mEventListener;
    ::ll::UntypedStorage<8, 24> mCatalogService;
    ::ll::UntypedStorage<8, 64> mImporter;
    ::ll::UntypedStorage<8, 48> mDlcImportContextFactory;
    ::ll::TypedStorage<8, 24, ::PropertyBag> mProperties;
    ::ll::TypedStorage<4, 4, int> mPropertyChangeVersion;
    ::ll::TypedStorage<8, 24, std::string> mContentUrl;
    ::ll::TypedStorage<8, 24, std::string> mTitle;
    ::ll::TypedStorage<8, 8, ulong> mFileSize;
    ::ll::TypedStorage<1, 1, bool> mFetchingFileSize;
    ::ll::TypedStorage<1, 1, bool> mTitleLocked;
    ::ll::TypedStorage<1, 1, bool> mHasHydrated;
    ::ll::TypedStorage<4, 4, ::DownloadState> mDownloadState;
    ::ll::TypedStorage<8, 16, std::shared_ptr<FileDownloadManager>> mFileDownloadManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<DlcImportContext>> mImportContext;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mExistenceTracker;
    ::ll::TypedStorage<8, 8, double> mDownloadStartTime;
    ::ll::TypedStorage<4, 4, int> mDownloadRetryAttempts;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mDownloadRetryDelay;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mDownloadFailureTime;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WatchdogTimer>> mImportTimer;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ContentTracker& operator=(ContentTracker const&);
    ContentTracker(ContentTracker const&);
    ContentTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentTracker();

    virtual bool restoreFromJson(::Json::Value const&);

    virtual bool update();

    virtual ::DlcId getDlcId() const;

    virtual ::Json::Value const& getProperties() const;

    virtual bool containsPackIdentity(::PackIdVersion const&);

    virtual int getInitiatorCategorySortOrder() const;

    virtual ::ProcessSortOrder getProcessSortOrder() const;

    virtual int getPriority() const;

    virtual void setPriority(int);

    virtual ::InitiatorCategory getInitiatorCategory() const;

    virtual void setInitiatorCategory(::InitiatorCategory);

    virtual void setSilent(bool);

    virtual bool getSilent() const;

    virtual bool getIsSkinPack() const;

    virtual bool getIsPersonaPack() const;

    virtual bool isNonBlockingContentPack() const;

    virtual void setIsTreatmentPack(bool);

    virtual bool getIsTreatmentPack() const;

    virtual void setIsWorldPack(bool);

    virtual bool getIsWorldPack() const;

    virtual void setIsOptimizedPack(bool);

    virtual bool getIsOptimizedPack() const;

    virtual void tryAcquire();

    virtual ::ProcessState getProcessState() const;

    virtual bool isDownloadOrImportInProgress() const;

    virtual bool isDownloadPaused() const;

    virtual bool isDownloadPending() const;

    virtual bool isDownloading() const;

    virtual bool isExclusiveDownload() const;

    virtual bool isImportWaiting() const;

    virtual bool isImportPending() const;

    virtual bool isImporting() const;

    virtual bool isDone() const;

    virtual bool isCancelled() const;

    virtual void fetchFileSize(std::function<void(ulong)>);

    virtual void fetchTitle(std::function<void(const std::string&)>);

    virtual bool isFetchingFileSize() const;

    virtual bool hasFileSize() const;

    virtual bool canTryDownload() const;

    virtual void startDownload();

    virtual void interruptDownload();

    virtual void pauseDownload();

    virtual void cancelDownload();

    virtual void setImportPending();

    virtual void importContent();

    virtual void cancelPendingImport();

    virtual ::DownloadState getDownloadState() const;

    virtual ulong getDownloadedBytes() const;

    virtual float getDownloadProgress() const;

    virtual ulong getDownloadSize() const;

    virtual ulong getImportTotal() const;

    virtual ulong getImportedCount() const;

    virtual float getImportProgress() const;

    virtual double getDownloadElapsedTime() const;

    virtual double getDownloadStartTime() const;

    virtual void resetDownloadStartTime();

    virtual std::string const& getTitle() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _cleanupFilesWithExtension(std::string const&);

    MCNAPI void _cleanupOrphanedFiles();

    MCNAPI void _fetchContentDetails(std::function<void(const ContentTracker::HydrateItemResponseStatus&)>);

    MCNAPI ::ContentBinary::Type _getBinaryType() const;

    MCNAPI ::Core::PathBuffer<std::string> _getCompleteFilePath() const;

    MCNAPI ::Core::PathBuffer<std::string> _getDownloadPath() const;

    MCNAPI std::vector<PackIdVersion> _getPackIdentities() const;

    MCNAPI ::Core::PathBuffer<std::string> _getPartialFilePath() const;

    MCNAPI void _handleDownloadRetry(bool const, std::string, int, int);

    MCNAPI bool _hasFileWithExtension(std::string const&, ulong*) const;

    MCNAPI void _setPackIdentities(std::vector<PackIdVersion> const&);

    MCNAPI void _setProcessState(::ProcessState);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& BINARY_TYPE_KEY();

    MCNAPI static std::string const& CONTENT_ID_KEY();

    MCNAPI static std::string const& INITIATOR_CATEGORY_KEY();

    MCNAPI static std::string const& IS_OPTIMIZED_PACK();

    MCNAPI static std::string const& IS_SKIN_PACK();

    MCNAPI static std::string const& IS_TREATMENT_PACK();

    MCNAPI static std::string const& IS_WORLD_PACK();

    MCNAPI static std::string const& PACK_IDS_KEY();

    MCNAPI static std::string const& PRIORITY_KEY();

    MCNAPI static std::string const& PROCESS_STATE_KEY();

    MCNAPI static std::string const& PRODUCT_ID_KEY();

    MCNAPI static std::string const& SILENT_DOWNLOAD();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $restoreFromJson(::Json::Value const&);

    MCNAPI bool $update();

    MCNAPI ::DlcId $getDlcId() const;

    MCNAPI ::Json::Value const& $getProperties() const;

    MCNAPI bool $containsPackIdentity(::PackIdVersion const&);

    MCNAPI int $getInitiatorCategorySortOrder() const;

    MCNAPI ::ProcessSortOrder $getProcessSortOrder() const;

    MCNAPI int $getPriority() const;

    MCNAPI void $setPriority(int);

    MCNAPI ::InitiatorCategory $getInitiatorCategory() const;

    MCNAPI void $setInitiatorCategory(::InitiatorCategory);

    MCNAPI void $setSilent(bool);

    MCNAPI bool $getSilent() const;

    MCNAPI bool $getIsSkinPack() const;

    MCNAPI bool $getIsPersonaPack() const;

    MCNAPI bool $isNonBlockingContentPack() const;

    MCNAPI void $setIsTreatmentPack(bool);

    MCNAPI bool $getIsTreatmentPack() const;

    MCNAPI void $setIsWorldPack(bool);

    MCNAPI bool $getIsWorldPack() const;

    MCNAPI void $setIsOptimizedPack(bool);

    MCNAPI bool $getIsOptimizedPack() const;

    MCNAPI void $tryAcquire();

    MCNAPI ::ProcessState $getProcessState() const;

    MCNAPI bool $isDownloadOrImportInProgress() const;

    MCNAPI bool $isDownloadPaused() const;

    MCNAPI bool $isDownloadPending() const;

    MCNAPI bool $isDownloading() const;

    MCNAPI bool $isExclusiveDownload() const;

    MCNAPI bool $isImportWaiting() const;

    MCNAPI bool $isImportPending() const;

    MCNAPI bool $isImporting() const;

    MCNAPI bool $isDone() const;

    MCNAPI bool $isCancelled() const;

    MCNAPI void $fetchFileSize(std::function<void(ulong)>);

    MCNAPI void $fetchTitle(std::function<void(const std::string&)>);

    MCNAPI bool $isFetchingFileSize() const;

    MCNAPI bool $hasFileSize() const;

    MCNAPI bool $canTryDownload() const;

    MCNAPI void $startDownload();

    MCNAPI void $interruptDownload();

    MCNAPI void $pauseDownload();

    MCNAPI void $cancelDownload();

    MCNAPI void $setImportPending();

    MCNAPI void $importContent();

    MCNAPI void $cancelPendingImport();

    MCNAPI ::DownloadState $getDownloadState() const;

    MCNAPI ulong $getDownloadedBytes() const;

    MCNAPI float $getDownloadProgress() const;

    MCNAPI ulong $getDownloadSize() const;

    MCNAPI ulong $getImportTotal() const;

    MCNAPI ulong $getImportedCount() const;

    MCNAPI float $getImportProgress() const;

    MCNAPI double $getDownloadElapsedTime() const;

    MCNAPI double $getDownloadStartTime() const;

    MCNAPI void $resetDownloadStartTime();

    MCNAPI std::string const& $getTitle() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
