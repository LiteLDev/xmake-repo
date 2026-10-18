#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/components/DerivedNavigationScriptActorComponent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptNavigationFloatComponent
: public ::ScriptModuleMinecraft::DerivedNavigationScriptActorComponent<&ActorDefinitionDescriptor::mFloatNavigation> {
#else // @header-generator platform
class ScriptNavigationFloatComponent : public ::ScriptModuleMinecraft::DerivedNavigationScriptActorComponent<856> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptNavigationFloatComponent& operator=(ScriptNavigationFloatComponent const&);
    ScriptNavigationFloatComponent();

public:
    // virtual functions
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptNavigationFloatComponent();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static char const*& ComponentId();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
