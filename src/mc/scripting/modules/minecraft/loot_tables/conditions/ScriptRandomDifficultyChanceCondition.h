#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootItemRandomDifficultyChanceCondition;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRandomDifficultyChanceCondition : public ::ScriptModuleMinecraft::ScriptLootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LootItemRandomDifficultyChanceCondition const&> mCondition;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRandomDifficultyChanceCondition& operator=(ScriptRandomDifficultyChanceCondition const&);
    ScriptRandomDifficultyChanceCondition(ScriptRandomDifficultyChanceCondition const&);
    ScriptRandomDifficultyChanceCondition();

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
