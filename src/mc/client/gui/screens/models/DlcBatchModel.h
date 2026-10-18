#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/download/IContentAcquisition.h"
#include "mc/client/services/download/IDlcBatchModel.h"
#include "mc/client/services/download/InitiatorCategory.h"
#include "mc/client/store/ItemInstallState.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IContentAcquisition;
class IStoreCatalogRepository;
struct PackIdVersion;
// clang-format on

class DlcBatchModel : public ::IDlcBatchModel {
#else // @header-generator platform
class DlcBatchModel {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // DlcBatchModel inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class DlcProductIdSearch : int {
        Unknown   = 0,
        Searching = 1,
        Done      = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                                    mContentAcquisition;
    ::ll::TypedStorage<8, 8, ::IStoreCatalogRepository&>                                mStoreCatalog;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                  mDlcBatchExistenceTracker;
    ::ll::TypedStorage<8, 24, ::std::vector<::DlcId>>                                   mDlcIds;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackIdVersion>>                           mPackIds;
    ::ll::TypedStorage<4, 4, ::DlcBatchModel::DlcProductIdSearch>                       mDlcProductIdSearch;
    ::ll::TypedStorage<4, 4, ::InitiatorCategory>                                       mInitiatorCategory;
    ::ll::TypedStorage<1, 1, bool>                                                      mSilent;
    ::ll::TypedStorage<8, 16, ::std::optional<::IContentAcquisition::ImportCallbackId>> mBatchId;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcBatchModel& operator=(DlcBatchModel const&);
    DlcBatchModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DlcBatchModel() /*override*/;

    virtual bool containsProductId(::std::string const& productId) const /*override*/;

    virtual void searchForProductIds(::std::function<void()> searchCompleteCallback) /*override*/;

    virtual void beginExclusiveDownload() /*override*/;

    virtual void beginPackDownload() /*override*/;

    virtual void beginPackDownloadWithPossibleThrottleWarning() /*override*/;

    virtual void beginAutoDownload() /*override*/;

    virtual void beginWorldPackDownload() /*override*/;

    virtual void cancelInactiveDownloads() /*override*/;

    virtual void cancelDownload() /*override*/;

    virtual void cancelPendingDownload() /*override*/;

    virtual void cancelPendingImport() /*override*/;

    virtual void pauseDownload() /*override*/;

    virtual void resumeDownload() /*override*/;

    virtual bool isDownloadingOrImporting() const /*override*/;

    virtual bool isDownloading() const /*override*/;

    virtual bool isDownloadComplete() const /*override*/;

    virtual uint64 getDownloadSize() const /*override*/;

    virtual uint64 getDownloadedBytes() const /*override*/;

    virtual float getDownloadProgress() const /*override*/;

    virtual uint64 getDownloadedCount() const /*override*/;

    virtual ::std::optional<int> getIndexOfActiveDownload() const /*override*/;

    virtual bool isImporting() const /*override*/;

    virtual bool isImportComplete() const /*override*/;

    virtual bool isImportWaiting() const /*override*/;

    virtual uint64 getImportTotal() const /*override*/;

    virtual uint64 getImportedCount() const /*override*/;

    virtual float getImportProgress() const /*override*/;

    virtual ::std::optional<int> getIndexOfActiveImport() const /*override*/;

    virtual ::std::vector<::DlcId> const& getDlcIds() const /*override*/;

    virtual ::std::vector<::PackIdVersion> const& getPackIds() const /*override*/;

    virtual ::std::vector<::std::string> getProductIdList() const /*override*/;

    virtual ::ItemInstallState getDlcInstalledState() const /*override*/;

    virtual bool isContentSearchComplete() /*override*/;

    virtual bool isContentSearchInProgress() const /*override*/;

    virtual bool isFailed() const /*override*/;

    virtual bool isCancelled() const /*override*/;

    virtual void setSilent(bool newSilent) /*override*/;

    virtual bool isSilent() const /*override*/;

    virtual ::IContentAcquisition& contentAcquisition() const /*override*/;

    virtual ::IStoreCatalogRepository& storeCatalog() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DlcBatchModel(::DlcBatchModel const&);

    MCAPI explicit DlcBatchModel(::IDlcBatchModel const& ref);

    MCAPI DlcBatchModel(
        ::IContentAcquisition&              contentAcquisition,
        ::IStoreCatalogRepository&          storeCatalog,
        ::std::vector<::std::string> const& productIds
    );

    MCAPI DlcBatchModel(
        ::IContentAcquisition&         contentAcquisition,
        ::IStoreCatalogRepository&     storeCatalog,
        ::std::vector<::DlcId>         dlcIds,
        ::std::vector<::PackIdVersion> packIds
    );

    MCAPI bool _canBeginDownload() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DlcBatchModel const&);

    MCAPI void* $ctor(::IDlcBatchModel const& ref);

    MCAPI void* $ctor(
        ::IContentAcquisition&              contentAcquisition,
        ::IStoreCatalogRepository&          storeCatalog,
        ::std::vector<::std::string> const& productIds
    );

    MCAPI void* $ctor(
        ::IContentAcquisition&         contentAcquisition,
        ::IStoreCatalogRepository&     storeCatalog,
        ::std::vector<::DlcId>         dlcIds,
        ::std::vector<::PackIdVersion> packIds
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $containsProductId(::std::string const& productId) const;

    MCAPI void $searchForProductIds(::std::function<void()> searchCompleteCallback);

    MCAPI void $beginExclusiveDownload();

    MCAPI void $beginPackDownload();

    MCAPI void $beginPackDownloadWithPossibleThrottleWarning();

    MCAPI void $beginAutoDownload();

    MCAPI void $beginWorldPackDownload();

    MCAPI void $cancelInactiveDownloads();

    MCAPI void $cancelDownload();

    MCAPI void $cancelPendingDownload();

    MCAPI void $cancelPendingImport();

    MCAPI void $pauseDownload();

    MCAPI void $resumeDownload();

    MCAPI bool $isDownloadingOrImporting() const;

    MCAPI bool $isDownloading() const;

    MCAPI bool $isDownloadComplete() const;

    MCAPI uint64 $getDownloadSize() const;

    MCAPI uint64 $getDownloadedBytes() const;

    MCAPI float $getDownloadProgress() const;

    MCAPI uint64 $getDownloadedCount() const;

    MCAPI ::std::optional<int> $getIndexOfActiveDownload() const;

    MCAPI bool $isImporting() const;

    MCAPI bool $isImportComplete() const;

    MCAPI bool $isImportWaiting() const;

    MCAPI uint64 $getImportTotal() const;

    MCAPI uint64 $getImportedCount() const;

    MCAPI float $getImportProgress() const;

    MCAPI ::std::optional<int> $getIndexOfActiveImport() const;

    MCFOLD ::std::vector<::DlcId> const& $getDlcIds() const;

    MCFOLD ::std::vector<::PackIdVersion> const& $getPackIds() const;

    MCAPI ::std::vector<::std::string> $getProductIdList() const;

    MCAPI ::ItemInstallState $getDlcInstalledState() const;

    MCFOLD bool $isContentSearchComplete();

    MCAPI bool $isContentSearchInProgress() const;

    MCAPI bool $isFailed() const;

    MCAPI bool $isCancelled() const;

    MCAPI void $setSilent(bool newSilent);

    MCFOLD bool $isSilent() const;

    MCFOLD ::IContentAcquisition& $contentAcquisition() const;

    MCFOLD ::IStoreCatalogRepository& $storeCatalog() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class DlcProductIdSearch : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
