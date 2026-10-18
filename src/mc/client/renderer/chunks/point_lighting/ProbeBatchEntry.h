#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace PointLighting {

#if defined(LL_PLAT_A) // @header-generator platform
struct ProbeBatchEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mProbePos;
    ::ll::TypedStorage<4, 4, float>       mDistanceFromCamera;
    ::ll::TypedStorage<1, 1, bool>        mIsFrustumVisible;
    ::ll::TypedStorage<1, 1, bool>        mIsDirty;
    ::ll::TypedStorage<1, 1, bool>        mIsBlockChange;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ProbeBatchEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mProbePos;
    ::ll::TypedStorage<4, 4, float>       mDistanceFromCamera;
    ::ll::TypedStorage<1, 1, bool>        mIsFrustumVisible;
    ::ll::TypedStorage<1, 1, bool>        mIsDirty;
    ::ll::TypedStorage<1, 1, bool>        mIsBlockChange;
    // NOLINTEND
};
#else // @header-generator platform
struct ProbeBatchEntry {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace PointLighting
