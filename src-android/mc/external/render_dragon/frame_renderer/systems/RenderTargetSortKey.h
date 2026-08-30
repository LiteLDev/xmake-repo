#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

struct RenderTargetSortKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mRenderTargetKey;
    // NOLINTEND
};

} // namespace dragon::framerenderer
