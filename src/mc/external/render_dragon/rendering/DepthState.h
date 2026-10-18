#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/rendering/ComparisonFunction.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
struct DepthState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mWriteDepth;
    ::ll::TypedStorage<1, 1, ::dragon::rendering::ComparisonFunction> mComparisonFunction;
    // NOLINTEND
};
#else // @header-generator platform
struct DepthState {};
#endif // @header-generator platform

} // namespace dragon::rendering
