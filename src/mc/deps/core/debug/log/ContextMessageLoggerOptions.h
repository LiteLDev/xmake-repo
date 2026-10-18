#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogLevel.h"
#else // @header-generator platform
#endif // @header-generator platform

class ContextMessageLoggerOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 4, bool[4]> mStoreMessages;
    ::ll::TypedStorage<1, 4, bool[4]> mAssertIfMessageTypeWasReceived;
    ::ll::TypedStorage<1, 4, bool[4]> mAssertInDestructorIfMessageTypeWasReceived;
    ::ll::TypedStorage<1, 1, bool>    mAllowMessagesToPostToParentMessageLoggers;
    ::ll::TypedStorage<1, 1, bool>    mOutputAllMessagesOnDestruction;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 4> mUnk39a32f;
    ::ll::UntypedStorage<1, 4> mUnk99c135;
    ::ll::UntypedStorage<1, 4> mUnk7bae0a;
    ::ll::UntypedStorage<1, 1> mUnk5caf95;
    ::ll::UntypedStorage<1, 1> mUnk393c38;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ContextMessageLoggerOptions& operator=(ContextMessageLoggerOptions const&);
    ContextMessageLoggerOptions(ContextMessageLoggerOptions const&);
    ContextMessageLoggerOptions();
#endif // @header-generator platform
};
