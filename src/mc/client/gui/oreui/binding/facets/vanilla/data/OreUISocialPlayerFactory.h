#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PartyPresence.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPresence.h"
#include "mc/client/social/UserPresenceResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PlayerListEntry;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct SocialPlayerData; }
namespace OreUI { struct WorldPlayerInfoBindings; }
namespace Parties { class Party; }
namespace Social { struct FriendData; }
namespace Social { struct PlayerProfileData; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PlayerListEntry;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct SocialPlayerData; }
namespace OreUI { struct WorldPlayerInfoBindings; }
namespace Parties { class Party; }
namespace Social { struct FriendData; }
namespace Social { struct PlayerProfileData; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class OreUISocialPlayerFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromFriendData(
        ::Social::FriendData const&,
        std::vector<const PlayerListEntry*> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        std::shared_ptr<Parties::Party> const&
    );

    MCNAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromPlayerProfileData(
        ::Social::PlayerProfileData const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        std::shared_ptr<Parties::Party> const&,
        std::vector<const PlayerListEntry*> const&
    );

    MCNAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromWorldPlayerInfo(
        ::OreUI::WorldPlayerInfoBindings const&,
        std::shared_ptr<Parties::Party> const&,
        std::optional<Social::FriendData>
    );

    MCNAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromXboxLiveUserProfileData(
        ::Social::XboxLiveUserProfileData const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        std::shared_ptr<Parties::Party> const&,
        std::string const&
    );

    MCNAPI static ::OreUI::PartyPresence getPartyPresence(std::string const&, std::shared_ptr<Parties::Party> const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class OreUISocialPlayerFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromFriendData(
        ::Social::FriendData const&                                friendData,
        ::std::vector<::PlayerListEntry const*> const&             lobbyPlayers,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::std::shared_ptr<::Parties::Party> const&                 party
    );

    MCAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromPlayerProfileData(
        ::Social::PlayerProfileData const&                         playerProfileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::std::shared_ptr<::Parties::Party> const&                 party,
        ::std::vector<::PlayerListEntry const*> const&             lobbyPlayers
    );

    MCAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromWorldPlayerInfo(
        ::OreUI::WorldPlayerInfoBindings const&    worldPlayerInfoBindings,
        ::std::shared_ptr<::Parties::Party> const& party,
        ::std::optional<::Social::FriendData>      friendData
    );

    MCAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromXboxLiveUserProfileData(
        ::Social::XboxLiveUserProfileData const&                   xboxLiveUserProfileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::std::shared_ptr<::Parties::Party> const&                 party,
        ::std::string const&                                       currentXuid
    );
    // NOLINTEND
};
#else // @header-generator platform
class OreUISocialPlayerFactory {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
