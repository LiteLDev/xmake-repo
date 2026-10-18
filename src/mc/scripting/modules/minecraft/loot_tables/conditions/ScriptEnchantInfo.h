#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/scripting/NumberRange.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/loot/predicates/LootItemMatchToolCondition.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct IntRange;
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEnchantInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::string const&>       mEnchantment;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::string const&>     mEnchantment;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
