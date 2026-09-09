#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::drawcommands {

struct SamplerStateBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  mFlags;
    ::ll::TypedStorage<1, 1, uchar> mStage;
    // NOLINTEND
};

} // namespace dragon::framerenderer::drawcommands
