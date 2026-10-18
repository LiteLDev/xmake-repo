#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::drawcommands {

#if defined(LL_PLAT_A) // @header-generator platform
struct SamplerStateBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  mFlags;
    ::ll::TypedStorage<1, 1, uchar> mStage;
    // NOLINTEND
};
#else // @header-generator platform
struct SamplerStateBinding {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::drawcommands
