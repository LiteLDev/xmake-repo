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
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnEscapeTrigger;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>             mSoundEvent;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                          mSoundIntervalRange;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_120::EntityTypes>             mAvoidMobs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AvoidMobTypeGoalDefinition(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition const&);

    MCNAPI ~AvoidMobTypeGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::FloatRange const& DEFAULT_SOUND_INTERVAL();

    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
