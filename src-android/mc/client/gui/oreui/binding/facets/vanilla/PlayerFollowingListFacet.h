#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/AddFriendUserItem.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Social { class FollowingList; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class PlayerFollowingListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PlayerFollowingListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::FollowingList>> mFollowingList;
    ::ll::UntypedStorage<8, 24>                                       mUserManager;
    ::ll::UntypedStorage<8, 24>                                       mResourceAllowList;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::AddFriendUserItem>>  mDisplayableList;
    ::ll::TypedStorage<8, 24, std::string>                            mXuid;
    ::ll::TypedStorage<1, 1, bool>                                    mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mFollowingListSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerFollowingListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerFollowingListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerFollowingListFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI std::vector<OreUI::AddFriendUserItem>& getDisplayableList();

    MCNAPI bool isDataLoading() const;

    MCNAPI void load(std::string const&);
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
