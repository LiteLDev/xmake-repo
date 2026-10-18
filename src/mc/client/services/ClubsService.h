#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/services/ServiceClient.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"

// auto generated forward declare list
// clang-format off
class ClubsRequestHandler;
class IClientInstance;
class IMinecraftEventing;
namespace Bedrock::Http { class Response; }
namespace Clubs { class ActivityFeed; }
namespace Clubs { struct ClubModel; }
namespace Clubs { struct FeedItem; }
namespace Clubs { struct NewFeedItem; }
namespace Clubs { struct ReportedItem; }
namespace Core { class Path; }
namespace Json { class Value; }
namespace Realms { struct RealmId; }
namespace Social { class IUserManager; }
// clang-format on

class ClubsService : public ::ServiceClient {
#else // @header-generator platform
class ClubsService {
#endif // @header-generator platform
public:
    // ClubsService inner types declare
    // clang-format off
    struct RequestInfo;
    // clang-format on

    // ClubsService inner types define
    struct RequestInfo {
    public:
        // RequestInfo inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        enum class Status : int {
            Ready     = 0,
            Succeeded = 1,
            Failed    = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::string> mResponseBody;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mResponseTime;
        ::ll::TypedStorage<4, 4, ::ClubsService::RequestInfo::Status> mStatus;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        RequestInfo& operator=(RequestInfo const&);
        RequestInfo(RequestInfo const&);
#else // @header-generator platform
        enum class Status : int {};
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 32> mActiveRequests;
    ::ll::UntypedStorage<8, 48> mCacheCallback;
    ::ll::TypedStorage<8, 24, std::map<std::string, ClubsService::RequestInfo>> mCache;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mMinecraftEventing;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ClubsRequestHandler>>> mPendingRequests;
    ::ll::UntypedStorage<8, 8> mServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimeoutWindowShort;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimeoutWindowLong;
    ::ll::TypedStorage<4, 4, uint> mWindowRequestCountShort;
    ::ll::TypedStorage<4, 4, uint> mWindowRequestCountLong;
    ::ll::TypedStorage<4, 4, uint> mWindowLowPriorityCountShort;
    ::ll::TypedStorage<4, 4, uint> mWindowLowPriorityCountLong;
    ::ll::UntypedStorage<8, 32> mLastBulkUnreadClubIds;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ClubsService& operator=(ClubsService const&);
    ClubsService(ClubsService const&);
    ClubsService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClubsService();

    virtual void update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClubsService(::Bedrock::NonOwnerPointer<Social::IUserManager>, ::IMinecraftEventing&);

    MCNAPI bool _checkTimeoutWindow(std::shared_ptr<ClubsRequestHandler>);

    MCNAPI void _dumpBulkUnreadCachedResult();

    MCNAPI void _queueOrRetrieveCache(std::shared_ptr<ClubsRequestHandler>);

    MCNAPI void _sendRequest(std::shared_ptr<ClubsRequestHandler>);

    MCNAPI void deleteFeedItem(
        ::Clubs::FeedItem const&,
        ::Realms::RealmId const,
        std::string const&,
        std::function<void(Clubs::GenericStatus)>
    );

    MCNAPI void
    getClubFeed(std::string const&, std::string const&, std::function<void(Clubs::ActivityFeed, Clubs::GenericStatus)>);

    MCNAPI void getClubProfile(std::string const&, std::function<void(Clubs::ClubModel, Clubs::GenericStatus)>);

    MCNAPI void getCommentFeedForItem(
        std::string const&,
        ::Clubs::FeedItem const&,
        std::function<void(Clubs::ActivityFeed, Clubs::GenericStatus)>
    );

    MCNAPI void getReportedFeedItem(
        ::Clubs::ReportedItem const&,
        std::function<void(const Clubs::ReportedItem&, Clubs::FeedItem, Clubs::GenericStatus)>
    );

    MCNAPI void getReportedItemPaths(
        std::string const&,
        std::function<void(std::vector<Clubs::ReportedItem>, Clubs::GenericStatus)>
    );

    MCNAPI void getUnreadCount(std::string const&, std::function<void(int, Clubs::GenericStatus)>);

    MCNAPI void getUnreadCounts(
        std::vector<std::string> const&,
        std::function<void(std::map<std::string, int>, Clubs::GenericStatus)>
    );

    MCNAPI void ignoreReportedFeedItem(
        ::Clubs::ReportedItem const&,
        std::string const&,
        std::string const&,
        std::function<void(Clubs::GenericStatus)>
    );

    MCNAPI void likeFeedItem(
        ::Clubs::FeedItem const&,
        ::Realms::RealmId const,
        std::string const&,
        std::function<void(Clubs::GenericStatus)>
    );

    MCNAPI void postCommentToFeedItem(
        std::string const&,
        ::Clubs::FeedItem const&,
        std::string const&,
        ::Realms::RealmId const,
        std::string const&,
        std::function<void(Clubs::FeedItem, Clubs::GenericStatus)>
    );

    MCNAPI void postToClubFeed(
        std::string const&,
        ::Clubs::NewFeedItem const&,
        ::Realms::RealmId const,
        std::function<void(Clubs::FeedItem, Clubs::GenericStatus)>,
        ::Json::Value,
        bool
    );

    MCNAPI void reportFeedItem(
        std::string const&,
        ::Clubs::FeedItem const&,
        std::string const&,
        ::Realms::RealmId const,
        std::function<void(Clubs::GenericStatus)>
    );

    MCNAPI void reportFeedItemToXbox(
        std::string const&,
        std::string const&,
        ::Clubs::FeedItem const&,
        std::string const&,
        std::string const&,
        ::Realms::RealmId const,
        std::function<void(Clubs::GenericStatus)>
    );

    MCNAPI void reportGamertagToXbox(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::Realms::RealmId const,
        std::function<void(Clubs::GenericStatus)>
    );

    MCNAPI void setClubProfile(::Clubs::ClubModel const&, std::function<void(Clubs::GenericStatus)>);

    MCNAPI void setViewedFeedItem(
        ::Clubs::FeedItem const&,
        ::Realms::RealmId const,
        std::string const&,
        bool,
        std::function<void(Clubs::GenericStatus)>
    );

    MCNAPI void uploadScreenshot(
        ::Core::Path const&,
        std::string const&,
        uint,
        std::function<void(Core::Path, Clubs::GenericStatus)>
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint getMaxClubsRequests();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<Social::IUserManager>, ::IMinecraftEventing&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
