#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/InitiatorCategory.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/NewType.h"

// auto generated forward declare list
// clang-format off
class DlcBatchThrottleBridge;
class DlcId;
class IContentTracker;
struct DownloadStateObject;
struct DurableDocument;
struct PackIdVersion;
struct PackImportStateObject;
// clang-format on

class IContentAcquisition : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IContentAcquisition inner types declare
    // clang-format off
    struct ImportCallbackId;
    // clang-format on

    // IContentAcquisition inner types define
    enum class HasSpaceResults : int {
        EnoughSpace     = 0,
        NoCombinedSpace = 1,
        NoDiskScratch   = 2,
        NoScratch       = 3,
        NoPremium       = 4,
    };

    struct ImportCallbackId : public ::NewType<ulong> {};

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IContentAcquisition() = default;

    virtual void triggerBlockingPendingImports() = 0;

    virtual void triggerPendingImportsFor(::PackIdVersion const&) = 0;

    virtual std::vector<DlcId> getPendingImports() const = 0;

    virtual std::vector<DlcId> getPendingAndActiveImports() const = 0;

    virtual void searchForDlcIdsByPackIds(std::vector<PackIdVersion> const&, std::function<void (const std::vector<DlcId>&)>) = 0;

    virtual void checkStorageRequirements(std::vector<DlcId> const&, std::function<void (IContentAcquisition::HasSpaceResults, ulong)>) = 0;

    virtual void getTitles(std::vector<DlcId> const&, std::function<void (const std::vector<std::string>&)>) = 0;

    virtual ::IContentTracker& createContentTrackerFor(::DlcId const&) = 0;

    virtual void beginPackDownload(::DlcId const&, ::InitiatorCategory, bool) = 0;

    virtual void beginTreatmentPackDownload(::DlcId const&) = 0;

    virtual void beginWorldPackDownload(::DlcId const&) = 0;

    virtual void interruptAllDownloads() = 0;

    virtual void pauseAllDownloads() = 0;

    virtual void pauseDownload(::DlcId const&) = 0;

    virtual void resumeAllDownloads() = 0;

    virtual void resumeDownload(::DlcId const&) = 0;

    virtual void cancelAllDownloads() = 0;

    virtual void cancelDownload(::DlcId const&) = 0;

    virtual void cancelInactiveDownload(::DlcId const&) = 0;

    virtual void cancelPendingDownload(::DlcId const&) = 0;

    virtual void cancelPendingImport(::DlcId const&) = 0;

    virtual void addDownloadCallback(std::weak_ptr<bool>, std::function<void (DownloadStateObject&)>) = 0;

    virtual void addUpdateFoundCallback(std::function<void (const std::string&, const DurableDocument&)>) = 0;

    virtual ::IContentAcquisition::ImportCallbackId addPackImportCallback(std::weak_ptr<bool>, std::function<void (PackImportStateObject&)>) = 0;

    virtual void removePackImportCallback(::IContentAcquisition::ImportCallbackId) = 0;

    virtual bool areAnyDownloadsActive() const = 0;

    virtual bool isDownloadActiveForAny(std::vector<DlcId> const&) const = 0;

    virtual bool isDownloadActiveFor(::DlcId const&) const = 0;

    virtual ulong getDownloadSize(::DlcId const&) const = 0;

    virtual ulong getDownloadedBytes(::DlcId const&) const = 0;

    virtual float getDownloadProgress(::DlcId const&) const = 0;

    virtual float getAllDownloadProgress() const = 0;

    virtual bool isDownloadComplete(::DlcId const&) const = 0;

    virtual bool isContentTrackerDownloadComplete(::DlcId const&) const = 0;

    virtual void clearCompletedDownloads() = 0;

    virtual bool hasDownloadFailedForAny(std::vector<DlcId> const&) const = 0;

    virtual bool hasDownloadCancelledForAny(std::vector<DlcId> const&) const = 0;

    virtual void removeFromCancelledDownloads(std::vector<DlcId> const&) = 0;

    virtual void removeCompletedDownload(::PackIdVersion const&) = 0;

    virtual bool hasDownloadFailedFor(::DlcId const&) const = 0;

    virtual bool areAnyImportsWaiting() const = 0;

    virtual bool areAnyImportsActive() const = 0;

    virtual bool areAnyBlockingImportsWaiting() const = 0;

    virtual bool areAnyBlockingImportsActive() const = 0;

    virtual bool isImportActiveForAny(std::vector<DlcId> const&) const = 0;

    virtual bool isImportActiveFor(::DlcId const&) const = 0;

    virtual bool isImportWaitingFor(::DlcId const&) const = 0;

    virtual ulong getImportTotal(::DlcId const&) const = 0;

    virtual ulong getImportedCount(::DlcId const&) const = 0;

    virtual float getImportProgress(::DlcId const&) const = 0;

    virtual float getAllImportProgress() const = 0;

    virtual bool isDownloadOrImportInProgressFor(::DlcId const&) const = 0;

    virtual bool isDownloadOrImportInProgressForAny(std::vector<DlcId> const&) const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<DlcBatchThrottleBridge>> getThrottleBridge() = 0;
    // clang-format on
    // NOLINTEND
};
