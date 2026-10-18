#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/PlayFabStatus.h"
#include "mc/client/options/PlayFabEnvironment.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Social { struct AuthToken; }
namespace Social { struct PlayFabEntityTokenResult; }
namespace Social { struct PlayFabGetPlayFabIDsResult; }
namespace Social { struct PlayFabGetPlayerPlatformAccountIdsResult; }
namespace Social { struct PlayFabGetTitleKeyResult; }
namespace Social { struct PlayFabGetUserDataResult; }
namespace Social { struct PlayFabSignInResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class PlayFabApi {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PlayFabApi();

    virtual ::Social::PlayFabEnvironment getEnvironmentType();

    virtual std::string const& getTitleId();

    virtual bool const isSignInToPlayFabWithAnonymousAuthEnabled();

    virtual ::Bedrock::Threading::Async<Social::PlayFabSignInResult> createAccountWithCustomId(std::string const&, std::string const&, std::string const&);

    virtual ::Bedrock::Threading::Async<Social::PlayFabSignInResult> signInUserWithCustomId(std::string const&, std::string const&);

    virtual ::Bedrock::Threading::Async<Social::PlayFabSignInResult> signInUserWithXboxLiveAccount(bool, ::Social::AuthToken const&);

    virtual ::Bedrock::Threading::Async<Social::PlayFabGetTitleKeyResult> getTitlePublicKey();

    virtual ::Bedrock::Threading::Async<Social::PlayFabGetPlayerPlatformAccountIdsResult> getPlayerPlatformAccountIds(::Social::AuthToken const&, std::vector<std::string> const&);

    virtual ::Bedrock::Threading::Async<Social::PlayFabEntityTokenResult> getMasterPlayerAccountEntityToken(::Social::AuthToken const&, std::string const&);

    virtual ::Bedrock::Threading::Async<Social::PlayFabGetUserDataResult> getUserPublisherData(::Social::AuthToken const&);

    virtual ::Bedrock::Threading::Async<Social::PlayFabStatus> updateUserPublisherData(::Social::AuthToken const&, std::string const&, std::string const&);

    virtual ::Bedrock::Threading::Async<Social::PlayFabGetPlayFabIDsResult> getPlayFabIDsFromPSNAccountIDs(::Social::AuthToken const&, int, std::vector<std::string> const&);

    virtual ::Bedrock::Threading::Async<Social::PlayFabGetPlayFabIDsResult> getPlayFabIDsFromXboxLiveIDs(::Social::AuthToken const&, std::string const&, std::vector<std::string> const&);

    virtual void getXUIDsFromPSNAccountIDs(::Social::AuthToken const&, int, std::vector<std::string> const&, std::function<void (std::string, std::string)>);

    virtual void getPSNAccountIDsFromXboxLiveIDs(::Social::AuthToken const&, std::string const&, std::vector<std::string> const&, std::function<void (std::string, std::string)>);

    virtual ::Bedrock::Threading::Async<Social::PlayFabStatus> writePlayerEvent(::Social::AuthToken const&, std::string const&, ::Json::Value const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayFabApi();

    MCNAPI void _onGetPlayFabIDsForPSN(
        ::Social::AuthToken const&,
        std::function<void(std::string, std::string)>,
        ::Social::PlayFabGetPlayFabIDsResult const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::gsl::not_null<std::shared_ptr<Social::PlayFabApi>> create();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Social::PlayFabEnvironment $getEnvironmentType();

    MCNAPI std::string const& $getTitleId();

    MCNAPI bool const $isSignInToPlayFabWithAnonymousAuthEnabled();

    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabSignInResult>
    $createAccountWithCustomId(std::string const&, std::string const&, std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabSignInResult>
    $signInUserWithCustomId(std::string const&, std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabSignInResult>
    $signInUserWithXboxLiveAccount(bool, ::Social::AuthToken const&);

    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabGetTitleKeyResult> $getTitlePublicKey();

    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabGetPlayerPlatformAccountIdsResult>
    $getPlayerPlatformAccountIds(::Social::AuthToken const&, std::vector<std::string> const&);

    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabEntityTokenResult>
    $getMasterPlayerAccountEntityToken(::Social::AuthToken const&, std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabGetUserDataResult>
    $getUserPublisherData(::Social::AuthToken const&);

    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabStatus>
    $updateUserPublisherData(::Social::AuthToken const&, std::string const&, std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabGetPlayFabIDsResult>
    $getPlayFabIDsFromPSNAccountIDs(::Social::AuthToken const&, int, std::vector<std::string> const&);

    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabGetPlayFabIDsResult>
    $getPlayFabIDsFromXboxLiveIDs(::Social::AuthToken const&, std::string const&, std::vector<std::string> const&);

    MCNAPI void $getXUIDsFromPSNAccountIDs(
        ::Social::AuthToken const&,
        int,
        std::vector<std::string> const&,
        std::function<void(std::string, std::string)>
    );

    MCNAPI void $getPSNAccountIDsFromXboxLiveIDs(
        ::Social::AuthToken const&,
        std::string const&,
        std::vector<std::string> const&,
        std::function<void(std::string, std::string)>
    );

    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabStatus>
    $writePlayerEvent(::Social::AuthToken const&, std::string const&, ::Json::Value const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PlayFabApi {};
#endif // @header-generator platform

} // namespace Social
