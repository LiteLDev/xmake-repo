#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/NetworkWorldDetails.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/NetworkWorldType.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace World { class ExternalServerWorldList; }
namespace World { class ThirdPartyWorldList; }
// clang-format on

namespace OreUI {

class NetworkWorldDetailsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::NetworkWorldDetailsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::ThirdPartyWorldList&>     mThirdPartyWorldList;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&> mExternalServerWorldList;
    ::ll::UntypedStorage<8, 24>                                 mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mThirdpartyListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mExternalListSubscription;
    ::ll::UntypedStorage<8, 296>                                mCurrentNetworkWorldDetails;
    ::ll::TypedStorage<8, 24, std::string>                      mCurrentNetworkWorldId;
    ::ll::TypedStorage<1, 1, bool>                              mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                              mHasLoadedDetails;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldDetailsFacet& operator=(NetworkWorldDetailsFacet const&);
    NetworkWorldDetailsFacet(NetworkWorldDetailsFacet const&);
    NetworkWorldDetailsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkWorldDetailsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkWorldDetailsFacet(
        ::World::ThirdPartyWorldList&,
        ::World::ExternalServerWorldList&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI void _onWorldListUpdated();

    MCNAPI ::OreUI::NetworkWorldDetails const& getCurrentNetworkWorldDetails() const;

    MCNAPI bool hasLoadedDetails() const;

    MCNAPI void loadNetworkWorldDetails(std::string const&, ::OreUI::NetworkWorldType const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[28]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::World::ThirdPartyWorldList&,
        ::World::ExternalServerWorldList&,
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
