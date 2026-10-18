#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct AuthError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                  error;
    ::ll::TypedStorage<4, 8, std::optional<int>>                            status;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                           subStatus;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> diagnostics;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk6518e2;
    ::ll::UntypedStorage<4, 8>  mUnkf663fa;
    ::ll::UntypedStorage<4, 8>  mUnk94f526;
    ::ll::UntypedStorage<8, 64> mUnk68889d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AuthError& operator=(AuthError const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AuthError(AuthError const&);
#endif // @header-generator platform
    AuthError();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AuthError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Identity
