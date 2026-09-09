#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Realms { class SubscriptionService; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class User; }
// clang-format on

namespace Realms {

class RealmsMembership : public ::std::enable_shared_from_this<Realms::RealmsMembership> {
public:
    // RealmsMembership inner types declare
    // clang-format off
    struct JoinRealmResult;
    // clang-format on

    // RealmsMembership inner types define
    enum class FetchRealmError : uchar {
        RealmsAPIUnavailable     = 0,
        AlreadyMember            = 1,
        RealmExpired             = 2,
        RealmClosed              = 3,
        BadInvite                = 4,
        BlockedInvite            = 5,
        InviteLinkNotFound       = 6,
        InviteDisabledFound      = 7,
        InviteExpiredFound       = 8,
        UnexpectedServerResponse = 9,
        AnonymousAccount         = 10,
    };

    enum class JoinRealmError : uchar {
        RealmsAPIUnavailable  = 0,
        NeedToCallFetchFirst  = 1,
        MemberOfTooManyRealms = 2,
        UnknownError          = 3,
    };

    enum class LeaveRealmResult : uchar {
        RealmsAPIUnavailable = 0,
        ErrorTaskInProgress  = 1,
        UnknownError         = 2,
        Success              = 3,
        Unknown              = 4,
    };

    struct JoinRealmResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> realmId;
        ::ll::TypedStorage<8, 24, std::string> realmName;
        // NOLINTEND

    public:
        // prevent constructor by default
        JoinRealmResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~JoinRealmResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsAPI;
    ::ll::UntypedStorage<8, 48>                         mOnRealmsUpdated;
    ::ll::UntypedStorage<8, 48>                         mGetUser;
    ::ll::UntypedStorage<8, 32>                         mRealmsSubscriptionService;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsMembership();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fetchRealm(
        std::string const&,
        std::function<void(std::optional<Realms::World>, std::optional<Realms::RealmsMembership::FetchRealmError>)>
    );

    MCNAPI void joinRealm(
        std::string const&,
        std::function<
            void(nonstd::expected<Realms::RealmsMembership::JoinRealmResult, Realms::RealmsMembership::JoinRealmError>)>
    );

    MCNAPI void leaveRealm(::Realms::RealmId, std::function<void(Realms::RealmsMembership::LeaveRealmResult)>);
    // NOLINTEND
};

} // namespace Realms
