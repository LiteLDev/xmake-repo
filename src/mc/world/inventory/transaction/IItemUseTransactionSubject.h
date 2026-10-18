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
#if defined(LL_PLAT_A) // @header-generator platform
    // IItemUseTransactionSubject inner types define
    using TransactionItemChangeCallback = std::function<void(Container&, int, const ItemStack&, const ItemStack&)>;

    using TransactionExecuteCallback = std::function<void()>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IItemUseTransactionSubject();
#else // @header-generator platform
    virtual ~IItemUseTransactionSubject() = default;
#endif // @header-generator platform

    virtual bool isAlive() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack unwrapItem(::NetworkItemStackDescriptor const&) const = 0;
#else // @header-generator platform
    virtual ::ItemStack unwrapItem(::NetworkItemStackDescriptor const& item) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& unwrapBlock(uint const&) const = 0;
#else // @header-generator platform
    virtual ::Block const& unwrapBlock(uint const& block) const = 0;
#endif // @header-generator platform

    virtual ::ItemStack const& getSelectedItem() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSelectedItem(::ItemStack const&) = 0;
#else // @header-generator platform
    virtual void setSelectedItem(::ItemStack const& item) = 0;
#endif // @header-generator platform

    virtual ::PlayerInventorySlotData getSelectedSlot() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSelectedSlot(int, ::ContainerID) = 0;
#else // @header-generator platform
    virtual void setSelectedSlot(int slot, ::ContainerID containerId) = 0;
#endif // @header-generator platform

    virtual float getMaxPickRange() const = 0;

    virtual ::Vec3 getPosition() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPosition(::Vec3 const&) = 0;
#else // @header-generator platform
    virtual void setPosition(::Vec3 const& position) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void createTransactionContext(std::function<void (Container&, int, const ItemStack&, const ItemStack&)>&&, std::function<void ()>&&) = 0;
#else // @header-generator platform
    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>&& callback,
        ::std::function<void()>&&                                                          execute
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addExpectedAction(::InventoryAction const&) = 0;
#else // @header-generator platform
    virtual void addExpectedAction(::InventoryAction const& action) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool baseUseItem(::ItemStack&) = 0;
#else // @header-generator platform
    virtual bool baseUseItem(::ItemStack& item) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool baseUseItemAsAttack(::ItemStack&, ::Vec3 const&) = 0;
#else // @header-generator platform
    virtual bool baseUseItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InteractionResult useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool) = 0;
#else // @header-generator platform
    virtual ::InteractionResult useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resendBlocksAroundArea(::BlockPos const&, uchar) const = 0;
#else // @header-generator platform
    virtual void resendBlocksAroundArea(::BlockPos const& pos, uchar facing) const = 0;
#endif // @header-generator platform

    virtual void resendPlayerState() const = 0;

    virtual void sendPlayerInventory() const = 0;

    virtual bool isSneaking() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getExtraBlock(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

    virtual bool isLastBuildBlockInteractive() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendBlockInteractedWith(::BlockPos const&) = 0;
#else // @header-generator platform
    virtual void sendBlockInteractedWith(::BlockPos const& pos) = 0;
#endif // @header-generator platform

    virtual ::DepenetrationComponent& getDepenetrationComponent() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
