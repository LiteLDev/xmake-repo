#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

#endif // @header-generator platform
namespace RamAttackGoalUtils {

#if defined(LL_PLAT_A) // @header-generator platform
class RamGoalItemDropperInterface {};
#else // @header-generator platform
class RamGoalItemDropperInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RamGoalItemDropperInterface() = default;

    virtual void tryDropHorn(::Vec3 dropPos) const = 0;

    virtual void checkForHornDropOnCollision(::Vec3 collisionPos) = 0;

    virtual void dontDropHorn() = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace RamAttackGoalUtils
