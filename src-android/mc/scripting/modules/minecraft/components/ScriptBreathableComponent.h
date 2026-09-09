#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/entity/components_json_legacy/BreathableComponent.h"
#include "mc/entity/components_json_legacy/BreathableDefinition.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBreathableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<BreathableComponent, BreathableDefinition> {
public:
    // prevent constructor by default
    ScriptBreathableComponent& operator=(ScriptBreathableComponent const&);
    ScriptBreathableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBreathableComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<short> getAirSupply() const;

    MCNAPI ::Scripting::Result_deprecated<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getBreatheBlocks() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getCanBreathe() const;

    MCNAPI ::Scripting::Result_deprecated<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getNonBreatheBlocks() const;
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
