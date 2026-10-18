#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace WebServices::EduSignin {

struct SigninError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                      message;
    ::ll::TypedStorage<1, 1, ::ActiveDirectoryAuthenticationState>              state;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> details;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkfc9f4c;
    ::ll::UntypedStorage<1, 1>  mUnk776b09;
    ::ll::UntypedStorage<8, 24> mUnk1c2076;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SigninError& operator=(SigninError const&);
    SigninError(SigninError const&);
    SigninError();
#endif // @header-generator platform
};

} // namespace WebServices::EduSignin
