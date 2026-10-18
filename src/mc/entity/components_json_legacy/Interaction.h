#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/entity/components_json_legacy/InteractionParticle.h"
#include "mc/entity/components_json_legacy/ItemSlotInfo.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ItemDefinition.h"

// auto generated forward declare list
// clang-format off
class GameEvent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorDefinitionIdentifier;
#endif // @header-generator platform
// clang-format on

class Interaction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                    mRequiresCooldown;
    ::ll::TypedStorage<4, 4, int>                                                    mCooldownAfterBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                                                   mSwing;
    ::ll::TypedStorage<1, 1, bool>                                                   mUseItem;
    ::ll::TypedStorage<1, 1, bool>                                                   mBarter;
    ::ll::TypedStorage<1, 1, bool>                                                   mAdmire;
    ::ll::TypedStorage<1, 1, bool>                                                   mGiveItem;
    ::ll::TypedStorage<1, 1, bool>                                                   mTakeItem;
    ::ll::TypedStorage<4, 4, int>                                                    mHurtItem;
    ::ll::TypedStorage<4, 4, int>                                                    mAdjustHealthAmount;
    ::ll::TypedStorage<4, 12, ::std::optional<::ItemSlotInfo>>                       mEquipItemSlot;
    ::ll::TypedStorage<4, 12, ::std::optional<::ItemSlotInfo>>                       mDropItemSlot;
    ::ll::TypedStorage<4, 12, ::std::optional<::ItemSlotInfo>>                       mRepairItemSlot;
    ::ll::TypedStorage<4, 4, int>                                                    mRepairItemAmount;
    ::ll::TypedStorage<4, 8, ::ItemDefinition>                                       mTransformItem;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mInteractText;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mAddItemsTable;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mSpawnItemsTable;
    ::ll::TypedStorage<4, 12, ::InteractionParticle>                                 mParticleData;
    ::ll::TypedStorage<4, 4, float>                                                  mDropItemYOffset;
    ::ll::TypedStorage<4, 4, float>                                                  mSpawnItemsYOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::LevelSoundEvent>> mPlaySounds;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionIdentifier>>            mSpawnEntities;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>                             mOnInteraction;
    ::ll::TypedStorage<8, 8, ::GameEvent const*>                                     mVibration;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Interaction& operator=(Interaction const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Interaction();
#else // @header-generator platform
    MCAPI void addActorDefinitionIdentifierByName(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Interaction(::Interaction const&);
#else // @header-generator platform
    MCAPI void addLevelSoundEventByName(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addActorDefinitionIdentifierByName(std::string const&);
#else // @header-generator platform
    MCAPI void setCooldown(float const& seconds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addLevelSoundEventByName(std::string const&);
#else // @header-generator platform
    MCAPI void setCooldownAfterBeingAttacked(float const& seconds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCooldown(float const&);
#else // @header-generator platform
    MCAPI void setDropItemSlot(::std::string const& slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCooldownAfterBeingAttacked(float const&);
#else // @header-generator platform
    MCAPI void setEquipItemSlot(::std::string const& slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setDropItemSlot(std::string const&);
#else // @header-generator platform
    MCAPI void setRepairItemAmount(int const& amount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setEquipItemSlot(std::string const&);
#else // @header-generator platform
    MCAPI void setRepairItemSlot(::std::string const& slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRepairItemAmount(int const&);
#else // @header-generator platform
    MCAPI void setTransformItem(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRepairItemSlot(std::string const&);
#else // @header-generator platform
    MCAPI void setVibrationByName(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setTransformItem(std::string const&);

    MCNAPI void setVibrationByName(std::string const&);

    MCNAPI ~Interaction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Interaction const&);
#else // @header-generator platform
    MCAPI ~Interaction();
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
