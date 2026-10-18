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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mSleepColliderHeight;
    ::ll::TypedStorage<4, 4, float> mSleepColliderWidth;
    ::ll::TypedStorage<1, 1, bool>  mCanSleepWhileRiding;
    ::ll::TypedStorage<4, 4, float> mSleepYOffset;
    ::ll::UntypedStorage<4, 4>      mPOIType;
    ::ll::TypedStorage<4, 4, float> mCooldown;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                     mSleepColliderHeight;
    ::ll::TypedStorage<4, 4, float>                                                     mSleepColliderWidth;
    ::ll::TypedStorage<1, 1, bool>                                                      mCanSleepWhileRiding;
    ::ll::TypedStorage<4, 4, float>                                                     mSleepYOffset;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition::POIType> mPOIType;
    ::ll::TypedStorage<4, 4, float>                                                     mCooldown;
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
    MCNAPI static std::string_view const& CAN_SLEEP_WHILE_RIDING_DESCRIPTION();

    MCNAPI static std::string_view const& COOLDOWN_DESCRIPTION();

    MCNAPI static std::string_view const& DESCRIPTION();

    MCNAPI static std::string_view const& NAME();

    MCNAPI static std::string_view const& SLEEP_COLLIDER_HEIGHT_DESCRIPTION();

    MCNAPI static std::string_view const& SLEEP_COLLIDER_WIDTH_DESCRIPTION();

    MCNAPI static std::string_view const& SLEEP_Y_OFFSET_DESCRIPTION();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
