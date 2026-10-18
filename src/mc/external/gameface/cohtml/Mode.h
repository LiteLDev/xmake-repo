#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::InspectorNetworkTabSettings {

#if defined(LL_PLAT_A) // @header-generator platform
enum Mode : uint {
    Disabled      = 0,
    Enabled       = 1,
    AlwaysEnabled = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class Mode : int {
    Disabled      = 0,
    Enabled       = 1,
    AlwaysEnabled = 2,
};
#else // @header-generator platform
enum class Mode : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
