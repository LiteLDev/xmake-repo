#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStack;
class ItemStackBase;
class SaveContext;
class Vec3;
// clang-format on

class ShulkerBoxBlockActor : public ::ChestBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mFacing;
    ::ll::TypedStorage<1, 1, bool>  mFacingChanged;
    // NOLINTEND

public:
    // prevent constructor by default
    ShulkerBoxBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShulkerBoxBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onPlace(::BlockSource&);

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);

    virtual std::string getName() const;

    virtual void startOpen(::Actor&);

    virtual int getMaxStackSize() const;

    virtual void stopOpen(::Actor&);

    virtual bool canPushInItem(int, int, ::ItemStack const&) const;

    virtual ::AABB getObstructionAABB() const;

    virtual bool _detectEntityObstruction(::BlockSource&) const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getOpenSound() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getCloseSound() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uchar getFacingDir();

    MCNAPI void setFacingDir(uchar);

    MCNAPI void setupRedstoneComponent(::BlockSource&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<ShulkerBoxBlockActor> createShulkerBoxBlockEntity(::BlockPos const&);

    MCNAPI static bool itemAllowed(::ItemStackBase const&);

    MCNAPI static bool itemAllowedInSlot(int, ::ItemStackBase const&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& ITEMS_SIZE();
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

    MCNAPI void $onPlace(::BlockSource&);

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $tick(::BlockSource&);

    MCNAPI std::string $getName() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCNAPI ::AABB $getObstructionAABB() const;

    MCNAPI bool $_detectEntityObstruction(::BlockSource&) const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
