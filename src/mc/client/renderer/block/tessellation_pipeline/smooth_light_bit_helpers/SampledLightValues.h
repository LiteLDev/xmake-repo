#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline::SmoothLightBitHelpers {

#if defined(LL_PLAT_A) // @header-generator platform
struct SampledLightValues {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> mLightUvs;
    ::ll::TypedStorage<4, 4, float>  mAoValue;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SampledLightValues {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> mLightUvs;
    ::ll::TypedStorage<4, 4, float>  mAoValue;
    // NOLINTEND
};
#else // @header-generator platform
struct SampledLightValues {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline::SmoothLightBitHelpers
