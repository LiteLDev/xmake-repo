#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/phys/HitResult.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/phys/HitResult.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace PickUpdater {

#if defined(LL_PLAT_A) // @header-generator platform
struct PickUpdateResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mIsPicking;
    ::ll::TypedStorage<1, 1, bool>          mUpdateHitResults;
    ::ll::TypedStorage<1, 1, bool>          mUpdateDirection;
    ::ll::TypedStorage<1, 1, bool>          mComputePickResult;
    ::ll::TypedStorage<4, 12, ::Vec3>       mCameraPos;
    ::ll::UntypedStorage<4, 16>             mNewPickDirection;
    ::ll::TypedStorage<4, 136, ::HitResult> mHitResult;
    ::ll::TypedStorage<4, 136, ::HitResult> mLiquidHitResult;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PickUpdateResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mIsPicking;
    ::ll::TypedStorage<1, 1, bool>          mUpdateHitResults;
    ::ll::TypedStorage<1, 1, bool>          mUpdateDirection;
    ::ll::TypedStorage<1, 1, bool>          mComputePickResult;
    ::ll::TypedStorage<4, 12, ::Vec3>       mCameraPos;
    ::ll::TypedStorage<4, 12, ::Vec3>       mNewPickDirection;
    ::ll::TypedStorage<8, 136, ::HitResult> mHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult> mLiquidHitResult;
    // NOLINTEND
};
#else // @header-generator platform
struct PickUpdateResults {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace PickUpdater
