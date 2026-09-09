#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/AccelerationStructureHandle.h"
#include "mc/external/bgfx/UniformHandle.h"

namespace dragon::framerenderer::drawcommands {

struct AccelerationStructureBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                               mStage;
    ::ll::TypedStorage<2, 2, ::bgfx::UniformHandle>               mHandle;
    ::ll::TypedStorage<2, 2, ::bgfx::AccelerationStructureHandle> mAccelerationStructure;
    // NOLINTEND
};

} // namespace dragon::framerenderer::drawcommands
