#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DemoConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>       worldId;
    ::ll::TypedStorage<4, 8, std::optional<int>> limitedWorldWidth;
    ::ll::TypedStorage<4, 8, std::optional<int>> limitedWorldDepth;
    // NOLINTEND

public:
    // prevent constructor by default
    DemoConfig& operator=(DemoConfig const&);
    DemoConfig();
};
