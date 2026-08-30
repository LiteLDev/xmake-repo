#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/world/events/ClientScriptEventListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftClient { class IScriptClientListeners; }
// clang-format on

namespace ScriptModuleMinecraftClient {

class ScriptClientKeyEventListener : public ::ClientScriptEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                        mScope;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraftClient::IScriptClientListeners&> mClientListeners;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientKeyEventListener& operator=(ScriptClientKeyEventListener const&);
    ScriptClientKeyEventListener(ScriptClientKeyEventListener const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptClientKeyEventListener();

    virtual ::EventResult onScriptKeyEvent(std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onScriptKeyEvent(std::string const&, std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftClient
