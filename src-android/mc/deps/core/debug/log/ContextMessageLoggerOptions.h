#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogLevel.h"

class ContextMessageLoggerOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 4, bool[4]> mStoreMessages;
    ::ll::TypedStorage<1, 4, bool[4]> mAssertIfMessageTypeWasReceived;
    ::ll::TypedStorage<1, 4, bool[4]> mAssertInDestructorIfMessageTypeWasReceived;
    ::ll::TypedStorage<1, 1, bool>    mAllowMessagesToPostToParentMessageLoggers;
    ::ll::TypedStorage<1, 1, bool>    mOutputAllMessagesOnDestruction;
    // NOLINTEND
};
