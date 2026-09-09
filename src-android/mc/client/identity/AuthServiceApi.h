#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/AuthServiceStatus.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Url; }
namespace Social { class User; }
namespace Social { struct AuthServiceLinkedAccounts; }
namespace Social { struct AuthServiceMultiplayerSession; }
namespace Social { struct AuthServiceSession; }
namespace Social { struct AuthServiceStartSessionRequestData; }
namespace Social { struct AuthToken; }
namespace Social { struct XUID; }
// clang-format on

namespace Social {

class AuthServiceApi {
public:
    // AuthServiceApi inner types define
    using ServicesAuthUrlTupleResult = ::Bedrock::Threading::Async<std::tuple<Social::AuthToken, Bedrock::Http::Url>>;

    using ServicesAuthUrlTuple = std::tuple<Social::AuthToken, Bedrock::Http::Url>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<8, 24, std::string>  mAppSessionId;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthServiceApi();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AuthServiceApi();

    virtual ::Bedrock::Threading::Async<Social::AuthServiceLinkedAccounts> getLinkedAccountsFromPlayFabIds(std::vector<std::string> const&);

    virtual ::Bedrock::Threading::Async<Social::AuthServiceLinkedAccounts> getLinkedAccountsFromXUIDs(std::vector<Social::XUID> const&, std::string const&);

    virtual ::Bedrock::Threading::Async<Social::AuthServiceLinkedAccounts> getLinkedAccountsFromPSNs(std::vector<std::string> const&, int const);

    virtual ::Bedrock::Threading::Async<Social::AuthServiceLinkedAccounts> getLinkedAccountsFromNintendoIds(std::vector<std::string> const&);

    virtual ::Bedrock::Threading::Async<Social::AuthServiceStatus> linkDeviceAndXblAccounts(::Social::AuthToken, ::Social::AuthToken, bool);

    virtual ::Bedrock::Threading::Async<Social::AuthServiceStatus> linkPsnAndXblAccounts(::Social::AuthToken, ::Social::AuthToken, int, ::Social::AuthToken);

    virtual ::Bedrock::Threading::Async<Social::AuthServiceStatus> unlinkPsnAndXblAccounts(::Social::AuthToken, int);

    virtual ::Bedrock::Threading::Async<Social::AuthServiceSession> startSession(std::string const&, ::Social::AuthServiceStartSessionRequestData const&);

    virtual ::Bedrock::Threading::Async<Social::AuthServiceSession> startSessionSecondary(std::string const&, std::optional<std::chrono::duration<long, std::ratio<60, 1>>>);

    virtual ::Bedrock::Threading::Async<Social::AuthServiceStatus> linkDeviceAndNsaAccounts(::Social::AuthToken, ::Social::AuthToken);

    virtual ::Bedrock::Threading::Async<Social::AuthServiceStatus> linkNsaAndXblAccounts(::Social::AuthToken, ::Social::AuthToken, ::Social::AuthToken);

    virtual ::Bedrock::Threading::Async<Social::AuthServiceStatus> unlinkNsaAndXblAccounts(::Social::AuthToken&&);

    virtual ::Bedrock::Threading::Async<Social::AuthServiceMultiplayerSession> startMultiplayerSession(std::string const&, ::gsl::not_null<std::shared_ptr<Social::User>>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AuthServiceApi(std::string);

    MCNAPI ::Bedrock::Threading::Async<std::tuple<Social::AuthToken, Bedrock::Http::Url>>
    _getPrimaryServicesAuthAndUrl();

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Url> _getServicesUrl();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>> create(std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceLinkedAccounts>
    $getLinkedAccountsFromPlayFabIds(std::vector<std::string> const&);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceLinkedAccounts>
    $getLinkedAccountsFromXUIDs(std::vector<Social::XUID> const&, std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceLinkedAccounts>
    $getLinkedAccountsFromPSNs(std::vector<std::string> const&, int const);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceLinkedAccounts>
    $getLinkedAccountsFromNintendoIds(std::vector<std::string> const&);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceStatus>
    $linkDeviceAndXblAccounts(::Social::AuthToken, ::Social::AuthToken, bool);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceStatus>
    $linkPsnAndXblAccounts(::Social::AuthToken, ::Social::AuthToken, int, ::Social::AuthToken);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceStatus> $unlinkPsnAndXblAccounts(::Social::AuthToken, int);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceSession>
    $startSession(std::string const&, ::Social::AuthServiceStartSessionRequestData const&);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceSession>
    $startSessionSecondary(std::string const&, std::optional<std::chrono::duration<long, std::ratio<60, 1>>>);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceStatus>
        $linkDeviceAndNsaAccounts(::Social::AuthToken, ::Social::AuthToken);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceStatus>
        $linkNsaAndXblAccounts(::Social::AuthToken, ::Social::AuthToken, ::Social::AuthToken);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceStatus> $unlinkNsaAndXblAccounts(::Social::AuthToken&&);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthServiceMultiplayerSession>
    $startMultiplayerSession(std::string const&, ::gsl::not_null<std::shared_ptr<Social::User>>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
