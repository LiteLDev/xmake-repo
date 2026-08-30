#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class Binder {
public:
    // Binder inner types define
    enum BindingMode : uint {
        BM_Value              = 0,
        BM_Scoped             = 1,
        BM_ScopedSafe         = 2,
        BM_ScopedSafeKeyValue = 3,
        BM_GetTypeInfo        = 4,
    };
};

} // namespace cohtml
