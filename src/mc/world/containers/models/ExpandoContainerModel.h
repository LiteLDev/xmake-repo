#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/models/ContainerCategory.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/models/ExpandoModelElement.h"
#include "mc/world/item/ItemInstance.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class CreativeItemRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemInstance;
#endif // @header-generator platform
class ItemStack;
class ItemStackBase;
#if defined(LL_PLAT_A) // @header-generator platform
struct FullContainerName;
#else // @header-generator platform
struct ExpandoModelElement;
#endif // @header-generator platform
// clang-format on

class ExpandoContainerModel : public ::ContainerModel {
public:
    // ExpandoContainerModel inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using OnItemExpandedCallback = std::function<void(const std::string&, int, int)>;
#else // @header-generator platform
    using OnItemExpandedCallback = ::std::function<void(::std::string const&, int, int)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ItemInstance, uint>>> mItems;
    ::ll::TypedStorage<8, 24, std::vector<ExpandoModelElement>>           mCurrentItems;
    ::ll::UntypedStorage<8, 24>                                           mCreativeItemRegistry;
    ::ll::TypedStorage<8, 24, std::vector<ExpandoModelElement>>           mExpandedItems;
    ::ll::UntypedStorage<8, 48>                                           mOnItemExpanded;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemInstance, uint>>>      mItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpandoModelElement>>                  mCurrentItems;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry>> mCreativeItemRegistry;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpandoModelElement>>                  mExpandedItems;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int, int)>> mOnItemExpanded;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ExpandoContainerModel();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ExpandoContainerModel();
#else // @header-generator platform
    virtual ~ExpandoContainerModel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerContentChanged(int);
#else // @header-generator platform
    virtual void containerContentChanged(int slot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getContainerSize() const;
#else // @header-generator platform
    virtual ::ItemInstance const& getItemInstance(int modelSlot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getFilteredContainerSize() const;
#else // @header-generator platform
    virtual void setItemInstance(int modelSlot, ::ItemInstance const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getItemStack(int) const;
#else // @header-generator platform
    virtual bool isItemInstanceBased() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemStack> const& getItems() const;
#else // @header-generator platform
    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemInstance const& getItemInstance(int) const;
#else // @header-generator platform
    virtual ::ItemStack const& getItemStack(int modelSlot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackBase const& getItemStackBase(int) const;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack> const& getItems() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isItemInstanceBased() const;
#else // @header-generator platform
    virtual ::ItemStackBase const& getItemStackBase(int modelSlot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItem(int, ::ItemStack const&);
#else // @header-generator platform
    virtual int getContainerSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerExpandStatus getItemExpandStatus(int) const;
#else // @header-generator platform
    virtual int getFilteredContainerSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getItemGroupName(int) const;
#else // @header-generator platform
    virtual ::ContainerExpandStatus getItemExpandStatus(int itemId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void switchItemExpando(int);
#else // @header-generator platform
    virtual ::std::string const& getItemGroupName(int itemId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void refreshContainer(bool);
#else // @header-generator platform
    virtual void switchItemExpando(int itemId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _init();
#else // @header-generator platform
    virtual void refreshContainer(bool fullRefresh) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItemInstance(int, ::ItemInstance const&);
#else // @header-generator platform
    virtual int getIndexForCreativeItem(::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getIndexForCreativeItem(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual void _init() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _generateCurrentItems();
#else // @header-generator platform
    MCAPI void _generateCurrentItems();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _refreshContainer(bool);
#else // @header-generator platform
    MCAPI void _refreshContainer(bool fullRefresh);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setOnItemExpandedCallback(std::function<void(const std::string&, int, int)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setOnItemExpandedCallback(::std::function<void(::std::string const&, int, int)> callback);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $containerContentChanged(int);
#else // @header-generator platform
    MCAPI void $containerContentChanged(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerSize() const;
#else // @header-generator platform
    MCAPI ::ItemInstance const& $getItemInstance(int modelSlot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getFilteredContainerSize() const;
#else // @header-generator platform
    MCAPI void $setItemInstance(int modelSlot, ::ItemInstance const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getItemStack(int) const;
#else // @header-generator platform
    MCFOLD bool $isItemInstanceBased() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemStack> const& $getItems() const;
#else // @header-generator platform
    MCFOLD void $setItem(int modelSlot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance const& $getItemInstance(int) const;
#else // @header-generator platform
    MCFOLD ::ItemStack const& $getItemStack(int modelSlot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackBase const& $getItemStackBase(int) const;
#else // @header-generator platform
    MCFOLD ::std::vector<::ItemStack> const& $getItems() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isItemInstanceBased() const;
#else // @header-generator platform
    MCAPI ::ItemStackBase const& $getItemStackBase(int modelSlot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItem(int, ::ItemStack const&);
#else // @header-generator platform
    MCAPI int $getContainerSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerExpandStatus $getItemExpandStatus(int) const;
#else // @header-generator platform
    MCAPI int $getFilteredContainerSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getItemGroupName(int) const;
#else // @header-generator platform
    MCAPI ::ContainerExpandStatus $getItemExpandStatus(int itemId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $switchItemExpando(int);
#else // @header-generator platform
    MCAPI ::std::string const& $getItemGroupName(int itemId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $refreshContainer(bool);
#else // @header-generator platform
    MCAPI void $switchItemExpando(int itemId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_init();
#else // @header-generator platform
    MCAPI void $refreshContainer(bool fullRefresh);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItemInstance(int, ::ItemInstance const&);
#else // @header-generator platform
    MCAPI int $getIndexForCreativeItem(::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getIndexForCreativeItem(::ItemStackBase const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_init();
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
