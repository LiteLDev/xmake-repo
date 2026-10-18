#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/RenderContext.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framegraph::dependency { template<typename T0> class BindShaderBuffer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::modules {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct LightClusterData {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules
