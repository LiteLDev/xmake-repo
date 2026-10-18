#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/debugger/script_debugger_messages/PluginDetails.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace ScriptDebuggerMessages {

#if defined(LL_PLAT_A) // @header-generator platform
struct ProtocolEvent : public ::ScriptDebuggerMessages::EventEnvelope<ScriptDebuggerMessages::ProtocolEvent> {
#else // @header-generator platform
struct ProtocolEvent : public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::ProtocolEvent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                 mVersion;
    ::ll::TypedStorage<8, 24, std::vector<ScriptDebuggerMessages::PluginDetails>> mPlugins;
    ::ll::TypedStorage<1, 1, bool>                                                mRequirePasscode;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk554323;
    ::ll::UntypedStorage<8, 24> mUnk9ba916;
    ::ll::UntypedStorage<1, 1>  mUnk32b407;
    // NOLINTEND

public:
    // prevent constructor by default
    ProtocolEvent& operator=(ProtocolEvent const&);
    ProtocolEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProtocolEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProtocolEvent(::ScriptDebuggerMessages::ProtocolEvent const&);

    MCNAPI ProtocolEvent(::std::vector<::Scripting::ModuleDescriptor>&& pluginDescriptors, bool requirePasscode);

    MCNAPI ::ScriptDebuggerMessages::ProtocolEvent& operator=(::ScriptDebuggerMessages::ProtocolEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::ProtocolEvent const&);

    MCNAPI void* $ctor(::std::vector<::Scripting::ModuleDescriptor>&& pluginDescriptors, bool requirePasscode);
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
