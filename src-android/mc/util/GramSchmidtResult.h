#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

namespace mce::MathUtility {

struct GramSchmidtResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mForwardBasis;
    ::ll::TypedStorage<4, 12, ::Vec3> mUpBasis;
    ::ll::TypedStorage<4, 12, ::Vec3> mRightBasis;
    // NOLINTEND
};

} // namespace mce::MathUtility
