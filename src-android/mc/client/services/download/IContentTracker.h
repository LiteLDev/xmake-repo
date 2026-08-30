#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/InitiatorCategory.h"
#include "mc/client/services/download/ProcessSortOrder.h"
#include "mc/client/services/download/ProcessState.h"
#include "mc/util/DownloadState.h"

// auto generated forward declare list
// clang-format off
class DlcId;
struct PackIdVersion;
namespace Json { class Value; }
// clang-format on

class IContentTracker {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContentTracker() = default;

    virtual bool restoreFromJson(::Json::Value const&) = 0;

    virtual bool update() = 0;

    virtual ::DlcId getDlcId() const = 0;

    virtual ::Json::Value const& getProperties() const = 0;

    virtual bool containsPackIdentity(::PackIdVersion const&) = 0;

    virtual int getInitiatorCategorySortOrder() const = 0;

    virtual ::ProcessSortOrder getProcessSortOrder() const = 0;

    virtual int getPriority() const = 0;

    virtual void setPriority(int) = 0;

    virtual ::InitiatorCategory getInitiatorCategory() const = 0;

    virtual void setInitiatorCategory(::InitiatorCategory) = 0;

    virtual void setSilent(bool) = 0;

    virtual bool getSilent() const = 0;

    virtual bool getIsSkinPack() const = 0;

    virtual bool getIsPersonaPack() const = 0;

    virtual bool isNonBlockingContentPack() const = 0;

    virtual void setIsTreatmentPack(bool) = 0;

    virtual bool getIsTreatmentPack() const = 0;

    virtual void setIsWorldPack(bool) = 0;

    virtual bool getIsWorldPack() const = 0;

    virtual void setIsOptimizedPack(bool) = 0;

    virtual bool getIsOptimizedPack() const = 0;

    virtual void tryAcquire() = 0;

    virtual ::ProcessState getProcessState() const = 0;

    virtual bool isDownloadOrImportInProgress() const = 0;

    virtual bool isDownloadPaused() const = 0;

    virtual bool isDownloadPending() const = 0;

    virtual bool isDownloading() const = 0;

    virtual bool isExclusiveDownload() const = 0;

    virtual bool isImportWaiting() const = 0;

    virtual bool isImportPending() const = 0;

    virtual bool isImporting() const = 0;

    virtual bool isDone() const = 0;

    virtual bool isCancelled() const = 0;

    virtual void fetchFileSize(std::function<void(ulong)>) = 0;

    virtual void fetchTitle(std::function<void(const std::string&)>) = 0;

    virtual bool isFetchingFileSize() const = 0;

    virtual bool hasFileSize() const = 0;

    virtual bool canTryDownload() const = 0;

    virtual void startDownload() = 0;

    virtual void interruptDownload() = 0;

    virtual void pauseDownload() = 0;

    virtual void cancelDownload() = 0;

    virtual void setImportPending() = 0;

    virtual void importContent() = 0;

    virtual void cancelPendingImport() = 0;

    virtual ::DownloadState getDownloadState() const = 0;

    virtual ulong getDownloadedBytes() const = 0;

    virtual float getDownloadProgress() const = 0;

    virtual ulong getDownloadSize() const = 0;

    virtual ulong getImportTotal() const = 0;

    virtual ulong getImportedCount() const = 0;

    virtual float getImportProgress() const = 0;

    virtual double getDownloadElapsedTime() const = 0;

    virtual double getDownloadStartTime() const = 0;

    virtual void resetDownloadStartTime() = 0;

    virtual std::string const& getTitle() const = 0;
    // NOLINTEND
};
