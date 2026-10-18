#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/DownloadableTemplateManagerBase.h"
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
namespace World { struct MarketplaceWorldTemplateData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class MarketplacePassWorldTemplateManager : public ::World::DownloadableTemplateManagerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                      mIsDirty;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository>> mStoreCatalogRepository;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IMarketplaceContentOffersProvider>>   mSuggestedContentOffersProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOfferPurchaseSuccessSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTemplateManagerModificationSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::MarketplaceWorldTemplateData>> mMarketplacePassWorldTemplateList;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplacePassWorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassWorldTemplateManager() /*override*/ = default;

    virtual void _templateDownloadedCallback(::std::string const& templateId, bool success) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MarketplacePassWorldTemplateManager(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>             dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>     entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager>   worldTemplateManager,
        ::ServicesManager&                                       servicesManager,
        ::IContentAcquisition&                                   contentAquisition,
        ::MarketplaceServicesManager&                            marketplaceServicesManager
    );

    MCAPI void _localWorldUpdateCallback(::std::pair<::std::string, bool> const& updatedTemplateData);

    MCAPI void _onOfferPurchased(::std::string const& productId);

    MCAPI void _prepareOffers();

    MCAPI void isTemplateOwnedThroughPassOnly(::std::string const& templateId, ::std::function<void(bool)> callback);

    MCAPI void update(double);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> MARKETPLACE_PASS_TEMPLATES_TITLE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> REALMS_PLUS_QUERY_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>             dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>     entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager>   worldTemplateManager,
        ::ServicesManager&                                       servicesManager,
        ::IContentAcquisition&                                   contentAquisition,
        ::MarketplaceServicesManager&                            marketplaceServicesManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_templateDownloadedCallback(::std::string const& templateId, bool success);
    // NOLINTEND
};
#else // @header-generator platform
class MarketplacePassWorldTemplateManager {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
