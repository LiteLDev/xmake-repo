#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentBeforeEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/items/ScriptItemStack.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ComponentItem;
#else // @header-generator platform
class Actor;
class ItemStack;
class Mob;
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentBeforeDurabilityDamageEvent
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeEvent<int&, ItemStack&, Actor&, Mob&> {
#else // @header-generator platform
: public ::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeEvent<int&, ::ItemStack&, ::Actor&, ::Mob&> {
#endif // @header-generator platform
public:
    // ScriptItemCustomComponentBeforeDurabilityDamageEvent inner types define
    using EventConnectorsType =
#if defined(LL_PLAT_A) // @header-generator platform
        ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<void(int&, ItemStack&, Actor&, Mob&)>;
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<void(int&, ::ItemStack&, ::Actor&, ::Mob&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mDurabilityDamage;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>   mScriptItem;
    ::ll::UntypedStorage<8, 32>   mHitEntity;
    ::ll::UntypedStorage<8, 32>   mAttackingEntity;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
                                                                                                          mScriptItem;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mHitEntity;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
        mAttackingEntity;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptItemCustomComponentBeforeDurabilityDamageEvent();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptItemCustomComponentBeforeDurabilityDamageEvent();
#else // @header-generator platform
    virtual void updateEngineEvent(int& durabilityDamage, ::ItemStack& item, ::Actor&, ::Mob&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateEngineEvent(int&, ::ItemStack&, ::Actor&, ::Mob&) const;

    virtual bool shouldCancel() const;
#else // @header-generator platform
    virtual bool shouldCancel() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateEngineEvent(int&, ::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    MCAPI void $updateEngineEvent(int& durabilityDamage, ::ItemStack& item, ::Actor&, ::Mob&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldCancel() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD bool $shouldCancel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
