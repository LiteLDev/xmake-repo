#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class PlayerSocialManagerFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PlayerSocialManagerFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUserManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSocialManagerFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerSocialManagerFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerSocialManagerFacet(::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>);

    MCNAPI void addFriend(std::string, ::IMinecraftEventing::AddedFriendLocation);

    MCNAPI void block(std::string);

    MCNAPI void favorite(std::string);

    MCNAPI void mute(std::string);

    MCNAPI void removeFriend(std::string);

    MCNAPI void showXboxProfileCard(std::string);

    MCNAPI void unblock(std::string);

    MCNAPI void unfavorite(std::string);

    MCNAPI void unmute(std::string);
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
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>);
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
