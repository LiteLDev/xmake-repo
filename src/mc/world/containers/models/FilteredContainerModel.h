#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ExpandoContainerModel.h"
#include "mc/world/containers/models/FilterResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
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
class ItemStackBase;
struct FullContainerName;
// clang-format on

class FilteredContainerModel : public ::ExpandoContainerModel {
public:
    // FilteredContainerModel inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using FilterFunction = std::function<FilterResult(const ItemInstance&, bool)>;
#else // @header-generator platform
    using FilterFunction = ::std::function<::FilterResult(::ItemInstance const&, bool)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                        mDoExpandoGroups;
    ::ll::TypedStorage<1, 1, bool>                                        mIsFiltering;
    ::ll::TypedStorage<4, 4, int>                                         mFilteredItemCount;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ItemInstance, uint>>> mSavedItems;
    ::ll::UntypedStorage<8, 32>                                           mActiveFilteredExpandableSetHeads;
    ::ll::UntypedStorage<8, 48>                                           mFilterRule;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                              mDoExpandoGroups;
    ::ll::TypedStorage<1, 1, bool>                                              mIsFiltering;
    ::ll::TypedStorage<4, 4, int>                                               mFilteredItemCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemInstance, uint>>> mSavedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemInstance, uint>>> mActiveFilteredExpandableSetHeads;
    ::ll::TypedStorage<8, 64, ::std::function<::FilterResult(::ItemInstance const&, bool)>> mFilterRule;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FilteredContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FilteredContainerModel();
#else // @header-generator platform
    virtual ~FilteredContainerModel() /*override*/ = default;
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
    virtual void setItemInstance(int modelSlot, ::ItemInstance const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemInstance const& getItemInstance(int) const;
#else // @header-generator platform
    virtual void refreshContainer(bool fullRefresh) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isExpanableItemFiltered(int) const;
#else // @header-generator platform
    virtual int getContainerSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void refreshContainer(bool);
#else // @header-generator platform
    virtual int getFilteredContainerSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _init();
#else // @header-generator platform
    virtual bool isExpanableItemFiltered(int index) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItemInstance(int, ::ItemInstance const&);
#else // @header-generator platform
    virtual int getIndexForCreativeItem(::ItemStackBase const& item) const /*override*/;
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
    MCNAPI FilteredContainerModel(
        ::FullContainerName const&,
        int,
        ::ContainerCategory,
        ::gsl::not_null<Bedrock::NonOwnerPointer<CreativeItemRegistry>>,
        bool,
        bool,
        std::function<FilterResult(const ItemInstance&, bool)>
#else // @header-generator platform
    MCAPI FilteredContainerModel(
        ::FullContainerName const&                                   containerName,
        int                                                          size,
        ::ContainerCategory                                          containerCategory,
        ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry>        creativeItemRegistry,
        bool                                                         doExpandoGroups,
        bool                                                         filter,
        ::std::function<::FilterResult(::ItemInstance const&, bool)> rule
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _refreshContainer(bool);
#else // @header-generator platform
    MCAPI void _refreshContainer(bool fullRefresh);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setFiltering(bool);

    MCNAPI void setFilteringRule(std::function<FilterResult(const ItemInstance&, bool)>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setFilteringRule(::std::function<::FilterResult(::ItemInstance const&, bool)> rule);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::FullContainerName const&,
        int,
        ::ContainerCategory,
        ::gsl::not_null<Bedrock::NonOwnerPointer<CreativeItemRegistry>>,
        bool,
        bool,
        std::function<FilterResult(const ItemInstance&, bool)>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::FullContainerName const&                                   containerName,
        int                                                          size,
        ::ContainerCategory                                          containerCategory,
        ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry>        creativeItemRegistry,
        bool                                                         doExpandoGroups,
        bool                                                         filter,
        ::std::function<::FilterResult(::ItemInstance const&, bool)> rule
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
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
    MCNAPI ::ItemInstance const& $getItemInstance(int) const;
#else // @header-generator platform
    MCAPI void $refreshContainer(bool fullRefresh);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isExpanableItemFiltered(int) const;
#else // @header-generator platform
    MCAPI int $getContainerSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $refreshContainer(bool);
#else // @header-generator platform
    MCAPI int $getFilteredContainerSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_init();
#else // @header-generator platform
    MCAPI bool $isExpanableItemFiltered(int index) const;
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
