#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandIntegerRange.h"

struct HasItemFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>       itemName;
    ::ll::TypedStorage<4, 8, std::optional<int>> auxValue;
    ::ll::UntypedStorage<4, 16>                  quantity;
    ::ll::TypedStorage<8, 24, std::string>       location;
    ::ll::UntypedStorage<4, 16>                  slot;
    // NOLINTEND

public:
    // prevent constructor by default
    HasItemFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~HasItemFilter();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
