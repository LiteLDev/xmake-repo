#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/RenderContext.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framegraph::dependency { template<typename T0> class BindShaderBuffer; }
// clang-format on

namespace dragon::framerenderer::modules {

struct LightClusterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                        mLights;
    ::ll::UntypedStorage<8, 24>                                        mLookupBuffer;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mClusterDimensions;
    ::ll::TypedStorage<4, 4, float>                                    mClusterNear;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules
