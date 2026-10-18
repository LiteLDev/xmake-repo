#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum ComponentReceiveActionType : ushort {
    ConsumeEvent               = 0,
    FurtherPassEventToControls = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ComponentReceiveActionType : ushort {
    ConsumeEvent               = 0,
    FurtherPassEventToControls = 1,
};
#else // @header-generator platform
enum class ComponentReceiveActionType : ushort {};
#endif // @header-generator platform
#endif // @header-generator platform
