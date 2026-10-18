#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TransferResult : int {
    Success                = 0,
    FailureUnknown         = 1,
    FailureNoFile          = 2,
    FailureZipError        = 3,
    FailurePremiumContent  = 4,
    FailureEditionMismatch = 5,
    FailureEditorMismatch  = 6,
    FailureZipDepthError   = 7,
    UnsupportedPlatform    = 8,
    AlreadyInProgress      = 9,
    InterruptedByUser      = 10,
    FailureNotEnoughSpace  = 11,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TransferResult : int {
    Success                = 0,
    FailureUnknown         = 1,
    FailureNoFile          = 2,
    FailureZipError        = 3,
    FailurePremiumContent  = 4,
    FailureEditionMismatch = 5,
    FailureEditorMismatch  = 6,
    FailureZipDepthError   = 7,
    UnsupportedPlatform    = 8,
    AlreadyInProgress      = 9,
    InterruptedByUser      = 10,
    FailureNotEnoughSpace  = 11,
};
#else // @header-generator platform
enum class TransferResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
