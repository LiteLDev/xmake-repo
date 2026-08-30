#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/StoreCatalogCategory.h"

// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
// clang-format on

struct ItemListInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                      mTitle;
    ::ll::UntypedStorage<8, 48>                      mFilterFunction;
    ::ll::TypedStorage<1, 1, bool>                   mAllowSeeMoreBy;
    ::ll::TypedStorage<4, 4, int>                    mMaxOffersVisible;
    ::ll::TypedStorage<1, 1, bool>                   mIsClientSideInventorySearchEnabled;
    ::ll::TypedStorage<4, 4, ::StoreCatalogCategory> mCatalogCategory;
    ::ll::TypedStorage<1, 1, bool>                   mShowSalesCollection;
    ::ll::TypedStorage<1, 1, bool>                   mHideNonSaleList;
    ::ll::UntypedStorage<1, 14>                      mIsSearchScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemListInfo& operator=(ItemListInfo const&);
    ItemListInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemListInfo(::ItemListInfo const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemListInfo const&);
    // NOLINTEND
};
