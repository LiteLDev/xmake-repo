#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Item;
class ItemDescriptor;
class ItemInstance;
class SaveContext;
// clang-format on

class BrewingStandBlockActor : public ::VanillaBlockActor, public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mBrewTime;
    ::ll::TypedStorage<4, 4, int>  mFuelAmount;
    ::ll::TypedStorage<4, 4, int>  mFuelTotal;
    ::ll::UntypedStorage<8, 768>   mIngredient;
    ::ll::UntypedStorage<8, 0>     mItems;
    ::ll::TypedStorage<1, 1, bool> mNotifyPlayersOnChange;
    // NOLINTEND

public:
    // prevent constructor by default
    BrewingStandBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrewingStandBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onMove();

    virtual void onRemoved(::BlockSource&);

    virtual void tick(::BlockSource&);

    virtual ::Container const* getContainer() const;

    virtual ::Container* getContainer();

    virtual std::string getName() const;

    virtual void onChanged(::BlockSource&);

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual int getMaxStackSize() const;

    virtual int getContainerSize() const;

    virtual void startOpen(::Actor&);

    virtual void stopOpen(::Actor&);

    virtual void setContainerChanged(int);

    virtual bool canPushInItem(int, int, ::ItemStack const&) const;

    virtual bool canPullOutItem(int, int, ::ItemStack const&) const;

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BrewingStandBlockActor(::BlockPos const&);

    MCNAPI int getBrewTime() const;

    MCNAPI int getFuelAmount() const;

    MCNAPI int getFuelTotal() const;

    MCNAPI int getPotionSlotUsage() const;

    MCNAPI void setBrewTime(int);

    MCNAPI void setFuelAmount(int);

    MCNAPI void setFuelTotal(int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isFuel(::ItemDescriptor const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
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

    MCNAPI void $onMove();

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $tick(::BlockSource&);

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::Container* $getContainer();

    MCNAPI std::string $getName() const;

    MCNAPI void $onChanged(::BlockSource&);

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI int $getMaxStackSize() const;

    MCNAPI int $getContainerSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI void $setContainerChanged(int);

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
