#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/ScriptLootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class EmptyLootItem;
class LootPoolEntry;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEmptyLootItem : public ::ScriptModuleMinecraft::ScriptLootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EmptyLootItem const&> mEmptyLootItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEmptyLootItem& operator=(ScriptEmptyLootItem const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptEmptyLootItem(ScriptEmptyLootItem const&);
#endif // @header-generator platform
    ScriptEmptyLootItem();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptEmptyLootItem();

    virtual ::LootPoolEntry const& _getEntry() const;
#else // @header-generator platform
    virtual ::LootPoolEntry const& _getEntry() const /*override*/;
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
    MCNAPI ::LootPoolEntry const& $_getEntry() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::LootPoolEntry const& $_getEntry() const;
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
