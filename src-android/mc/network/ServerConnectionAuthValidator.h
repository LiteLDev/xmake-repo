#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/Nonce.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class BaseConnectionRequest;
class ConnectionRequest;
class MinecraftServiceKeyManager;
class SubClientConnectionRequest;
struct NetworkServerConfig;
struct PlayerAuthenticationInfo;
struct ServerSupportedAuthenticationTypes;
// clang-format on

class ServerConnectionAuthValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                           mCurrentTimeFn;
    ::ll::UntypedStorage<8, 24>                           mMinecraftServiceKeys;
    ::ll::TypedStorage<1, 1, bool>                        mAllowSelfSigned;
    ::ll::TypedStorage<1, 1, bool>                        mRequireLanSecret;
    ::ll::TypedStorage<1, 1, bool>                        mAllowExpiredTokens;
    ::ll::TypedStorage<8, 8, long>                        mLastSecretGenerated;
    ::ll::TypedStorage<8, 24, std::vector<Social::Nonce>> mSecrets;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerConnectionAuthValidator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerConnectionAuthValidator(
        ::NetworkServerConfig const&,
        bool,
        std::function<long()>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftServiceKeyManager>>
    );

    MCNAPI std::variant<PlayerAuthenticationInfo, Connection::DisconnectFailReason>
           _validateBase(::BaseConnectionRequest const&) const;

    MCNAPI ::Social::Nonce getOrRotateLanSecret();

    MCNAPI void setAllowExpiredTokens(bool);

    MCNAPI ::ServerSupportedAuthenticationTypes supportedAuthentication() const;

    MCNAPI std::variant<PlayerAuthenticationInfo, Connection::DisconnectFailReason>
           validate(::ConnectionRequest const&) const;

    MCNAPI std::variant<PlayerAuthenticationInfo, Connection::DisconnectFailReason>
           validate(::SubClientConnectionRequest const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::NetworkServerConfig const&,
        bool,
        std::function<long()>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftServiceKeyManager>>
    );
    // NOLINTEND
};
