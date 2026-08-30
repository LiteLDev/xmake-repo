#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/actor/MoveToPOIGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct SleepGoalDefinition : public ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSleepColliderHeight;
    ::ll::TypedStorage<4, 4, float> mSleepColliderWidth;
    ::ll::TypedStorage<1, 1, bool>  mCanSleepWhileRiding;
    ::ll::TypedStorage<4, 4, float> mSleepYOffset;
    ::ll::UntypedStorage<4, 4>      mPOIType;
    ::ll::TypedStorage<4, 4, float> mCooldown;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& CAN_SLEEP_WHILE_RIDING_DESCRIPTION();

    MCNAPI static std::string_view const& COOLDOWN_DESCRIPTION();

    MCNAPI static std::string_view const& DESCRIPTION();

    MCNAPI static std::string_view const& NAME();

    MCNAPI static std::string_view const& SLEEP_COLLIDER_HEIGHT_DESCRIPTION();

    MCNAPI static std::string_view const& SLEEP_COLLIDER_WIDTH_DESCRIPTION();

    MCNAPI static std::string_view const& SLEEP_Y_OFFSET_DESCRIPTION();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
