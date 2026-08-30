#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ExpandoContainerModel.h"
#include "mc/world/containers/models/FilterResult.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class CreativeItemRegistry;
class ItemStackBase;
struct FullContainerName;
// clang-format on

class FilteredContainerModel : public ::ExpandoContainerModel {
public:
    // FilteredContainerModel inner types define
    using FilterFunction = std::function<FilterResult(const ItemInstance&, bool)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                        mDoExpandoGroups;
    ::ll::TypedStorage<1, 1, bool>                                        mIsFiltering;
    ::ll::TypedStorage<4, 4, int>                                         mFilteredItemCount;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ItemInstance, uint>>> mSavedItems;
    ::ll::UntypedStorage<8, 32>                                           mActiveFilteredExpandableSetHeads;
    ::ll::UntypedStorage<8, 48>                                           mFilterRule;
    // NOLINTEND

public:
    // prevent constructor by default
    FilteredContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FilteredContainerModel();

    virtual void containerContentChanged(int);

    virtual int getContainerSize() const;

    virtual int getFilteredContainerSize() const;

    virtual ::ItemInstance const& getItemInstance(int) const;

    virtual bool isExpanableItemFiltered(int) const;

    virtual void refreshContainer(bool);

    virtual void _init();

    virtual void setItemInstance(int, ::ItemInstance const&);

    virtual int getIndexForCreativeItem(::ItemStackBase const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FilteredContainerModel(
        ::FullContainerName const&,
        int,
        ::ContainerCategory,
        ::gsl::not_null<Bedrock::NonOwnerPointer<CreativeItemRegistry>>,
        bool,
        bool,
        std::function<FilterResult(const ItemInstance&, bool)>
    );

    MCNAPI void _refreshContainer(bool);

    MCNAPI void setFiltering(bool);

    MCNAPI void setFilteringRule(std::function<FilterResult(const ItemInstance&, bool)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::FullContainerName const&,
        int,
        ::ContainerCategory,
        ::gsl::not_null<Bedrock::NonOwnerPointer<CreativeItemRegistry>>,
        bool,
        bool,
        std::function<FilterResult(const ItemInstance&, bool)>
    );
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

    MCNAPI ::ItemInstance const& $getItemInstance(int) const;

    MCNAPI bool $isExpanableItemFiltered(int) const;

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
