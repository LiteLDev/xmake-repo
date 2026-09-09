#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/PlayFabSignInHandler.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace Social { class AuthServiceApi; }
namespace Social { class Identity; }
namespace Social { class PlayFabApi; }
namespace Social { struct AuthToken; }
namespace Social { struct AuthTokenResult; }
namespace Social { struct PlayFabSignInResult; }
// clang-format on

namespace Social {

class PlayFabSignInHandler_XBL : public ::Social::PlayFabSignInHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                             mTaskGroup;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::Identity>>                          mXblIdentity;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::Identity>>                          mPlatformIdentity;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::PlayFabApi>>>     mPlayFabSignInAPI;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>>> mAuthServiceApi;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabSignInHandler_XBL();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayFabSignInHandler_XBL();

    virtual ::Bedrock::Threading::Async<Social::PlayFabSignInResult> signIn(std::string, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& sPlayFabURL();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabSignInResult> $signIn(std::string, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
