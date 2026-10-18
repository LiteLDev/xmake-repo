#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceReference.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on

class ScopedCPUBoost {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mAppPlatform;
    ::ll::TypedStorage<1, 1, bool> mCPUBoostEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedCPUBoost();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScopedCPUBoost(::ServiceReference<AppPlatform>);

    MCNAPI ~ScopedCPUBoost();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServiceReference<AppPlatform>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class ScopedCPUBoost {};
#endif // @header-generator platform
