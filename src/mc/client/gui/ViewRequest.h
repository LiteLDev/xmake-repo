#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ViewRequest : uint {
    // bitfield representation
    None                     = 0,
    Refresh                  = 1u << 0,
    PointerHeldEventsRequest = 1u << 1,
    PointerHeldEventsCancel  = 1u << 2,
    DelayedFocusRefresh      = 1u << 3,
    Exit                     = 1u << 4,
    ConsumeEvent             = 1u << 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ViewRequest : uint {
    // bitfield representation
    None                     = 0,
    Refresh                  = 1u << 0,
    PointerHeldEventsRequest = 1u << 1,
    PointerHeldEventsCancel  = 1u << 2,
    DelayedFocusRefresh      = 1u << 3,
    Exit                     = 1u << 4,
    ConsumeEvent             = 1u << 5,
};
#else // @header-generator platform
enum class ViewRequest : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

}
