#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/Container.h"
#include "mc/world/actor/Hopper.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class FurnaceBlockActor;
class ILevel;
class SaveContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class HopperBlockActor : public ::VanillaBlockActor, public ::Container, public ::Hopper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 0>       mItems;
    ::ll::TypedStorage<8, 8, ::Tick> mLastTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 760, ::ItemStack[5]> mItems;
    ::ll::TypedStorage<8, 8, ::Tick>           mLastTick;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    HopperBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HopperBlockActor();
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMove();
#else // @header-generator platform
    virtual ::ItemStack const& getItem(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRemoved(::BlockSource&);
#else // @header-generator platform
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onNeighborChanged(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    virtual ::std::string getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual int getContainerSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    virtual int getMaxStackSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual void startOpen(::Actor&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container const* getContainer() const;
#else // @header-generator platform
    virtual void stopOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container* getContainer();
#else // @header-generator platform
    virtual ::Container* getContainer() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const;
#else // @header-generator platform
    virtual ::Container const* getContainer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getItem(int) const;
#else // @header-generator platform
    virtual void setContainerChanged(int slot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItem(int, ::ItemStack const&);
#else // @header-generator platform
    virtual void onRemoved(::BlockSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getContainerSize() const;
#else // @header-generator platform
    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxStackSize() const;
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
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setContainerChanged(int);

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit HopperBlockActor(::BlockPos const&);
#else // @header-generator platform
    MCAPI explicit HopperBlockActor(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _countItems() const;
#else // @header-generator platform
    MCAPI int _countItems() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tick(::BlockSource&, int);
#else // @header-generator platform
    MCAPI void _tick(::BlockSource& region, int maxRecursion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkForSmeltEverythingAchievement(::BlockSource&);
#else // @header-generator platform
    MCAPI ::FurnaceBlockActor* getAttachedFurnace(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FurnaceBlockActor* getAttachedFurnace(::BlockSource&);
#else // @header-generator platform
    MCAPI bool isAttachedToChestAndFurnace(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isAttachedToChestAndFurnace(::BlockSource&);
#else // @header-generator platform
    MCAPI bool isAttachedToContainerType(::BlockSource& region, ::SharedTypes::Legacy::ContainerType containerType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isAttachedToContainerType(::BlockSource&, ::SharedTypes::Legacy::ContainerType);

    MCNAPI void updateCooldownAfterMove(::Tick const&, int);

    MCNAPI void updateMoveCooldownAfterMove(::Tick const&, int);
#else // @header-generator platform
    MCAPI bool isSourceOfContainerType(::BlockSource& region, ::SharedTypes::Legacy::ContainerType containerType);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onMove();
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRemoved(::BlockSource&);
#else // @header-generator platform
    MCAPI ::ItemStack const& $getItem(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onNeighborChanged(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void $setItem(int slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI ::std::string $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCFOLD int $getContainerSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCFOLD int $getMaxStackSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container const* $getContainer() const;
#else // @header-generator platform
    MCFOLD void $startOpen(::Actor&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* $getContainer();
#else // @header-generator platform
    MCFOLD void $stopOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getName() const;
#else // @header-generator platform
    MCFOLD ::Container* $getContainer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getItem(int) const;
#else // @header-generator platform
    MCFOLD ::Container const* $getContainer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItem(int, ::ItemStack const&);
#else // @header-generator platform
    MCFOLD void $setContainerChanged(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerSize() const;
#else // @header-generator platform
    MCFOLD void $onRemoved(::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxStackSize() const;
#else // @header-generator platform
    MCAPI void $onNeighborChanged(::BlockSource& region, ::BlockPos const&);
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
    MCNAPI void $setContainerChanged(int);
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
