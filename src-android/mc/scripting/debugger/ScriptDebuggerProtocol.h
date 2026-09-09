#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace ScriptDebuggerMessages { class INetworkPayload; }
namespace ScriptDebuggerMessages { struct ScriptDebuggerPacket; }
namespace Scripting { class IDebuggerTransport; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptDebuggerProtocol {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::IDebuggerTransport&> mTransport;
    ::ll::UntypedStorage<8, 24>                                mCerealContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerProtocol& operator=(ScriptDebuggerProtocol const&);
    ScriptDebuggerProtocol(ScriptDebuggerProtocol const&);
    ScriptDebuggerProtocol();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDebuggerProtocol(::Scripting::IDebuggerTransport&, ::cereal::ReflectionCtx const&);

    MCNAPI std::string _receive();

    MCNAPI bool deserializePacket(std::string const&, ::ScriptDebuggerMessages::ScriptDebuggerPacket&) const;

    MCNAPI void send(std::string const&);

    MCNAPI void sendPayload(::ScriptDebuggerMessages::INetworkPayload&&);

    MCNAPI bool waitForPacket(::ScriptDebuggerMessages::ScriptDebuggerPacket&);

    MCNAPI ~ScriptDebuggerProtocol();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::IDebuggerTransport&, ::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
