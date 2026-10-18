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
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
struct DepenetrationComponent;
struct PlayerInventorySlotData;
// clang-format on

class PlayerTransactionSubject : public ::IItemUseTransactionSubject {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk18866d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTransactionSubject& operator=(PlayerTransactionSubject const&);
    PlayerTransactionSubject(PlayerTransactionSubject const&);
    PlayerTransactionSubject();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PlayerTransactionSubject();
#else // @header-generator platform
    virtual void setSelectedSlot(int slot, ::ContainerID containerId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isAlive() const;
#else // @header-generator platform
    virtual bool isAlive() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack unwrapItem(::NetworkItemStackDescriptor const&) const;
#else // @header-generator platform
    virtual ::ItemStack unwrapItem(::NetworkItemStackDescriptor const& item) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& unwrapBlock(uint const&) const;
#else // @header-generator platform
    virtual ::ItemStack const& getSelectedItem() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getSelectedItem() const;
#else // @header-generator platform
    virtual void setSelectedItem(::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSelectedItem(::ItemStack const&);
#else // @header-generator platform
    virtual ::PlayerInventorySlotData getSelectedSlot() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PlayerInventorySlotData getSelectedSlot() const;
#else // @header-generator platform
    virtual float getMaxPickRange() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSelectedSlot(int, ::ContainerID);
#else // @header-generator platform
    virtual ::Vec3 getPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getMaxPickRange() const;
#else // @header-generator platform
    virtual void setPosition(::Vec3 const& position) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 getPosition() const;
#else // @header-generator platform
    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>&& callback,
        ::std::function<void()>&&                                                          execute
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPosition(::Vec3 const&);
#else // @header-generator platform
    virtual void addExpectedAction(::InventoryAction const& action) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void createTransactionContext(std::function<void (Container&, int, const ItemStack&, const ItemStack&)>&&, std::function<void ()>&&);
#else // @header-generator platform
    virtual bool baseUseItem(::ItemStack& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addExpectedAction(::InventoryAction const&);
#else // @header-generator platform
    virtual bool baseUseItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool baseUseItem(::ItemStack&);
#else // @header-generator platform
    virtual ::InteractionResult useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool baseUseItemAsAttack(::ItemStack&, ::Vec3 const&);
#else // @header-generator platform
    virtual void resendBlocksAroundArea(::BlockPos const& pos, uchar facing) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InteractionResult useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool);
#else // @header-generator platform
    virtual void resendPlayerState() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resendBlocksAroundArea(::BlockPos const&, uchar) const;
#else // @header-generator platform
    virtual void sendPlayerInventory() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resendPlayerState() const;
#else // @header-generator platform
    virtual bool isSneaking() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendPlayerInventory() const;
#else // @header-generator platform
    virtual ::Block const& unwrapBlock(uint const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSneaking() const;
#else // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getExtraBlock(::BlockPos const&) const;
#else // @header-generator platform
    virtual bool isLastBuildBlockInteractive() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLastBuildBlockInteractive() const;
#else // @header-generator platform
    virtual void sendBlockInteractedWith(::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendBlockInteractedWith(::BlockPos const&);

    virtual ::DepenetrationComponent& getDepenetrationComponent();
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::DepenetrationComponent& getDepenetrationComponent() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isAlive() const;
#else // @header-generator platform
    MCAPI void $setSelectedSlot(int slot, ::ContainerID containerId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack $unwrapItem(::NetworkItemStackDescriptor const&) const;
#else // @header-generator platform
    MCFOLD bool $isAlive() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $unwrapBlock(uint const&) const;
#else // @header-generator platform
    MCAPI ::ItemStack $unwrapItem(::NetworkItemStackDescriptor const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getSelectedItem() const;
#else // @header-generator platform
    MCAPI ::ItemStack const& $getSelectedItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSelectedItem(::ItemStack const&);
#else // @header-generator platform
    MCAPI void $setSelectedItem(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerInventorySlotData $getSelectedSlot() const;
#else // @header-generator platform
    MCAPI ::PlayerInventorySlotData $getSelectedSlot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSelectedSlot(int, ::ContainerID);
#else // @header-generator platform
    MCAPI float $getMaxPickRange() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getMaxPickRange() const;
#else // @header-generator platform
    MCAPI ::Vec3 $getPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getPosition() const;
#else // @header-generator platform
    MCAPI void $setPosition(::Vec3 const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setPosition(::Vec3 const&);

    MCNAPI void $createTransactionContext(
        std::function<void(Container&, int, const ItemStack&, const ItemStack&)>&&,
        std::function<void()>&&
#else // @header-generator platform
    MCAPI void $createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>&& callback,
        ::std::function<void()>&&                                                          execute
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addExpectedAction(::InventoryAction const&);
#else // @header-generator platform
    MCAPI void $addExpectedAction(::InventoryAction const& action);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $baseUseItem(::ItemStack&);
#else // @header-generator platform
    MCAPI bool $baseUseItem(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $baseUseItemAsAttack(::ItemStack&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI bool $baseUseItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult $useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool);
#else // @header-generator platform
    MCAPI ::InteractionResult $useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $resendBlocksAroundArea(::BlockPos const&, uchar) const;
#else // @header-generator platform
    MCAPI void $resendBlocksAroundArea(::BlockPos const& pos, uchar facing) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $resendPlayerState() const;
#else // @header-generator platform
    MCAPI void $resendPlayerState() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendPlayerInventory() const;
#else // @header-generator platform
    MCAPI void $sendPlayerInventory() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSneaking() const;
#else // @header-generator platform
    MCAPI bool $isSneaking() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getBlock(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::Block const& $unwrapBlock(uint const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getExtraBlock(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::Block const& $getBlock(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLastBuildBlockInteractive() const;
#else // @header-generator platform
    MCAPI ::Block const& $getExtraBlock(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendBlockInteractedWith(::BlockPos const&);
#else // @header-generator platform
    MCAPI bool $isLastBuildBlockInteractive() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DepenetrationComponent& $getDepenetrationComponent();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $sendBlockInteractedWith(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI ::DepenetrationComponent& $getDepenetrationComponent();


#endif // @header-generator platform
    // NOLINTEND
};
