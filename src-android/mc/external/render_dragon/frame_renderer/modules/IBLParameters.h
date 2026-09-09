#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/IBLConvolutionType.h"

namespace dragon::framerenderer::modules {

struct IBLParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                 mDimension;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::IBLConvolutionType> mConvolutionType;
    ::ll::TypedStorage<4, 4, uint>                                                 mSampleCount;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules
