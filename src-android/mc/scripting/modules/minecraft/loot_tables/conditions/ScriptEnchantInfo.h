#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/scripting/NumberRange.h"
#include "mc/world/level/storage/loot/predicates/LootItemMatchToolCondition.h"

// auto generated forward declare list
// clang-format off
struct IntRange;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEnchantInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::string const&>       mEnchantment;
    ::ll::TypedStorage<4, 8, ::Scripting::NumberRange> mLevelRange;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEnchantInfo& operator=(ScriptEnchantInfo const&);
    ScriptEnchantInfo(ScriptEnchantInfo const&);
    ScriptEnchantInfo();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
