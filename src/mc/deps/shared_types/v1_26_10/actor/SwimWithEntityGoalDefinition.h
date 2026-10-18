#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_120/actor/MobDescriptor.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_120 { struct MobDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_10 {

struct SwimWithEntityGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                               mSuccessRate;
    ::ll::TypedStorage<4, 4, float>                                               mChanceToStop;
    ::ll::TypedStorage<4, 4, float>                                               mIntervalRefreshTime;
    ::ll::TypedStorage<4, 4, float>                                               mCatchUpThreshold;
    ::ll::TypedStorage<4, 4, float>                                               mMatchDirectionThreshold;
    ::ll::TypedStorage<4, 4, float>                                               mCatchUpMultiplier;
    ::ll::TypedStorage<4, 4, float>                                               mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                                               mSearchRange;
    ::ll::TypedStorage<4, 4, float>                                               mStopDistance;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::MobDescriptor>> mTargetTypes;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                   mSuccessRate;
    ::ll::TypedStorage<4, 4, float>                                                   mChanceToStop;
    ::ll::TypedStorage<4, 4, float>                                                   mIntervalRefreshTime;
    ::ll::TypedStorage<4, 4, float>                                                   mCatchUpThreshold;
    ::ll::TypedStorage<4, 4, float>                                                   mMatchDirectionThreshold;
    ::ll::TypedStorage<4, 4, float>                                                   mCatchUpMultiplier;
    ::ll::TypedStorage<4, 4, float>                                                   mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                                                   mSearchRange;
    ::ll::TypedStorage<4, 4, float>                                                   mStopDistance;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::MobDescriptor>> mTargetTypes;
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
