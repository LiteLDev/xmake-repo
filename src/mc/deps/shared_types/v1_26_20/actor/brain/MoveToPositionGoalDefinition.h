#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_10/actor/BaseGenericGoalDefinition.h"

// auto generated forward declare list
// clang-format off
struct WorldBlockPosition;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemoryGoals {

struct MoveToPositionGoalDefinition : public ::SharedTypes::v1_26_10::Brain::BaseGenericGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                        mSpeedMod;
    ::ll::TypedStorage<4, 4, float>                                                        mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                                                        mMaximumRange;
    ::ll::TypedStorage<4, 12, std::variant<float, SharedTypes::FloatRange>>                mIntervalSeconds;
    ::ll::UntypedStorage<8, 40>                                                            mTargetMemory;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnReachTriggers;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                             mSpeedMod;
    ::ll::TypedStorage<4, 4, float>                                             mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                                             mMaximumRange;
    ::ll::TypedStorage<4, 12, ::std::variant<float, ::SharedTypes::FloatRange>> mIntervalSeconds;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>
                                                                                               mTargetMemory;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnReachTriggers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MoveToPositionGoalDefinition& operator=(MoveToPositionGoalDefinition const&);
    MoveToPositionGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
#else // @header-generator platform
    MCAPI
#endif // @header-generator platform
    MoveToPositionGoalDefinition(::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition&
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition&
#endif // @header-generator platform
    operator=(::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~MoveToPositionGoalDefinition();
#else // @header-generator platform
    MCAPI ~MoveToPositionGoalDefinition();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_26_20::Brain::MemoryGoals::MoveToPositionGoalDefinition const&);
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

} // namespace SharedTypes::v1_26_20::Brain::MemoryGoals
