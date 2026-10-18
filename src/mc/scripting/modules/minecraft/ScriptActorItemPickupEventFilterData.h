#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorItemPickupEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>           mScope;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>                   mItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>               mItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ScriptActorItemPickupEventFilterData& operator=(ScriptActorItemPickupEventFilterData const&);
#else // @header-generator platform
#endif // @header-generator platform
    ScriptActorItemPickupEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptActorItemPickupEventFilterData();
#else // @header-generator platform
    MCAPI ScriptActorItemPickupEventFilterData(
        ::Scripting::WeakLifetimeScope           scope,
        ::ScriptModuleMinecraft::ScriptActorData actorData,
        ::std::vector<::ItemStack>               items
    );

    MCAPI ~ScriptActorItemPickupEventFilterData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData
        create(::Scripting::WeakLifetimeScope, ::ScriptModuleMinecraft::ScriptActorData, std::vector<ItemStack>);
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData create(
        ::Scripting::WeakLifetimeScope           scope,
        ::ScriptModuleMinecraft::ScriptActorData actorData,
        ::Actor const&                           item
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData
    create(::Scripting::WeakLifetimeScope, ::ScriptModuleMinecraft::ScriptActorData, ::Actor const&);
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData create(
        ::Scripting::WeakLifetimeScope           scope,
        ::ScriptModuleMinecraft::ScriptActorData actorData,
        ::std::vector<::ItemStack>               items
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope           scope,
        ::ScriptModuleMinecraft::ScriptActorData actorData,
        ::std::vector<::ItemStack>               items
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
