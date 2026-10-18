#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/PlayFabAccountInfo.h"
#include "mc/client/identity/PlayFabSignInHandler.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace Social { class ISecureStorageProvider; }
namespace Social { class PlayFabApi; }
namespace Social { struct PlayFabSignInResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class PlayFabSignInHandler_Device : public ::Social::PlayFabSignInHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::Social::PlayFabAccountInfo>                         mAccountInfo;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                         mTaskGroup;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::PlayFabApi>>> mPlayFabSignInAPI;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabSignInHandler_Device();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayFabSignInHandler_Device();

    virtual ::Bedrock::Threading::Async<Social::PlayFabSignInResult> signIn(std::string, bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _secureStoreAndVerifyKeyValue(std::string const&, std::string const&, bool);

    MCNAPI bool _storeAndVerifyKeyAndUserID(::Social::PlayFabAccountInfo const&, std::string const&, bool);
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
#else // @header-generator platform
class PlayFabSignInHandler_Device {};
#endif // @header-generator platform

} // namespace Social
