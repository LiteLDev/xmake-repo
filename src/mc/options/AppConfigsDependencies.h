#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IContentAccessibilityProvider;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct AppConfigsDependencies {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64> mGetOID;
    ::ll::UntypedStorage<8, 64> mCreateContentKeys;
    ::ll::UntypedStorage<8, 64> mGetPlatform;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk2ff020;
    ::ll::UntypedStorage<8, 64> mUnk39b0c5;
    ::ll::UntypedStorage<8, 64> mUnk2b5cbe;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AppConfigsDependencies& operator=(AppConfigsDependencies const&);
    AppConfigsDependencies(AppConfigsDependencies const&);
    AppConfigsDependencies();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AppConfigsDependencies();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
