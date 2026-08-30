#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/entity/components_json_legacy/LeashableComponent.h"
#include "mc/entity/components_json_legacy/LeashableDefinition.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLeashableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<LeashableComponent, LeashableDefinition> {
public:
    // prevent constructor by default
    ScriptLeashableComponent& operator=(ScriptLeashableComponent const&);
    ScriptLeashableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptLeashableComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptLeashableComponent(::WeakEntityRef const&, ::Scripting::WeakLifetimeScope const&, std::string const&);

    MCNAPI ::Scripting::Result_deprecated<float> getHardDistance() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getIsLeashed() const;

    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>>>
    getLeashHolder() const;

    MCNAPI ::Scripting::Result_deprecated<std::optional<std::string>> getLeashHolderActorId() const;

    MCNAPI ::Scripting::Result_deprecated<float> getMaxDistance() const;

    MCNAPI ::Scripting::Result_deprecated<float> getSoftDistance() const;
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
