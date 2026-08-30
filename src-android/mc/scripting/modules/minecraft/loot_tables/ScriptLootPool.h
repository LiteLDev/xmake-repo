#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/loot_tables/ScriptLootPoolEntry.h"
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootPool;
namespace ScriptModuleMinecraft { class ScriptLootPoolTiers; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct NumberRange; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootPool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::LootPool const&>               mLootPool;
    ::ll::UntypedStorage<8, 32>                               mEntries;
    ::ll::UntypedStorage<8, 32>                               mConditions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootPool& operator=(ScriptLootPool const&);
    ScriptLootPool();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptLootPool(::ScriptModuleMinecraft::ScriptLootPool const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptLootPool const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
