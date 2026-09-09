#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/DownloadableTemplateManagerBase.h"
#include "mc/client/world/MarketplaceWorldTemplateData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IContentAcquisition;
class IEntitlementManager;
class IMarketplaceContentOffersProvider;
class IStoreCatalogRepository;
class IWorldTemplateManager;
class MarketplaceServicesManager;
class ServicesManager;
// clang-format on

namespace World {

class MarketplacePassWorldTemplateManager : public ::World::DownloadableTemplateManagerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mIsDirty;
    ::ll::UntypedStorage<8, 24>                                                   mStoreCatalogRepository;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IMarketplaceContentOffersProvider>> mSuggestedContentOffersProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mOfferPurchaseSuccessSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTemplateManagerModificationSubscription;
    ::ll::TypedStorage<8, 24, std::vector<World::MarketplaceWorldTemplateData>> mMarketplacePassWorldTemplateList;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplacePassWorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassWorldTemplateManager();

    virtual void _templateDownloadedCallback(std::string const&, bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MarketplacePassWorldTemplateManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IWorldTemplateManager>>,
        ::ServicesManager&,
        ::IContentAcquisition&,
        ::MarketplaceServicesManager&
    );

    MCNAPI std::vector<World::MarketplaceWorldTemplateData> _getTemplates();

    MCNAPI void _localWorldUpdateCallback(std::pair<std::string, bool> const&);

    MCNAPI void _onOfferPurchased(std::string const&);

    MCNAPI bool areSuggestedOffersLoaded() const;

    MCNAPI std::vector<World::MarketplaceWorldTemplateData> const& getMarketplacePassWorldTemplateList() const;

    MCNAPI std::string getSeeMorePageId() const;

    MCNAPI std::optional<std::string> getSuggestedOffersTitle() const;

    MCNAPI bool isDirty() const;

    MCNAPI void isTemplateOwnedThroughPassOnly(std::string const&, std::function<void(bool)>);

    MCNAPI void refreshOffers();

    MCNAPI void update(double);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[31]> MARKETPLACE_PASS_TEMPLATES_TITLE();

    MCNAPI static ulong const& MAX_CONTENT_OFFERS();

    MCNAPI static ulong const& MAX_MIXED_CONTENT_OFFERS();

    MCNAPI static ::std::add_lvalue_reference_t<char const[17]> REALMS_PLUS_QUERY_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IWorldTemplateManager>>,
        ::ServicesManager&,
        ::IContentAcquisition&,
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
    MCNAPI void $_templateDownloadedCallback(std::string const&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
