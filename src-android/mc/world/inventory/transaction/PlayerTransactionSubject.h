#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/inventory/transaction/IItemUseTransactionSubject.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Container;
class InteractionResult;
class InventoryAction;
class ItemStack;
class NetworkItemStackDescriptor;
class Player;
class Vec3;
struct DepenetrationComponent;
struct PlayerInventorySlotData;
// clang-format on

class PlayerTransactionSubject : public ::IItemUseTransactionSubject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTransactionSubject& operator=(PlayerTransactionSubject const&);
    PlayerTransactionSubject(PlayerTransactionSubject const&);
    PlayerTransactionSubject();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PlayerTransactionSubject();

    virtual bool isAlive() const;

    virtual ::ItemStack unwrapItem(::NetworkItemStackDescriptor const&) const;

    virtual ::Block const& unwrapBlock(uint const&) const;

    virtual ::ItemStack const& getSelectedItem() const;

    virtual void setSelectedItem(::ItemStack const&);

    virtual ::PlayerInventorySlotData getSelectedSlot() const;

    virtual void setSelectedSlot(int, ::ContainerID);

    virtual float getMaxPickRange() const;

    virtual ::Vec3 getPosition() const;

    virtual void setPosition(::Vec3 const&);

    virtual void createTransactionContext(std::function<void (Container&, int, const ItemStack&, const ItemStack&)>&&, std::function<void ()>&&);

    virtual void addExpectedAction(::InventoryAction const&);

    virtual bool baseUseItem(::ItemStack&);

    virtual bool baseUseItemAsAttack(::ItemStack&, ::Vec3 const&);

    virtual ::InteractionResult useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool);

    virtual void resendBlocksAroundArea(::BlockPos const&, uchar) const;

    virtual void resendPlayerState() const;

    virtual void sendPlayerInventory() const;

    virtual bool isSneaking() const;

    virtual ::Block const& getBlock(::BlockPos const&) const;

    virtual ::Block const& getExtraBlock(::BlockPos const&) const;

    virtual bool isLastBuildBlockInteractive() const;

    virtual void sendBlockInteractedWith(::BlockPos const&);

    virtual ::DepenetrationComponent& getDepenetrationComponent();
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isAlive() const;

    MCNAPI ::ItemStack $unwrapItem(::NetworkItemStackDescriptor const&) const;

    MCNAPI ::Block const& $unwrapBlock(uint const&) const;

    MCNAPI ::ItemStack const& $getSelectedItem() const;

    MCNAPI void $setSelectedItem(::ItemStack const&);

    MCNAPI ::PlayerInventorySlotData $getSelectedSlot() const;

    MCNAPI void $setSelectedSlot(int, ::ContainerID);

    MCNAPI float $getMaxPickRange() const;

    MCNAPI ::Vec3 $getPosition() const;

    MCNAPI void $setPosition(::Vec3 const&);

    MCNAPI void $createTransactionContext(
        std::function<void(Container&, int, const ItemStack&, const ItemStack&)>&&,
        std::function<void()>&&
    );

    MCNAPI void $addExpectedAction(::InventoryAction const&);

    MCNAPI bool $baseUseItem(::ItemStack&);

    MCNAPI bool $baseUseItemAsAttack(::ItemStack&, ::Vec3 const&);

    MCNAPI ::InteractionResult $useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool);

    MCNAPI void $resendBlocksAroundArea(::BlockPos const&, uchar) const;

    MCNAPI void $resendPlayerState() const;

    MCNAPI void $sendPlayerInventory() const;

    MCNAPI bool $isSneaking() const;

    MCNAPI ::Block const& $getBlock(::BlockPos const&) const;

    MCNAPI ::Block const& $getExtraBlock(::BlockPos const&) const;

    MCNAPI bool $isLastBuildBlockInteractive() const;

    MCNAPI void $sendBlockInteractedWith(::BlockPos const&);

    MCNAPI ::DepenetrationComponent& $getDepenetrationComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
