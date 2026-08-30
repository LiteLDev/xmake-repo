#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/Container.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Item;
class ItemStackBase;
class LevelChunk;
class Recipes;
class SaveContext;
// clang-format on

class FurnaceBlockActor : public ::VanillaBlockActor, public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mLitTime;
    ::ll::TypedStorage<4, 4, int>                                    mLitDuration;
    ::ll::TypedStorage<4, 4, int>                                    mCookingProgress;
    ::ll::UntypedStorage<4, 464>                                     mStoredXP;
    ::ll::UntypedStorage<8, 0>                                       mItems;
    ::ll::TypedStorage<1, 3, bool[3]>                                mDirty;
    ::ll::TypedStorage<8, 40, std::unordered_set<ActorUniqueID>>     mActors;
    ::ll::TypedStorage<8, 40, ::HashedString const>                  mRecipeTag;
    ::ll::TypedStorage<4, 4, int const>                              mBurnInterval;
    ::ll::TypedStorage<1, 1, bool>                                   mOpenByLocalPlayer;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSmeltSoundEvent;
    ::ll::TypedStorage<4, 4, int>                                    mSoundTick;
    ::ll::TypedStorage<4, 4, int>                                    mSoundTickTarget;
    ::ll::TypedStorage<8, 8, ::Block const&>                         mUnlitFurnace;
    ::ll::TypedStorage<8, 8, ::Block const&>                         mLitFurnace;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                       mLastFuelItem;
    ::ll::TypedStorage<1, 1, bool>                                   mNoDrop;
    ::ll::TypedStorage<1, 1, bool>                                   mNeedsLitStateFixup;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceBlockActor& operator=(FurnaceBlockActor const&);
    FurnaceBlockActor(FurnaceBlockActor const&);
    FurnaceBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onCustomTagLoadDone(::BlockSource&);

    virtual void onMove();

    virtual void onRemoved(::BlockSource&);

    virtual void onNeighborChanged(::BlockSource&, ::BlockPos const&);

    virtual bool isTypeOrDerived(::BlockActorType) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);

    virtual ::Container const* getContainer() const;

    virtual ::Container* getContainer();

    virtual std::string getName() const;

    virtual void fixupOnLoad(::LevelChunk&);

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual int getMaxStackSize() const;

    virtual int getContainerSize() const;

    virtual void startOpen(::Actor&);

    virtual void stopOpen(::Actor&);

    virtual bool canPushInItem(int, int, ::ItemStack const&) const;

    virtual bool canPullOutItem(int, int, ::ItemStack const&) const;

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FurnaceBlockActor(::BlockPos const&);

    MCNAPI FurnaceBlockActor(
        ::BlockActorType,
        ::BlockPos const&,
        ::HashedString const&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::SharedTypes::Legacy::ContainerType,
        int,
        ::Block const&,
        ::Block const&
    );

    MCNAPI bool canBurn(::Recipes const&);

    MCNAPI void checkForAlternativeFuelAchievement(::BlockSource&, ::ItemStack const&);

    MCNAPI void checkForSmeltEverythingAchievement(::BlockSource&);

    MCNAPI int getBurnProgress(int);

    MCNAPI int getCookingProgress() const;

    MCNAPI ::ItemInstance const& getLastFuelItem() const;

    MCNAPI int getLitDuration() const;

    MCNAPI int getLitProgress(int);

    MCNAPI int getLitTime() const;

    MCNAPI int getStoredXP() const;

    MCNAPI bool isEmptiedByHopper(::BlockSource&);

    MCNAPI void onFurnaceBlockRemoved(::BlockSource&);

    MCNAPI void setCookingProgress(int);

    MCNAPI void setLitDuration(int);

    MCNAPI void setLitTime(int);

    MCNAPI void setOpenByLocalPlayer(bool);

    MCNAPI void setStoredXP(int);

    MCNAPI void storeXPRewardForRemovingWithHopper(::ItemStackBase const&, int const);

    MCNAPI int withdrawStoredXPReward();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float _getXPRewardMultiplier(::ItemStackBase const&);

    MCNAPI static int getAvailableFuelSetCount(int, ::ItemStackBase const&);

    MCNAPI static float getBurnDuration(::ItemStackBase const&, float);

    MCNAPI static float getItemBurnDuration(::Item const&, float);

    MCNAPI static int getXPRewardFromSmeltingItems(::ItemStackBase const&, int const);

    MCNAPI static bool isItemAllowedInFuelSlot(int, ::ItemStackBase const&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& BURN_DURATION_KEY();

    MCNAPI static int const& BURN_INTERVAL();

    MCNAPI static std::string const& BURN_TIME_KEY();

    MCNAPI static std::string const& COOK_TIME_KEY();

    MCNAPI static std::string const& CUSTOM_NAME_KEY();

    MCNAPI static float const& DEFAULT_SMELTING_TIME();

    MCNAPI static std::string const& FILTERED_CUSTOM_NAME_KEY();

    MCNAPI static std::string const& ITEMS_LIST_KEY();

    MCNAPI static std::string const& LAST_FUEL_KEY();

    MCNAPI static std::string const& SLOT_KEY();

    MCNAPI static std::string const& STORED_XP_DEPRECATED_KEY();

    MCNAPI static std::string const& STORED_XP_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);

    MCNAPI void* $ctor(
        ::BlockActorType,
        ::BlockPos const&,
        ::HashedString const&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::SharedTypes::Legacy::ContainerType,
        int,
        ::Block const&,
        ::Block const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI void $onCustomTagLoadDone(::BlockSource&);

    MCNAPI void $onMove();

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $onNeighborChanged(::BlockSource&, ::BlockPos const&);

    MCNAPI bool $isTypeOrDerived(::BlockActorType) const;

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $tick(::BlockSource&);

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::Container* $getContainer();

    MCNAPI std::string $getName() const;

    MCNAPI void $fixupOnLoad(::LevelChunk&);

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI int $getMaxStackSize() const;

    MCNAPI int $getContainerSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
