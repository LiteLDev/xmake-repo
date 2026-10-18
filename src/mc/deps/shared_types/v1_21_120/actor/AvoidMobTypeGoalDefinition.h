#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_120/actor/EntityTypes.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct AvoidMobTypeGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                               mIgnoreVisibility;
    ::ll::TypedStorage<4, 4, int>                                                mAvoidTargetPositionDistanceXZ;
    ::ll::TypedStorage<4, 4, int>                                                mAvoidTargetPositionDistanceY;
    ::ll::TypedStorage<4, 4, float>                                              mMaximumDistance;
    ::ll::TypedStorage<4, 4, float>                                              mMaximumFlee;
    ::ll::TypedStorage<4, 4, float>                                              mProbabilityPerStrength;
    ::ll::TypedStorage<4, 4, float>                                              mRiverSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                              mSprintDistance;
    ::ll::TypedStorage<4, 4, float>                                              mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                              mWalkSpeedModifier;
    ::ll::TypedStorage<1, 1, bool>                                               mRemoveTarget;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnEscapeTrigger;
#else // @header-generator platform
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnEscapeTrigger;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>             mSoundEvent;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                          mSoundIntervalRange;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_120::EntityTypes>             mAvoidMobs;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    AvoidMobTypeGoalDefinition& operator=(AvoidMobTypeGoalDefinition const&);
    AvoidMobTypeGoalDefinition(AvoidMobTypeGoalDefinition const&);
    AvoidMobTypeGoalDefinition();

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AvoidMobTypeGoalDefinition(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition const&);
#else // @header-generator platform
    MCAPI AvoidMobTypeGoalDefinition(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AvoidMobTypeGoalDefinition();
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition&
    operator=(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition&&);
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
    MCNAPI static ::SharedTypes::FloatRange const& DEFAULT_SOUND_INTERVAL();

    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition&&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
