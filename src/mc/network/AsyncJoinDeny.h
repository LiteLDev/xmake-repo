#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/AsyncJoinDenyReason.h"

struct AsyncJoinDeny {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::AsyncJoinDenyReason>       denyReason;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> customDisconnectionString;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::AsyncJoinDenyReason>           denyReason;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> customDisconnectionString;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    AsyncJoinDeny& operator=(AsyncJoinDeny const&);
    AsyncJoinDeny();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI ~AsyncJoinDeny();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
