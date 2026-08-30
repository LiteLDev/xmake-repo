#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/scripting/modules/minecraftclient/client/IScriptClientListeners.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace ScriptModuleMinecraftClient { class ScriptClientKeyEventListener; }
namespace ScriptModuleMinecraftClient { class ScriptClientMessageListener; }
namespace ScriptModuleMinecraftClient { class ScriptClientSignals; }
namespace ScriptModuleMinecraftClient { struct ScriptClientMessage; }
// clang-format on

namespace ScriptModuleMinecraftClient {

class ScriptClientListeners : public ::ScriptModuleMinecraftClient::IScriptClientListeners {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClientInstance;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::UntypedStorage<8, 32> mClientSignalsHandle;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftClient::ScriptClientMessageListener>> mMessageListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftClient::ScriptClientKeyEventListener>> mKeyEventListener;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientListeners& operator=(ScriptClientListeners const&);
    ScriptClientListeners(ScriptClientListeners const&);
    ScriptClientListeners();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptClientListeners();

    virtual void onClientMessage(::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftClient::ScriptClientMessage>&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $onClientMessage(::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftClient::ScriptClientMessage>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftClient
