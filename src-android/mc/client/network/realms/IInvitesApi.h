#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
namespace Invites { struct Invite; }
// clang-format on

namespace Realms {

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

} // namespace Realms
