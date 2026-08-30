#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct DeferredLightingUpscaleParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>   mIndirectSpecularMixedResEnabled;
    ::ll::TypedStorage<4, 4, float>  mDeferredLightingResolutionScale;
    ::ll::TypedStorage<4, 4, float>  mNormalFactor;
    ::ll::TypedStorage<2, 2, ushort> mTileSize;
    ::ll::TypedStorage<1, 1, bool>   mEnableTiling;
    // NOLINTEND
};

} // namespace mce::framebuilder
