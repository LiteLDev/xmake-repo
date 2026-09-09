#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/entity/components_json_legacy/InteractionParticle.h"
#include "mc/entity/components_json_legacy/ItemSlotInfo.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ItemDefinition.h"

// auto generated forward declare list
// clang-format off
class GameEvent;
// clang-format on

class Interaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                mRequiresCooldown;
    ::ll::TypedStorage<4, 4, int>                                                mCooldownAfterBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                                               mSwing;
    ::ll::TypedStorage<1, 1, bool>                                               mUseItem;
    ::ll::TypedStorage<1, 1, bool>                                               mBarter;
    ::ll::TypedStorage<1, 1, bool>                                               mAdmire;
    ::ll::TypedStorage<1, 1, bool>                                               mGiveItem;
    ::ll::TypedStorage<1, 1, bool>                                               mTakeItem;
    ::ll::TypedStorage<4, 4, int>                                                mHurtItem;
    ::ll::TypedStorage<4, 4, int>                                                mAdjustHealthAmount;
    ::ll::TypedStorage<4, 12, std::optional<ItemSlotInfo>>                       mEquipItemSlot;
    ::ll::TypedStorage<4, 12, std::optional<ItemSlotInfo>>                       mDropItemSlot;
    ::ll::TypedStorage<4, 12, std::optional<ItemSlotInfo>>                       mRepairItemSlot;
    ::ll::TypedStorage<4, 4, int>                                                mRepairItemAmount;
    ::ll::TypedStorage<4, 8, ::ItemDefinition>                                   mTransformItem;
    ::ll::TypedStorage<8, 24, std::string>                                       mInteractText;
    ::ll::TypedStorage<8, 24, std::string>                                       mAddItemsTable;
    ::ll::TypedStorage<8, 24, std::string>                                       mSpawnItemsTable;
    ::ll::TypedStorage<4, 12, ::InteractionParticle>                             mParticleData;
    ::ll::TypedStorage<4, 4, float>                                              mDropItemYOffset;
    ::ll::TypedStorage<4, 4, float>                                              mSpawnItemsYOffset;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::LevelSoundEvent>> mPlaySounds;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionIdentifier>>            mSpawnEntities;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>                          mOnInteraction;
    ::ll::TypedStorage<8, 8, ::GameEvent const*>                                 mVibration;
    // NOLINTEND

public:
    // prevent constructor by default
    Interaction& operator=(Interaction const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Interaction();

    MCNAPI Interaction(::Interaction const&);

    MCNAPI void addActorDefinitionIdentifierByName(std::string const&);

    MCNAPI void addLevelSoundEventByName(std::string const&);

    MCNAPI void setCooldown(float const&);

    MCNAPI void setCooldownAfterBeingAttacked(float const&);

    MCNAPI void setDropItemSlot(std::string const&);

    MCNAPI void setEquipItemSlot(std::string const&);

    MCNAPI void setRepairItemAmount(int const&);

    MCNAPI void setRepairItemSlot(std::string const&);

    MCNAPI void setTransformItem(std::string const&);

    MCNAPI void setVibrationByName(std::string const&);

    MCNAPI ~Interaction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Interaction const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
