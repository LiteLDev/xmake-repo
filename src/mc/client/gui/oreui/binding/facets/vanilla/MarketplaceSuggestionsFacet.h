#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/SeeMoreRouteData.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
class SuggestedContentOffersProvider;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/SeeMoreRouteData.h"

// auto generated forward declare list
// clang-format off
class SuggestedContentOffersProvider;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class MarketplaceSuggestionsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::MarketplaceSuggestionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<SuggestedContentOffersProvider>> mOffersProvider;
    ::ll::TypedStorage<8, 56, std::optional<OreUI::SeeMoreRouteData>>          mSeeMoreRouteData;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplaceSuggestionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplaceSuggestionsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MarketplaceSuggestionsFacet(std::shared_ptr<SuggestedContentOffersProvider>);

    MCNAPI std::optional<OreUI::SeeMoreRouteData> const& getSeeMoreRouteData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[31]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<SuggestedContentOffersProvider>);
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
class MarketplaceSuggestionsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::MarketplaceSuggestionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SuggestedContentOffersProvider>> mOffersProvider;
    ::ll::TypedStorage<8, 72, ::std::optional<::OreUI::SeeMoreRouteData>>          mSeeMoreRouteData;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplaceSuggestionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MarketplaceSuggestionsFacet(::std::shared_ptr<::SuggestedContentOffersProvider> offersProvider);

    MCAPI ::std::optional<::OreUI::SeeMoreRouteData> const& getSeeMoreRouteData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::SuggestedContentOffersProvider> offersProvider);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class MarketplaceSuggestionsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
