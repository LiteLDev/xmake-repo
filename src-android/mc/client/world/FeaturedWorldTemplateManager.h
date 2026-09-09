#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace World {

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

} // namespace World
