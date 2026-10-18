#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/platform/BuildPlatform.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/Nonce.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class BaseConnectionRequest;
#if defined(LL_PLAT_A) // @header-generator platform
class ConnectionRequest;
#else // @header-generator platform
#endif // @header-generator platform
class MinecraftServiceKeyManager;
#if defined(LL_PLAT_A) // @header-generator platform
class SubClientConnectionRequest;
#else // @header-generator platform
#endif // @header-generator platform
struct NetworkServerConfig;
struct PlayerAuthenticationInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct ServerSupportedAuthenticationTypes;
#else // @header-generator platform
namespace Social { struct Nonce; }
#endif // @header-generator platform
// clang-format on

class ServerConnectionAuthValidator {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                           mCurrentTimeFn;
    ::ll::UntypedStorage<8, 24>                           mMinecraftServiceKeys;
    ::ll::TypedStorage<1, 1, bool>                        mAllowSelfSigned;
    ::ll::TypedStorage<1, 1, bool>                        mRequireLanSecret;
    ::ll::TypedStorage<1, 1, bool>                        mAllowExpiredTokens;
    ::ll::TypedStorage<8, 8, long>                        mLastSecretGenerated;
    ::ll::TypedStorage<8, 24, std::vector<Social::Nonce>> mSecrets;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<int64()>>                                    mCurrentTimeFn;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager>> mMinecraftServiceKeys;
    ::ll::TypedStorage<1, 1, bool>                                                         mAllowSelfSigned;
    ::ll::TypedStorage<1, 1, bool>                                                         mRequireLanSecret;
    ::ll::TypedStorage<1, 1, bool>                                                         mAllowExpiredTokens;
    ::ll::TypedStorage<8, 8, int64>                                                        mLastSecretGenerated;
    ::ll::TypedStorage<8, 24, ::std::vector<::Social::Nonce>>                              mSecrets;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServerConnectionAuthValidator();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ServerConnectionAuthValidator(
        ::NetworkServerConfig const&,
        bool,
        std::function<long()>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftServiceKeyManager>>
#else // @header-generator platform
    MCAPI ServerConnectionAuthValidator(
        ::NetworkServerConfig const&                                networkServerConfig,
        bool                                                        isLan,
        ::std::function<int64()>                                    currentTimeFn,
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager> minecraftServiceKeys
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::variant<PlayerAuthenticationInfo, Connection::DisconnectFailReason>
           _validateBase(::BaseConnectionRequest const&) const;
#else // @header-generator platform
    MCAPI ::std::variant<::PlayerAuthenticationInfo, ::Connection::DisconnectFailReason>
    _validateBase(::BaseConnectionRequest const& connectionRequest) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Social::Nonce getOrRotateLanSecret();

    MCNAPI void setAllowExpiredTokens(bool);

    MCNAPI ::ServerSupportedAuthenticationTypes supportedAuthentication() const;

    MCNAPI std::variant<PlayerAuthenticationInfo, Connection::DisconnectFailReason>
           validate(::ConnectionRequest const&) const;

    MCNAPI std::variant<PlayerAuthenticationInfo, Connection::DisconnectFailReason>
           validate(::SubClientConnectionRequest const&) const;
#else // @header-generator platform
    MCAPI ::Social::Nonce getOrRotateLanSecret();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::NetworkServerConfig const&,
        bool,
        std::function<long()>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftServiceKeyManager>>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::NetworkServerConfig const&                                networkServerConfig,
        bool                                                        isLan,
        ::std::function<int64()>                                    currentTimeFn,
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager> minecraftServiceKeys
#endif // @header-generator platform
    );
    // NOLINTEND
};
