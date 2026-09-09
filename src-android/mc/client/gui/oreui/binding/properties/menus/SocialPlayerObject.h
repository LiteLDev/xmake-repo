#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PartyPresence.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayerData.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPresence.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/social/RelationToCurrentUser.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/TitleHistory.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class SocialPlayerObject : public ::OreUI::PropertyObject<OreUI::SocialPlayerObject>, public ::OreUI::SocialPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mMaybeActorId;
    ::ll::UntypedStorage<8, 176> mMaybeXuid;
    ::ll::UntypedStorage<8, 176> mMaybePlatformId;
    ::ll::UntypedStorage<8, 168> mGamerTag;
    ::ll::UntypedStorage<8, 168> mGamerIcon;
    ::ll::UntypedStorage<8, 176> mPlayingOnServerId;
    ::ll::UntypedStorage<8, 176> mPlayingOnRealmId;
    ::ll::UntypedStorage<8, 152> mPresence;
    ::ll::UntypedStorage<8, 152> mPartyPresence;
    ::ll::UntypedStorage<8, 168> mPresenceTitleName;
    ::ll::UntypedStorage<8, 168> mPresenceMessage;
    ::ll::UntypedStorage<8, 152> mTitleHistory;
    ::ll::UntypedStorage<8, 152> mIsCurrentlyPlaying;
    ::ll::UntypedStorage<8, 152> mIsInSameGame;
    ::ll::UntypedStorage<8, 152> mFavoriteStatus;
    ::ll::UntypedStorage<8, 152> mPermissionLevel;
    ::ll::UntypedStorage<8, 152> mIsBlocked;
    ::ll::UntypedStorage<8, 152> mIsMuted;
    ::ll::UntypedStorage<8, 152> mRelation;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialPlayerObject& operator=(SocialPlayerObject const&);
    SocialPlayerObject(SocialPlayerObject const&);
    SocialPlayerObject();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SocialPlayerObject();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SocialPlayerObject(::OreUI::SocialPlayerObject&&);

    MCNAPI SocialPlayerObject(::OreUI::Detail::IPropertyObject*, ::OreUI::SocialPlayerData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::SocialPlayerObject&&);

    MCNAPI void* $ctor(::OreUI::Detail::IPropertyObject*, ::OreUI::SocialPlayerData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
