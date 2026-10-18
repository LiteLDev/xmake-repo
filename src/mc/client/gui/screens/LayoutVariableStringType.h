#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class LayoutVariableStringType : int {
    VariableOnly                 = 0,
    IncludeRule                  = 1,
    IncludeAllDependantVariables = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class LayoutVariableStringType : int {
    VariableOnly                 = 0,
    IncludeRule                  = 1,
    IncludeAllDependantVariables = 2,
};
#else // @header-generator platform
enum class LayoutVariableStringType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
