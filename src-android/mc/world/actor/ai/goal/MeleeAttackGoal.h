#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MeleeAttackBaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Mob;
class Vec3;
struct GoalId;
// clang-format on

class MeleeAttackGoal : public ::MeleeAttackBaseGoal {
public:
    // MeleeAttackGoal inner types define
    using AttackReachEvaluator =
        bool (*)(::Mob const&, ::Vec3 const&, float const, float const, float const, float const, int const);

    using LineOfSightEvaluator = bool (*)(::Mob const&, ::Actor const&);

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, bool(*)(::Mob const&, ::Vec3 const&, float const, float const, float const, float const, int const)> mReachEvaluator;
    ::ll::TypedStorage<8, 8, bool(*)(::Mob const&, ::Actor const&)> mLineOfSightEvaluator;
    ::ll::TypedStorage<4, 4, float> mReachMultiplier;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MeleeAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MeleeAttackGoal();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MeleeAttackGoal(::Mob&);

    MCNAPI float _getAttackReachSqr(::Actor const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    _canReachTarget(::Mob const&, ::Vec3 const&, float const, float const, float const, float const, int const);

    MCNAPI static bool
    _canReachTargetLegacy(::Mob const&, ::Vec3 const&, float const, float const, float const, float const, int const);

    MCNAPI static bool _isTargetInLineOfSight(::Mob const&, ::Actor const&);

    MCNAPI static bool _isTargetInLineOfSightLegacy(::Mob const&, ::Actor const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& MIN_3D_ATTACK_VERSION();

    MCNAPI static ::BaseGameVersion const& MIN_HIT_THROUGH_WALL_FIX_VERSION();
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
    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
