#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/rendering/ComparisonFunction.h"
#include "mc/external/render_dragon/rendering/StencilOp.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
struct StencilFaceDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::dragon::rendering::ComparisonFunction> mComparisonFunc;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::StencilOp>          mDepthFailOp;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::StencilOp>          mPassOp;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::StencilOp>          mFailOp;
    // NOLINTEND
};
#else // @header-generator platform
struct StencilFaceDescription {};
#endif // @header-generator platform

} // namespace dragon::rendering
