#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToVillageGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Mob;
// clang-format on

class StrollTowardsVillageGoal : public ::MoveToVillageGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mStartChance;
    // NOLINTEND

public:
    // prevent constructor by default
    StrollTowardsVillageGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StrollTowardsVillageGoal();

    virtual bool canUse();

    virtual void appendDebugInfo(std::string&) const;

    virtual ::BlockPos _selectRandomPosInVillage();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StrollTowardsVillageGoal(::Mob&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI ::BlockPos $_selectRandomPosInVillage();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
