#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rendergraph {

enum class ValidationResult : int {
    VALID                           = 0,
    UNREACHABLE_PASS                = 1,
    BEGIN_FAILURE                   = 2,
    CRITICAL_FAILURE                = 3,
    EXTERNAL_RESOURCE_NOT_FOUND     = 4,
    EXTERNAL_RESOURCE_MISMATCH      = 5,
    TRANSIENT_RESOURCE_NOT_FOUND    = 6,
    INVALID_RESOURCE_ACCESS         = 7,
    INVALID_RESOURCE_TARGET_LINK    = 8,
    INVALID_RESOURCE_VIEW_LINK      = 9,
    DUPLICATE_RESOURCE_BINDING      = 10,
    DUPLICATE_FRAMEBUFFER_BINDING   = 11,
    INVALID_FRAMEBUFFER_LINK        = 12,
    INVALID_FRAMEBUFFER_REQUIREMENT = 13,
    END_FAILURE                     = 14,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
