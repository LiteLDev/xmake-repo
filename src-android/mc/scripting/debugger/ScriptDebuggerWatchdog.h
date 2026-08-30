#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/IScriptDebuggerWatchdog.h"

class ScriptDebuggerWatchdog : public ::IScriptDebuggerWatchdog {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mLeavingGame;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimeout;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDebuggerWatchdog();

    virtual bool requireClose() const;

    virtual void startListenTimeout(std::chrono::duration<long long, std::ratio<1, 1>>);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $requireClose() const;

    MCNAPI void $startListenTimeout(std::chrono::duration<long long, std::ratio<1, 1>>);

    MCNAPI bool $listenTimeoutExpired() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
