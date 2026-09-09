#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/AddFriendUserItem.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/social/XboxAPICallResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Social { class IUserManager; }
namespace Social { class RecommendedFriendsList; }
// clang-format on

namespace OreUI {

class RecommendedFriendsListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RecommendedFriendsListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::RecommendedFriendsList>> mRecommendedFriendsList;
    ::ll::UntypedStorage<8, 24>                                                mResourceAllowList;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::AddFriendUserItem>>           mDisplayableList;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mRecommendedFriendsListSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RecommendedFriendsListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecommendedFriendsListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RecommendedFriendsListFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI std::vector<OreUI::AddFriendUserItem>& getDisplayableList();

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
