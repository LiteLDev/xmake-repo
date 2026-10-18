#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

struct TimerActorFlagBaseGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                          mDurationRangeSeconds;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                          mCooldownRangeSeconds;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnStartEvent;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnEndEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnStartEvent;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnEndEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    TimerActorFlagBaseGoalDefinition& operator=(TimerActorFlagBaseGoalDefinition const&);
#else // @header-generator platform
#endif // @header-generator platform
    TimerActorFlagBaseGoalDefinition(TimerActorFlagBaseGoalDefinition const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TimerActorFlagBaseGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::TimerActorFlagBaseGoalDefinition&
    operator=(::SharedTypes::TimerActorFlagBaseGoalDefinition&&);
#else // @header-generator platform
    MCAPI TimerActorFlagBaseGoalDefinition(::SharedTypes::TimerActorFlagBaseGoalDefinition&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~TimerActorFlagBaseGoalDefinition();
#else // @header-generator platform
    MCAPI ::SharedTypes::TimerActorFlagBaseGoalDefinition& operator=(::SharedTypes::TimerActorFlagBaseGoalDefinition&&);

    MCAPI ::SharedTypes::TimerActorFlagBaseGoalDefinition&
    operator=(::SharedTypes::TimerActorFlagBaseGoalDefinition const&);

    MCAPI ~TimerActorFlagBaseGoalDefinition();
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
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::FloatRange const& DEFAULT_COOLDOWN_RANGE();

    MCNAPI static ::SharedTypes::FloatRange const& DEFAULT_DURATION_RANGE();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::TimerActorFlagBaseGoalDefinition&&);
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

} // namespace SharedTypes
