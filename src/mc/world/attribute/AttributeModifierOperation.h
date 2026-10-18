#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AttributeModifierOperation : int {
#if defined(LL_PLAT_A) // @header-generator platform
    OPERATION_ADDITION       = 0,
    OPERATION_MULTIPLY_BASE  = 1,
    OPERATION_MULTIPLY_TOTAL = 2,
    OPERATION_CAP            = 3,
    TOTAL_OPERATIONS         = 4,
    OPERATION_INVALID        = 4,
#else // @header-generator platform
    OperationAddition      = 0,
    OperationMultiplyBase  = 1,
    OperationMultiplyTotal = 2,
    OperationCap           = 3,
    TotalOperations        = 4,
    OperationInvalid       = 4,
#endif // @header-generator platform
};
