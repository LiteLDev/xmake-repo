#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct DragonFlamingGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>          mGroundFlameAttackCount;
    ::ll::TypedStorage<4, 4, float>        mCooldownTime;
    ::ll::TypedStorage<4, 4, float>        mFlameTime;
    ::ll::TypedStorage<4, 4, float>        mRoarTime;
    ::ll::TypedStorage<4, 4, float>        mSmokeRadius;
    ::ll::TypedStorage<4, 4, float>        mSmokeTime;
    ::ll::TypedStorage<8, 24, std::string> mSmokeColor;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>            mGroundFlameAttackCount;
    ::ll::TypedStorage<4, 4, float>          mCooldownTime;
    ::ll::TypedStorage<4, 4, float>          mFlameTime;
    ::ll::TypedStorage<4, 4, float>          mRoarTime;
    ::ll::TypedStorage<4, 4, float>          mSmokeRadius;
    ::ll::TypedStorage<4, 4, float>          mSmokeTime;
    ::ll::TypedStorage<8, 32, ::std::string> mSmokeColor;
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
    MCNAPI static std::string_view const& DEFAULT_SMOKE_COLOR();

    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
