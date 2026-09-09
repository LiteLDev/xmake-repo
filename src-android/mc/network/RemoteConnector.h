#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/Connector.h"
#include "mc/network/NetworkEnableDisableListener.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
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
    // prevent constructor by default
    RemoteConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RemoteConnector();

    virtual bool host(::ConnectionDefinition const&, ::PrivateKeyManager const&) = 0;

    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&, std::shared_ptr<NetherNet::IIdentityAssertionGenerator>) = 0;

    virtual void disconnect() = 0;

    virtual void tick() = 0;

    virtual void runEvents() = 0;

    virtual bool isServer() const = 0;

    virtual void closeNetworkConnection(::NetworkIdentifier const&) = 0;

    virtual ::NetworkIdentifier getNetworkIdentifier() const = 0;

    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&) = 0;

    virtual void setDisableLanSignaling(bool) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
