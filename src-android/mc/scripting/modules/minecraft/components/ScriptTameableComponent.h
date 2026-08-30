#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/entity/components_json_legacy/TameableComponent.h"
#include "mc/entity/components_json_legacy/TameableDefinition.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class Player;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTameableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<TameableComponent, TameableDefinition> {
public:
    // prevent constructor by default
    ScriptTameableComponent& operator=(ScriptTameableComponent const&);
    ScriptTameableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptTameableComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptTameableComponent(::WeakEntityRef const&, ::Scripting::WeakLifetimeScope const&, std::string const&);

    MCNAPI ::Scripting::Result_deprecated<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>>
    getTameItems() const;

    MCNAPI ::Scripting::Result_deprecated<std::vector<std::string>> getTameItems_010() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isTamed() const;

    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>>
    tamedToPlayer() const;

    MCNAPI ::Scripting::Result_deprecated<std::optional<std::string>> tamedToPlayerId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakEntityRef const&, ::Scripting::WeakLifetimeScope const&, std::string const&);
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
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
