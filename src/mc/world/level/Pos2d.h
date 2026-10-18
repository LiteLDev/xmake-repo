#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/BlockPos.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
class Pos2d {
#else // @header-generator platform
class Pos2d : public ll::math::intN2<Pos2d> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND
#else // @header-generator platform
    using intN2::intN2;

    [[nodiscard]] constexpr Pos2d(BlockPos const& pos) : intN2(pos.x, pos.z) {}
#endif // @header-generator platform
};
