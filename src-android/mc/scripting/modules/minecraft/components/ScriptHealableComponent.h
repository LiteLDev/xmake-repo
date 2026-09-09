#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/entity/components_json_legacy/HealableComponent.h"
#include "mc/entity/components_json_legacy/HealableDefinition.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
class WeakEntityRef;
struct FeedItem;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<HealableComponent, HealableDefinition> {
public:
    // prevent constructor by default
    ScriptHealableComponent& operator=(ScriptHealableComponent const&);
    ScriptHealableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptHealableComponent();
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
