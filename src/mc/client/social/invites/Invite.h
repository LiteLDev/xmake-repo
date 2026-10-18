#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/social/invites/InviteId.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Invites {

struct Invite {
public:
    // Invite inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class State : int {
        Uninitialized = 0,
        Accepted      = 1,
        Declined      = 2,
    };
#else // @header-generator platform
    enum class InvitationStatus : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class InvitationType : int {
        None   = 0,
        Realms = 1,
        Game   = 2,
    };
#else // @header-generator platform
    enum class InvitationType : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class InvitationStatus : int {
        Active   = 0,
        Accepted = 1,
        Rejected = 2,
        Expired  = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> id;
    ::ll::UntypedStorage<8, 24> worldId;
    ::ll::TypedStorage<4, 4, ::Invites::Invite::State> state;
    ::ll::TypedStorage<8, 24, std::string> worldName;
    ::ll::TypedStorage<8, 24, std::string> worldDescription;
    ::ll::TypedStorage<8, 24, std::string> ownerXuid;
    ::ll::TypedStorage<8, 24, std::string> ownerName;
    ::ll::TypedStorage<8, 24, std::string> inviterXuid;
    ::ll::TypedStorage<8, 24, std::string> inviterName;
    ::ll::TypedStorage<8, 24, std::string> handleId;
    ::ll::TypedStorage<4, 4, ::Invites::Invite::InvitationType> invitationType;
    ::ll::TypedStorage<4, 4, ::Invites::Invite::InvitationStatus> invitationStatus;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> expirationTime;
    ::ll::TypedStorage<8, 8, long> date;
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
    enum class State : int {};
#endif // @header-generator platform
};

} // namespace Invites
