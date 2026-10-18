#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderContextImmediate {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool exists();

    MCNAPI static ::mce::RenderContext& get();
    // NOLINTEND
};
#else // @header-generator platform
class RenderContextImmediate {};
#endif // @header-generator platform

} // namespace mce
