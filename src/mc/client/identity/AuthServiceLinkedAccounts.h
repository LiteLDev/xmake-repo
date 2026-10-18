#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/identity/AuthServiceStatus.h"
#include "mc/identity/XUID.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Social {

struct AuthServiceLinkedAccounts {
public:
    // AuthServiceLinkedAccounts inner types declare
    // clang-format off
    struct Profile;
    // clang-format on

    // AuthServiceLinkedAccounts inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Profile {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                 playFabId;
        ::ll::TypedStorage<8, 24, std::string>                 psnId;
        ::ll::TypedStorage<8, 16, std::optional<Social::XUID>> xblId;
        ::ll::TypedStorage<8, 24, std::string>                 nintendoAccountId;
        // NOLINTEND

    public:
        // prevent constructor by default
        Profile& operator=(Profile const&);
        Profile(Profile const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Profile();
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
    ::ll::TypedStorage<4, 4, ::Social::AuthServiceStatus>                              status;
    ::ll::TypedStorage<8, 24, std::vector<Social::AuthServiceLinkedAccounts::Profile>> profiles;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthServiceLinkedAccounts& operator=(AuthServiceLinkedAccounts const&);
    AuthServiceLinkedAccounts();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AuthServiceLinkedAccounts();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct Profile {};
#endif // @header-generator platform
};

} // namespace Social
