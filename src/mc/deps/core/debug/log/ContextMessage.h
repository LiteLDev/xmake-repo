#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#else // @header-generator platform
#endif // @header-generator platform

class ContextMessage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::LogArea>    mArea;
    ::ll::TypedStorage<4, 4, ::LogLevel>   mLevel;
    ::ll::TypedStorage<8, 24, std::string> mMessage;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk596c0e;
    ::ll::UntypedStorage<4, 4>  mUnkeb6b29;
    ::ll::UntypedStorage<8, 32> mUnk97ef97;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ContextMessage& operator=(ContextMessage const&);
    ContextMessage(ContextMessage const&);
    ContextMessage();
};
