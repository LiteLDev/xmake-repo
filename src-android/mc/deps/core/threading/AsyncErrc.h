#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

enum AsyncErrc : int {
    operation_in_progress     = 1,
    operation_canceled        = 2,
    operation_threw_exception = 3,
    unable_to_execute         = 4,
    unexpected_error          = 5,
    invalid_state             = 6,
};

}
