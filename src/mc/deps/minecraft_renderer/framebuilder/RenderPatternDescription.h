#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderPatternDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 136>    mPatternColors;
    ::ll::UntypedStorage<8, 136>    mPatternUVOffsetsAndScales;
    ::ll::TypedStorage<4, 4, float> mPatternCount;
    // NOLINTEND
};
#else // @header-generator platform
struct RenderPatternDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
