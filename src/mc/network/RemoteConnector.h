#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/Connector.h"
#include "mc/network/NetworkEnableDisableListener.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AppPlatform;
#else // @header-generator platform
#endif // @header-generator platform
class NetworkIdentifier;
class PrivateKeyManager;
struct ConnectionDefinition;
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class RemoteConnector : public ::Connector,
                        public ::NetworkEnableDisableListener,
                        public ::Bedrock::EnableNonOwnerReferences {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    RemoteConnector();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~RemoteConnector();
#else // @header-generator platform
    virtual bool host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool host(::ConnectionDefinition const&, ::PrivateKeyManager const&) = 0;

    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&, std::shared_ptr<NetherNet::IIdentityAssertionGenerator>) = 0;
#else // @header-generator platform
    virtual bool connect(
        ::Social::GameConnectionInfo const&                         primaryConnection,
        ::Social::GameConnectionInfo const&                         backupConnection,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identityGenerator
    ) = 0;
#endif // @header-generator platform

    virtual void disconnect() = 0;

    virtual void tick() = 0;

    virtual void runEvents() = 0;

    virtual bool isServer() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void closeNetworkConnection(::NetworkIdentifier const&) = 0;
#else // @header-generator platform
    virtual void closeNetworkConnection(::NetworkIdentifier const& id) = 0;
#endif // @header-generator platform

    virtual ::NetworkIdentifier getNetworkIdentifier() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&) = 0;
#else // @header-generator platform
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const& id) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDisableLanSignaling(bool) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void setDisableLanSignaling(bool disableLanSignaling) = 0;

    virtual ~RemoteConnector() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
