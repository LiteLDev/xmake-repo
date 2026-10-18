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
#if defined(LL_PLAT_A) // @header-generator platform
class ItemDescriptor;
class Level;
class ListTag;
class SaveContext;
class SemVersion;
struct PlayerInventorySlotData;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PlayerInventory : public ::ContainerSizeChangeListener, public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                      mSelected;
    ::ll::TypedStorage<8, 152, ::ItemStack>                            mInfiniteItem;
    ::ll::TypedStorage<1, 1, ::ContainerID>                            mSelectedContainerId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Inventory>>               mInventory;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>                  mComplexItems;
    ::ll::TypedStorage<8, 16, std::weak_ptr<HudContainerManagerModel>> mHudContainerManager;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                          mSelected;
    ::ll::TypedStorage<8, 152, ::ItemStack>                                mInfiniteItem;
    ::ll::TypedStorage<1, 1, ::ContainerID>                                mSelectedContainerId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Inventory>>               mInventory;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>                  mComplexItems;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::HudContainerManagerModel>> mHudContainerManager;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerInventory();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PlayerInventory();
#else // @header-generator platform
    virtual ~PlayerInventory() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerSizeChanged(int);
#else // @header-generator platform
    virtual void containerSizeChanged(int size) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerContentChanged(int);
#else // @header-generator platform
    virtual void containerContentChanged(int slot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void createTransactionContext(std::function<void (Container&, int, const ItemStack&, const ItemStack&)>, std::function<void ()>);
    // clang-format on
#else // @header-generator platform
    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<HudContainerManagerModel> _getHudContainerManagerModel() const;
#else // @header-generator platform
    MCAPI void clearVanishEnchantedItemsOnDeath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool add(::ItemStack&, bool);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void dropAllOnDeath(bool onlyClearContainer);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addListener(::ContainerContentChangeListener*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool dropSlot(int slot, bool onlyClearContainer, bool dropAll, ::ContainerID containerId, bool randomly);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canAdd(::ItemStack const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::std::vector<::ContainerID> const& getAllContainerIds();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int clearInventory(int);
#else // @header-generator platform
    MCAPI int getItemCount(::std::function<bool(::ItemStack const&)> comparator);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool selectSlot(int slot, ::ContainerID containerId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $containerSizeChanged(int);
#else // @header-generator platform
    MCFOLD void $containerSizeChanged(int size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $containerContentChanged(int);
#else // @header-generator platform
    MCAPI void $containerContentChanged(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $createTransactionContext(
        std::function<void(Container&, int, const ItemStack&, const ItemStack&)>,
        std::function<void()>
#else // @header-generator platform
    MCAPI void $createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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
