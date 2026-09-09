#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Resolution.h"
#include "mc/external/bgfx/DLSSOptions.h"
#include "mc/external/bgfx/RayTracingConfiguration.h"
#include "mc/external/render_dragon/frame_renderer/modules/rtxpostfx/BloomParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/rtxpostfx/ToneMappingParameters.h"
#include "mc/external/render_dragon/rendering/RtPostFxDebugParameters.h"

namespace dragon::rendering {

class RayTracingFeatureConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mRtxOn;
    ::ll::TypedStorage<4, 16, ::bgfx::DLSSOptions>              mDlssOptions;
    ::ll::TypedStorage<1, 1, bool>                              mExecutePostFXinRTXOff;
    ::ll::UntypedStorage<2, 4>                                  mScreenResolution;
    ::ll::TypedStorage<4, 4, float>                             mRenderScale;
    ::ll::TypedStorage<4, 488, ::bgfx::RayTracingConfiguration> mBgfxRayTracingConfiguration;
    ::ll::TypedStorage<4, 48, ::dragon::framerenderer::modules::rtxpostfx::ToneMappingParameters> mToneMappingParams;
    ::ll::TypedStorage<4, 12, ::dragon::framerenderer::modules::rtxpostfx::BloomParameters>       mBloomParams;
    ::ll::TypedStorage<4, 24, ::dragon::rendering::RtPostFxDebugParameters>                       mPostFxDebugParams;
    // NOLINTEND
};

} // namespace dragon::rendering
