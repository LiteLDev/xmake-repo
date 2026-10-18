#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/identity/edu_common/SignInMode.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Identity {

#if defined(LL_PLAT_A) // @header-generator platform
struct AuthArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Identity::SignInMode> signInMode;
    ::ll::TypedStorage<8, 24, std::string>           userHint;
    // NOLINTEND
};
#else // @header-generator platform
struct AuthArgs {};
#endif // @header-generator platform

} // namespace Identity
