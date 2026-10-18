#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_10 {

struct WorkGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                mMinSoundDelay;
    ::ll::TypedStorage<4, 4, int>                                                mMaxSoundDelay;
    ::ll::TypedStorage<4, 4, int>                                                mGoalCooldown;
    ::ll::TypedStorage<4, 4, int>                                                mActiveTime;
    ::ll::TypedStorage<1, 1, bool>                                               mCanWorkInRain;
    ::ll::TypedStorage<4, 4, int>                                                mWorkInRainTolerance;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnArrival;
#else // @header-generator platform
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnArrival;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                              mSpeedMod;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
