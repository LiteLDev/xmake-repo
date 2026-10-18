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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // FurnaceBlockActor inner types define
    enum : int {
        SlotIngredient = 0,
        SlotFuel       = 1,
        SlotResult     = 2,
        NumItems       = 3,
    };

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mLitTime;
    ::ll::TypedStorage<4, 4, int>                                    mLitDuration;
    ::ll::TypedStorage<4, 4, int>                                    mCookingProgress;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 464>                                     mStoredXP;
    ::ll::UntypedStorage<8, 0>                                       mItems;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                   mStoredXP;
    ::ll::TypedStorage<8, 456, ::ItemStack[3]>                       mItems;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 3, bool[3]>                                mDirty;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<ActorUniqueID>>     mActors;
    ::ll::TypedStorage<8, 40, ::HashedString const>                  mRecipeTag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>> mActors;
    ::ll::TypedStorage<8, 48, ::HashedString const>                  mRecipeTag;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FurnaceBlockActor();
#else // @header-generator platform
    virtual bool isTypeOrDerived(::BlockActorType type) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual ::ItemStack const& getItem(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onCustomTagLoadDone(::BlockSource&);
#else // @header-generator platform
    virtual ::std::string getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMove();
#else // @header-generator platform
    virtual int getMaxStackSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRemoved(::BlockSource&);
#else // @header-generator platform
    virtual int getContainerSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onNeighborChanged(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    virtual void onRemoved(::BlockSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTypeOrDerived(::BlockActorType) const;
#else // @header-generator platform
    virtual void startOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual void stopOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    virtual bool canPushInItem(int slot, int face, ::ItemStack const& item) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual bool canPullOutItem(int slot, int face, ::ItemStack const& item) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container const* getContainer() const;
#else // @header-generator platform
    virtual ::Container* getContainer() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container* getContainer();
#else // @header-generator platform
    virtual ::Container const* getContainer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const;
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fixupOnLoad(::LevelChunk&);
#else // @header-generator platform
    virtual void onCustomTagLoadDone(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getItem(int) const;
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItem(int, ::ItemStack const&);
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxStackSize() const;
#else // @header-generator platform
    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getContainerSize() const;
#else // @header-generator platform
    virtual void onMove() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startOpen(::Actor&);
#else // @header-generator platform
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopOpen(::Actor&);
#else // @header-generator platform
    virtual void fixupOnLoad(::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPushInItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    virtual ~FurnaceBlockActor() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI FurnaceBlockActor(
        ::BlockActorType                       blockActorType,
        ::BlockPos const&                      pos,
        ::HashedString const&                  recipeTag,
        ::SharedTypes::Legacy::LevelSoundEvent smeltSound,
        ::SharedTypes::Legacy::ContainerType   containerType,
        int                                    burnInterval,
        ::Block const&                         unlitFurnace,
        ::Block const&                         litFurnace
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canBurn(::Recipes const&);
#else // @header-generator platform
    MCAPI bool canBurn(::Recipes const& recipes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkForAlternativeFuelAchievement(::BlockSource&, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void checkForAlternativeFuelAchievement(::BlockSource& region, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkForSmeltEverythingAchievement(::BlockSource&);
#else // @header-generator platform
    MCAPI void checkForSmeltEverythingAchievement(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getBurnProgress(int);
#else // @header-generator platform
    MCAPI bool isEmptiedByHopper(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getCookingProgress() const;
#else // @header-generator platform
    MCAPI void onFurnaceBlockRemoved(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI int withdrawStoredXPReward();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float _getXPRewardMultiplier(::ItemStackBase const&);
#else // @header-generator platform
    MCAPI static float _getXPRewardMultiplier(::ItemStackBase const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getAvailableFuelSetCount(int, ::ItemStackBase const&);
#else // @header-generator platform
    MCAPI static int getAvailableFuelSetCount(int slot, ::ItemStackBase const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float getBurnDuration(::ItemStackBase const&, float);
#else // @header-generator platform
    MCAPI static float getBurnDuration(::ItemStackBase const& itemInstance, float burnInterval);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float getItemBurnDuration(::Item const&, float);
#else // @header-generator platform
    MCAPI static float getItemBurnDuration(::Item const& item, float burnInterval);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getXPRewardFromSmeltingItems(::ItemStackBase const&, int const);

    MCNAPI static bool isItemAllowedInFuelSlot(int, ::ItemStackBase const&, int);
#else // @header-generator platform
    MCAPI static bool isItemAllowedInFuelSlot(int slot, ::ItemStackBase const& item, int amount);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& BURN_DURATION_KEY();
#else // @header-generator platform
    MCAPI static ::std::string const& BURN_DURATION_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& BURN_INTERVAL();
#else // @header-generator platform
    MCAPI static ::std::string const& BURN_TIME_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& BURN_TIME_KEY();
#else // @header-generator platform
    MCAPI static ::std::string const& COOK_TIME_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& COOK_TIME_KEY();
#else // @header-generator platform
    MCAPI static ::std::string const& FILTERED_CUSTOM_NAME_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& CUSTOM_NAME_KEY();
#else // @header-generator platform
    MCAPI static ::std::string const& ITEMS_LIST_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_SMELTING_TIME();
#else // @header-generator platform
    MCAPI static ::std::string const& LAST_FUEL_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& FILTERED_CUSTOM_NAME_KEY();
#else // @header-generator platform
    MCAPI static ::std::string const& SLOT_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ITEMS_LIST_KEY();
#else // @header-generator platform
    MCAPI static ::std::string const& STORED_XP_DEPRECATED_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& LAST_FUEL_KEY();

    MCNAPI static std::string const& SLOT_KEY();

    MCNAPI static std::string const& STORED_XP_DEPRECATED_KEY();

    MCNAPI static std::string const& STORED_XP_KEY();
#else // @header-generator platform
    MCAPI static ::std::string const& STORED_XP_KEY();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(
        ::BlockActorType                       blockActorType,
        ::BlockPos const&                      pos,
        ::HashedString const&                  recipeTag,
        ::SharedTypes::Legacy::LevelSoundEvent smeltSound,
        ::SharedTypes::Legacy::ContainerType   containerType,
        int                                    burnInterval,
        ::Block const&                         unlitFurnace,
        ::Block const&                         litFurnace
#endif // @header-generator platform
    );
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI bool $isTypeOrDerived(::BlockActorType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCFOLD ::ItemStack const& $getItem(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onCustomTagLoadDone(::BlockSource&);
#else // @header-generator platform
    MCAPI void $setItem(int slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onMove();
#else // @header-generator platform
    MCAPI ::std::string $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRemoved(::BlockSource&);
#else // @header-generator platform
    MCFOLD int $getMaxStackSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onNeighborChanged(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD int $getContainerSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTypeOrDerived(::BlockActorType) const;
#else // @header-generator platform
    MCFOLD void $onRemoved(::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI void $startOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI void $stopOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCAPI bool $canPushInItem(int slot, int face, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container const* $getContainer() const;
#else // @header-generator platform
    MCAPI bool $canPullOutItem(int slot, int face, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* $getContainer();
#else // @header-generator platform
    MCFOLD ::Container* $getContainer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getName() const;
#else // @header-generator platform
    MCFOLD ::Container const* $getContainer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fixupOnLoad(::LevelChunk&);
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getItem(int) const;
#else // @header-generator platform
    MCAPI void $onCustomTagLoadDone(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItem(int, ::ItemStack const&);
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxStackSize() const;
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerSize() const;
#else // @header-generator platform
    MCAPI void $onNeighborChanged(::BlockSource& region, ::BlockPos const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startOpen(::Actor&);
#else // @header-generator platform
    MCFOLD void $onMove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopOpen(::Actor&);
#else // @header-generator platform
    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    MCAPI void $fixupOnLoad(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

#endif // @header-generator platform
    MCNAPI static void** $vftable();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};
