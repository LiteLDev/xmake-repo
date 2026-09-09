#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

class ContextMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LogArea>    mArea;
    ::ll::TypedStorage<4, 4, ::LogLevel>   mLevel;
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextMessage& operator=(ContextMessage const&);
    ContextMessage(ContextMessage const&);
    ContextMessage();
};
