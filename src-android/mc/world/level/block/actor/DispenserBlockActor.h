#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class DataLoadHelper;
class ILevel;
class Random;
class SaveContext;
// clang-format on

class DispenserBlockActor : public ::RandomizableBlockActorContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 0> mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    DispenserBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DispenserBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onMove();

    virtual bool isTypeOrDerived(::BlockActorType) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual ::Container const* getContainer() const;

    virtual ::Container* getContainer();

    virtual std::string getName() const;

    virtual void startOpen(::Actor&);

    virtual int getContainerSize() const;

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual int getMaxStackSize() const;

    virtual void stopOpen(::Actor&);

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DispenserBlockActor(::BlockPos);

    MCNAPI DispenserBlockActor(::BlockPos, ::BlockActorType);

    MCNAPI int getRandomSlot(::Random&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos);

    MCNAPI void* $ctor(::BlockPos, ::BlockActorType);
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

    MCNAPI bool $isTypeOrDerived(::BlockActorType) const;

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::Container* $getContainer();

    MCNAPI std::string $getName() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI int $getContainerSize() const;

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
