#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
namespace SharedTypes::Legacy { struct ItemDescriptor; }
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_21_120 {

struct AvoidBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                        mWalkSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                                        mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                                                          mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                                          mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                                          mInterval;
    ::ll::TypedStorage<8, 24, std::string>                                                 mMethod;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>>            mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnEscapedTriggers;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                       mSoundEvent;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                                    mSoundIntervalRange;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                            mWalkSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                                            mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                                                              mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                                              mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                                              mInterval;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mMethod;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>>            mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnEscapedTriggers;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                           mSoundEvent;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                                        mSoundIntervalRange;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidBlockGoalDefinition& operator=(AvoidBlockGoalDefinition const&);
    AvoidBlockGoalDefinition(AvoidBlockGoalDefinition const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AvoidBlockGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_120::AvoidBlockGoalDefinition&
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_120::AvoidBlockGoalDefinition&
#endif // @header-generator platform
    operator=(::SharedTypes::v1_21_120::AvoidBlockGoalDefinition&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AvoidBlockGoalDefinition();
#else // @header-generator platform
    MCAPI ~AvoidBlockGoalDefinition();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_INTERVAL();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_INTERVAL();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_SEARCH_HEIGHT();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_SEARCH_HEIGHT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_SEARCH_RANGE();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_SEARCH_RANGE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::FloatRange const& DEFAULT_SOUND_INTERVAL();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_SPRINT_SPEED_MODIFIER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_SPRINT_SPEED_MODIFIER();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_WALK_SPEED_MODIFIER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& DEFAULT_TARGET_SELECTION_METHOD();

    MCNAPI static float const& DEFAULT_WALK_SPEED_MODIFIER();

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

} // namespace SharedTypes::v1_21_120
