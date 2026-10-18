#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct GoHomeGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                        mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, int>                                                          mInterval;
    ::ll::TypedStorage<4, 4, float>                                                        mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                                                        mCalculateNewPathRadius;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnHomeTriggers;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnFailedTriggers;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                            mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, int>                                                              mInterval;
    ::ll::TypedStorage<4, 4, float>                                                            mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                                                            mCalculateNewPathRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnHomeTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnFailedTriggers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GoHomeGoalDefinition& operator=(GoHomeGoalDefinition const&);
    GoHomeGoalDefinition(GoHomeGoalDefinition const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    GoHomeGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_20::GoHomeGoalDefinition& operator=(::SharedTypes::v1_26_20::GoHomeGoalDefinition&&);
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_20::GoHomeGoalDefinition& operator=(::SharedTypes::v1_26_20::GoHomeGoalDefinition&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~GoHomeGoalDefinition();
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_26_20::GoHomeGoalDefinition const&) const;

    MCAPI ~GoHomeGoalDefinition();
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
    MCNAPI static float const& DEFAULT_CALCULATE_NEW_PATH_RADIUS();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_CALCULATE_NEW_PATH_RADIUS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_GOAL_RADIUS();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_GOAL_RADIUS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_INTERVAL();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_SPEED_MULTIPLIER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_SPEED_MULTIPLIER();

    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
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

} // namespace SharedTypes::v1_26_20
