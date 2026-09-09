#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/ram_attack_goal_utils/RamGoalItemDropperInterface.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

namespace RamAttackGoalUtils {

class RamGoalItemDropperImpl : public ::RamAttackGoalUtils::RamGoalItemDropperInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<1, 1, bool>   mShouldTryToDropHorn;
    // NOLINTEND

public:
    // prevent constructor by default
    RamGoalItemDropperImpl& operator=(RamGoalItemDropperImpl const&);
    RamGoalItemDropperImpl(RamGoalItemDropperImpl const&);
    RamGoalItemDropperImpl();
};

} // namespace RamAttackGoalUtils
