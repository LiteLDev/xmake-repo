#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ITickingSystem;
// clang-format on

struct TickingSystemRegistrationToken {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<ITickingSystem>> mToken;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingSystemRegistrationToken();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TickingSystemRegistrationToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ITickingSystem>> mToken;
#endif // @header-generator platform
    // NOLINTEND
};
