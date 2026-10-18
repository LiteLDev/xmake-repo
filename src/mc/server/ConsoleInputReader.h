#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class ConsoleInputReader {};
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/SPSCQueue.h"

class ConsoleInputReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::SPSCQueue<::std::string, 512>> mConsoleInput;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>              mReadConsole;
    ::ll::TypedStorage<8, 16, ::std::thread>                   mConsoleThread;
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
