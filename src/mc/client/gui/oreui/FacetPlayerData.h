#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/realms/Player.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/realms/Player.h"
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/realms/RealmStoriesPlayerRole.h"
#include "mc/client/realms/stories/FetchStatus.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::RealmsStories {

#if defined(LL_PLAT_A) // @header-generator platform
struct FacetPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 344, ::Realms::Stories::Player>                        mPlayer;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 112, ::OreUI::AllowListProfileImage>                   mProfileImage;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FacetPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 416, ::Realms::Stories::Player>                            mPlayer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage>                       mProfileImage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Realms::Stories::FetchStatus getFetchProfileStatus() const;

    MCAPI ::std::string const& getGamerTag() const;

    MCAPI bool getHasAccepted() const;

    MCAPI bool getHasOptedIn() const;

    MCAPI bool getIsPlayingOnRealm() const;

    MCFOLD int64 getLastSeenTime() const;

    MCAPI bool getOnlineStatus() const;

    MCAPI ::OreUI::AllowListProfileImage const& getProfileImage() const;

    MCAPI ::Realms::Stories::RealmStoriesPlayerRole getRealmStoriesRole() const;

    MCAPI ::Realms::PlayerRole getRealmsRole() const;

    MCFOLD ::std::string const& getXuid() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[29]> NAME();
    // NOLINTEND
};
#else // @header-generator platform
struct FacetPlayerData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::RealmsStories
