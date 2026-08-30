#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExecuteEntityEventRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    ExecuteEntityEventRequestComponent& operator=(ExecuteEntityEventRequestComponent const&);
};
