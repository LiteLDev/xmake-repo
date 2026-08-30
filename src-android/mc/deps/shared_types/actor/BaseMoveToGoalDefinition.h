#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

struct BaseMoveToGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float> mCooldownTimeout;
    ::ll::TypedStorage<4, 4, float> mGoalRadius;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& GOAL_RADIUS_DESCRIPTION();

    MCNAPI static std::string_view const& NAME();

    MCNAPI static std::string_view const& SPEED_MULTIPLIER_DESCRIPTION();

    MCNAPI static std::string_view const& TIMEOUT_COOLDOWN_DESCRIPTION();
    // NOLINTEND
};

} // namespace SharedTypes
