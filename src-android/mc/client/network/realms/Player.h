#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Realms {

struct Player {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   name;
    ::ll::TypedStorage<8, 24, std::string>                   xuid;
    ::ll::TypedStorage<8, 24, std::string>                   realName;
    ::ll::TypedStorage<8, 56, ::Social::ProfileImageOptions> profileImage;
    ::ll::TypedStorage<1, 1, bool>                           isOperator;
    ::ll::TypedStorage<1, 1, bool>                           hasAccepted;
    ::ll::TypedStorage<1, 1, bool>                           isOnline;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel>        permission;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerRole>           realmsRole;
    ::ll::TypedStorage<1, 1, bool>                           hasOptedIn;
    ::ll::TypedStorage<8, 8, long>                           lastLogin;
    // NOLINTEND

public:
    // prevent constructor by default
    Player(Player const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Player();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Realms
