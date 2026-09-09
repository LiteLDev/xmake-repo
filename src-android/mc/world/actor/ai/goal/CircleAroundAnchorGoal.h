#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct GoalId;
// clang-format on

class CircleAroundAnchorGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<4, 4, float>                     mRadiusModifier;
    ::ll::TypedStorage<4, 4, float>                     mRadiusChangeChance;
    ::ll::TypedStorage<4, 4, float>                     mHeightChangeChance;
    ::ll::TypedStorage<4, 4, float>                     mGoalRadiusSquared;
    ::ll::TypedStorage<4, 4, float>                     mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                     mAngleModifier;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRadiusRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mHeightOffsetRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mAboveTargetRange;
    ::ll::TypedStorage<4, 4, float>                     mClockwise;
    ::ll::TypedStorage<4, 4, float>                     mCurrentAngle;
    ::ll::TypedStorage<4, 4, float>                     mCurrentHeight;
    ::ll::TypedStorage<4, 4, float>                     mCurrentRadius;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mAnchorPoint;
    // NOLINTEND

public:
    // prevent constructor by default
    CircleAroundAnchorGoal& operator=(CircleAroundAnchorGoal const&);
    CircleAroundAnchorGoal(CircleAroundAnchorGoal const&);
    CircleAroundAnchorGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CircleAroundAnchorGoal();

    virtual bool canUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CircleAroundAnchorGoal(::Mob&);

    MCNAPI void _selectNext();

    MCNAPI void _setAnchorAboveTarget();
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

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
