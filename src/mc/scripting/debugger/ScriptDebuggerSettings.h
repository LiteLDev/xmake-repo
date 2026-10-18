#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/ScriptDebuggerAttachMode.h"

struct ScriptDebuggerSettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                        mAllowOutboundConnect;
    ::ll::TypedStorage<1, 1, bool>                        mAllowInboundListen;
    ::ll::TypedStorage<4, 4, ::ScriptDebuggerAttachMode>  mAutoAttach;
    ::ll::TypedStorage<4, 4, uint>                        mAutoAttachTimeoutSec;
    ::ll::TypedStorage<1, 1, bool>                        mForceInboundDebugPort;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mHost;
    ::ll::TypedStorage<4, 8, std::optional<uint>>         mPort;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mPasscode;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                            mAllowOutboundConnect;
    ::ll::TypedStorage<1, 1, bool>                            mAllowInboundListen;
    ::ll::TypedStorage<4, 4, ::ScriptDebuggerAttachMode>      mAutoAttach;
    ::ll::TypedStorage<4, 4, uint>                            mAutoAttachTimeoutSec;
    ::ll::TypedStorage<1, 1, bool>                            mForceInboundDebugPort;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mHost;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>           mPort;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mPasscode;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ScriptDebuggerSettings& operator=(ScriptDebuggerSettings const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ScriptDebuggerSettings();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ScriptDebuggerSettings(
        bool                           allowOutbound,
        bool                           allowInbound,
        ::ScriptDebuggerAttachMode     attachMode,
        uint                           autoAttachTimeoutSec,
        bool                           forcePort,
        ::std::optional<::std::string> host,
        ::std::optional<uint>          port,
        ::std::optional<::std::string> passcode
    );
#endif
#endif // @header-generator platform

    MCNAPI ~ScriptDebuggerSettings();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
    // NOLINTBEGIN
    MCNAPI static ushort const& DEFAULT_DEBUGGER_PORT();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        bool                           allowOutbound,
        bool                           allowInbound,
        ::ScriptDebuggerAttachMode     attachMode,
        uint                           autoAttachTimeoutSec,
        bool                           forcePort,
        ::std::optional<::std::string> host,
        ::std::optional<uint>          port,
        ::std::optional<::std::string> passcode
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
