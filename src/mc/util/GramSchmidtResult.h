#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace mce::MathUtility {

struct GramSchmidtResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3> mForwardBasis;
    ::ll::TypedStorage<4, 12, ::Vec3> mUpBasis;
    ::ll::TypedStorage<4, 12, ::Vec3> mRightBasis;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnka9662f;
    ::ll::UntypedStorage<4, 12> mUnkad9e80;
    ::ll::UntypedStorage<4, 12> mUnk3078e7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GramSchmidtResult& operator=(GramSchmidtResult const&);
    GramSchmidtResult(GramSchmidtResult const&);
    GramSchmidtResult();
#endif // @header-generator platform
};

} // namespace mce::MathUtility
