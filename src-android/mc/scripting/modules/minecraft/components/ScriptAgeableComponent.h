#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/entity/components/AgeableComponent.h"
#include "mc/entity/definitions/AgeableDefinition.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class WeakEntityRef;
struct ActorDefinitionFeedItem;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAgeableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<AgeableComponent, AgeableDefinition> {
public:
    // prevent constructor by default
    ScriptAgeableComponent& operator=(ScriptAgeableComponent const&);
    ScriptAgeableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptAgeableComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<std::vector<std::string>> getDropItems() const;

    MCNAPI ::Scripting::Result_deprecated<ActorDefinitionTrigger> getGrowUp() const;

    MCNAPI ::Scripting::Result_deprecated<std::string> getTransformToItem() const;
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
