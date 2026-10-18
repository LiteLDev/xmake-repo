#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/entity/components_json_legacy/HealableComponent.h"
#include "mc/entity/components_json_legacy/HealableDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActorFilterGroup;
class WeakEntityRef;
struct FeedItem;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
#else // @header-generator platform
class HealableComponent;
class HealableDefinition;
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealableComponent
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::HealableComponent, ::HealableDefinition> {};
#endif // @header-generator platform

} // namespace ScriptModuleMinecraft
