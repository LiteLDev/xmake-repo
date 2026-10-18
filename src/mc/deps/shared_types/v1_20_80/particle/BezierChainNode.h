#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_20_80 {

struct BezierChainNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLeftValue;
    ::ll::TypedStorage<4, 4, float> mRightValue;
    ::ll::TypedStorage<4, 4, float> mLeftSlope;
    ::ll::TypedStorage<4, 4, float> mRightSlope;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
