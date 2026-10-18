#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/IBLConvolutionType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::modules {

#if defined(LL_PLAT_A) // @header-generator platform
struct IBLParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                 mDimension;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::IBLConvolutionType> mConvolutionType;
    ::ll::TypedStorage<4, 4, uint>                                                 mSampleCount;
    // NOLINTEND
};
#else // @header-generator platform
struct IBLParameters {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules
