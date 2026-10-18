#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/AccelerationStructureHandle.h"
#include "mc/external/bgfx/UniformHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::drawcommands {

#if defined(LL_PLAT_A) // @header-generator platform
struct AccelerationStructureBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                               mStage;
    ::ll::TypedStorage<2, 2, ::bgfx::UniformHandle>               mHandle;
    ::ll::TypedStorage<2, 2, ::bgfx::AccelerationStructureHandle> mAccelerationStructure;
    // NOLINTEND
};
#else // @header-generator platform
struct AccelerationStructureBinding {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::drawcommands
