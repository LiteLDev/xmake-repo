#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_10/actor/BaseGenericGoalDefinition.h"

// auto generated forward declare list
// clang-format off
struct WorldBlockPosition;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemoryGoals {

struct MoveToPositionGoalDefinition : public ::SharedTypes::v1_26_10::Brain::BaseGenericGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                        mSpeedMod;
    ::ll::TypedStorage<4, 4, float>                                                        mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                                                        mMaximumRange;
    ::ll::TypedStorage<4, 12, std::variant<float, SharedTypes::FloatRange>>                mIntervalSeconds;
    ::ll::UntypedStorage<8, 40>                                                            mTargetMemory;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnReachTriggers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    MoveToPositionGoalDefinition(::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition const&);

    MCNAPI ::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition&
    operator=(::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition&&);

    MCNAPI bool operator==(::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition const&) const;

    MCNAPI ~MoveToPositionGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemoryGoals
