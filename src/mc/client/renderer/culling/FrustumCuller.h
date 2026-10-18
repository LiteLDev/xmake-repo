#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Frustum.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Matrix;
// clang-format on

class FrustumCuller {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 192, ::Frustum> mFrustumData;
    ::ll::TypedStorage<4, 12, ::Vec3>     mOff;
    // NOLINTEND

public:
    // prevent constructor by default
    FrustumCuller(FrustumCuller const&);
};
#else // @header-generator platform
class FrustumCuller {};
#endif // @header-generator platform
