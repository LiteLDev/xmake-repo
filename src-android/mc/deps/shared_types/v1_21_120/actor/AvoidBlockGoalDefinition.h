#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct AvoidBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                        mWalkSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                                        mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                                                          mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                                          mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                                          mInterval;
    ::ll::TypedStorage<8, 24, std::string>                                                 mMethod;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>>            mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnEscapedTriggers;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                       mSoundEvent;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                                    mSoundIntervalRange;
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidBlockGoalDefinition& operator=(AvoidBlockGoalDefinition const&);
    AvoidBlockGoalDefinition(AvoidBlockGoalDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_120::AvoidBlockGoalDefinition&
    operator=(::SharedTypes::v1_21_120::AvoidBlockGoalDefinition&&);

    MCNAPI ~AvoidBlockGoalDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DEFAULT_INTERVAL();

    MCNAPI static int const& DEFAULT_SEARCH_HEIGHT();

    MCNAPI static int const& DEFAULT_SEARCH_RANGE();

    MCNAPI static ::SharedTypes::FloatRange const& DEFAULT_SOUND_INTERVAL();

    MCNAPI static float const& DEFAULT_SPRINT_SPEED_MODIFIER();

    MCNAPI static std::string_view const& DEFAULT_TARGET_SELECTION_METHOD();

    MCNAPI static float const& DEFAULT_WALK_SPEED_MODIFIER();

    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
