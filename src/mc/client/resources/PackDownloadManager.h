#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/services/download/DlcId.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/network/packet/PacksInfoData.h"
#include "mc/network/packet/ResourcePackResponse.h"
#include "mc/world/level/PackInstanceId.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class IPackSourceFactory;
class IResourcePackRepository;
struct PackIdVersion;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class Path; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class PackDownloadManager {
public:
    // PackDownloadManager inner types declare
    // clang-format off
    struct PackDownloadDetails;
    // clang-format on

    // PackDownloadManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PackDownloadDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> downloadedData;
        ::ll::TypedStorage<1, 1, bool>  finishedDownloading;
        // NOLINTEND
    };

    using PacksReceivedCb = std::function<void(const std::vector<PackInstanceId>&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>                      mPacksReceivedPublisher;
    ::ll::UntypedStorage<8, 80>                      mHostSpecifiedPacks;
    ::ll::UntypedStorage<8, 80>                      mExistingHostSpecifiedPacksOnClient;
    ::ll::TypedStorage<8, 24, std::vector<DlcId>>    mDlcIdsForCDN;
    ::ll::TypedStorage<8, 24, std::set<std::string>> mPacksPendingServerFallback;
    ::ll::TypedStorage<8, 8, ulong>                  mTotalPackDataSize;
    ::ll::TypedStorage<8, 8, ulong>                  mTotalPacksToDownload;
    ::ll::TypedStorage<8, 8, ulong>                  mDownloadedPacks;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, PackDownloadManager::PackDownloadDetails>> mPackDataSet;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackDownloadManager();

    MCNAPI ::DlcId _makeCDNDlcId(::PackIdVersion const, std::string const&) const;

    MCNAPI void addPackToDownloadList(std::string const&, ulong);

    MCNAPI void calculateExistingPacksOnClient(
        ::PacksInfoData const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&
    );

    MCNAPI ulong computeDownloadedDataSize() const;

    MCNAPI std::set<std::string> consumePacksPendingServerFallback();

    MCNAPI bool finishedDownloadingAllPacks(
        std::string const&,
        ::PackType,
        ::Core::Path const&,
        ::IPackSourceFactory const&,
        ::IPackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&
    );

    MCNAPI std::vector<DlcId> const& getDlcIdsForCDN() const;

    MCNAPI ulong getDownloadedPacks() const;

    MCNAPI ::PacksInfoData const& getHostSpecifiedPacks() const;

    MCNAPI ulong getTotalPackDataSize() const;

    MCNAPI ulong getTotalPacksToDownload() const;

    MCNAPI bool hasCDNPacksToDownload() const;

    MCNAPI std::set<std::string> initializePacksToDownload(::ResourcePackResponse, bool, bool);

    MCNAPI void markCDNPackDownloadFailed(::DlcId const&);

    MCNAPI void markCDNPackDownloadSucceeded(::DlcId const&);

    MCNAPI ::Bedrock::PubSub::Subscription
        registerPacksReceivedListener(std::function<void(const std::vector<PackInstanceId>&)>);

    MCNAPI void revertToServerBackend();

    MCNAPI void updateDownloadList(std::string const&, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    struct PackDownloadDetails {};
#endif // @header-generator platform
};
