#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemStack.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorItemDropEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>           mScope;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>                   mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemDropEventFilterData& operator=(ScriptActorItemDropEventFilterData const&);
    ScriptActorItemDropEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptActorItemDropEventFilterData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorItemDropEventFilterData create(
        ::Scripting::WeakLifetimeScope,
        ::ScriptModuleMinecraft::ScriptActorData,
        std::vector<ScriptModuleMinecraft::ScriptActorData>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
