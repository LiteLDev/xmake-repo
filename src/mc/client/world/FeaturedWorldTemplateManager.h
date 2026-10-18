#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/MarketplaceWorldTemplateData.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IEntitlementManager;
class IMarketplaceContentOffersProvider;
class IStoreCatalogRepository;
class MarketplaceServicesManager;
class ServicesManager;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IEntitlementManager;
class IMarketplaceContentOffersProvider;
class IStoreCatalogRepository;
class MarketplaceServicesManager;
class ServicesManager;
namespace World { struct MarketplaceWorldTemplateData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class FeaturedWorldTemplateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mIsDirty;
    ::ll::UntypedStorage<8, 24>                                                   mStoreCatalogRepository;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IMarketplaceContentOffersProvider>> mSuggestedContentOffersProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mOfferPurchaseSuccessSubscription;
    ::ll::TypedStorage<8, 24, std::vector<World::MarketplaceWorldTemplateData>>   mFeaturedWorldTemplateList;
    // NOLINTEND

public:
    // prevent constructor by default
    FeaturedWorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeaturedWorldTemplateManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeaturedWorldTemplateManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::ServicesManager&,
        ::MarketplaceServicesManager&
    );

    MCNAPI std::vector<World::MarketplaceWorldTemplateData> const _getTemplates() const;

    MCNAPI void _onOfferPurchased(std::string const&);

    MCNAPI bool areSuggestedOffersLoaded() const;

    MCNAPI std::vector<World::MarketplaceWorldTemplateData> const& getFeaturedWorldTemplateList() const;

    MCNAPI std::string getSeeMorePageId() const;

    MCNAPI std::optional<std::string> getSuggestedOffersTitle() const;

    MCNAPI bool isDirty() const;

    MCNAPI void refreshOffers();

    MCNAPI void update(double);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MAX_CONTENT_OFFERS();

    MCNAPI static ::std::add_lvalue_reference_t<char const[11]> UPSELL_QUERY_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class FeaturedWorldTemplateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                      mIsDirty;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository>> mStoreCatalogRepository;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IMarketplaceContentOffersProvider>>   mSuggestedContentOffersProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mOfferPurchaseSuccessSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::MarketplaceWorldTemplateData>> mFeaturedWorldTemplateList;
    // NOLINTEND

public:
    // prevent constructor by default
    FeaturedWorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeaturedWorldTemplateManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeaturedWorldTemplateManager(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>             dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>     entitlementManager,
        ::ServicesManager&                                       servicesManager,
        ::MarketplaceServicesManager&                            marketplaceServicesManager
    );

    MCAPI ::std::vector<::World::MarketplaceWorldTemplateData> const _getTemplates() const;

    MCAPI void _onOfferPurchased(::std::string const& productId);

    MCAPI void _prepareOffers();

    MCAPI void update(double);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>             dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>     entitlementManager,
        ::ServicesManager&                                       servicesManager,
        ::MarketplaceServicesManager&                            marketplaceServicesManager
    );
    // NOLINTEND
};
#else // @header-generator platform
class FeaturedWorldTemplateManager {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
