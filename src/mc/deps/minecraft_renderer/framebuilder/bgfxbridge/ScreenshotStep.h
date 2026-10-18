#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder::bgfxbridge {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ScreenshotStep : int {
    PRE_HUD = 0,
    POST_UI = 1,
};
#else // @header-generator platform
enum class ScreenshotStep : int {};
#endif // @header-generator platform

}
