#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/VolumeDimensions.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

namespace dragon::rendering {

class VolumeScatteringData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::dragon::framerenderer::modules::VolumeDimensions> mVolumeDimensions;
    ::ll::UntypedStorage<8, 32>                                                   mCurrentLightingBuffer;
    ::ll::UntypedStorage<8, 32>                                                   mPreviousLightingBuffer;
    ::ll::TypedStorage<1, 1, bool>                                                mBufferContentsValid;
    ::ll::TypedStorage<4, 4, uint>                                                mCurrentJitterIdx;
    // NOLINTEND
};

} // namespace dragon::rendering
