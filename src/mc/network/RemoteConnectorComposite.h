#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class NetherNetTransportFactory;
class NetworkIdentifier;
class NetworkSessionOwner;
class PrivateKeyManager;
class RakNetConnector;
struct ConnectionDefinition;
struct NetherNetConnector;
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace RakNet { struct RakPeerConfiguration; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct ResolvedExperienceInfo; }
// clang-format on

class RemoteConnectorComposite : public ::RemoteConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                   mNetworkSessionOwner;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetherNetConnector>> mNetherNetConnector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RakNetConnector>>    mRakNetConnector;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteConnectorComposite();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RemoteConnectorComposite();

    virtual std::string getLocalIp();

    virtual ushort getPort() const;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const;

    virtual void setConnectedResolvedExperienceInfo(std::optional<Social::ResolvedExperienceInfo> const&);

    virtual bool isIPv4Supported() const;

    virtual bool isIPv6Supported() const;

    virtual ushort getIPv4Port() const;

    virtual ushort getIPv6Port() const;

    virtual ::TransportLayer getNetworkType() const;

    virtual bool host(::ConnectionDefinition const&, ::PrivateKeyManager const&);

    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&, std::shared_ptr<NetherNet::IIdentityAssertionGenerator>);

    virtual void disconnect();

    virtual void tick();

    virtual void runEvents();

    virtual bool isServer() const;

    virtual void closeNetworkConnection(::NetworkIdentifier const&);

    virtual ::NetworkIdentifier getNetworkIdentifier() const;

    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    virtual void setDisableLanSignaling(bool);

    virtual void _onDisable();

    virtual void _onEnable();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RemoteConnectorComposite(
        ::RakNetConnector::ConnectionCallbacks&,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkSessionOwner>>
    );

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<RemoteConnector>> getActiveConnector() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<NetherNetConnector>> getNetherNetConnector() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<RakNetConnector>> getRakNetConnector() const;

    MCNAPI void initializeNetherNetConnector(::NetherNetTransportFactory const&);

    MCNAPI void initializeRakNetConnector(
        ::RakPeerHelper::IPSupportInterface&,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        ::RakNet::RakPeerConfiguration const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::RakNetConnector::ConnectionCallbacks&,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkSessionOwner>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getLocalIp();

    MCNAPI ushort $getPort() const;

    MCNAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCNAPI void $setConnectedResolvedExperienceInfo(std::optional<Social::ResolvedExperienceInfo> const&);

    MCNAPI bool $isIPv4Supported() const;

    MCNAPI bool $isIPv6Supported() const;

    MCNAPI ushort $getIPv4Port() const;

    MCNAPI ushort $getIPv6Port() const;

    MCNAPI ::TransportLayer $getNetworkType() const;

    MCNAPI bool $host(::ConnectionDefinition const&, ::PrivateKeyManager const&);

    MCNAPI bool $connect(
        ::Social::GameConnectionInfo const&,
        ::Social::GameConnectionInfo const&,
        std::shared_ptr<NetherNet::IIdentityAssertionGenerator>
    );

    MCNAPI void $disconnect();

    MCNAPI void $tick();

    MCNAPI void $runEvents();

    MCNAPI bool $isServer() const;

    MCNAPI void $closeNetworkConnection(::NetworkIdentifier const&);

    MCNAPI ::NetworkIdentifier $getNetworkIdentifier() const;

    MCNAPI bool $setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    MCNAPI void $setDisableLanSignaling(bool);

    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RemoteConnectorComposite {};
#endif // @header-generator platform
