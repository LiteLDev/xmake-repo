#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/world/events/ClientNetworkEventListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ClientMessageEvent;
namespace ScriptModuleMinecraftClient { class ScriptClientListeners; }
// clang-format on

namespace ScriptModuleMinecraftClient {

class ScriptClientMessageListener : public ::ClientNetworkEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                       mScope;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraftClient::ScriptClientListeners&> mClientListeners;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientMessageListener& operator=(ScriptClientMessageListener const&);
    ScriptClientMessageListener(ScriptClientMessageListener const&);
    ScriptClientMessageListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptClientMessageListener();

    virtual ::EventResult onMessage(::ClientMessageEvent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptClientMessageListener(
        ::Scripting::WeakLifetimeScope const&,
        ::ScriptModuleMinecraftClient::ScriptClientListeners&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const&, ::ScriptModuleMinecraftClient::ScriptClientListeners&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onMessage(::ClientMessageEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftClient
