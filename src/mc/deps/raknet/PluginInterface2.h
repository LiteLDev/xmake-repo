#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/raknet/PI2_FailedConnectionAttemptReason.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { class RakPeerInterface; }
namespace RakNet { class TCPInterface; }
#else // @header-generator platform
namespace RakNet { struct InternalPacket; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
#endif // @header-generator platform
// clang-format on

namespace RakNet {

class PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::RakNet::RakPeerInterface*> rakPeerInterface;
    ::ll::TypedStorage<8, 8, ::RakNet::TCPInterface*>     tcpInterface;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkd5879f;
    ::ll::UntypedStorage<8, 8> mUnk57d580;
    // NOLINTEND

public:
    // prevent constructor by default
    PluginInterface2& operator=(PluginInterface2 const&);
    PluginInterface2(PluginInterface2 const&);
    PluginInterface2();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PluginInterface2() = default;

    virtual void OnAttach();

    virtual void OnDetach();

    virtual void Update();

    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*);

    virtual void OnRakPeerStartup();

    virtual void OnRakPeerShutdown();

    virtual void
    OnClosedConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, ::RakNet::PI2_LostConnectionReason);

    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool);

    virtual void OnFailedConnectionAttempt(::RakNet::Packet*, ::RakNet::PI2_FailedConnectionAttemptReason);

    virtual bool UsesReliabilityLayer() const;

    virtual void OnDirectSocketSend(char const*, uint const, ::RakNet::SystemAddress);

    virtual void OnDirectSocketReceive(char const*, uint const, ::RakNet::SystemAddress);

    virtual void OnReliabilityLayerNotification(char const*, uint const, ::RakNet::SystemAddress, bool);

    virtual void OnInternalPacket(::RakNet::InternalPacket*, uint, ::RakNet::SystemAddress, uint, int);

    virtual void OnAck(uint, ::RakNet::SystemAddress, uint);

    virtual void OnPushBackPacket(char const*, uint const, ::RakNet::SystemAddress);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
