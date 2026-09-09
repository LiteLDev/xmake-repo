#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/PlayFabBanDetails.h"
#include "mc/client/identity/PlayFabStatus.h"
#include "mc/deps/core/threading/Async.h"

namespace Social {

struct PlayFabSignInResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mHasPlayFabAccount;
    ::ll::TypedStorage<1, 1, bool>                                      mNewlyCreatedAccount;
    ::ll::TypedStorage<8, 24, std::string>                              mPlayFabId;
    ::ll::TypedStorage<8, 24, std::string>                              mPlayFabTitleAccountId;
    ::ll::TypedStorage<8, 24, std::string>                              mPlayFabTitleEntityToken;
    ::ll::TypedStorage<8, 8, long>                                      mPlayFabTitleTokenExpiration;
    ::ll::TypedStorage<8, 8, long>                                      mTimestamp;
    ::ll::TypedStorage<8, 24, std::string>                              mPlayFabSessionTicket;
    ::ll::TypedStorage<8, 24, std::string>                              mLinkedXUID;
    ::ll::TypedStorage<8, 24, std::string>                              mLinkedPlayStationNetworkId;
    ::ll::TypedStorage<8, 24, std::string>                              mLinkedNintendoSwitchAccountId;
    ::ll::TypedStorage<4, 4, ::Social::PlayFabStatus>                   mStatus;
    ::ll::TypedStorage<8, 48, std::optional<Social::PlayFabBanDetails>> mBanDetails;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabSignInResult& operator=(PlayFabSignInResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayFabSignInResult(::Social::PlayFabSignInResult const&);

    MCNAPI PlayFabSignInResult(std::string_view, ::Social::PlayFabStatus);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::PlayFabSignInResult const&);

    MCNAPI void* $ctor(std::string_view, ::Social::PlayFabStatus);
    // NOLINTEND
};

} // namespace Social
