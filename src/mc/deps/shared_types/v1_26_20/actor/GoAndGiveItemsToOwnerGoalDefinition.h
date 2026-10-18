#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
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

struct GoAndGiveItemsToOwnerGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                        mRunSpeed;
    ::ll::TypedStorage<4, 4, float>                                                        mReachMobDistance;
    ::ll::TypedStorage<4, 4, float>                                                        mThrowForce;
    ::ll::TypedStorage<4, 4, float>                                                        mVerticalThrowMul;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                       mThrowSound;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnItemThrowTriggers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GoAndGiveItemsToOwnerGoalDefinition();
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                            mRunSpeed;
    ::ll::TypedStorage<4, 4, float>                                                            mReachMobDistance;
    ::ll::TypedStorage<4, 4, float>                                                            mThrowForce;
    ::ll::TypedStorage<4, 4, float>                                                            mVerticalThrowMul;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                           mThrowSound;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnItemThrowTriggers;
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
    MCNAPI static float const& DEFAULT_THROW_FORCE();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_THROW_FORCE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_VERTICAL_THROW_MUL();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_VERTICAL_THROW_MUL();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
