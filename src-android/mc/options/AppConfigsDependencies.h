#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IContentAccessibilityProvider;
// clang-format on

struct AppConfigsDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mGetOID;
    ::ll::UntypedStorage<8, 64> mCreateContentKeys;
    ::ll::UntypedStorage<8, 64> mGetPlatform;
    // NOLINTEND

public:
    // prevent constructor by default
    AppConfigsDependencies& operator=(AppConfigsDependencies const&);
    AppConfigsDependencies(AppConfigsDependencies const&);
    AppConfigsDependencies();

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
};
