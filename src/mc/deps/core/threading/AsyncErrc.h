#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

#if defined(LL_PLAT_A) // @header-generator platform
enum AsyncErrc : int {
    operation_in_progress     = 1,
    operation_canceled        = 2,
    operation_threw_exception = 3,
    unable_to_execute         = 4,
    unexpected_error          = 5,
    invalid_state             = 6,
#else // @header-generator platform
enum class AsyncErrc : int {
    OperationInProgress     = 1,
    OperationCanceled       = 2,
    OperationThrewException = 3,
    UnableToExecute         = 4,
    UnexpectedError         = 5,
    InvalidState            = 6,
#endif // @header-generator platform
};

}
