#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct RenderBatchRenderControllerDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                                   mSubRenderLayerIndex;
    ::ll::TypedStorage<2, 2, ushort>                                   mActorIdx;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mTileLightColor;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mTileLightIntensity;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mBlockLightColor;
    ::ll::TypedStorage<1, 1, bool>                                     mHasGlintColor;
    ::ll::TypedStorage<1, 1, bool>                                     mHasOverlayColor;
    ::ll::TypedStorage<1, 1, bool>                                     mHasChangeColor;
    ::ll::TypedStorage<1, 1, bool>                                     mHasMultiplicativeTintColor;
    ::ll::TypedStorage<1, 1, bool>                                     mHasUVAnim;
    // NOLINTEND
};

} // namespace mce::framebuilder
