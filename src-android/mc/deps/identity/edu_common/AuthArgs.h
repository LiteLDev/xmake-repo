#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/identity/edu_common/SignInMode.h"

namespace Identity {

struct AuthArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Identity::SignInMode> signInMode;
    ::ll::TypedStorage<8, 24, std::string>           userHint;
    // NOLINTEND
};

} // namespace Identity
