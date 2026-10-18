#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderTargetSortKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mRenderTargetKey;
    // NOLINTEND
};
#else // @header-generator platform
struct RenderTargetSortKey {};
#endif // @header-generator platform

} // namespace dragon::framerenderer
