#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

namespace SharedTypes::v1_26_10 {

struct LayEggGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                          mTargetBlocks;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                          mTargetMaterialsAboveBlockStrings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                      mTargetBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                      mTargetMaterialsAboveBlockStrings;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                               mAllowLayingFromBelow;
    ::ll::TypedStorage<1, 1, bool>                                               mUseDefaultAnimation;
    ::ll::TypedStorage<4, 4, float>                                              mLaySeconds;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                       mEggType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                     mEggType;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>             mLayEggSound;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnLayEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnLayEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    LayEggGoalDefinition& operator=(LayEggGoalDefinition const&);
    LayEggGoalDefinition(LayEggGoalDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LayEggGoalDefinition();

    MCAPI LayEggGoalDefinition(::SharedTypes::v1_26_10::LayEggGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_10::LayEggGoalDefinition& operator=(::SharedTypes::v1_26_10::LayEggGoalDefinition&&);

    MCAPI ~LayEggGoalDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& DEFAULT_EGG_TYPE();

    MCAPI static ::std::vector<::std::string> const& DEFAULT_TARGET_BLOCKS();

    MCAPI static ::std::vector<::std::string> const& DEFAULT_TARGET_MATERIALS_ABOVE_BLOCK_STRINGS();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_26_10::LayEggGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
