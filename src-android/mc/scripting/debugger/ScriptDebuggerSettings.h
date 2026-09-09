#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/ScriptDebuggerAttachMode.h"

struct ScriptDebuggerSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                        mAllowOutboundConnect;
    ::ll::TypedStorage<1, 1, bool>                        mAllowInboundListen;
    ::ll::TypedStorage<4, 4, ::ScriptDebuggerAttachMode>  mAutoAttach;
    ::ll::TypedStorage<4, 4, uint>                        mAutoAttachTimeoutSec;
    ::ll::TypedStorage<1, 1, bool>                        mForceInboundDebugPort;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mHost;
    ::ll::TypedStorage<4, 8, std::optional<uint>>         mPort;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mPasscode;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerSettings& operator=(ScriptDebuggerSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDebuggerSettings(
        bool,
        bool,
        ::ScriptDebuggerAttachMode,
        uint,
        bool,
        std::optional<std::string>,
        std::optional<uint>,
        std::optional<std::string>
    );

    MCNAPI ~ScriptDebuggerSettings();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ushort const& DEFAULT_DEBUGGER_PORT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        bool,
        bool,
        ::ScriptDebuggerAttachMode,
        uint,
        bool,
        std::optional<std::string>,
        std::optional<uint>,
        std::optional<std::string>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
