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
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                          mTargetBlocks;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                          mTargetMaterialsAboveBlockStrings;
    ::ll::TypedStorage<1, 1, bool>                                               mAllowLayingFromBelow;
    ::ll::TypedStorage<1, 1, bool>                                               mUseDefaultAnimation;
    ::ll::TypedStorage<4, 4, float>                                              mLaySeconds;
    ::ll::TypedStorage<8, 24, std::string>                                       mEggType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>             mLayEggSound;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnLayEvent;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
