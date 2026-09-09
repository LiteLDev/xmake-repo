#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Resolution.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

namespace dragon::rendering {

class UpscalingCameraData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mCurrentViewProjectionMatrix;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mPreviousViewProjectionMatrix;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>    mCurrentWorldOrigin;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>    mPreviousWorldOrigin;
    ::ll::UntypedStorage<2, 4>                                            mScreenResolution;
    ::ll::UntypedStorage<8, 32>                                           mCurrentUpscalingBuffer;
    ::ll::UntypedStorage<8, 32>                                           mPreviousUpscalingBuffer;
    ::ll::TypedStorage<1, 1, bool>                                        mBufferContentsValid;
    // NOLINTEND
};

} // namespace dragon::rendering
