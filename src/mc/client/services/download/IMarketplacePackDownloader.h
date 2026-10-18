#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/world/PackDownloadError.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class IMarketplacePackDownloader {
public:
    // IMarketplacePackDownloader inner types declare
    // clang-format off
    struct MarketplacePackDownloadStatus;
    // clang-format on

    // IMarketplacePackDownloader inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum MarketplacePackDownloadState : uint {
        Idle            = 0,
        CheckingStorage = 1,
        DownloadReady   = 2,
        Downloading     = 3,
        Importing       = 4,
        Done            = 5,
        Error           = 6,
        Cancelled       = 7,
    };
#else // @header-generator platform
    enum class MarketplacePackDownloadState : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct MarketplacePackDownloadStatus {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::IMarketplacePackDownloader::MarketplacePackDownloadState> mDownloadState;
        ::ll::TypedStorage<8, 32, std::optional<std::string>>                                mDownloadSize;
        ::ll::TypedStorage<4, 4, float>                                                      mStateProgress;
        ::ll::TypedStorage<1, 2, std::optional<World::PackDownloadError>>                    mDownloadError;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IMarketplacePackDownloader() = default;

    virtual void checkDownloadSize(std::vector<PackIdVersion> const&) = 0;

    virtual void startDownload() = 0;

    virtual void tick() = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToDownloadStatus(std::function<void (IMarketplacePackDownloader::MarketplacePackDownloadStatus)>&&) = 0;

    virtual void clearDownloadState() = 0;
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
    struct MarketplacePackDownloadStatus {};
#endif // @header-generator platform
};
