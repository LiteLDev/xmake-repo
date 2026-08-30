#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/SubscriptionInfo.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class ISubscriptionApi; }
// clang-format on

namespace Realms {

class SubscriptionService : public ::Bedrock::EnableNonOwnerReferences,
                            public ::std::enable_shared_from_this<Realms::SubscriptionService> {
public:
    // SubscriptionService inner types declare
    // clang-format off
    struct CachedSubscription;
    struct SubscriptionQuery;
    // clang-format on

    // SubscriptionService inner types define
    enum class SubscriptionQueryStatus : int {
        Loading = 0,
        Success = 1,
        Failure = 2,
    };

    struct CachedSubscription {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::UntypedStorage<8, 8> realmId;
        ::ll::TypedStorage<8, 64, ::Realms::SubscriptionInfo> subscriptionInfo;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> expirationTime;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedSubscription& operator=(CachedSubscription const&);
        CachedSubscription(CachedSubscription const&);
        CachedSubscription();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CachedSubscription();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct SubscriptionQuery {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::UntypedStorage<8, 8> realmId;
        ::ll::TypedStorage<4, 4, uint> queryAttemptsMade;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> lastRefreshAttemptTime;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> timeBetweenAttempts;
        ::ll::TypedStorage<1, 1, bool> queryInProgress;
        ::ll::TypedStorage<8, 24, std::vector<std::function<void (Realms::SubscriptionService::SubscriptionQueryStatus, Realms::SubscriptionInfo)>>> listeners;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        SubscriptionQuery& operator=(SubscriptionQuery const&);
        SubscriptionQuery(SubscriptionQuery const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SubscriptionQuery();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using QueryStatusUpdateCallback =
        std::function<void(Realms::SubscriptionService::SubscriptionQueryStatus, Realms::SubscriptionInfo)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::ISubscriptionApi>>                      mSubscriptionApi;
    ::ll::TypedStorage<8, 24, std::vector<Realms::SubscriptionService::CachedSubscription>> mSubscriptionCache;
    ::ll::TypedStorage<8, 24, std::vector<Realms::SubscriptionService::SubscriptionQuery>>  mSubscriptionQueries;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>> const>   mCacheValidityDuration;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>> const>   mRetryTimeout;
    ::ll::TypedStorage<4, 4, uint const>                                                    mMaxRetryAttempts;
    ::ll::UntypedStorage<8, 48>                                                             _getTimeNowInMilliseconds;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscriptionService();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SubscriptionService();

    virtual std::optional<Realms::SubscriptionInfo> getSubscriptionIfCachedElseRefreshCache(::Realms::RealmId, std::function<void (Realms::SubscriptionService::SubscriptionQueryStatus, Realms::SubscriptionInfo)>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SubscriptionService(
        std::weak_ptr<Realms::ISubscriptionApi>,
        std::chrono::duration<long long, std::ratio<1, 1000>>,
        std::chrono::duration<long long, std::ratio<1, 1000>>,
        uint,
        std::function<std::chrono::time_point<
            std::chrono::steady_clock,
            std::chrono::duration<long long, std::ratio<1, 1000000000>>>()>
    );

    MCNAPI void _performSubscriptionQuery(::Realms::SubscriptionService::SubscriptionQuery&);

    MCNAPI void _removeCacheForRealm(::Realms::RealmId const&);

    MCNAPI void _updateSubscriptionQueryStatus(
        ::Realms::RealmId const&,
        ::Realms::SubscriptionService::SubscriptionQueryStatus,
        ::Realms::SubscriptionInfo&
    );

    MCNAPI void invalidateCacheForRealm(::Realms::RealmId);

    MCNAPI void update();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000>> const& CACHE_VALIDITY_DURATION();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000>> const& RETRY_TIMEOUT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::weak_ptr<Realms::ISubscriptionApi>,
        std::chrono::duration<long long, std::ratio<1, 1000>>,
        std::chrono::duration<long long, std::ratio<1, 1000>>,
        uint,
        std::function<std::chrono::time_point<
            std::chrono::steady_clock,
            std::chrono::duration<long long, std::ratio<1, 1000000000>>>()>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<Realms::SubscriptionInfo> $getSubscriptionIfCachedElseRefreshCache(
        ::Realms::RealmId,
        std::function<void(Realms::SubscriptionService::SubscriptionQueryStatus, Realms::SubscriptionInfo)>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Realms
