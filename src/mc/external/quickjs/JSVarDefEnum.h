#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSVarDefEnum : int {
    With            = 0,
    Let             = 1,
    Const           = 2,
    FunctionDecl    = 3,
    NewFunctionDecl = 4,
    Catch           = 5,
    Var             = 6,
};
#endif // @header-generator platform
