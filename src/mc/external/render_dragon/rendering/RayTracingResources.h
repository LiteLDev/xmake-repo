#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/Blob.h"
#include "mc/external/bgfx/RayTracingResources.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
class RayTracingResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                          mDisplayResourcesAllocated;
    ::ll::TypedStorage<4, 4, uint>                          mDoubleBufferWriteIdx;
    ::ll::TypedStorage<8, 192, ::bgfx::RayTracingResources> mBgfxRayTracingResources;
    ::ll::UntypedStorage<8, 1776>                           mhRtBuffers;
    ::ll::UntypedStorage<4, 1024>                           mJitterSamples;
    ::ll::TypedStorage<4, 4, uint>                          mCurrentJitterIdx;
    ::ll::TypedStorage<4, 4, uint>                          mPBRTextureDataCounter;
    ::ll::TypedStorage<8, 16, ::cg::Blob>                   mLUTData;
    ::ll::TypedStorage<4, 4, int>                           mLUTStride;
    ::ll::TypedStorage<1, 1, bool>                          mPBRTextureDataIsDirty;
    // NOLINTEND
};
#else // @header-generator platform
class RayTracingResources {};
#endif // @header-generator platform

} // namespace dragon::rendering
