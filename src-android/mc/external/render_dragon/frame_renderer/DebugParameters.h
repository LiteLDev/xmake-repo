#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/ShaderSDKParameters.h"

namespace dragon::framerenderer {

struct DebugParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mGpuValidationEnabled;
    ::ll::TypedStorage<1, 1, bool> mLoadRenderdocDLL;
    ::ll::TypedStorage<1, 1, bool> mGpuValidationVerbose;
    ::ll::TypedStorage<1, 1, bool> mGpuValidationOutputManagerEnabled;
    ::ll::TypedStorage<1, 1, bool> mGpuValidationDisableErrorSupress;
    ::ll::TypedStorage<1, 1, bool> mBgfxDebugTraceEnabled;
    ::ll::TypedStorage<8, 40, std::optional<dragon::framerenderer::ShaderSDKParameters>> mShaderSDKParameters;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugParameters& operator=(DebugParameters const&);
    DebugParameters();
};

} // namespace dragon::framerenderer
