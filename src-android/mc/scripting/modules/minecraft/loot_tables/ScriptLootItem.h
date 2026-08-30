#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/loot_tables/ScriptLootPoolEntry.h"
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"
#include "mc/scripting/modules/minecraft/loot_tables/functions/ScriptLootItemFunction.h"

// auto generated forward declare list
// clang-format off
class LootItem;
class LootPoolEntry;
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootItem : public ::ScriptModuleMinecraft::ScriptLootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LootItem const&> mLootItem;
    ::ll::UntypedStorage<8, 32>                 mConditions;
    ::ll::UntypedStorage<8, 32>                 mFunctions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootItem& operator=(ScriptLootItem const&);
    ScriptLootItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptLootItem();

    virtual ::LootPoolEntry const& _getEntry() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptLootItem(::ScriptModuleMinecraft::ScriptLootItem const&);

    MCNAPI std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptLootItemFunction>>
           getFunctions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptLootItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LootPoolEntry const& $_getEntry() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
