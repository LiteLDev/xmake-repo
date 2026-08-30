#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"

namespace WebServices::EduSignin {

struct SigninError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                      message;
    ::ll::TypedStorage<1, 1, ::ActiveDirectoryAuthenticationState>              state;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> details;
    // NOLINTEND
};

} // namespace WebServices::EduSignin
