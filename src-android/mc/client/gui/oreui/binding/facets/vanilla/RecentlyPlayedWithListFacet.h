#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/AddFriendUserItem.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayer.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/social/XboxAPICallResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Parties { class IPartyProvider; }
namespace Social { class IUserManager; }
namespace Social { class RecentlyPlayedWithList; }
// clang-format on

namespace OreUI {

class RecentlyPlayedWithListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RecentlyPlayedWithListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::RecentlyPlayedWithList>> mRecentlyPlayedWithList;
    ::ll::UntypedStorage<8, 24>                                                mResourceAllowList;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::AddFriendUserItem>>           mDisplayableList;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::SocialPlayer>>                mRecentlyPlayedWith;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::SocialPlayer>>                mPrevRecentlyPlayedWith;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mRecentlyPlayedWithListSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mPartySubscription;
    ::ll::UntypedStorage<8, 24>                                                mPartyProvider;
    ::ll::UntypedStorage<8, 24>                                                mUserManager;
    // NOLINTEND

public:
    // prevent constructor by default
    RecentlyPlayedWithListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecentlyPlayedWithListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RecentlyPlayedWithListFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::Bedrock::NonOwnerPointer<Parties::IPartyProvider>
    );

    MCNAPI std::vector<OreUI::AddFriendUserItem>& getDisplayableList();

    MCNAPI std::vector<OreUI::SocialPlayer> const& getRecentlyPlayedWith();

    MCNAPI ::XboxAPICallResult const getXboxAPICallResult() const;

    MCNAPI bool isDataLoading() const;
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
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::Bedrock::NonOwnerPointer<Parties::IPartyProvider>
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
