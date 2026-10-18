#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

#if defined(LL_PLAT_A) // @header-generator platform
struct SignOutResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mSucceeded;
    ::ll::TypedStorage<8, 24, std::string> mError;
    // NOLINTEND

public:
    // prevent constructor by default
    SignOutResult& operator=(SignOutResult const&);
    SignOutResult();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SignOutResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk846bfc;
    ::ll::UntypedStorage<8, 32> mUnkbbf80d;
    // NOLINTEND

public:
    // prevent constructor by default
    SignOutResult& operator=(SignOutResult const&);
    SignOutResult(SignOutResult const&);
    SignOutResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SignOutResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct SignOutResult {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Identity
