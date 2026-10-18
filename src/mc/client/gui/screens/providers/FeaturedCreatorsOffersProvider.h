#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/providers/MarketplaceContentOffersProvider.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IStoreCatalogRepository;
class MarketplaceServicesManager;
class ServicesManager;
class StoreCatalogItem;
// clang-format on

class FeaturedCreatorsOffersProvider : public ::MarketplaceContentOffersProvider {
public:
    // prevent constructor by default
    FeaturedCreatorsOffersProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeaturedCreatorsOffersProvider();

    virtual std::function<bool(const StoreCatalogItem&)> _getFilterFunction();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeaturedCreatorsOffersProvider(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>>,
        ::ServicesManager&,
        ::MarketplaceServicesManager&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>>,
        ::ServicesManager&,
        ::MarketplaceServicesManager&
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
    MCNAPI std::function<bool(const StoreCatalogItem&)> $_getFilterFunction();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/providers/MarketplaceContentOffersProvider.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IStoreCatalogRepository;
class MarketplaceServicesManager;
class ServicesManager;
class StoreCatalogItem;
// clang-format on

class FeaturedCreatorsOffersProvider : public ::MarketplaceContentOffersProvider {
public:
    // prevent constructor by default
    FeaturedCreatorsOffersProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::function<bool(::StoreCatalogItem const&)> _getFilterFunction() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeaturedCreatorsOffersProvider(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>             dateManager,
        ::ServicesManager&                                       servicesManager,
        ::MarketplaceServicesManager&                            marketplaceServicesManager
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>             dateManager,
        ::ServicesManager&                                       servicesManager,
        ::MarketplaceServicesManager&                            marketplaceServicesManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::function<bool(::StoreCatalogItem const&)> $_getFilterFunction();
    // NOLINTEND
};
#else // @header-generator platform
class FeaturedCreatorsOffersProvider {};
#endif // @header-generator platform
#endif // @header-generator platform
