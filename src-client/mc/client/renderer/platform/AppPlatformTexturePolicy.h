#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace mce { struct Image; }
// clang-format on

namespace mce {

struct AppPlatformTexturePolicy {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool loadResource(::ResourceLocation const&, ::mce::Image&);

    MCNAPI static bool processResource(::mce::Image const&, ::mce::Image&);
    // NOLINTEND
};

} // namespace mce
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
