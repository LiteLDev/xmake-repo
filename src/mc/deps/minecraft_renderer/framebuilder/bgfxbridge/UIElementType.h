#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder::bgfxbridge {

#if defined(LL_PLAT_A) // @header-generator platform
enum class UIElementType : int {
    Mesh = 0,
    Text = 1,
};
#else // @header-generator platform
enum class UIElementType : int {};
#endif // @header-generator platform

}
