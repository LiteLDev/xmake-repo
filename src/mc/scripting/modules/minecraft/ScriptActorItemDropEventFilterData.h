#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on
#endif // @header-generator platform

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorItemDropEventFilterData {
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
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptActorItemDropEventFilterData& operator=(ScriptActorItemDropEventFilterData const&);
    ScriptActorItemDropEventFilterData();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptActorItemDropEventFilterData();
#else // @header-generator platform
    MCAPI ~ScriptActorItemDropEventFilterData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorItemDropEventFilterData create(
        ::Scripting::WeakLifetimeScope,
        ::ScriptModuleMinecraft::ScriptActorData,
        std::vector<ScriptModuleMinecraft::ScriptActorData>
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorItemDropEventFilterData create(
        ::Scripting::WeakLifetimeScope                          scope,
        ::ScriptModuleMinecraft::ScriptActorData                actorData,
        ::std::vector<::ScriptModuleMinecraft::ScriptActorData> items
#endif // @header-generator platform
    );
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
