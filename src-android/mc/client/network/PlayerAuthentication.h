#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/UserListObserver.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/network/LocalAuthentication.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class PrivateKeyManager;
struct PlayerAuthenticationInfo;
struct RawGameServerToken;
namespace Core { class FileStorageArea; }
namespace Social { class AuthServiceApi; }
namespace Social { class User; }
// clang-format on

class PlayerAuthentication {
public:
    // PlayerAuthentication inner types declare
    // clang-format off
    class UserListObserver;
    // clang-format on

    // PlayerAuthentication inner types define
    class UserListObserver : public ::Social::UserListObserver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::PlayerAuthentication&> mPlayerAuthentication;
        // NOLINTEND

    public:
        // prevent constructor by default
        UserListObserver& operator=(UserListObserver const&);
        UserListObserver(UserListObserver const&);
        UserListObserver();

    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ~UserListObserver();
    
        virtual void onUserAdded(std::shared_ptr<Social::User> const&);
    
        virtual void onUserRemoved(std::shared_ptr<Social::User> const&);
    
        virtual void onUserStorageAreaChanged(std::shared_ptr<Social::User> const&, std::shared_ptr<Core::FileStorageArea>&);
        // clang-format on
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onUserAdded(std::shared_ptr<Social::User> const&);

        MCNAPI void $onUserRemoved(std::shared_ptr<Social::User> const&);

        MCNAPI void
        $onUserStorageAreaChanged(std::shared_ptr<Social::User> const&, std::shared_ptr<Core::FileStorageArea>&);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>>> mAuthServiceApi;
    ::ll::TypedStorage<8, 88, ::LocalAuthentication>                                    mLocalAuthentication;
    ::ll::TypedStorage<8, 16, std::weak_ptr<IClientInstance>>                           mClient;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerAuthentication::UserListObserver>>   mUserListObserver;
    ::ll::TypedStorage<8, 8, ulong>                                                     mClientRandomId;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                             mNetworkTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAuthentication();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerAuthentication(
        ::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>>,
        std::weak_ptr<IClientInstance>,
        ulong,
        std::string const&
    );

    MCNAPI ::RawGameServerToken _makeLocalToken(::LocalAuthentication::Signer);

    MCNAPI ::Bedrock::Threading::Async<RawGameServerToken> getGlobalToken();

    MCNAPI ::PrivateKeyManager const& getLocalKeys() const;

    MCNAPI std::string const& getSelfSignedId() const;

    MCNAPI void init();

    MCNAPI ::RawGameServerToken makeHostSignedToken();

    MCNAPI ::RawGameServerToken makeLocalToken();

    MCNAPI void overrideLocalKeys(::PrivateKeyManager const&);

    MCNAPI ~PlayerAuthentication();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>>,
        std::weak_ptr<IClientInstance>,
        ulong,
        std::string const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
