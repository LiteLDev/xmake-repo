#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace ScriptDebuggerMessages { class INetworkPayload; }
namespace ScriptDebuggerMessages { struct ScriptDebuggerPacket; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class IDebuggerTransport; }
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ScriptDebuggerProtocol {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::IDebuggerTransport&> mTransport;
    ::ll::UntypedStorage<8, 24>                                mCerealContext;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk14b32c;
    ::ll::UntypedStorage<8, 24> mUnk6d668e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerProtocol& operator=(ScriptDebuggerProtocol const&);
    ScriptDebuggerProtocol(ScriptDebuggerProtocol const&);
    ScriptDebuggerProtocol();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptDebuggerProtocol(::Scripting::IDebuggerTransport&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCNAPI ::std::string _receive();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _receive();
#else // @header-generator platform
    MCNAPI void sendPayload(::ScriptDebuggerMessages::INetworkPayload&& payload);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI bool waitForPacket(::ScriptDebuggerMessages::ScriptDebuggerPacket& packetOut);
#endif // @header-generator platform
    // NOLINTEND
};
