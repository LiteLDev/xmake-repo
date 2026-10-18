#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptContainerRulesErrorGenerator {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::ScriptContainerRulesError
    createWeightOverLimitError(::ItemStack const&, int, int);
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::ScriptContainerRulesError
    createWeightOverLimitError(::ItemStack const& item, int maxWeightLimit, int weightOverLimit);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
