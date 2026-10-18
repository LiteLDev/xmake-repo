#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandIntegerRange.h"

struct HasItemFilter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>         itemName;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>   auxValue;
    ::ll::TypedStorage<4, 12, ::CommandIntegerRange> quantity;
    ::ll::TypedStorage<8, 32, ::std::string>         location;
    ::ll::TypedStorage<4, 12, ::CommandIntegerRange> slot;
#endif // @header-generator platform
    // NOLINTEND
};
