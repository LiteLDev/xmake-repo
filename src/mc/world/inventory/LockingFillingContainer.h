#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/inventory/FillingContainer.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ListTag;
class SaveContext;
namespace Bedrock::Threading { class SharedRecursiveMutex; }
// clang-format on

class LockingFillingContainer : public ::FillingContainer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<Bedrock::Threading::SharedRecursiveMutex>> mContainerContextMutex;
    ::ll::TypedStorage<4, 4, int>                                                      mWeightInStorageItem;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsClientSide;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Bedrock::Threading::SharedRecursiveMutex>> mContainerContextMutex;
    ::ll::TypedStorage<4, 4, int>                                                          mWeightInStorageItem;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsClientSide;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LockingFillingContainer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LockingFillingContainer();
#else // @header-generator platform
    virtual int clearInventory(int resizeTo) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    virtual void swapSlots(int from, int to) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getItem(int) const;
#else // @header-generator platform
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItemWithForceBalance(int, ::ItemStack const&, bool);
#else // @header-generator platform
    virtual ::std::unique_ptr<::ListTag> saveToTag(::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void swapSlots(int, int);
#else // @header-generator platform
    virtual ::ItemStack const& getItem(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int clearInventory(int);
#else // @header-generator platform
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ListTag> saveToTag(::SaveContext const&) const;

    virtual void _trySetInSlot(::ItemStack&, int const&, int const&, int&);
#else // @header-generator platform
    virtual void
    _trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LockingFillingContainer(
        int,
        ::SharedTypes::Legacy::ContainerType,
        std::weak_ptr<Bedrock::Threading::SharedRecursiveMutex>,
        bool
#else // @header-generator platform
    MCAPI LockingFillingContainer(
        int                                                         numTotalSlots,
        ::SharedTypes::Legacy::ContainerType                        containerType,
        ::std::weak_ptr<::Bedrock::Threading::SharedRecursiveMutex> serializationMutex,
        bool                                                        isClientSide
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getWeightInStorageItem() const;
#else // @header-generator platform
    MCAPI int getWeightInStorageItem() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(int, ::SharedTypes::Legacy::ContainerType, std::weak_ptr<Bedrock::Threading::SharedRecursiveMutex>, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        int                                                         numTotalSlots,
        ::SharedTypes::Legacy::ContainerType                        containerType,
        ::std::weak_ptr<::Bedrock::Threading::SharedRecursiveMutex> serializationMutex,
        bool                                                        isClientSide
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    MCFOLD int $clearInventory(int resizeTo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getItem(int) const;
#else // @header-generator platform
    MCFOLD void $swapSlots(int from, int to);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItemWithForceBalance(int, ::ItemStack const&, bool);
#else // @header-generator platform
    MCAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $swapSlots(int, int);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ListTag> $saveToTag(::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $clearInventory(int);
#else // @header-generator platform
    MCAPI ::ItemStack const& $getItem(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ListTag> $saveToTag(::SaveContext const&) const;
#else // @header-generator platform
    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_trySetInSlot(::ItemStack&, int const&, int const&, int&);
#else // @header-generator platform
    MCAPI void $_trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
