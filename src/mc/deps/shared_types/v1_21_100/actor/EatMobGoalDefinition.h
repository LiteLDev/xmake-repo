#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct EatMobGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>        mRunSpeed;
    ::ll::TypedStorage<4, 4, float>        mEatAnimationTime;
    ::ll::TypedStorage<4, 4, float>        mPullInForce;
    ::ll::TypedStorage<4, 4, float>        mReachMobDistance;
    ::ll::TypedStorage<8, 24, std::string> mEatMobSound;
    ::ll::TypedStorage<8, 24, std::string> mLootTable;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>          mRunSpeed;
    ::ll::TypedStorage<4, 4, float>          mEatAnimationTime;
    ::ll::TypedStorage<4, 4, float>          mPullInForce;
    ::ll::TypedStorage<4, 4, float>          mReachMobDistance;
    ::ll::TypedStorage<8, 32, ::std::string> mEatMobSound;
    ::ll::TypedStorage<8, 32, ::std::string> mLootTable;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EatMobGoalDefinition& operator=(EatMobGoalDefinition const&);
    EatMobGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_100::EatMobGoalDefinition const&) const;
#else // @header-generator platform
    MCAPI EatMobGoalDefinition(::SharedTypes::v1_21_100::EatMobGoalDefinition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~EatMobGoalDefinition();
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_100::EatMobGoalDefinition& operator=(::SharedTypes::v1_21_100::EatMobGoalDefinition&&);

    MCAPI bool operator==(::SharedTypes::v1_21_100::EatMobGoalDefinition const&) const;
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
    MCNAPI static float const& DEFAULT_EAT_ANIMATION_TIME();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_EAT_ANIMATION_TIME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_PULL_IN_FORCE();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_PULL_IN_FORCE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_REACH_MOB_DISTANCE();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_REACH_MOB_DISTANCE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_RUN_SPEED();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_RUN_SPEED();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_100::EatMobGoalDefinition const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
