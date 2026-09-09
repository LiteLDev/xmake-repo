#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/DlcId.h"
#include "mc/client/services/download/IContentAcquisition.h"
#include "mc/client/services/download/IDlcBatchModel.h"
#include "mc/client/services/download/InitiatorCategory.h"
#include "mc/client/store/ItemInstallState.h"
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IStoreCatalogRepository;
// clang-format on

class DlcBatchModel : public ::IDlcBatchModel {
public:
    // DlcBatchModel inner types define
    enum class DlcProductIdSearch : int {
        Unknown   = 0,
        Searching = 1,
        Done      = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>              mContentAcquisition;
    ::ll::UntypedStorage<8, 8>                                    mStoreCatalog;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>              mDlcBatchExistenceTracker;
    ::ll::TypedStorage<8, 24, std::vector<DlcId>>                 mDlcIds;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>>         mPackIds;
    ::ll::TypedStorage<4, 4, ::DlcBatchModel::DlcProductIdSearch> mDlcProductIdSearch;
    ::ll::TypedStorage<4, 4, ::InitiatorCategory>                 mInitiatorCategory;
    ::ll::TypedStorage<1, 1, bool>                                mSilent;
    ::ll::UntypedStorage<8, 16>                                   mBatchId;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcBatchModel& operator=(DlcBatchModel const&);
    DlcBatchModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DlcBatchModel();

    virtual void searchForProductIds(std::function<void()>);

    virtual void beginExclusiveDownload();

    virtual void beginPackDownload();

    virtual void beginPackDownloadWithPossibleThrottleWarning();

    virtual void beginAutoDownload();

    virtual void beginWorldPackDownload();

    virtual void cancelDownload();

    virtual void cancelInactiveDownloads();

    virtual void cancelPendingDownload();

    virtual void cancelPendingImport();

    virtual bool containsProductId(std::string const&) const;

    virtual void pauseDownload();

    virtual void resumeDownload();

    virtual bool isDownloadingOrImporting() const;

    virtual bool isDownloading() const;

    virtual bool isDownloadComplete() const;

    virtual ulong getDownloadSize() const;

    virtual ulong getDownloadedBytes() const;

    virtual float getDownloadProgress() const;

    virtual ulong getDownloadedCount() const;

    virtual std::optional<int> getIndexOfActiveDownload() const;

    virtual bool isImportComplete() const;

    virtual bool isImporting() const;

    virtual bool isImportWaiting() const;

    virtual ulong getImportTotal() const;

    virtual ulong getImportedCount() const;

    virtual float getImportProgress() const;

    virtual std::optional<int> getIndexOfActiveImport() const;

    virtual std::vector<DlcId> const& getDlcIds() const;

    virtual std::vector<PackIdVersion> const& getPackIds() const;

    virtual ::ItemInstallState getDlcInstalledState() const;

    virtual std::vector<std::string> getProductIdList() const;

    virtual bool isContentSearchComplete();

    virtual bool isContentSearchInProgress() const;

    virtual bool isFailed() const;

    virtual bool isCancelled() const;

    virtual ::IContentAcquisition& contentAcquisition() const;

    virtual ::IStoreCatalogRepository& storeCatalog() const;

    virtual void setSilent(bool);

    virtual bool isSilent() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DlcBatchModel(::IDlcBatchModel const&);

    MCNAPI DlcBatchModel(::DlcBatchModel const&);

    MCNAPI DlcBatchModel(::IContentAcquisition&, ::IStoreCatalogRepository&, std::vector<PackIdVersion> const&);

    MCNAPI DlcBatchModel(::IContentAcquisition&, ::IStoreCatalogRepository&, std::vector<std::string> const&);

    MCNAPI bool _canBeginDownload() const;

    MCNAPI bool compareTo(std::vector<DlcId> const&) const;

    MCNAPI bool compareTo(std::vector<std::string> const&) const;

    MCNAPI bool compareToPackIds(std::vector<PackIdVersion> const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IDlcBatchModel const&);

    MCNAPI void* $ctor(::DlcBatchModel const&);

    MCNAPI void* $ctor(::IContentAcquisition&, ::IStoreCatalogRepository&, std::vector<PackIdVersion> const&);

    MCNAPI void* $ctor(::IContentAcquisition&, ::IStoreCatalogRepository&, std::vector<std::string> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $searchForProductIds(std::function<void()>);

    MCNAPI void $beginExclusiveDownload();

    MCNAPI void $beginPackDownload();

    MCNAPI void $beginPackDownloadWithPossibleThrottleWarning();

    MCNAPI void $beginAutoDownload();

    MCNAPI void $beginWorldPackDownload();

    MCNAPI void $cancelDownload();

    MCNAPI void $cancelInactiveDownloads();

    MCNAPI void $cancelPendingDownload();

    MCNAPI void $cancelPendingImport();

    MCNAPI bool $containsProductId(std::string const&) const;

    MCNAPI void $pauseDownload();

    MCNAPI void $resumeDownload();

    MCNAPI bool $isDownloadingOrImporting() const;

    MCNAPI bool $isDownloading() const;

    MCNAPI bool $isDownloadComplete() const;

    MCNAPI ulong $getDownloadSize() const;

    MCNAPI ulong $getDownloadedBytes() const;

    MCNAPI float $getDownloadProgress() const;

    MCNAPI ulong $getDownloadedCount() const;

    MCNAPI std::optional<int> $getIndexOfActiveDownload() const;

    MCNAPI bool $isImportComplete() const;

    MCNAPI bool $isImporting() const;

    MCNAPI bool $isImportWaiting() const;

    MCNAPI ulong $getImportTotal() const;

    MCNAPI ulong $getImportedCount() const;

    MCNAPI float $getImportProgress() const;

    MCNAPI std::optional<int> $getIndexOfActiveImport() const;

    MCNAPI std::vector<DlcId> const& $getDlcIds() const;

    MCNAPI std::vector<PackIdVersion> const& $getPackIds() const;

    MCNAPI ::ItemInstallState $getDlcInstalledState() const;

    MCNAPI std::vector<std::string> $getProductIdList() const;

    MCNAPI bool $isContentSearchComplete();

    MCNAPI bool $isContentSearchInProgress() const;

    MCNAPI bool $isFailed() const;

    MCNAPI bool $isCancelled() const;

    MCNAPI ::IContentAcquisition& $contentAcquisition() const;

    MCNAPI ::IStoreCatalogRepository& $storeCatalog() const;

    MCNAPI void $setSilent(bool);

    MCNAPI bool $isSilent() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
