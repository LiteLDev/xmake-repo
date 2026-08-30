#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/AsyncJoinDenyReason.h"

struct AsyncJoinDeny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AsyncJoinDenyReason>       denyReason;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> customDisconnectionString;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncJoinDeny& operator=(AsyncJoinDeny const&);
    AsyncJoinDeny();
};
