#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
namespace Invites { struct Invite; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
class IInvitesApi {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IInvitesApi() = default;

    virtual void getPendingInviteCount(std::function<void (Realms::GenericStatus, int)>) = 0;

    virtual void getPendingInviteCountFriendsOnly(std::function<void (Realms::GenericStatus, int)>, std::vector<std::string> const&) = 0;

    virtual void listInvites(std::function<void (Realms::GenericStatus, std::vector<Invites::Invite>)>, bool) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IInvitesApi {};
#endif // @header-generator platform

} // namespace Realms
