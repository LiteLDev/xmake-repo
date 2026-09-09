#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/Color255RGBA.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_26_40 {

struct SummonActorGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // SummonActorGoalDefinition inner types declare
    // clang-format off
    struct SpellStage;
    struct SpellData;
    // clang-format on

    // SummonActorGoalDefinition inner types define
    enum class SummonShape : int {
        Circle = 0,
        Line   = 1,
        Count  = 2,
    };

    enum class SummonTarget : int {
        Self   = 0,
        Target = 1,
        Count  = 2,
    };

    struct SpellStage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_40::SummonActorGoalDefinition::SummonShape>  mShape;
        ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_40::SummonActorGoalDefinition::SummonTarget> mTarget;
        ::ll::TypedStorage<4, 4, float>                                                            mSize;
        ::ll::TypedStorage<4, 4, float>                                                            mBaseDelay;
        ::ll::TypedStorage<4, 4, float>                                                            mDelayPerSummon;
        ::ll::TypedStorage<4, 4, int>                                                              mSummonCap;
        ::ll::TypedStorage<4, 4, float>                                                            mSummonCapRadius;
        ::ll::TypedStorage<8, 24, std::string>                                                     mEntityType;
        ::ll::TypedStorage<4, 4, float>                                                            mEntityLifespan;
        ::ll::TypedStorage<4, 4, int>                                                              mNumEntitiesSpawned;
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                           mSoundEvent;
        ::ll::TypedStorage<8, 24, std::string>                                                     mSummonEvent;
        // NOLINTEND
    };

    struct SpellData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                                      mMinActivationRange;
        ::ll::TypedStorage<4, 4, float>                                      mMaxActivationRange;
        ::ll::TypedStorage<4, 4, float>                                      mCooldownTime;
        ::ll::TypedStorage<4, 4, float>                                      mWeight;
        ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
        ::ll::TypedStorage<4, 4, float>                                      mCastDuration;
        ::ll::TypedStorage<1, 1, bool>                                       mDoCasting;
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGBA>               mParticleColor;
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>     mStartSoundEvent;
        ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_40::SummonActorGoalDefinition::SpellStage>> mSequence;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_40::SummonActorGoalDefinition::SpellData>> mSummonChoices;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
