#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptEnchantInfo.h"
#include "mc/scripting/modules/minecraft/loot_tables/functions/ScriptLootItemFunction.h"

// auto generated forward declare list
// clang-format off
class LootItemFunction;
class SpecificEnchantFunction;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSpecificEnchantFunction : public ::ScriptModuleMinecraft::ScriptLootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SpecificEnchantFunction const&> mFunction;
    ::ll::UntypedStorage<8, 32>                                mEnchants;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSpecificEnchantFunction& operator=(ScriptSpecificEnchantFunction const&);
    ScriptSpecificEnchantFunction(ScriptSpecificEnchantFunction const&);
    ScriptSpecificEnchantFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptSpecificEnchantFunction();

    virtual ::LootItemFunction const& _getFunction() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSpecificEnchantFunction(::Scripting::WeakLifetimeScope const&, ::SpecificEnchantFunction&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const&, ::SpecificEnchantFunction&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LootItemFunction const& $_getFunction() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
