#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
