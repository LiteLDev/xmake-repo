#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
