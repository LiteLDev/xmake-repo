#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct MeleeAttackBaseGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                       mAttackTypes;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAttack;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnKill;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                     mAttackTypes;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAttack;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnKill;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                              mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                                              mMeleeFov;
    ::ll::TypedStorage<4, 4, float>                                              mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                                              mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, int>                                                mRandomStopInterval;
    ::ll::TypedStorage<1, 1, bool>                                               mAttackOnce;
    ::ll::TypedStorage<1, 1, bool>                                               mCanSpreadOnFire;
    ::ll::TypedStorage<1, 1, bool>                                               mRequireCompletePath;
    ::ll::TypedStorage<1, 1, bool>                                               mTrackTarget;
    ::ll::TypedStorage<1, 1, bool>                                               mHijackMountNavigation;
    ::ll::TypedStorage<4, 4, float>                                              mMinPathTime;
    ::ll::TypedStorage<4, 4, float>                                              mMaxPathTime;
    ::ll::TypedStorage<4, 4, float>                                              mPathFailTimeIncrease;
    ::ll::TypedStorage<4, 4, float>                                              mInnerBoundaryTimeIncrease;
    ::ll::TypedStorage<4, 4, float>                                              mOuterBoundaryTimeIncrease;
    ::ll::TypedStorage<4, 4, float>                                              mPathInnerBoundary;
    ::ll::TypedStorage<4, 4, float>                                              mPathOuterBoundary;
    ::ll::TypedStorage<4, 4, float>                                              mSpeedMultiplier;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    MeleeAttackBaseGoalDefinition& operator=(MeleeAttackBaseGoalDefinition const&);
    MeleeAttackBaseGoalDefinition(MeleeAttackBaseGoalDefinition const&);
#else // @header-generator platform
    MeleeAttackBaseGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition&
#else // @header-generator platform
    MCAPI MeleeAttackBaseGoalDefinition(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition&&);

    MCAPI MeleeAttackBaseGoalDefinition(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const&);

    MCAPI ::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition&
#endif // @header-generator platform
    operator=(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition&
    operator=(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~MeleeAttackBaseGoalDefinition();
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const&) const;

    MCAPI ~MeleeAttackBaseGoalDefinition();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
