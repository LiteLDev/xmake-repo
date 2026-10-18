#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class PlayerSocialManagerFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PlayerSocialManagerFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>> mUserManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSocialManagerFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerSocialManagerFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerSocialManagerFacet(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager);

    MCAPI void addFriend(::std::string xuid, ::IMinecraftEventing::AddedFriendLocation addedLocation);

    MCAPI void block(::std::string xuid);

    MCAPI void favorite(::std::string xuid);

    MCAPI void mute(::std::string xuid);

    MCAPI void removeFriend(::std::string xuid);

    MCAPI void showXboxProfileCard(::std::string xuid);

    MCAPI void unblock(::std::string xuid);

    MCAPI void unfavorite(::std::string xuid);

    MCAPI void unmute(::std::string xuid);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PlayerSocialManagerFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
