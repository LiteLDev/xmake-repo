#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/ram_attack_goal_utils/RamGoalItemDropperInterface.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

#endif // @header-generator platform
namespace RamAttackGoalUtils {

#if defined(LL_PLAT_A) // @header-generator platform
class RamGoalNoItemDropper : public ::RamAttackGoalUtils::RamGoalItemDropperInterface {};
#else // @header-generator platform
class RamGoalNoItemDropper : public ::RamAttackGoalUtils::RamGoalItemDropperInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tryDropHorn(::Vec3 dropPos) const /*override*/;

    virtual void checkForHornDropOnCollision(::Vec3 collisionPos) /*override*/;

    virtual void dontDropHorn() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $tryDropHorn(::Vec3 dropPos) const;

    MCFOLD void $checkForHornDropOnCollision(::Vec3 collisionPos);

    MCFOLD void $dontDropHorn();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace RamAttackGoalUtils
