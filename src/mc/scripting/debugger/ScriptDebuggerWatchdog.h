#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/IScriptDebuggerWatchdog.h"

class ScriptDebuggerWatchdog : public ::IScriptDebuggerWatchdog {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mLeavingGame;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimeout;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk636604;
    ::ll::UntypedStorage<8, 8> mUnkf9b3b7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptDebuggerWatchdog& operator=(ScriptDebuggerWatchdog const&);
    ScriptDebuggerWatchdog(ScriptDebuggerWatchdog const&);
    ScriptDebuggerWatchdog();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptDebuggerWatchdog();
#else // @header-generator platform
    virtual ~ScriptDebuggerWatchdog() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool requireClose() const;
#else // @header-generator platform
    virtual bool requireClose() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startListenTimeout(std::chrono::duration<long long, std::ratio<1, 1>>);
#else // @header-generator platform
    virtual void startListenTimeout(::std::chrono::seconds duration) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool listenTimeoutExpired() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDebuggerWatchdog();

    MCNAPI void startLeaveGame();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool listenTimeoutExpired() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $requireClose() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startListenTimeout(std::chrono::duration<long long, std::ratio<1, 1>>);
#else // @header-generator platform
    MCNAPI void $startListenTimeout(::std::chrono::seconds duration);
#endif // @header-generator platform

    MCNAPI bool $listenTimeoutExpired() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
