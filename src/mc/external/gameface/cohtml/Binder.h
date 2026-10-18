#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class Binder {
public:
    // Binder inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum BindingMode : uint {
        BM_Value              = 0,
        BM_Scoped             = 1,
        BM_ScopedSafe         = 2,
        BM_ScopedSafeKeyValue = 3,
        BM_GetTypeInfo        = 4,
#else // @header-generator platform
    enum class BindingMode : int {
        Value              = 0,
        Scoped             = 1,
        ScopedSafe         = 2,
        ScopedSafeKeyValue = 3,
        GetTypeInfo        = 4,
#endif // @header-generator platform
    };
};

} // namespace cohtml
