#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Player {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc9ca1b;
    ::ll::UntypedStorage<8, 32> mUnkc2b20e;
    ::ll::UntypedStorage<8, 32> mUnk142cb6;
    ::ll::UntypedStorage<8, 72> mUnk3468aa;
    ::ll::UntypedStorage<1, 1>  mUnk64710a;
    ::ll::UntypedStorage<1, 1>  mUnke1c1b0;
    ::ll::UntypedStorage<1, 1>  mUnk8c6858;
    ::ll::UntypedStorage<1, 1>  mUnkd251a2;
    ::ll::UntypedStorage<4, 4>  mUnk9ba5b7;
    ::ll::UntypedStorage<1, 1>  mUnk5a0651;
    ::ll::UntypedStorage<8, 8>  mUnk7ca601;
    // NOLINTEND

public:
    // prevent constructor by default
    Player();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Player(::Realms::Player const&);

    MCNAPI ::Realms::Player& operator=(::Realms::Player const&);

    MCNAPI ~Player();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Realms::Player const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct Player {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Realms
