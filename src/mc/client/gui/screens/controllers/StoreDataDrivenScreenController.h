#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StoreDataDrivenScreenController {
public:
    // StoreDataDrivenScreenController inner types declare
    // clang-format off
    class RefreshController;
    // clang-format on

    // StoreDataDrivenScreenController inner types define
    class RefreshController {
    public:
        // RefreshController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        enum RefreshCondition : uint {
            // bitfield representation
            NoRefresh          = 0,
            RefreshOnEnter     = 1u << 0,
            RefreshOnTickOnce  = 1u << 1,
            RefreshOnEnterOnce = 1u << 2,
            RefreshScrollbar   = 1u << 3,
        };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        enum class RefreshCondition : int {
            // bitfield representation
            NoRefresh          = 0,
            RefreshOnEnter     = 1 << 0,
            RefreshOnTickOnce  = 1 << 1,
            RefreshOnEnterOnce = 1 << 2,
            RefreshScrollbar   = 1 << 3,
        };
#else // @header-generator platform
        enum class RefreshCondition : int {};
#endif // @header-generator platform
#endif // @header-generator platform
    };
};
