#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/DerivedMovementScriptActorComponent.h"
#include "mc/world/actor/ActorDefinitionDescriptor.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementGlideComponent
: public ::ScriptModuleMinecraft::DerivedMovementScriptActorComponent<&ActorDefinitionDescriptor::mGlideMoveControl> {
public:
    // prevent constructor by default
    ScriptMovementGlideComponent& operator=(ScriptMovementGlideComponent const&);
    ScriptMovementGlideComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptMovementGlideComponent();
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
