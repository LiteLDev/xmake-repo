#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PFEntityKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char const*> id;
    ::ll::TypedStorage<8, 8, char const*> type;
    // NOLINTEND
};
