#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/components/GenericScriptActorComponentFactory.h"
#include "mc/scripting/modules/minecraft/components/ScriptSaturationComponent.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSaturationComponentFactory
: public ::ScriptModuleMinecraft::GenericScriptActorComponentFactory<ScriptModuleMinecraft::ScriptSaturationComponent> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptSaturationComponentFactory();

    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorComponent> createComponent(::WeakEntityRef, ::Scripting::WeakLifetimeScope const&, std::string const&);

    virtual bool hasComponent(::WeakEntityRef) const;
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
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorComponent>
    $createComponent(::WeakEntityRef, ::Scripting::WeakLifetimeScope const&, std::string const&);

    MCNAPI bool $hasComponent(::WeakEntityRef) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
