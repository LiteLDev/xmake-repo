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
        enum RefreshCondition : uint {
            // bitfield representation
            NoRefresh          = 0,
            RefreshOnEnter     = 1u << 0,
            RefreshOnTickOnce  = 1u << 1,
            RefreshOnEnterOnce = 1u << 2,
            RefreshScrollbar   = 1u << 3,
        };
    };
};
