#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GlobalTags {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mNotTags;
    // NOLINTEND

public:
    // prevent constructor by default
    GlobalTags& operator=(GlobalTags const&);
    GlobalTags(GlobalTags const&);
};
