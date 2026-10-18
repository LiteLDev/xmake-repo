#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/item_transforms/Type.h"
#include "mc/deps/core/math/Matrix.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/item_transforms/Type.h"
#include "mc/deps/core/math/Matrix.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline::ItemTransforms {

#if defined(LL_PLAT_A) // @header-generator platform
struct Transform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ClientBlockPipeline::ItemTransforms::Type> mType;
    ::ll::TypedStorage<4, 64, ::Matrix>                                   mTransform;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Transform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ClientBlockPipeline::ItemTransforms::Type> mType;
    ::ll::TypedStorage<4, 64, ::Matrix>                                   mTransform;
    // NOLINTEND
};
#else // @header-generator platform
struct Transform {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline::ItemTransforms
