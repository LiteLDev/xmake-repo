#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PartyPresence.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPresence.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/social/RelationToCurrentUser.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/TitleHistory.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PartyPresence.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPresence.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/social/RelationToCurrentUser.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/TitleHistory.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct SocialPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                         xuid;
    ::ll::TypedStorage<8, 24, std::string>                         platformId;
    ::ll::TypedStorage<8, 16, std::optional<ActorUniqueID>>        mActorUniqueID;
    ::ll::TypedStorage<8, 24, std::string>                         gamerTag;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>          playingOnServerId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>          playingOnRealmId;
    ::ll::TypedStorage<8, 112, ::OreUI::AllowListProfileImage>     profileImage;
    ::ll::UntypedStorage<8, 72>                                    platformProfileImage;
    ::ll::TypedStorage<4, 4, ::OreUI::SocialPresence>              presence;
    ::ll::TypedStorage<4, 4, ::OreUI::PartyPresence>               partyPresence;
    ::ll::TypedStorage<8, 24, std::string>                         titleName;
    ::ll::TypedStorage<1, 1, bool>                                 isInSameGame;
    ::ll::TypedStorage<8, 24, std::string>                         presenceMessage;
    ::ll::TypedStorage<4, 4, ::Social::TitleHistory>               titleHistory;
    ::ll::TypedStorage<1, 1, bool>                                 isCurrentlyPlaying;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>                 favoriteStatus;
    ::ll::TypedStorage<1, 2, std::optional<PlayerPermissionLevel>> permissionLevel;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                  isBlocked;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                  isMuted;
    ::ll::TypedStorage<4, 4, ::Social::RelationToCurrentUser>      relation;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialPlayerData& operator=(SocialPlayerData const&);
    SocialPlayerData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SocialPlayerData(::OreUI::SocialPlayerData const&);

    MCNAPI ~SocialPlayerData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::SocialPlayerData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SocialPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                           xuid;
    ::ll::TypedStorage<8, 32, ::std::string>                           platformId;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>>        mActorUniqueID;
    ::ll::TypedStorage<8, 32, ::std::string>                           gamerTag;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>          playingOnServerId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>          playingOnRealmId;
    ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage>         profileImage;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                  platformProfileImage;
    ::ll::TypedStorage<4, 4, ::OreUI::SocialPresence>                  presence;
    ::ll::TypedStorage<4, 4, ::OreUI::PartyPresence>                   partyPresence;
    ::ll::TypedStorage<8, 32, ::std::string>                           titleName;
    ::ll::TypedStorage<1, 1, bool>                                     isInSameGame;
    ::ll::TypedStorage<8, 32, ::std::string>                           presenceMessage;
    ::ll::TypedStorage<4, 4, ::Social::TitleHistory>                   titleHistory;
    ::ll::TypedStorage<1, 1, bool>                                     isCurrentlyPlaying;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>                     favoriteStatus;
    ::ll::TypedStorage<1, 2, ::std::optional<::PlayerPermissionLevel>> permissionLevel;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                    isBlocked;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                    isMuted;
    ::ll::TypedStorage<4, 4, ::Social::RelationToCurrentUser>          relation;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialPlayerData& operator=(SocialPlayerData const&);
    SocialPlayerData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SocialPlayerData(::OreUI::SocialPlayerData&&);

    MCAPI SocialPlayerData(::OreUI::SocialPlayerData const& data);

    MCAPI ~SocialPlayerData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::SocialPlayerData&&);

    MCAPI void* $ctor(::OreUI::SocialPlayerData const& data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct SocialPlayerData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
