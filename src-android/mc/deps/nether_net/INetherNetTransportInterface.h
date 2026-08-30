#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESendType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace NetherNet { class ISignalingInterface; }
namespace NetherNet { struct ILanEventHandler; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace NetherNet { struct StunRelayServer; }
// clang-format on

namespace NetherNet {

class INetherNetTransportInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~INetherNetTransportInterface() = default;

    virtual bool SendPacket(::NetherNet::NetworkID, unsigned long long, std::string const&, ::NetherNet::ESendType) = 0;

    virtual bool IsPacketAvailable(::NetherNet::NetworkID, unsigned long long, uint*) = 0;

    virtual bool ReadPacket(::NetherNet::NetworkID, unsigned long long, void*, uint, uint*) = 0;

    virtual bool OpenSessionWithUser(::NetherNet::NetworkID, std::shared_ptr<NetherNet::IIdentityAssertionGenerator>) = 0;

    virtual void SetIdentityGenerator(std::shared_ptr<NetherNet::IIdentityAssertionGenerator>) = 0;

    virtual bool CloseSessionWithUser(::NetherNet::NetworkID, unsigned long long) = 0;

    virtual bool GetSessionState(::NetherNet::NetworkID, unsigned long long, ::NetherNet::SessionState*) = 0;

    virtual void SetSignalingInterface(std::shared_ptr<NetherNet::ISignalingInterface> const&) = 0;

    virtual void SetRelayConfig(std::vector<NetherNet::StunRelayServer> const&) = 0;

    virtual bool IsBroadcastDiscoveryEnabled() = 0;

    virtual void EnableBroadcastDiscovery() = 0;

    virtual void DisableBroadcastDiscovery() = 0;

    virtual void AddLanHost(::NetherNet::NetworkID, std::string const&, int) = 0;

    virtual void RemoveLanHost(::NetherNet::NetworkID) = 0;

    virtual void EnableLANSignaling() = 0;

    virtual void DisableLANSignaling() = 0;

    virtual void EnableTrickleIce() = 0;

    virtual void DisableTrickleIce() = 0;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler*) = 0;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace NetherNet
