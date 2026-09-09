#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/shared_types/v1_21_130/actor/AddRiderComponentDefinition.h"
#include "mc/entity/components/AddRiderComponent.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAddRiderComponent
: public ::ScriptModuleMinecraft::
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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<std::string> getEntityType() const;

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
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
