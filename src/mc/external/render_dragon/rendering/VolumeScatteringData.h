#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/VolumeDimensions.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class VolumeScatteringData {};
#endif // @header-generator platform

} // namespace dragon::rendering
