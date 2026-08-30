#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentBeforeEvent.h"
#include "mc/scripting/modules/minecraft/items/ScriptItemStack.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentBeforeDurabilityDamageEvent
: public ::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeEvent<int&, ItemStack&, Actor&, Mob&> {
public:
    // ScriptItemCustomComponentBeforeDurabilityDamageEvent inner types define
    using EventConnectorsType =
        ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<void(int&, ItemStack&, Actor&, Mob&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mDurabilityDamage;
    ::ll::UntypedStorage<8, 40>   mScriptItem;
    ::ll::UntypedStorage<8, 32>   mHitEntity;
    ::ll::UntypedStorage<8, 32>   mAttackingEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentBeforeDurabilityDamageEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemCustomComponentBeforeDurabilityDamageEvent();

    virtual void updateEngineEvent(int&, ::ItemStack&, ::Actor&, ::Mob&) const;

    virtual bool shouldCancel() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $updateEngineEvent(int&, ::ItemStack&, ::Actor&, ::Mob&) const;

    MCNAPI bool $shouldCancel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
