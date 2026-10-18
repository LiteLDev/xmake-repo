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
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, bool(*)(::Mob const&, ::Vec3 const&, float const, float const, float const, float const, int const)> mReachEvaluator;
    ::ll::TypedStorage<8, 8, bool(*)(::Mob const&, ::Actor const&)> mLineOfSightEvaluator;
    ::ll::TypedStorage<4, 4, float> mReachMultiplier;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        8,
        bool (*)(::Mob const&, ::Vec3 const&, float const, float const, float const, float const, int const)>
                                                                     mReachEvaluator;
    ::ll::TypedStorage<8, 8, bool (*)(::Mob const&, ::Actor const&)> mLineOfSightEvaluator;
    ::ll::TypedStorage<4, 4, float>                                  mReachMultiplier;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MeleeAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MeleeAttackGoal();
#else // @header-generator platform
    virtual ~MeleeAttackGoal() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MeleeAttackGoal(::Mob&);

    MCNAPI float _getAttackReachSqr(::Actor const&) const;
#else // @header-generator platform
    MCAPI explicit MeleeAttackGoal(::Mob& mob);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool
    _canReachTarget(::Mob const&, ::Vec3 const&, float const, float const, float const, float const, int const);
#else // @header-generator platform
    MCAPI static bool _canReachTarget(
        ::Mob const&  mob,
        ::Vec3 const& targetPosition,
        float         attackReachSq,
        float         targetMinY,
        float         targetMaxY,
        float         targetXZDistanceSqr,
        int           attackTicks
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool
    _canReachTargetLegacy(::Mob const&, ::Vec3 const&, float const, float const, float const, float const, int const);
#else // @header-generator platform
    MCAPI static bool _canReachTargetLegacy(
        ::Mob const& mob,
        ::Vec3 const&,
        float attackReachSq,
        float targetMinY,
        float targetMaxY,
        float targetXZDistanceSqr,
        int   attackTicks
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _isTargetInLineOfSight(::Mob const&, ::Actor const&);
#else // @header-generator platform
    MCAPI static bool _isTargetInLineOfSight(::Mob const& mob, ::Actor const& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _isTargetInLineOfSightLegacy(::Mob const&, ::Actor const&);
#else // @header-generator platform
    MCAPI static bool _isTargetInLineOfSightLegacy(::Mob const& mob, ::Actor const& target);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BaseGameVersion const& MIN_3D_ATTACK_VERSION();
#else // @header-generator platform
    MCAPI static ::BaseGameVersion const& MIN_3D_ATTACK_VERSION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BaseGameVersion const& MIN_HIT_THROUGH_WALL_FIX_VERSION();
#else // @header-generator platform
    MCAPI static ::BaseGameVersion const& MIN_HIT_THROUGH_WALL_FIX_VERSION();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Mob& mob);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
