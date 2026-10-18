#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class LootPoolTiers;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootPoolTiers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::LootPoolTiers const&>          mTiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootPoolTiers& operator=(ScriptLootPoolTiers const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptLootPoolTiers(ScriptLootPoolTiers const&);
#endif // @header-generator platform
    ScriptLootPoolTiers();

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
