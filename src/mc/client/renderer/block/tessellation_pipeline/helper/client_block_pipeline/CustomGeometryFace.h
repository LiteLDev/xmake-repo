#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/UvTransform.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/UvTransform.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct CustomGeometryFace {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                 mMaterialInstance;
    ::ll::TypedStorage<4, 32, ::ClientBlockPipeline::UvTransform> mUvTransform;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CustomGeometryFace {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                 mMaterialInstance;
    ::ll::TypedStorage<4, 32, ::ClientBlockPipeline::UvTransform> mUvTransform;
    // NOLINTEND
};
#else // @header-generator platform
struct CustomGeometryFace {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
