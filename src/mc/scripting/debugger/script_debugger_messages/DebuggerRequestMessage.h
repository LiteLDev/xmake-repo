#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace ScriptDebuggerMessages {

struct DebuggerRequestMessage
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptDebuggerMessages::NetworkPayload<ScriptDebuggerMessages::DebuggerRequestMessage> {
#else // @header-generator platform
: public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::DebuggerRequestMessage> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                         mType;
    ::ll::TypedStorage<4, 4, int>                                  mRequestSeq;
    ::ll::TypedStorage<8, 24, std::string>                         mRequest;
    ::ll::TypedStorage<8, 56, std::optional<cereal::DynamicValue>> mArgs;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkaffbb3;
    ::ll::UntypedStorage<4, 4>  mUnkcf195f;
    ::ll::UntypedStorage<8, 32> mUnkabfe5a;
    ::ll::UntypedStorage<8, 80> mUnkaccc32;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerRequestMessage& operator=(DebuggerRequestMessage const&);
    DebuggerRequestMessage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebuggerRequestMessage() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebuggerRequestMessage(::ScriptDebuggerMessages::DebuggerRequestMessage const&);

    MCNAPI ::ScriptDebuggerMessages::DebuggerRequestMessage&
    operator=(::ScriptDebuggerMessages::DebuggerRequestMessage&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& msPayloadType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::DebuggerRequestMessage const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
