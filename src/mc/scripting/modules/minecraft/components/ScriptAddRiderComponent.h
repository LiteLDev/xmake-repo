#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_130/actor/AddRiderComponentDefinition.h"
#include "mc/entity/components/AddRiderComponent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
#else // @header-generator platform
struct AddRiderComponent;
namespace SharedTypes::v1_21_130 { struct AddRiderComponentDefinition; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAddRiderComponent
: public ::ScriptModuleMinecraft::
#if defined(LL_PLAT_A) // @header-generator platform
      ECSScriptActorComponent<AddRiderComponent, SharedTypes::v1_21_130::AddRiderComponentDefinition> {
public:
    // prevent constructor by default
    ScriptAddRiderComponent& operator=(ScriptAddRiderComponent const&);
    ScriptAddRiderComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptAddRiderComponent();
    // NOLINTEND

#else // @header-generator platform
      ECSScriptActorComponent<::AddRiderComponent, ::SharedTypes::v1_21_130::AddRiderComponentDefinition> {
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::string> getEntityType() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::string> getEntityType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::string> getSpawnEvent() const;
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
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::string> getSpawnEvent() const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
