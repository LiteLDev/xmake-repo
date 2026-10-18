#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AttributeOperands : int {
#if defined(LL_PLAT_A) // @header-generator platform
    OPERAND_MIN     = 0,
    OPERAND_MAX     = 1,
    OPERAND_CURRENT = 2,
    TOTAL_OPERANDS  = 3,
    OPERAND_INVALID = 3,
#else // @header-generator platform
    OperandMin     = 0,
    OperandMax     = 1,
    OperandCurrent = 2,
    TotalOperands  = 3,
    OperandInvalid = 3,
#endif // @header-generator platform
};
