#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/components/DerivedNavigationScriptActorComponent.h"
#include "mc/world/actor/ActorDefinitionDescriptor.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptNavigationWalkComponent
: public ::ScriptModuleMinecraft::DerivedNavigationScriptActorComponent<&ActorDefinitionDescriptor::mNavigation> {
public:
    // prevent constructor by default
    ScriptNavigationWalkComponent& operator=(ScriptNavigationWalkComponent const&);
    ScriptNavigationWalkComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptNavigationWalkComponent();
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
