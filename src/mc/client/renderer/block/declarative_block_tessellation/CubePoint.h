#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace DeclarativeBlockTessellation {

#if defined(LL_PLAT_A) // @header-generator platform
struct CubePoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPosTxCenterBlock;
    ::ll::TypedStorage<4, 12, ::Vec3>     mPosMetersNorthWestCorner;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CubePoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPosTxCenterBlock;
    ::ll::TypedStorage<4, 12, ::Vec3>     mPosMetersNorthWestCorner;
    // NOLINTEND
};
#else // @header-generator platform
struct CubePoint {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace DeclarativeBlockTessellation
