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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 296, ::PlayerAuthenticationInfo> mTrustedPlayerInfo;
#else // @header-generator platform
    ::ll::TypedStorage<8, 384, ::PlayerAuthenticationInfo> mTrustedPlayerInfo;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    UserEntityIdentifierComponent& operator=(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI UserEntityIdentifierComponent(
        ::NetworkIdentifier const&,
        ::SubClientId,
        ::mce::UUID,
        ::PlayerAuthenticationType,
        ::PlayerAuthenticationInfo const&
    );
#else // @header-generator platform
    MCAPI ::std::string getIdentityName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerAuthenticationType getAuthenticationType() const;
#else // @header-generator platform
    MCAPI ::std::string getMessOId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::UUID getClientUUID() const;
#else // @header-generator platform
    MCAPI ::std::string getPlayFabId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getIdentityName() const;
#else // @header-generator platform
    MCAPI ::std::string getTenantId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getMessOId() const;

    MCNAPI std::string getPlayFabId() const;

    MCNAPI ::SubClientId getSubClientId() const;

    MCNAPI std::string getTenantId() const;

    MCNAPI std::string getXuid() const;

    MCNAPI bool isLoggedIntoXboxLive() const;

    MCNAPI bool isPrimaryClient() const;

    MCNAPI ::UserEntityIdentifierComponent& operator=(::UserEntityIdentifierComponent&&);
#else // @header-generator platform
    MCAPI ::std::string getXuid() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::UserEntityIdentifierComponent* tryGetFromEntity(::EntityContext& entity);
#endif // @header-generator platform
    // NOLINTEND
};
