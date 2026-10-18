#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/components/DerivedMovementScriptActorComponent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionDescriptor.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptMovementAmphibiousComponent : public ::ScriptModuleMinecraft::DerivedMovementScriptActorComponent<
                                              &ActorDefinitionDescriptor::mAmphibiousMoveControl> {
public:
    // prevent constructor by default
    ScriptMovementAmphibiousComponent& operator=(ScriptMovementAmphibiousComponent const&);
    ScriptMovementAmphibiousComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptMovementAmphibiousComponent();
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
#else // @header-generator platform
class ScriptMovementAmphibiousComponent : public ::ScriptModuleMinecraft::DerivedMovementScriptActorComponent<696> {};
#endif // @header-generator platform

} // namespace ScriptModuleMinecraft
