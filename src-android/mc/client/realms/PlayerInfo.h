#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/realms/FetchStatus.h"
#include "mc/client/realms/PlayerPermission.h"
#include "mc/client/realms/PlayerRole.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct Player; }
// clang-format on

namespace Realms {

struct PlayerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                     mXuid;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerPermission>       mGameplayPermission;
    ::ll::TypedStorage<8, 8, long>                             mLastSeenTime;
    ::ll::TypedStorage<1, 1, bool>                             mIsInRealm;
    ::ll::TypedStorage<1, 1, bool>                             mHasOptedIn;
    ::ll::TypedStorage<1, 1, bool>                             mHasAccepted;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerRole>             mRole;
    ::ll::TypedStorage<8, 24, std::string>                     mGamertag;
    ::ll::TypedStorage<1, 1, bool>                             mIsOnline;
    ::ll::TypedStorage<4, 4, ::Realms::FetchStatus>            mFetchProfileStatus;
    ::ll::TypedStorage<8, 112, ::OreUI::AllowListProfileImage> mGamerIcon;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerInfo(::Realms::Player const&, ::Realms::PlayerPermission);

    MCNAPI ~PlayerInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Realms::Player const&, ::Realms::PlayerPermission);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Realms
