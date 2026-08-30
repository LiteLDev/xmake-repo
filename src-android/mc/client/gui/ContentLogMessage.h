#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogLevel.h"

struct ContentLogMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> message;
    ::ll::TypedStorage<4, 4, ::LogLevel>   level;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentLogMessage& operator=(ContentLogMessage const&);
    ContentLogMessage();
};
