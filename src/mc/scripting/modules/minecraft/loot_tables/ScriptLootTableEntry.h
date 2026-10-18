#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/loot_tables/ScriptLootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class LootPoolEntry;
class LootTableEntry;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptLootTable; }
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootTableEntry : public ::ScriptModuleMinecraft::ScriptLootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LootTableEntry const&> mLootTableEntry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootTableEntry& operator=(ScriptLootTableEntry const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptLootTableEntry(ScriptLootTableEntry const&);
#endif // @header-generator platform
    ScriptLootTableEntry();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptLootTableEntry();

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
