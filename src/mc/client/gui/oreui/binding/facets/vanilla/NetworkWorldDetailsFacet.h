#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/NetworkWorldDetails.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/NetworkWorldType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace World { class ExternalServerWorldList; }
namespace World { class ThirdPartyWorldList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class NetworkWorldDetailsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::NetworkWorldDetailsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::ThirdPartyWorldList&>                               mThirdPartyWorldList;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&>                           mExternalServerWorldList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mThirdpartyListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mExternalListSubscription;
    ::ll::TypedStorage<8, 376, ::OreUI::NetworkWorldDetails>                              mCurrentNetworkWorldDetails;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mCurrentNetworkWorldId;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                                                        mHasLoadedDetails;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldDetailsFacet& operator=(NetworkWorldDetailsFacet const&);
    NetworkWorldDetailsFacet(NetworkWorldDetailsFacet const&);
    NetworkWorldDetailsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkWorldDetailsFacet(
        ::World::ThirdPartyWorldList&                              thirdPartyWorldList,
        ::World::ExternalServerWorldList&                          externalServerWorldList,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI void _onWorldListUpdated();

    MCFOLD ::OreUI::NetworkWorldDetails const& getCurrentNetworkWorldDetails() const;

    MCAPI bool hasLoadedDetails() const;

    MCAPI void loadNetworkWorldDetails(::std::string const& id, ::OreUI::NetworkWorldType const worldType);
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
        ::World::ThirdPartyWorldList&                              thirdPartyWorldList,
        ::World::ExternalServerWorldList&                          externalServerWorldList,
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
class NetworkWorldDetailsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
