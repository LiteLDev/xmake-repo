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
namespace OreUI { class IResourceAllowList; }
namespace World { class FeaturedWorldTemplateManager; }
// clang-format on

namespace OreUI {

class FeaturedWorldTemplateListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::FeaturedWorldTemplateListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::FeaturedWorldTemplateManager&>                    mFeaturedWorldTemplateManager;
    ::ll::UntypedStorage<8, 24>                                                         mResourceAllowList;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::MarketplaceWorldTemplateDataBindings>> mFeaturedWorldTemplates;
    ::ll::TypedStorage<8, 56, std::optional<OreUI::SeeMoreRouteData>>                   mSeeMoreRouteData;
    ::ll::UntypedStorage<4, 12>                                                         mRefreshTask;
    // NOLINTEND

public:
    // prevent constructor by default
    FeaturedWorldTemplateListFacet& operator=(FeaturedWorldTemplateListFacet const&);
    FeaturedWorldTemplateListFacet(FeaturedWorldTemplateListFacet const&);
    FeaturedWorldTemplateListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeaturedWorldTemplateListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeaturedWorldTemplateListFacet(
        ::World::FeaturedWorldTemplateManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI std::vector<OreUI::MarketplaceWorldTemplateDataBindings> _getFeaturedWorldTemplates() const;

    MCNAPI ::OreUI::SeeMoreRouteData _getSeeMoreRouteData() const;

    MCNAPI void _initWorldTemplates();

    MCNAPI void clearRefreshTaskState();

    MCNAPI std::vector<OreUI::MarketplaceWorldTemplateDataBindings> const& getFeaturedWorldTemplates() const;

    MCNAPI ::OreUI::FacetTaskState getRefreshTaskState() const;

    MCNAPI std::optional<OreUI::SeeMoreRouteData> const& getSeeMoreRouteData() const;

    MCNAPI void refreshOffers();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[34]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::World::FeaturedWorldTemplateManager&, ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>);
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
