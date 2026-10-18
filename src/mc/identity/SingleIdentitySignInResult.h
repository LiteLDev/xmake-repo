#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct SingleIdentitySignInResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::error_code> mFailure;
    ::ll::TypedStorage<1, 1, bool>             mNewAccount;
    ::ll::TypedStorage<8, 24, std::string>     mGamertagHint;
    // NOLINTEND

public:
    // prevent constructor by default
    SingleIdentitySignInResult& operator=(SingleIdentitySignInResult const&);
};
#else // @header-generator platform
struct SingleIdentitySignInResult {};
#endif // @header-generator platform

} // namespace Social
