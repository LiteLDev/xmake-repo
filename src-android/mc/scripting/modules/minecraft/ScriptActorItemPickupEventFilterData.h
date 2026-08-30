#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorItemPickupEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>           mScope;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>                   mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemPickupEventFilterData& operator=(ScriptActorItemPickupEventFilterData const&);
    ScriptActorItemPickupEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptActorItemPickupEventFilterData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData
        create(::Scripting::WeakLifetimeScope, ::ScriptModuleMinecraft::ScriptActorData, std::vector<ItemStack>);

    MCNAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData
    create(::Scripting::WeakLifetimeScope, ::ScriptModuleMinecraft::ScriptActorData, ::Actor const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
