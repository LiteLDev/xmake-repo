#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptDebuggerWatchdog {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptDebuggerWatchdog() = default;

    virtual bool requireClose() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startListenTimeout(std::chrono::duration<long long, std::ratio<1, 1>>) = 0;
#else // @header-generator platform
    virtual void startListenTimeout(::std::chrono::seconds duration) = 0;
#endif // @header-generator platform

    virtual bool listenTimeoutExpired() const = 0;
    // NOLINTEND
};
