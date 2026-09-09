#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"
#include "mc/world/containers/models/ExpandoModelElement.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class CreativeItemRegistry;
class ItemStack;
class ItemStackBase;
struct FullContainerName;
// clang-format on

class ExpandoContainerModel : public ::ContainerModel {
public:
    // ExpandoContainerModel inner types define
    using OnItemExpandedCallback = std::function<void(const std::string&, int, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ItemInstance, uint>>> mItems;
    ::ll::TypedStorage<8, 24, std::vector<ExpandoModelElement>>           mCurrentItems;
    ::ll::UntypedStorage<8, 24>                                           mCreativeItemRegistry;
    ::ll::TypedStorage<8, 24, std::vector<ExpandoModelElement>>           mExpandedItems;
    ::ll::UntypedStorage<8, 48>                                           mOnItemExpanded;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpandoContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExpandoContainerModel();

    virtual void containerContentChanged(int);

    virtual int getContainerSize() const;

    virtual int getFilteredContainerSize() const;

    virtual ::ItemStack const& getItemStack(int) const;

    virtual std::vector<ItemStack> const& getItems() const;

    virtual ::ItemInstance const& getItemInstance(int) const;

    virtual ::ItemStackBase const& getItemStackBase(int) const;

    virtual bool isItemInstanceBased() const;

    virtual void setItem(int, ::ItemStack const&);

    virtual ::ContainerExpandStatus getItemExpandStatus(int) const;

    virtual std::string const& getItemGroupName(int) const;

    virtual void switchItemExpando(int);

    virtual void refreshContainer(bool);

    virtual void _init();

    virtual void setItemInstance(int, ::ItemInstance const&);

    virtual int getIndexForCreativeItem(::ItemStackBase const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _generateCurrentItems();

    MCNAPI void _refreshContainer(bool);

    MCNAPI void setOnItemExpandedCallback(std::function<void(const std::string&, int, int)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $containerContentChanged(int);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getFilteredContainerSize() const;

    MCNAPI ::ItemStack const& $getItemStack(int) const;

    MCNAPI std::vector<ItemStack> const& $getItems() const;

    MCNAPI ::ItemInstance const& $getItemInstance(int) const;

    MCNAPI ::ItemStackBase const& $getItemStackBase(int) const;

    MCNAPI bool $isItemInstanceBased() const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI ::ContainerExpandStatus $getItemExpandStatus(int) const;

    MCNAPI std::string const& $getItemGroupName(int) const;

    MCNAPI void $switchItemExpando(int);

    MCNAPI void $refreshContainer(bool);

    MCNAPI void $_init();

    MCNAPI void $setItemInstance(int, ::ItemInstance const&);

    MCNAPI int $getIndexForCreativeItem(::ItemStackBase const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
