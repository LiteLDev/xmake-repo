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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~INetherNetTransportInterface() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool SendPacket(::NetherNet::NetworkID, unsigned long long, std::string const&, ::NetherNet::ESendType) = 0;
#else // @header-generator platform
    virtual bool SendPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        ::std::string const&   data,
        ::NetherNet::ESendType eSendType
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool IsPacketAvailable(::NetherNet::NetworkID, unsigned long long, uint*) = 0;
#else // @header-generator platform
    virtual bool IsPacketAvailable(::NetherNet::NetworkID remoteId, uint64 connectionId, uint* pcbMessageSize) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool ReadPacket(::NetherNet::NetworkID, unsigned long long, void*, uint, uint*) = 0;
#else // @header-generator platform
    virtual bool ReadPacket(
        ::NetherNet::NetworkID remoteId,
        uint64                 connectionId,
        void*                  pubDest,
        uint                   cbDest,
        uint*                  pcbMessageSize
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool OpenSessionWithUser(::NetherNet::NetworkID, std::shared_ptr<NetherNet::IIdentityAssertionGenerator>) = 0;
#else // @header-generator platform
    virtual bool OpenSessionWithUser(
        ::NetherNet::NetworkID                                      networkIDRemote,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identityGenerator
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetIdentityGenerator(std::shared_ptr<NetherNet::IIdentityAssertionGenerator>) = 0;
#else // @header-generator platform
    virtual void
    SetIdentityGenerator(::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identityGenerator) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool CloseSessionWithUser(::NetherNet::NetworkID, unsigned long long) = 0;
#else // @header-generator platform
    virtual bool CloseSessionWithUser(::NetherNet::NetworkID networkIDRemote, uint64 connectionId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool GetSessionState(::NetherNet::NetworkID, unsigned long long, ::NetherNet::SessionState*) = 0;
#else // @header-generator platform
    virtual bool GetSessionState(
        ::NetherNet::NetworkID     networkIDRemote,
        uint64                     connectionId,
        ::NetherNet::SessionState* pConnectionState
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetSignalingInterface(std::shared_ptr<NetherNet::ISignalingInterface> const&) = 0;
#else // @header-generator platform
    virtual void
    SetSignalingInterface(::std::shared_ptr<::NetherNet::ISignalingInterface> const& pWebRTCSignalingInterface) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetRelayConfig(std::vector<NetherNet::StunRelayServer> const&) = 0;
#else // @header-generator platform
    virtual void SetRelayConfig(::std::vector<::NetherNet::StunRelayServer> const& config) = 0;
#endif // @header-generator platform

    virtual bool IsBroadcastDiscoveryEnabled() = 0;

    virtual void EnableBroadcastDiscovery() = 0;

    virtual void DisableBroadcastDiscovery() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void AddLanHost(::NetherNet::NetworkID, std::string const&, int) = 0;
#else // @header-generator platform
    virtual void AddLanHost(::NetherNet::NetworkID remote, ::std::string const& ip, int port) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void RemoveLanHost(::NetherNet::NetworkID) = 0;
#else // @header-generator platform
    virtual void RemoveLanHost(::NetherNet::NetworkID remote) = 0;
#endif // @header-generator platform

    virtual void EnableLANSignaling() = 0;

    virtual void DisableLANSignaling() = 0;

    virtual void EnableTrickleIce() = 0;

    virtual void DisableTrickleIce() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler*) = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler* handler) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
