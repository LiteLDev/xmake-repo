#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/SeeMoreRouteData.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MarketplaceWorldTemplateDataBindings.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class MarketplaceServicesManager;
namespace OreUI { class IResourceAllowList; }
namespace World { class MarketplacePassWorldTemplateManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/SeeMoreRouteData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class MarketplaceServicesManager;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct MarketplaceWorldTemplateDataBindings; }
namespace World { class MarketplacePassWorldTemplateManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class MarketplacePassWorldTemplateListFacet
: public ::OreUI::FacetBase_DEPRECATED<OreUI::MarketplacePassWorldTemplateListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::World::MarketplacePassWorldTemplateManager&> mMarketplacePassWorldTemplateManager;
    ::ll::UntypedStorage<8, 8> mMarketplaceServicesManager;
    ::ll::UntypedStorage<8, 24> mDateManager;
    ::ll::UntypedStorage<8, 24> mResourceAllowList;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::MarketplaceWorldTemplateDataBindings>> mMarketplacePassWorldTemplates;
    ::ll::TypedStorage<8, 56, std::optional<OreUI::SeeMoreRouteData>> mSeeMoreRouteData;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::MarketplaceWorldTemplateDataBindings>> mPrevMarketplacePassWorldTemplates;
    ::ll::TypedStorage<8, 56, std::optional<OreUI::SeeMoreRouteData>> mPrevSeeMoreRouteData;
    ::ll::UntypedStorage<4, 12> mRefreshTask;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplacePassWorldTemplateListFacet& operator=(MarketplacePassWorldTemplateListFacet const&);
    MarketplacePassWorldTemplateListFacet(MarketplacePassWorldTemplateListFacet const&);
    MarketplacePassWorldTemplateListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassWorldTemplateListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MarketplacePassWorldTemplateListFacet(
        ::World::MarketplacePassWorldTemplateManager&,
        ::MarketplaceServicesManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI std::vector<OreUI::MarketplaceWorldTemplateDataBindings> _getMarketplacePassWorldTemplates() const;

    MCNAPI ::OreUI::SeeMoreRouteData _getSeeMoreRouteData() const;

    MCNAPI void _initWorldTemplates();

    MCNAPI void
    _updateBindings(std::vector<OreUI::MarketplaceWorldTemplateDataBindings>&&, ::OreUI::SeeMoreRouteData&&);

    MCNAPI void clearRefreshTaskState();

    MCNAPI std::vector<OreUI::MarketplaceWorldTemplateDataBindings> const& getMarketplacePassWorldTemplates() const;

    MCNAPI ::OreUI::FacetTaskState getRefreshTaskState() const;

    MCNAPI std::optional<OreUI::SeeMoreRouteData> const& getSeeMoreRouteData() const;

    MCNAPI void refreshOffers();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[41]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::World::MarketplacePassWorldTemplateManager&,
        ::MarketplaceServicesManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
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
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class MarketplacePassWorldTemplateListFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::MarketplacePassWorldTemplateListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::MarketplacePassWorldTemplateManager&> mMarketplacePassWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::MarketplaceServicesManager&>                 mMarketplaceServicesManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager>> mDateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MarketplaceWorldTemplateDataBindings>>
                                                                          mMarketplacePassWorldTemplates;
    ::ll::TypedStorage<8, 72, ::std::optional<::OreUI::SeeMoreRouteData>> mSeeMoreRouteData;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MarketplaceWorldTemplateDataBindings>>
                                                                           mPrevMarketplacePassWorldTemplates;
    ::ll::TypedStorage<8, 72, ::std::optional<::OreUI::SeeMoreRouteData>>  mPrevSeeMoreRouteData;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>> mRefreshTask;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplacePassWorldTemplateListFacet& operator=(MarketplacePassWorldTemplateListFacet const&);
    MarketplacePassWorldTemplateListFacet(MarketplacePassWorldTemplateListFacet const&);
    MarketplacePassWorldTemplateListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MarketplacePassWorldTemplateListFacet(
        ::World::MarketplacePassWorldTemplateManager&              marketplacePassWorldTemplateManager,
        ::MarketplaceServicesManager&                              marketplaceServicesManager,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>               dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ::std::vector<::OreUI::MarketplaceWorldTemplateDataBindings> _getMarketplacePassWorldTemplates() const;

    MCAPI ::OreUI::SeeMoreRouteData _getSeeMoreRouteData() const;

    MCAPI void _updateBindings(
        ::std::vector<::OreUI::MarketplaceWorldTemplateDataBindings>&& templateBindings,
        ::OreUI::SeeMoreRouteData&&                                    seeMoreRouteData
    );

    MCAPI void clearRefreshTaskState();

    MCFOLD ::std::vector<::OreUI::MarketplaceWorldTemplateDataBindings> const& getMarketplacePassWorldTemplates() const;

    MCAPI ::OreUI::FacetTaskState getRefreshTaskState() const;

    MCFOLD ::std::optional<::OreUI::SeeMoreRouteData> const& getSeeMoreRouteData() const;

    MCAPI void refreshOffers();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::World::MarketplacePassWorldTemplateManager&              marketplacePassWorldTemplateManager,
        ::MarketplaceServicesManager&                              marketplaceServicesManager,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>               dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class MarketplacePassWorldTemplateListFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
