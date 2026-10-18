#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/download/IContentAcquisition.h"
#include "mc/client/services/download/IMarketplacePackDownloader.h"
#include "mc/client/world/PackDownloadError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/PublishedValue.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IDlcBatchModel;
class IDlcBatcher;
struct PackIdVersion;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class MarketplacePackDownloaderImpl : public ::IMarketplacePackDownloader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDlcBatcher>>    mDlcBatcher;
    ::ll::UntypedStorage<8, 24>                               mContentAcquisition;
    ::ll::TypedStorage<8, 16, std::optional<IDlcBatchModel*>> mCurrentBatchModel;
    ::ll::UntypedStorage<8, 88>                               mCurrentDownloadStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplacePackDownloaderImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MarketplacePackDownloaderImpl();

    virtual void checkDownloadSize(std::vector<PackIdVersion> const&);

    virtual void startDownload();

    virtual void tick();

    virtual ::Bedrock::PubSub::Subscription subscribeToDownloadStatus(std::function<void (IMarketplacePackDownloader::MarketplacePackDownloadStatus)>&&);

    virtual void clearDownloadState();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MarketplacePackDownloaderImpl(
        std::unique_ptr<IDlcBatcher>&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAcquisition>>
    );

    MCNAPI void _handleDownloadError(::World::PackDownloadError);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<IDlcBatcher>&&, ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAcquisition>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $checkDownloadSize(std::vector<PackIdVersion> const&);

    MCNAPI void $startDownload();

    MCNAPI void $tick();

    MCNAPI ::Bedrock::PubSub::Subscription
    $subscribeToDownloadStatus(std::function<void(IMarketplacePackDownloader::MarketplacePackDownloadStatus)>&&);

    MCNAPI void $clearDownloadState();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class MarketplacePackDownloaderImpl {};
#endif // @header-generator platform
