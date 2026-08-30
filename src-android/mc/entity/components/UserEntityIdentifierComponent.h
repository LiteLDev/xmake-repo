#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationInfo.h"
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class UserEntityIdentifierComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>        mNetworkId;
    ::ll::TypedStorage<1, 1, ::SubClientId>                mClientSubId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                 mClientUUID;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType>   mAuthenticationType;
    ::ll::TypedStorage<8, 296, ::PlayerAuthenticationInfo> mTrustedPlayerInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    UserEntityIdentifierComponent& operator=(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UserEntityIdentifierComponent(
        ::NetworkIdentifier const&,
        ::SubClientId,
        ::mce::UUID,
        ::PlayerAuthenticationType,
        ::PlayerAuthenticationInfo const&
    );

    MCNAPI ::PlayerAuthenticationType getAuthenticationType() const;

    MCNAPI ::mce::UUID getClientUUID() const;

    MCNAPI std::string getIdentityName() const;

    MCNAPI std::string getMessOId() const;

    MCNAPI std::string getPlayFabId() const;

    MCNAPI ::SubClientId getSubClientId() const;

    MCNAPI std::string getTenantId() const;

    MCNAPI std::string getXuid() const;

    MCNAPI bool isLoggedIntoXboxLive() const;

    MCNAPI bool isPrimaryClient() const;

    MCNAPI ::UserEntityIdentifierComponent& operator=(::UserEntityIdentifierComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::UserEntityIdentifierComponent* tryGetFromEntity(::EntityContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::NetworkIdentifier const&,
        ::SubClientId,
        ::mce::UUID,
        ::PlayerAuthenticationType,
        ::PlayerAuthenticationInfo const&
    );
    // NOLINTEND
};
