#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerSizeChangeListener.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Container;
class HudContainerManagerModel;
class Inventory;
class ItemDescriptor;
class Level;
class ListTag;
class SaveContext;
class SemVersion;
struct PlayerInventorySlotData;
// clang-format on

class PlayerInventory : public ::ContainerSizeChangeListener, public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                      mSelected;
    ::ll::TypedStorage<8, 152, ::ItemStack>                            mInfiniteItem;
    ::ll::TypedStorage<1, 1, ::ContainerID>                            mSelectedContainerId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Inventory>>               mInventory;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>                  mComplexItems;
    ::ll::TypedStorage<8, 16, std::weak_ptr<HudContainerManagerModel>> mHudContainerManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInventory();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PlayerInventory();

    virtual void containerSizeChanged(int);

    virtual void containerContentChanged(int);

    virtual void createTransactionContext(std::function<void (Container&, int, const ItemStack&, const ItemStack&)>, std::function<void ()>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::weak_ptr<HudContainerManagerModel> _getHudContainerManagerModel() const;

    MCNAPI bool add(::ItemStack&, bool);

    MCNAPI void addListener(::ContainerContentChangeListener*);

    MCNAPI bool canAdd(::ItemStack const&) const;

    MCNAPI int clearInventory(int);

    MCNAPI void clearInventoryWithDefault(bool);

    MCNAPI void clearSlot(int, ::ContainerID);

    MCNAPI void clearVanishEnchantedItemsOnDeath();

    MCNAPI bool dropSlot(int, bool, bool, ::ContainerID, bool);

    MCNAPI int getContainerSize(::ContainerID) const;

    MCNAPI int getFirstEmptySlot() const;

    MCNAPI int getHotbarSize() const;

    MCNAPI ::ItemStack const& getItem(int, ::ContainerID) const;

    MCNAPI int getItemCount(std::function<bool(const ItemStack&)> const);

    MCNAPI ::ContainerID getSelectedContainerId();

    MCNAPI ::ItemStack const& getSelectedItem() const;

    MCNAPI ::PlayerInventorySlotData getSelectedSlot() const;

    MCNAPI int getSlotWithItem(::ItemStack const&, bool, bool) const;

    MCNAPI std::vector<const ItemStack*> getSlots() const;

    MCNAPI void removeItem(int, int, ::ContainerID);

    MCNAPI void removeListener(::ContainerContentChangeListener*);

    MCNAPI bool removeResource(int);

    MCNAPI int removeResource(::ItemStack const&, bool, bool, int);

    MCNAPI bool selectSlot(int, ::ContainerID);

    MCNAPI void serverInitItemStackId(int);

    MCNAPI void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    MCNAPI void setContainerChanged(int);

    MCNAPI void setContainerSize(int, ::ContainerID);

    MCNAPI void setItem(int, ::ItemStack const&, ::ContainerID, bool);

    MCNAPI void setSelectedItem(::ItemStack const&);

    MCNAPI void setupDefaultInventory();

    MCNAPI void swapSlots(int, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $containerSizeChanged(int);

    MCNAPI void $containerContentChanged(int);

    MCNAPI void $createTransactionContext(
        std::function<void(Container&, int, const ItemStack&, const ItemStack&)>,
        std::function<void()>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
