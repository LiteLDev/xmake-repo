#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Container;
class InteractionResult;
class InventoryAction;
class ItemStack;
class NetworkItemStackDescriptor;
class Vec3;
struct DepenetrationComponent;
struct PlayerInventorySlotData;
// clang-format on

class IItemUseTransactionSubject {
public:
    // IItemUseTransactionSubject inner types define
    using TransactionItemChangeCallback = std::function<void(Container&, int, const ItemStack&, const ItemStack&)>;

    using TransactionExecuteCallback = std::function<void()>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IItemUseTransactionSubject();

    virtual bool isAlive() const = 0;

    virtual ::ItemStack unwrapItem(::NetworkItemStackDescriptor const&) const = 0;

    virtual ::Block const& unwrapBlock(uint const&) const = 0;

    virtual ::ItemStack const& getSelectedItem() const = 0;

    virtual void setSelectedItem(::ItemStack const&) = 0;

    virtual ::PlayerInventorySlotData getSelectedSlot() const = 0;

    virtual void setSelectedSlot(int, ::ContainerID) = 0;

    virtual float getMaxPickRange() const = 0;

    virtual ::Vec3 getPosition() const = 0;

    virtual void setPosition(::Vec3 const&) = 0;

    virtual void createTransactionContext(std::function<void (Container&, int, const ItemStack&, const ItemStack&)>&&, std::function<void ()>&&) = 0;

    virtual void addExpectedAction(::InventoryAction const&) = 0;

    virtual bool baseUseItem(::ItemStack&) = 0;

    virtual bool baseUseItemAsAttack(::ItemStack&, ::Vec3 const&) = 0;

    virtual ::InteractionResult useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool) = 0;

    virtual void resendBlocksAroundArea(::BlockPos const&, uchar) const = 0;

    virtual void resendPlayerState() const = 0;

    virtual void sendPlayerInventory() const = 0;

    virtual bool isSneaking() const = 0;

    virtual ::Block const& getBlock(::BlockPos const&) const = 0;

    virtual ::Block const& getExtraBlock(::BlockPos const&) const = 0;

    virtual bool isLastBuildBlockInteractive() const = 0;

    virtual void sendBlockInteractedWith(::BlockPos const&) = 0;

    virtual ::DepenetrationComponent& getDepenetrationComponent() = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
