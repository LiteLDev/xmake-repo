#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/debug/log/LogLevel.h"

struct ContentLogMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> message;
    ::ll::TypedStorage<4, 4, ::LogLevel>     level;
    // NOLINTEND
};
#else // @header-generator platform
struct ContentLogMessage {};
#endif // @header-generator platform
#endif // @header-generator platform
