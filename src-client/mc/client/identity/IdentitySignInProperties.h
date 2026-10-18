#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/identity/IdentitySignInTrigger.h"

// auto generated forward declare list
// clang-format off
namespace Social { class User; }
// clang-format on

namespace Social {

struct IdentitySignInProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::User>>> mUser;
    ::ll::TypedStorage<1, 1, bool>                                            mAllowUI;
    ::ll::TypedStorage<4, 4, ::Social::IdentitySignInTrigger>                 mSignInTrigger;
    ::ll::TypedStorage<8, 24, std::string>                                    mSignInSource;
    ::ll::UntypedStorage<8, 48>                                               mDisplayDelegate;
    // NOLINTEND

public:
    // prevent constructor by default
    IdentitySignInProperties& operator=(IdentitySignInProperties const&);
    IdentitySignInProperties(IdentitySignInProperties const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IdentitySignInProperties(
        std::shared_ptr<Social::User>,
        bool,
        ::Social::IdentitySignInTrigger,
        std::string const&,
        std::function<void(std::string, std::string)>
    );

    MCNAPI ~IdentitySignInProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<Social::User>,
        bool,
        ::Social::IdentitySignInTrigger,
        std::string const&,
        std::function<void(std::string, std::string)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
