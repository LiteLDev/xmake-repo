#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/ConnectionAttemptResult.h"
#include "mc/deps/raknet/ConnectionState.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/StartupResult.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class PluginInterface2; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { class ShadowBanList; }
namespace RakNet { struct AddressOrGUID; }
namespace RakNet { struct NetworkAdapter; }
namespace RakNet { struct Packet; }
namespace RakNet { struct PublicKey; }
namespace RakNet { struct RNS2RecvStruct; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct SocketDescriptor; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class RakPeerInterface {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~RakPeerInterface() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void InitializeConfiguration(std::unique_ptr<RakNet::ShadowBanList>) = 0;
#else // @header-generator platform
    virtual void InitializeConfiguration(::std::unique_ptr<::RakNet::ShadowBanList> banList) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::StartupResult Startup(uint, ::RakNet::SocketDescriptor*, uint, int) = 0;
#else // @header-generator platform
    virtual ::RakNet::StartupResult Startup(
        uint                        maxConnections,
        ::RakNet::SocketDescriptor* socketDescriptors,
        uint                        socketDescriptorCount,
        int                         threadPriority
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool InitializeSecurity(char const*, char const*, bool) = 0;
#else // @header-generator platform
    virtual bool InitializeSecurity(char const* public_key, char const* private_key, bool bRequireClientKey) = 0;
#endif // @header-generator platform

    virtual void DisableSecurity() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void AddToSecurityExceptionList(char const*) = 0;
#else // @header-generator platform
    virtual void AddToSecurityExceptionList(char const* ip) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void RemoveFromSecurityExceptionList(char const*) = 0;
#else // @header-generator platform
    virtual void RemoveFromSecurityExceptionList(char const* ip) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool IsInSecurityExceptionList(char const*) = 0;
#else // @header-generator platform
    virtual bool IsInSecurityExceptionList(char const* ip) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetMaximumIncomingConnections(ushort) = 0;
#else // @header-generator platform
    virtual void SetMaximumIncomingConnections(ushort numberAllowed) = 0;
#endif // @header-generator platform

    virtual uint GetMaximumIncomingConnections() const = 0;

    virtual ushort NumberOfConnections() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetIncomingPassword(char const*, int) = 0;
#else // @header-generator platform
    virtual void SetIncomingPassword(char const* passwordData, int passwordDataLength) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void GetIncomingPassword(char*, int*) = 0;
#else // @header-generator platform
    virtual void GetIncomingPassword(char* passwordData, int* passwordDataLength) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::ConnectionAttemptResult Connect(char const*, ushort, char const*, int, ::RakNet::PublicKey*, uint, uint, uint, uint) = 0;
#else // @header-generator platform
    virtual ::RakNet::ConnectionAttemptResult Connect(
        char const*          host,
        ushort               remotePort,
        char const*          passwordData,
        int                  passwordDataLength,
        ::RakNet::PublicKey* publicKey,
        uint                 connectionSocketIndex,
        uint                 sendConnectionAttemptCount,
        uint                 timeBetweenSendConnectionAttemptsMS,
        uint                 timeoutTime
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::ConnectionAttemptResult ConnectWithSocket(char const*, ushort, char const*, int, ::RakNet::RakNetSocket2*, ::RakNet::PublicKey*, uint, uint, uint) = 0;
#else // @header-generator platform
    virtual ::RakNet::ConnectionAttemptResult ConnectWithSocket(
        char const*              host,
        ushort                   remotePort,
        char const*              passwordData,
        int                      passwordDataLength,
        ::RakNet::RakNetSocket2* socket,
        ::RakNet::PublicKey*     publicKey,
        uint                     sendConnectionAttemptCount,
        uint                     timeBetweenSendConnectionAttemptsMS,
        uint                     timeoutTime
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void Shutdown(uint, uchar, ::PacketPriority) = 0;
#else // @header-generator platform
    virtual void
    Shutdown(uint blockDuration, uchar orderingChannel, ::PacketPriority disconnectionNotificationPriority) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID) = 0;
#else // @header-generator platform
    virtual bool SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID systemIdentifier) = 0;
#endif // @header-generator platform

    virtual bool IsActive() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool GetConnectionList(::RakNet::SystemAddress*, ushort*) const = 0;
#else // @header-generator platform
    virtual bool GetConnectionList(::RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const = 0;
#endif // @header-generator platform

    virtual uint GetNextSendReceipt() = 0;

    virtual uint IncrementNextSendReceipt() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint Send(char const*, int const, ::PacketPriority, ::PacketReliability, char, ::RakNet::AddressOrGUID const, bool, uint) = 0;
#else // @header-generator platform
    virtual uint Send(
        char const*                   data,
        int const                     length,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SendLoopback(char const*, int const) = 0;
#else // @header-generator platform
    virtual uint Send(
        ::RakNet::BitStream const*    bitStream,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint Send(::RakNet::BitStream const*, ::PacketPriority, ::PacketReliability, char, ::RakNet::AddressOrGUID const, bool, uint) = 0;
#else // @header-generator platform
    virtual void SendLoopback(char const* data, int const length) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint SendList(char const**, int const*, int const, ::PacketPriority, ::PacketReliability, char, ::RakNet::AddressOrGUID const, bool, uint) = 0;
#else // @header-generator platform
    virtual uint SendList(
        char const**                  data,
        int const*                    lengths,
        int const                     numParameters,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    ) = 0;
#endif // @header-generator platform

    virtual ::RakNet::Packet* Receive() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void DeallocatePacket(::RakNet::Packet*) = 0;
#else // @header-generator platform
    virtual void DeallocatePacket(::RakNet::Packet* packet) = 0;
#endif // @header-generator platform

    virtual uint GetMaximumNumberOfPeers() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void CloseConnection(::RakNet::AddressOrGUID const, bool, uchar, ::PacketPriority) = 0;
#else // @header-generator platform
    virtual void CloseConnection(
        ::RakNet::AddressOrGUID const target,
        bool                          sendDisconnectionNotification,
        uchar                         orderingChannel,
        ::PacketPriority              disconnectionNotificationPriority
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::ConnectionState GetConnectionState(::RakNet::AddressOrGUID const) = 0;
#else // @header-generator platform
    virtual ::RakNet::ConnectionState GetConnectionState(::RakNet::AddressOrGUID const systemIdentifier) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int GetIndexFromSystemAddress(::RakNet::SystemAddress const) const = 0;
#else // @header-generator platform
    virtual int GetIndexFromSystemAddress(::RakNet::SystemAddress const systemAddress) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::RakNetGUID GetGUIDFromIndex(uint) = 0;
#else // @header-generator platform
    virtual ::RakNet::RakNetGUID GetGUIDFromIndex(uint index) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void GetSystemList(::DataStructures::List<RakNet::SystemAddress>&, ::DataStructures::List<RakNet::RakNetGUID>&) const = 0;
#else // @header-generator platform
    virtual void GetSystemList(
        ::DataStructures::List<::RakNet::SystemAddress>& addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&    guids
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void AddToBanList(char const*, uint) = 0;
#else // @header-generator platform
    virtual void AddToBanList(char const* IP, uint milliseconds) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void RemoveFromBanList(char const*) = 0;
#else // @header-generator platform
    virtual void RemoveFromBanList(char const* IP) = 0;
#endif // @header-generator platform

    virtual void ClearBanList() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool IsBanned(char const*) = 0;
#else // @header-generator platform
    virtual bool IsBanned(char const* IP) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool Ping(char const*, ushort, bool, uint) = 0;
#else // @header-generator platform
    virtual void Ping(::RakNet::SystemAddress const target) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void Ping(::RakNet::SystemAddress const) = 0;
#else // @header-generator platform
    virtual bool
    Ping(char const* host, ushort remotePort, bool onlyReplyOnAcceptingConnections, uint connectionSocketIndex) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int GetAveragePing(::RakNet::AddressOrGUID const) = 0;
#else // @header-generator platform
    virtual int GetAveragePing(::RakNet::AddressOrGUID const systemIdentifier) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int GetLastPing(::RakNet::AddressOrGUID const) const = 0;
#else // @header-generator platform
    virtual int GetLastPing(::RakNet::AddressOrGUID const systemIdentifier) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int GetLowestPing(::RakNet::AddressOrGUID const) const = 0;
#else // @header-generator platform
    virtual int GetLowestPing(::RakNet::AddressOrGUID const systemIdentifier) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetOccasionalPing(bool) = 0;
#else // @header-generator platform
    virtual void SetOccasionalPing(bool doPing) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong GetClockDifferential(::RakNet::AddressOrGUID const) = 0;
#else // @header-generator platform
    virtual uint64 GetClockDifferential(::RakNet::AddressOrGUID const systemIdentifier) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetAllowUnconnectedPings(bool) = 0;
#else // @header-generator platform
    virtual void SetAllowUnconnectedPings(bool unconnectedPings) = 0;
#endif // @header-generator platform

    virtual bool GetAllowUnconnectedPings() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetOfflinePingResponse(char const*, uint const) = 0;
#else // @header-generator platform
    virtual void SetOfflinePingResponse(char const* data, uint const length) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress GetInternalID(::RakNet::SystemAddress const, int const) const = 0;
#else // @header-generator platform
    virtual ::RakNet::SystemAddress
    GetInternalID(::RakNet::SystemAddress const systemAddress, int const index) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress GetExternalID(::RakNet::SystemAddress const) const = 0;
#else // @header-generator platform
    virtual ::RakNet::SystemAddress GetExternalID(::RakNet::SystemAddress const target) const = 0;
#endif // @header-generator platform

    virtual ::RakNet::RakNetGUID const GetMyGUID() const = 0;

    virtual void resetMyGUID() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress GetMyBoundAddress(int const) = 0;
#else // @header-generator platform
    virtual ::RakNet::SystemAddress GetMyBoundAddress(int const socketIndex) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::RakNetGUID const& GetGuidFromSystemAddress(::RakNet::SystemAddress const) const = 0;
#else // @header-generator platform
    virtual ::RakNet::RakNetGUID const& GetGuidFromSystemAddress(::RakNet::SystemAddress const input) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress GetSystemAddressFromGuid(::RakNet::RakNetGUID const) const = 0;
#else // @header-generator platform
    virtual ::RakNet::SystemAddress GetSystemAddressFromGuid(::RakNet::RakNetGUID const input) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetTimeoutTime(uint, ::RakNet::SystemAddress const) = 0;
#else // @header-generator platform
    virtual void SetTimeoutTime(uint timeMS, ::RakNet::SystemAddress const target) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint GetTimeoutTime(::RakNet::SystemAddress const) = 0;
#else // @header-generator platform
    virtual uint GetTimeoutTime(::RakNet::SystemAddress const target) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int GetMTUSize(::RakNet::SystemAddress const) const = 0;
#else // @header-generator platform
    virtual int GetMTUSize(::RakNet::SystemAddress const target) const = 0;
#endif // @header-generator platform

    virtual uint GetNumberOfAdapters() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::NetworkAdapter& GetLocalAdapter(uint) = 0;
#else // @header-generator platform
    virtual ::RakNet::NetworkAdapter& GetLocalAdapter(uint index) = 0;
#endif // @header-generator platform

    virtual uint GetNumberOfAddresses() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual char const* GetLocalIP(uint) = 0;
#else // @header-generator platform
    virtual char const* GetLocalIP(uint index) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool IsLocalIP(char const*) = 0;
#else // @header-generator platform
    virtual bool IsLocalIP(char const* ip) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void AllowConnectionResponseIPMigration(bool) = 0;
#else // @header-generator platform
    virtual void AllowConnectionResponseIPMigration(bool allow) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool AdvertiseSystem(char const*, ushort, char const*, int, uint) = 0;
#else // @header-generator platform
    virtual bool AdvertiseSystem(
        char const* host,
        ushort      remotePort,
        char const* data,
        int         dataLength,
        uint        connectionSocketIndex
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetSplitMessageProgressInterval(int) = 0;
#else // @header-generator platform
    virtual void SetSplitMessageProgressInterval(int interval) = 0;
#endif // @header-generator platform

    virtual int GetSplitMessageProgressInterval() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetUnreliableTimeout(uint) = 0;
#else // @header-generator platform
    virtual void SetUnreliableTimeout(uint timeoutMS) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SendTTL(char const*, ushort, int, uint) = 0;
#else // @header-generator platform
    virtual void SendTTL(char const* host, ushort remotePort, int ttl, uint connectionSocketIndex) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void AttachPlugin(::RakNet::PluginInterface2*) = 0;
#else // @header-generator platform
    virtual void AttachPlugin(::RakNet::PluginInterface2* plugin) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void DetachPlugin(::RakNet::PluginInterface2*) = 0;
#else // @header-generator platform
    virtual void DetachPlugin(::RakNet::PluginInterface2* plugin) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void PushBackPacket(::RakNet::Packet*, bool) = 0;
#else // @header-generator platform
    virtual void PushBackPacket(::RakNet::Packet* packet, bool pushAtHead) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void ChangeSystemAddress(::RakNet::RakNetGUID, ::RakNet::SystemAddress const&) = 0;
#else // @header-generator platform
    virtual void ChangeSystemAddress(::RakNet::RakNetGUID guid, ::RakNet::SystemAddress const& systemAddress) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::Packet* AllocatePacket(uint) = 0;
#else // @header-generator platform
    virtual ::RakNet::Packet* AllocatePacket(uint dataSize) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::RakNetSocket2* GetSocket(::RakNet::SystemAddress const) = 0;
#else // @header-generator platform
    virtual ::RakNet::RakNetSocket2* GetSocket(::RakNet::SystemAddress const target) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void GetSockets(::DataStructures::List<RakNet::RakNetSocket2*>&) = 0;
#else // @header-generator platform
    virtual void GetSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void ReleaseSockets(::DataStructures::List<RakNet::RakNetSocket2*>&) = 0;
#else // @header-generator platform
    virtual void ReleaseSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void WriteOutOfBandHeader(::RakNet::BitStream*) = 0;
#else // @header-generator platform
    virtual void WriteOutOfBandHeader(::RakNet::BitStream* bitStream) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetUserUpdateThread(void(*)(::RakNet::RakPeerInterface*, void*), void*) = 0;
#else // @header-generator platform
    virtual void SetUserUpdateThread(
        void (*_userUpdateThreadPtr)(::RakNet::RakPeerInterface*, void*),
        void* _userUpdateThreadData
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetIncomingDatagramEventHandler(bool(*)(::RakNet::RNS2RecvStruct*)) = 0;
#else // @header-generator platform
    virtual void SetIncomingDatagramEventHandler(bool (*_incomingDatagramEventHandler)(::RakNet::RNS2RecvStruct*)) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void ApplyNetworkSimulator(float, ushort, ushort) = 0;
#else // @header-generator platform
    virtual void ApplyNetworkSimulator(float packetloss, ushort minExtraPing, ushort extraPingVariance) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetPerConnectionOutgoingBandwidthLimit(uint) = 0;
#else // @header-generator platform
    virtual void SetPerConnectionOutgoingBandwidthLimit(uint maxBitsPerSecond) = 0;
#endif // @header-generator platform

    virtual bool IsNetworkSimulatorActive() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool GetStatistics(uint const, ::RakNet::RakNetStatistics*) = 0;
#else // @header-generator platform
    virtual ::RakNet::RakNetStatistics*
    GetStatistics(::RakNet::SystemAddress const systemAddress, ::RakNet::RakNetStatistics* rns) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::RakNetStatistics* GetStatistics(::RakNet::SystemAddress const, ::RakNet::RakNetStatistics*) = 0;
#else // @header-generator platform
    virtual bool GetStatistics(uint const index, ::RakNet::RakNetStatistics* rns) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void GetStatisticsList(::DataStructures::List<RakNet::SystemAddress>&, ::DataStructures::List<RakNet::RakNetGUID>&, ::DataStructures::List<RakNet::RakNetStatistics>&) = 0;
#else // @header-generator platform
    virtual void GetStatisticsList(
        ::DataStructures::List<::RakNet::SystemAddress>&    addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&       guids,
        ::DataStructures::List<::RakNet::RakNetStatistics>& statistics
    ) = 0;
#endif // @header-generator platform

    virtual uint GetReceiveBufferSize() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool RunUpdateCycle(::RakNet::BitStream&) = 0;
#else // @header-generator platform
    virtual bool RunUpdateCycle(::RakNet::BitStream& updateBitStream) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool SendOutOfBand(char const*, ushort, char const*, uint, uint) = 0;
    // clang-format on
#else // @header-generator platform
    virtual bool SendOutOfBand(
        char const* host,
        ushort      remotePort,
        char const* data,
        uint        dataLength,
        uint        connectionSocketIndex
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void DestroyInstance(::RakNet::RakPeerInterface*);

    MCNAPI static ulong Get64BitUniqueRandomNumber();

    MCNAPI static ::RakNet::RakPeerInterface* GetInstance();
#else // @header-generator platform
    MCAPI static uint64 Get64BitUniqueRandomNumber();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
