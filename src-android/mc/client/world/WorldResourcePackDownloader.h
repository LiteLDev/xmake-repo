#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldResourcePackDownloader.h"
#include "mc/client/world/PackDownloadError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DlcDependency;
class IClientInstance;
class IContentAcquisition;
class IDlcBatchModel;
class IDlcBatcher;
class IDlcValidation;
class IEntitlementManager;
class ILevelListCache;
class IStoreCatalogRepository;
struct DlcValidationState;
struct PackIdVersion;
namespace World { struct PackCheckResult; }
namespace World { struct PackDownloadProgressInfo; }
// clang-format on

namespace World {

class WorldResourcePackDownloader : public ::World::IWorldResourcePackDownloader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDlcBatcher>>         mDlcBatcher;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&>                    mDlcValidation;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>               mContentAcquisition;
    ::ll::UntypedStorage<8, 8>                                     mStoreCatalogRepository;
    ::ll::UntypedStorage<8, 24>                                    mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                   mClientInstance;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                   mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IDlcBatchModel*>                    mDlcBatchModel;
    ::ll::TypedStorage<8, 8, ulong>                                mDlcSizeToDownload;
    ::ll::TypedStorage<8, 8, ulong>                                mDlcIdsToDownload;
    ::ll::TypedStorage<8, 16, std::shared_ptr<DlcValidationState>> mDlcState;
    ::ll::UntypedStorage<8, 24>                                    mExistenceTracker;
    ::ll::UntypedStorage<8, 48>                                    mOnCheckPackComplete;
    ::ll::UntypedStorage<8, 48>                                    mOnDownloadCompleteCallback;
    ::ll::UntypedStorage<8, 48>                                    mOnGetPackSizeCompleteCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldResourcePackDownloader& operator=(WorldResourcePackDownloader const&);
    WorldResourcePackDownloader(WorldResourcePackDownloader const&);
    WorldResourcePackDownloader();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldResourcePackDownloader();

    virtual void downloadPacks(std::vector<std::string> const&, std::function<void ()>, std::function<void (World::PackDownloadError)>);

    virtual ::World::PackDownloadProgressInfo getProgress();

    virtual void cancelDownloadPack();

    virtual void getPackSizes(std::vector<std::string> const&, std::function<void (ulong)>);

    virtual void getDownloadingPackTitles(std::function<void (std::vector<std::string>)>);

    virtual ::World::PackCheckResult checkDlc(std::string const&, ::PackIdVersion const&, bool const) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _hasExpiredRealmsPlusSubscription(::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $downloadPacks(
        std::vector<std::string> const&,
        std::function<void()>,
        std::function<void(World::PackDownloadError)>
    );

    MCNAPI ::World::PackDownloadProgressInfo $getProgress();

    MCNAPI void $cancelDownloadPack();

    MCNAPI void $getPackSizes(std::vector<std::string> const&, std::function<void(ulong)>);

    MCNAPI void $getDownloadingPackTitles(std::function<void(std::vector<std::string>)>);

    MCNAPI ::World::PackCheckResult $checkDlc(std::string const&, ::PackIdVersion const&, bool const) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
