#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/catalog/reviews/RatingData.h"
#include "mc/client/store/StoreCatalogCategory.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/catalog/reviews/RatingData.h"
#include "mc/client/store/StoreCatalogCategory.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct MarketplaceWorldTemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>           mId;
    ::ll::TypedStorage<8, 24, std::string>           mName;
    ::ll::TypedStorage<8, 24, std::string>           mCreator;
    ::ll::UntypedStorage<8, 24>                      mThumbnailPathBuffer;
    ::ll::TypedStorage<8, 32, ::RatingData>          mRatingData;
    ::ll::TypedStorage<8, 24, std::string>           mSubscriptionStartDate;
    ::ll::TypedStorage<8, 24, std::string>           mSubscriptionEndDate;
    ::ll::TypedStorage<1, 1, bool>                   mIsExpired;
    ::ll::TypedStorage<8, 24, std::string>           mPackId;
    ::ll::TypedStorage<1, 1, bool>                   mIsInstalled;
    ::ll::TypedStorage<1, 1, bool>                   mIsUpdateAvailable;
    ::ll::TypedStorage<4, 4, ::StoreCatalogCategory> mStoreCategory;
    ::ll::TypedStorage<4, 4, int>                    mPrice;
    ::ll::TypedStorage<4, 4, int>                    mFullPrice;
    ::ll::TypedStorage<1, 1, bool>                   mIsFree;
    ::ll::TypedStorage<1, 1, bool>                   mHasDiscount;
    ::ll::TypedStorage<8, 24, std::string>           mDiscountText;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MarketplaceWorldTemplateData(::World::MarketplaceWorldTemplateData const&);

    MCNAPI ~MarketplaceWorldTemplateData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::World::MarketplaceWorldTemplateData fromStoreCatalogItem(::StoreCatalogItem const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::World::MarketplaceWorldTemplateData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MarketplaceWorldTemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                     mId;
    ::ll::TypedStorage<8, 32, ::std::string>                     mName;
    ::ll::TypedStorage<8, 32, ::std::string>                     mCreator;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mThumbnailPathBuffer;
    ::ll::TypedStorage<8, 40, ::RatingData>                      mRatingData;
    ::ll::TypedStorage<8, 32, ::std::string>                     mSubscriptionStartDate;
    ::ll::TypedStorage<8, 32, ::std::string>                     mSubscriptionEndDate;
    ::ll::TypedStorage<1, 1, bool>                               mIsExpired;
    ::ll::TypedStorage<8, 32, ::std::string>                     mPackId;
    ::ll::TypedStorage<1, 1, bool>                               mIsInstalled;
    ::ll::TypedStorage<1, 1, bool>                               mIsUpdateAvailable;
    ::ll::TypedStorage<4, 4, ::StoreCatalogCategory>             mStoreCategory;
    ::ll::TypedStorage<4, 4, int>                                mPrice;
    ::ll::TypedStorage<4, 4, int>                                mFullPrice;
    ::ll::TypedStorage<1, 1, bool>                               mIsFree;
    ::ll::TypedStorage<1, 1, bool>                               mHasDiscount;
    ::ll::TypedStorage<8, 32, ::std::string>                     mDiscountText;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplaceWorldTemplateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MarketplaceWorldTemplateData(::World::MarketplaceWorldTemplateData const&);

    MCAPI ::World::MarketplaceWorldTemplateData& operator=(::World::MarketplaceWorldTemplateData const&);

    MCAPI ~MarketplaceWorldTemplateData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::World::MarketplaceWorldTemplateData
    fromStoreCatalogItem(::StoreCatalogItem const& worldTemplateInfo);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::MarketplaceWorldTemplateData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct MarketplaceWorldTemplateData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
