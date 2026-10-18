#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/catalog/InventoryFilter.h"
#include "mc/client/services/requests/catalog/RangeFilterInfo.h"
#include "mc/client/services/requests/catalog/SortParams.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace catalog {

#if defined(LL_PLAT_A) // @header-generator platform
struct SearchInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::catalog::SortParams>                  mSortParams;
    ::ll::TypedStorage<8, 24, std::string>                           mSearchText;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mCreatorFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mMainMenuFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mOfferTypeFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mPackTypeFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mWorldTemplateFilters;
    ::ll::TypedStorage<8, 24, std::vector<catalog::RangeFilterInfo>> mPriceFilters;
    ::ll::TypedStorage<8, 24, std::vector<catalog::RangeFilterInfo>> mRatingFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mDressingRoomBodyFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mDressingRoomStyleFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mDressingRoomEmoteFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mGraphicsFilters;
    ::ll::TypedStorage<1, 1, ::catalog::InventoryFilter>             mInstallStateFilter;
    ::ll::TypedStorage<1, 1, bool>                                   mFilterPastRealmsPlus;
    ::ll::TypedStorage<1, 1, bool>                                   mFilterCurrentRealmsPlus;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mOwnedAndInstalledPackIDs;
    // NOLINTEND

public:
    // prevent constructor by default
    SearchInfo& operator=(SearchInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SearchInfo(::catalog::SearchInfo const&);

    MCNAPI ::catalog::SearchInfo& operator=(::catalog::SearchInfo&&);

    MCNAPI ~SearchInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::catalog::SearchInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct SearchInfo {};
#endif // @header-generator platform

} // namespace catalog
