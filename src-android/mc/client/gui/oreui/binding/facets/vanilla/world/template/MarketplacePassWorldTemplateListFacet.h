#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
