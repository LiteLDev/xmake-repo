#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace ScriptDebuggerMessages {

#if defined(LL_PLAT_A) // @header-generator platform
struct CommandMessage : public ::ScriptDebuggerMessages::NetworkPayload<ScriptDebuggerMessages::CommandMessage> {
#else // @header-generator platform
struct CommandMessage : public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::CommandMessage> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mType;
    ::ll::TypedStorage<8, 24, std::string> mCommand;
    ::ll::TypedStorage<8, 24, std::string> mDimensionType;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk9248ec;
    ::ll::UntypedStorage<8, 32> mUnkf6e024;
    ::ll::UntypedStorage<8, 32> mUnk9f7021;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandMessage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandMessage() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandMessage(::ScriptDebuggerMessages::CommandMessage const&);

    MCNAPI ::ScriptDebuggerMessages::CommandMessage& operator=(::ScriptDebuggerMessages::CommandMessage&&);

    MCNAPI ::ScriptDebuggerMessages::CommandMessage& operator=(::ScriptDebuggerMessages::CommandMessage const&);
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
    MCNAPI void* $ctor(::ScriptDebuggerMessages::CommandMessage const&);
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
