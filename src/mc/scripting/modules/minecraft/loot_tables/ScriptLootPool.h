#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/loot_tables/ScriptLootPoolEntry.h"
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class LootPool;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptLootPoolTiers; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptLootItemCondition; }
namespace ScriptModuleMinecraft { class ScriptLootPoolEntry; }
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct NumberRange; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootPool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::LootPool const&>               mLootPool;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                               mEntries;
    ::ll::UntypedStorage<8, 32>                               mConditions;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootPoolEntry>>>>
        mEntries;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootItemCondition>>>>
        mConditions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootPool& operator=(ScriptLootPool const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptLootPool(ScriptLootPool const&);
#endif // @header-generator platform
    ScriptLootPool();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptLootPool(::ScriptModuleMinecraft::ScriptLootPool const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptLootPool const&);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
