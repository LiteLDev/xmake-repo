#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/AddressOrGUID.h"
#include "mc/deps/raknet/BitStream.h"
#include "mc/deps/raknet/ConnectionAttemptResult.h"
#include "mc/deps/raknet/ConnectionState.h"
#include "mc/deps/raknet/NetworkAdapter.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/PublicKeyMode.h"
#include "mc/deps/raknet/RNS2EventHandler.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/RakPeerInterface.h"
#include "mc/deps/raknet/ReliabilityLayer.h"
#include "mc/deps/raknet/SignaledEvent.h"
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/StartupResult.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/MemoryPool.h"
#include "mc/deps/raknet/data_structures/Queue.h"
#include "mc/deps/raknet/data_structures/ThreadsafeAllocatingQueue.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class PluginInterface2; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { class RakString; }
namespace RakNet { class ShadowBanList; }
namespace RakNet { struct Packet; }
namespace RakNet { struct PublicKey; }
namespace RakNet { struct RNS2RecvStruct; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct RemoteSystemIndex; }
namespace RakNet { struct SocketDescriptor; }
// clang-format on

namespace RakNet {

class RakPeer : public ::RakNet::RakPeerInterface, public ::RakNet::RNS2EventHandler {
public:
    // RakPeer inner types declare
    // clang-format off
    struct PingAndClockDifferential;
    struct RemoteSystemStruct;
    struct BanStruct;
    struct RequestedConnectionStruct;
    struct BufferedCommandStruct;
    struct SocketQueryOutput;
    // clang-format on

    // RakPeer inner types define
    struct PingAndClockDifferential {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> pingTime;
        ::ll::TypedStorage<8, 8, ulong>  clockDifferential;
        // NOLINTEND
    };

    struct RemoteSystemStruct {
    public:
        // RemoteSystemStruct inner types define
        enum ConnectMode : uint {
            NO_ACTION                   = 0,
            DISCONNECT_ASAP             = 1,
            DISCONNECT_ASAP_SILENTLY    = 2,
            DISCONNECT_ON_NO_ACK        = 3,
            REQUESTED_CONNECTION        = 4,
            HANDLING_CONNECTION_REQUEST = 5,
            UNVERIFIED_SENDER           = 6,
            CONNECTED                   = 7,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                               isActive;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                          systemAddress;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                          myExternalSystemAddress;
        ::ll::TypedStorage<8, 2720, ::RakNet::SystemAddress[20]>                     theirInternalSystemAddress;
        ::ll::TypedStorage<8, 6704, ::RakNet::ReliabilityLayer>                      reliabilityLayer;
        ::ll::TypedStorage<1, 1, bool>                                               weInitiatedTheConnection;
        ::ll::TypedStorage<8, 80, ::RakNet::RakPeer::PingAndClockDifferential[5]>    pingAndClockDifferential;
        ::ll::TypedStorage<8, 8, ulong>                                              pingAndClockDifferentialWriteIndex;
        ::ll::TypedStorage<2, 2, ushort>                                             lowestPing;
        ::ll::TypedStorage<8, 8, ulong>                                              nextPingTime;
        ::ll::TypedStorage<8, 8, ulong>                                              lastReliableSend;
        ::ll::TypedStorage<8, 8, ulong>                                              connectionTime;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                              guid;
        ::ll::TypedStorage<4, 4, int>                                                MTUSize;
        ::ll::TypedStorage<8, 8, ::RakNet::RakNetSocket2*>                           rakNetSocket;
        ::ll::TypedStorage<2, 2, ushort>                                             remoteSystemIndex;
        ::ll::TypedStorage<4, 4, ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode> connectMode;
        ::ll::TypedStorage<1, 1, bool>                                               applicationHandshakeCompleted;
        // NOLINTEND
    };

    struct BanStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char*> IP;
        ::ll::TypedStorage<4, 4, uint>  timeout;
        // NOLINTEND
    };

    struct RequestedConnectionStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
        ::ll::TypedStorage<8, 8, ulong>                     nextRequestTime;
        ::ll::TypedStorage<1, 1, uchar>                     requestsMade;
        ::ll::TypedStorage<8, 8, char*>                     data;
        ::ll::TypedStorage<2, 2, ushort>                    dataLength;
        ::ll::TypedStorage<1, 256, char[256]>               outgoingPassword;
        ::ll::TypedStorage<1, 1, uchar>                     outgoingPasswordLength;
        ::ll::TypedStorage<4, 4, uint>                      socketIndex;
        ::ll::TypedStorage<4, 4, uint>                      extraData;
        ::ll::TypedStorage<4, 4, uint>                      sendConnectionAttemptCount;
        ::ll::TypedStorage<4, 4, uint>                      timeBetweenSendConnectionAttemptsMS;
        ::ll::TypedStorage<4, 4, uint>                      timeoutTime;
        ::ll::TypedStorage<4, 4, ::RakNet::PublicKeyMode>   publicKeyMode;
        ::ll::TypedStorage<8, 8, ::RakNet::RakNetSocket2*>  socket;
        ::ll::UntypedStorage<4, 4>                          actionToTake;
        // NOLINTEND
    };

    struct BufferedCommandStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                               numberOfBitsToSend;
        ::ll::TypedStorage<4, 4, ::PacketPriority>                                   priority;
        ::ll::TypedStorage<4, 4, ::PacketReliability>                                reliability;
        ::ll::TypedStorage<1, 1, char>                                               orderingChannel;
        ::ll::TypedStorage<8, 152, ::RakNet::AddressOrGUID>                          systemIdentifier;
        ::ll::TypedStorage<1, 1, bool>                                               broadcast;
        ::ll::TypedStorage<4, 4, ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode> connectionMode;
        ::ll::TypedStorage<8, 8, ulong>                                              networkID;
        ::ll::TypedStorage<1, 1, bool>                                               blockingCommand;
        ::ll::TypedStorage<8, 8, char*>                                              data;
        ::ll::TypedStorage<1, 1, bool>                                               haveRakNetCloseSocket;
        ::ll::TypedStorage<4, 4, uint>                                               connectionSocketIndex;
        ::ll::TypedStorage<2, 2, ushort>                                             remotePortRakNetWasStartedOn_PS3;
        ::ll::TypedStorage<4, 4, uint>                                               extraSocketOptions;
        ::ll::TypedStorage<8, 8, ::RakNet::RakNetSocket2*>                           socket;
        ::ll::TypedStorage<2, 2, ushort>                                             port;
        ::ll::TypedStorage<4, 4, uint>                                               receipt;
        ::ll::UntypedStorage<4, 4>                                                   command;
        // NOLINTEND
    };

    struct SocketQueryOutput {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> sockets;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool volatile>                                endThreads;
    ::ll::TypedStorage<1, 1, bool volatile>                                isMainLoopThreadActive;
    ::ll::TypedStorage<1, 1, bool>                                         occasionalPing;
    ::ll::TypedStorage<4, 4, uint>                                         maximumNumberOfPeers;
    ::ll::TypedStorage<4, 4, uint>                                         maximumIncomingConnections;
    ::ll::TypedStorage<8, 288, ::RakNet::BitStream>                        offlinePingResponse;
    ::ll::TypedStorage<1, 256, char[256]>                                  incomingPassword;
    ::ll::TypedStorage<1, 1, uchar>                                        incomingPasswordLength;
    ::ll::TypedStorage<8, 8, ::RakNet::RakPeer::RemoteSystemStruct*>       remoteSystemList;
    ::ll::TypedStorage<8, 8, ::RakNet::RakPeer::RemoteSystemStruct**>      activeSystemList;
    ::ll::TypedStorage<4, 4, uint>                                         activeSystemListSize;
    ::ll::TypedStorage<8, 8, ::RakNet::RemoteSystemIndex**>                remoteSystemLookup;
    ::ll::UntypedStorage<8, 32>                                            remoteSystemIndexPool;
    ::ll::UntypedStorage<8, 88>                                            shadowBanList;
    ::ll::UntypedStorage<4, 0>                                             rakPeerMutexes;
    ::ll::TypedStorage<1, 1, bool>                                         updateCycleIsRunning;
    ::ll::TypedStorage<4, 4, uint>                                         bytesSentPerSecond;
    ::ll::TypedStorage<4, 4, uint>                                         bytesReceivedPerSecond;
    ::ll::TypedStorage<4, 4, uint>                                         validationInteger;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>                       incomingQueueMutex;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>                       banListMutex;
    ::ll::UntypedStorage<8, 16>                                            banList;
    ::ll::UntypedStorage<8, 16>                                            pluginListTS;
    ::ll::UntypedStorage<8, 16>                                            pluginListNTS;
    ::ll::UntypedStorage<8, 24>                                            requestedConnectionQueue;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>                       requestedConnectionQueueMutex;
    ::ll::UntypedStorage<8, 136>                                           bufferedCommands;
    ::ll::UntypedStorage<8, 24>                                            bufferedPacketsFreePool;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>                       bufferedPacketsFreePoolMutex;
    ::ll::UntypedStorage<8, 24>                                            bufferedPacketsQueue;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>                       bufferedPacketsQueueMutex;
    ::ll::UntypedStorage<8, 136>                                           socketQueryOutput;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>                       securityExceptionMutex;
    ::ll::TypedStorage<4, 4, int>                                          defaultMTUSize;
    ::ll::TypedStorage<1, 1, bool>                                         trackFrequencyTable;
    ::ll::UntypedStorage<8, 16>                                            socketList;
    ::ll::TypedStorage<8, 8, ::RakNet::BitStream*>                         replyFromTargetBS;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                    replyFromTargetPlayer;
    ::ll::TypedStorage<1, 1, bool>                                         replyFromTargetBroadcast;
    ::ll::TypedStorage<4, 4, uint>                                         defaultTimeoutTime;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                        myGuid;
    ::ll::TypedStorage<4, 4, uint>                                         maxOutgoingBPS;
    ::ll::TypedStorage<1, 1, bool>                                         allowConnectionResponseIPMigration;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                    firstExternalID;
    ::ll::TypedStorage<4, 4, int>                                          splitMessageProgressInterval;
    ::ll::TypedStorage<4, 4, uint>                                         unreliableTimeout;
    ::ll::TypedStorage<8, 8, bool (*)(::RakNet::RNS2RecvStruct*)>          incomingDatagramEventHandler;
    ::ll::UntypedStorage<8, 16>                                            securityExceptionList;
    ::ll::TypedStorage<8, 2856, ::RakNet::SystemAddress[21]>               ipList;
    ::ll::TypedStorage<8, 31592, ::RakNet::NetworkAdapter[11]>             adapterList;
    ::ll::TypedStorage<1, 1, bool>                                         allowInternalRouting;
    ::ll::TypedStorage<1, 1, bool>                                         allowUnconnectedPings;
    ::ll::TypedStorage<8, 8, void (*)(::RakNet::RakPeerInterface*, void*)> userUpdateThreadPtr;
    ::ll::TypedStorage<8, 8, void*>                                        userUpdateThreadData;
    ::ll::TypedStorage<8, 144, ::RakNet::SignaledEvent>                    quitAndDataEvents;
    ::ll::TypedStorage<1, 1, bool>                                         limitConnectionFrequencyFromTheSameIP;
    ::ll::UntypedStorage<4, 44>                                            packetAllocationPoolMutex;
    ::ll::UntypedStorage<8, 32>                                            packetAllocationPool;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>                       packetReturnMutex;
    ::ll::UntypedStorage<8, 24>                                            packetReturnQueue;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>                       sendReceiptSerialMutex;
    ::ll::TypedStorage<4, 4, uint>                                         sendReceiptSerial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RakPeer();

    virtual void InitializeConfiguration(std::unique_ptr<RakNet::ShadowBanList>);

    virtual ::RakNet::StartupResult Startup(uint, ::RakNet::SocketDescriptor*, uint, int);

    virtual bool InitializeSecurity(char const*, char const*, bool);

    virtual void DisableSecurity();

    virtual void AddToSecurityExceptionList(char const*);

    virtual void RemoveFromSecurityExceptionList(char const*);

    virtual bool IsInSecurityExceptionList(char const*);

    virtual void SetMaximumIncomingConnections(ushort);

    virtual uint GetMaximumIncomingConnections() const;

    virtual ushort NumberOfConnections() const;

    virtual void SetIncomingPassword(char const*, int);

    virtual void GetIncomingPassword(char*, int*);

    virtual ::RakNet::ConnectionAttemptResult Connect(char const*, ushort, char const*, int, ::RakNet::PublicKey*, uint, uint, uint, uint);

    virtual ::RakNet::ConnectionAttemptResult ConnectWithSocket(char const*, ushort, char const*, int, ::RakNet::RakNetSocket2*, ::RakNet::PublicKey*, uint, uint, uint);

    virtual void Shutdown(uint, uchar, ::PacketPriority);

    virtual bool SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID);

    virtual bool IsActive() const;

    virtual bool GetConnectionList(::RakNet::SystemAddress*, ushort*) const;

    virtual uint GetNextSendReceipt();

    virtual uint IncrementNextSendReceipt();

    virtual uint Send(char const*, int const, ::PacketPriority, ::PacketReliability, char, ::RakNet::AddressOrGUID const, bool, uint);

    virtual void SendLoopback(char const*, int const);

    virtual uint Send(::RakNet::BitStream const*, ::PacketPriority, ::PacketReliability, char, ::RakNet::AddressOrGUID const, bool, uint);

    virtual uint SendList(char const**, int const*, int const, ::PacketPriority, ::PacketReliability, char, ::RakNet::AddressOrGUID const, bool, uint);

    virtual ::RakNet::Packet* Receive();

    virtual void DeallocatePacket(::RakNet::Packet*);

    virtual uint GetMaximumNumberOfPeers() const;

    virtual void CloseConnection(::RakNet::AddressOrGUID const, bool, uchar, ::PacketPriority);

    virtual ::RakNet::ConnectionState GetConnectionState(::RakNet::AddressOrGUID const);

    virtual int GetIndexFromSystemAddress(::RakNet::SystemAddress const) const;

    virtual ::RakNet::RakNetGUID GetGUIDFromIndex(uint);

    virtual void GetSystemList(::DataStructures::List<RakNet::SystemAddress>&, ::DataStructures::List<RakNet::RakNetGUID>&) const;

    virtual void AddToBanList(char const*, uint);

    virtual void RemoveFromBanList(char const*);

    virtual void ClearBanList();

    virtual bool IsBanned(char const*);

    virtual bool Ping(char const*, ushort, bool, uint);

    virtual void Ping(::RakNet::SystemAddress const);

    virtual int GetAveragePing(::RakNet::AddressOrGUID const);

    virtual int GetLastPing(::RakNet::AddressOrGUID const) const;

    virtual int GetLowestPing(::RakNet::AddressOrGUID const) const;

    virtual void SetOccasionalPing(bool);

    virtual ulong GetClockDifferential(::RakNet::AddressOrGUID const);

    virtual void SetAllowUnconnectedPings(bool);

    virtual bool GetAllowUnconnectedPings() const;

    virtual void SetOfflinePingResponse(char const*, uint const);

    virtual ::RakNet::SystemAddress GetInternalID(::RakNet::SystemAddress const, int const) const;

    virtual ::RakNet::SystemAddress GetExternalID(::RakNet::SystemAddress const) const;

    virtual ::RakNet::RakNetGUID const GetMyGUID() const;

    virtual void resetMyGUID();

    virtual ::RakNet::SystemAddress GetMyBoundAddress(int const);

    virtual ::RakNet::RakNetGUID const& GetGuidFromSystemAddress(::RakNet::SystemAddress const) const;

    virtual ::RakNet::SystemAddress GetSystemAddressFromGuid(::RakNet::RakNetGUID const) const;

    virtual void SetTimeoutTime(uint, ::RakNet::SystemAddress const);

    virtual uint GetTimeoutTime(::RakNet::SystemAddress const);

    virtual int GetMTUSize(::RakNet::SystemAddress const) const;

    virtual uint GetNumberOfAdapters();

    virtual ::RakNet::NetworkAdapter& GetLocalAdapter(uint);

    virtual uint GetNumberOfAddresses();

    virtual char const* GetLocalIP(uint);

    virtual bool IsLocalIP(char const*);

    virtual void AllowConnectionResponseIPMigration(bool);

    virtual bool AdvertiseSystem(char const*, ushort, char const*, int, uint);

    virtual void SetSplitMessageProgressInterval(int);

    virtual int GetSplitMessageProgressInterval() const;

    virtual void SetUnreliableTimeout(uint);

    virtual void SendTTL(char const*, ushort, int, uint);

    virtual void AttachPlugin(::RakNet::PluginInterface2*);

    virtual void DetachPlugin(::RakNet::PluginInterface2*);

    virtual void PushBackPacket(::RakNet::Packet*, bool);

    virtual void ChangeSystemAddress(::RakNet::RakNetGUID, ::RakNet::SystemAddress const&);

    virtual ::RakNet::Packet* AllocatePacket(uint);

    virtual ::RakNet::RakNetSocket2* GetSocket(::RakNet::SystemAddress const);

    virtual void GetSockets(::DataStructures::List<RakNet::RakNetSocket2*>&);

    virtual void ReleaseSockets(::DataStructures::List<RakNet::RakNetSocket2*>&);

    virtual void WriteOutOfBandHeader(::RakNet::BitStream*);

    virtual void SetUserUpdateThread(void(*)(::RakNet::RakPeerInterface*, void*), void*);

    virtual void SetIncomingDatagramEventHandler(bool(*)(::RakNet::RNS2RecvStruct*));

    virtual void ApplyNetworkSimulator(float, ushort, ushort);

    virtual void SetPerConnectionOutgoingBandwidthLimit(uint);

    virtual bool IsNetworkSimulatorActive();

    virtual bool GetStatistics(uint const, ::RakNet::RakNetStatistics*);

    virtual ::RakNet::RakNetStatistics* GetStatistics(::RakNet::SystemAddress const, ::RakNet::RakNetStatistics*);

    virtual void GetStatisticsList(::DataStructures::List<RakNet::SystemAddress>&, ::DataStructures::List<RakNet::RakNetGUID>&, ::DataStructures::List<RakNet::RakNetStatistics>&);

    virtual uint GetReceiveBufferSize();

    virtual bool RunUpdateCycle(::RakNet::BitStream&);

    virtual bool SendOutOfBand(char const*, ushort, char const*, uint, uint);

    virtual void DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct*, char const*, uint);

    virtual ::RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const*, uint);

    virtual void OnRNS2Recv(::RakNet::RNS2RecvStruct*);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddPacketToProducer(::RakNet::Packet*);

    MCNAPI ::RakNet::Packet* AllocPacket(uint, char const*, uint);

    MCNAPI bool AllowIncomingConnections() const;

    MCNAPI ::RakNet::RakPeer::RemoteSystemStruct* AssignSystemAddressToRemoteSystemList(
        ::RakNet::SystemAddress const,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode,
        ::RakNet::RakNetSocket2*,
        bool*,
        ::RakNet::SystemAddress,
        int,
        ::RakNet::RakNetGUID,
        bool
    );

    MCNAPI void CallPluginCallbacks(::DataStructures::List<RakNet::PluginInterface2*>&, ::RakNet::Packet*);

    MCNAPI void ClearBufferedCommands();

    MCNAPI void ClearBufferedPackets();

    MCNAPI void CloseConnectionInternal(::RakNet::AddressOrGUID const&, bool, bool, uchar, ::PacketPriority);

    MCNAPI void DereferenceRemoteSystem(::RakNet::SystemAddress const&);

    MCNAPI void FillIPList();

    MCNAPI int GetIndexFromSystemAddress(::RakNet::SystemAddress const, bool) const;

    MCNAPI ::RakNet::RakPeer::RemoteSystemStruct*
    GetRemoteSystemFromSystemAddress(::RakNet::SystemAddress const, bool, bool) const;

    MCNAPI uint GetRemoteSystemIndex(::RakNet::SystemAddress const&) const;

    MCNAPI bool IsLoopbackAddress(::RakNet::AddressOrGUID const&, bool) const;

    MCNAPI void NotifyAndFlagForShutdown(::RakNet::SystemAddress const, bool, uchar, ::PacketPriority);

    MCNAPI void OnConnectionRequest(::RakNet::RakPeer::RemoteSystemStruct*, ulong);

    MCNAPI void ParseConnectionRequestPacket(
        ::RakNet::RakPeer::RemoteSystemStruct*,
        ::RakNet::SystemAddress const&,
        char const*,
        int
    );

    MCNAPI void PingInternal(::RakNet::SystemAddress const, bool, ::PacketReliability);

    MCNAPI void PushBufferedPacket(::RakNet::RNS2RecvStruct*);

    MCNAPI RakPeer();

    MCNAPI void ReferenceRemoteSystem(::RakNet::SystemAddress const&, uint);

    MCNAPI void SendBuffered(
        char const*,
        uint,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode,
        uint
    );

    MCNAPI bool SendImmediate(
        char*,
        uint,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        bool,
        ulong,
        uint
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $InitializeConfiguration(std::unique_ptr<RakNet::ShadowBanList>);

    MCNAPI ::RakNet::StartupResult $Startup(uint, ::RakNet::SocketDescriptor*, uint, int);

    MCNAPI bool $InitializeSecurity(char const*, char const*, bool);

    MCNAPI void $DisableSecurity();

    MCNAPI void $AddToSecurityExceptionList(char const*);

    MCNAPI void $RemoveFromSecurityExceptionList(char const*);

    MCNAPI bool $IsInSecurityExceptionList(char const*);

    MCNAPI void $SetMaximumIncomingConnections(ushort);

    MCNAPI uint $GetMaximumIncomingConnections() const;

    MCNAPI ushort $NumberOfConnections() const;

    MCNAPI void $SetIncomingPassword(char const*, int);

    MCNAPI void $GetIncomingPassword(char*, int*);

    MCNAPI ::RakNet::ConnectionAttemptResult
    $Connect(char const*, ushort, char const*, int, ::RakNet::PublicKey*, uint, uint, uint, uint);

    MCNAPI ::RakNet::ConnectionAttemptResult $ConnectWithSocket(
        char const*,
        ushort,
        char const*,
        int,
        ::RakNet::RakNetSocket2*,
        ::RakNet::PublicKey*,
        uint,
        uint,
        uint
    );

    MCNAPI void $Shutdown(uint, uchar, ::PacketPriority);

    MCNAPI bool $SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID);

    MCNAPI bool $IsActive() const;

    MCNAPI bool $GetConnectionList(::RakNet::SystemAddress*, ushort*) const;

    MCNAPI uint $GetNextSendReceipt();

    MCNAPI uint $IncrementNextSendReceipt();

    MCNAPI uint $Send(
        char const*,
        int const,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        uint
    );

    MCNAPI void $SendLoopback(char const*, int const);

    MCNAPI uint $Send(
        ::RakNet::BitStream const*,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        uint
    );

    MCNAPI uint $SendList(
        char const**,
        int const*,
        int const,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        uint
    );

    MCNAPI ::RakNet::Packet* $Receive();

    MCNAPI void $DeallocatePacket(::RakNet::Packet*);

    MCNAPI uint $GetMaximumNumberOfPeers() const;

    MCNAPI void $CloseConnection(::RakNet::AddressOrGUID const, bool, uchar, ::PacketPriority);

    MCNAPI ::RakNet::ConnectionState $GetConnectionState(::RakNet::AddressOrGUID const);

    MCNAPI int $GetIndexFromSystemAddress(::RakNet::SystemAddress const) const;

    MCNAPI ::RakNet::RakNetGUID $GetGUIDFromIndex(uint);

    MCNAPI void
    $GetSystemList(::DataStructures::List<RakNet::SystemAddress>&, ::DataStructures::List<RakNet::RakNetGUID>&) const;

    MCNAPI void $AddToBanList(char const*, uint);

    MCNAPI void $RemoveFromBanList(char const*);

    MCNAPI void $ClearBanList();

    MCNAPI bool $IsBanned(char const*);

    MCNAPI bool $Ping(char const*, ushort, bool, uint);

    MCNAPI void $Ping(::RakNet::SystemAddress const);

    MCNAPI int $GetAveragePing(::RakNet::AddressOrGUID const);

    MCNAPI int $GetLastPing(::RakNet::AddressOrGUID const) const;

    MCNAPI int $GetLowestPing(::RakNet::AddressOrGUID const) const;

    MCNAPI void $SetOccasionalPing(bool);

    MCNAPI ulong $GetClockDifferential(::RakNet::AddressOrGUID const);

    MCNAPI void $SetAllowUnconnectedPings(bool);

    MCNAPI bool $GetAllowUnconnectedPings() const;

    MCNAPI void $SetOfflinePingResponse(char const*, uint const);

    MCNAPI ::RakNet::SystemAddress $GetInternalID(::RakNet::SystemAddress const, int const) const;

    MCNAPI ::RakNet::SystemAddress $GetExternalID(::RakNet::SystemAddress const) const;

    MCNAPI ::RakNet::RakNetGUID const $GetMyGUID() const;

    MCNAPI void $resetMyGUID();

    MCNAPI ::RakNet::SystemAddress $GetMyBoundAddress(int const);

    MCNAPI ::RakNet::RakNetGUID const& $GetGuidFromSystemAddress(::RakNet::SystemAddress const) const;

    MCNAPI ::RakNet::SystemAddress $GetSystemAddressFromGuid(::RakNet::RakNetGUID const) const;

    MCNAPI void $SetTimeoutTime(uint, ::RakNet::SystemAddress const);

    MCNAPI uint $GetTimeoutTime(::RakNet::SystemAddress const);

    MCNAPI int $GetMTUSize(::RakNet::SystemAddress const) const;

    MCNAPI uint $GetNumberOfAdapters();

    MCNAPI ::RakNet::NetworkAdapter& $GetLocalAdapter(uint);

    MCNAPI uint $GetNumberOfAddresses();

    MCNAPI char const* $GetLocalIP(uint);

    MCNAPI bool $IsLocalIP(char const*);

    MCNAPI void $AllowConnectionResponseIPMigration(bool);

    MCNAPI bool $AdvertiseSystem(char const*, ushort, char const*, int, uint);

    MCNAPI void $SetSplitMessageProgressInterval(int);

    MCNAPI int $GetSplitMessageProgressInterval() const;

    MCNAPI void $SetUnreliableTimeout(uint);

    MCNAPI void $SendTTL(char const*, ushort, int, uint);

    MCNAPI void $AttachPlugin(::RakNet::PluginInterface2*);

    MCNAPI void $DetachPlugin(::RakNet::PluginInterface2*);

    MCNAPI void $PushBackPacket(::RakNet::Packet*, bool);

    MCNAPI void $ChangeSystemAddress(::RakNet::RakNetGUID, ::RakNet::SystemAddress const&);

    MCNAPI ::RakNet::Packet* $AllocatePacket(uint);

    MCNAPI ::RakNet::RakNetSocket2* $GetSocket(::RakNet::SystemAddress const);

    MCNAPI void $GetSockets(::DataStructures::List<RakNet::RakNetSocket2*>&);

    MCNAPI void $ReleaseSockets(::DataStructures::List<RakNet::RakNetSocket2*>&);

    MCNAPI void $WriteOutOfBandHeader(::RakNet::BitStream*);

    MCNAPI void $SetUserUpdateThread(void (*)(::RakNet::RakPeerInterface*, void*), void*);

    MCNAPI void $SetIncomingDatagramEventHandler(bool (*)(::RakNet::RNS2RecvStruct*));

    MCNAPI void $ApplyNetworkSimulator(float, ushort, ushort);

    MCNAPI void $SetPerConnectionOutgoingBandwidthLimit(uint);

    MCNAPI bool $IsNetworkSimulatorActive();

    MCNAPI bool $GetStatistics(uint const, ::RakNet::RakNetStatistics*);

    MCNAPI ::RakNet::RakNetStatistics* $GetStatistics(::RakNet::SystemAddress const, ::RakNet::RakNetStatistics*);

    MCNAPI void $GetStatisticsList(
        ::DataStructures::List<RakNet::SystemAddress>&,
        ::DataStructures::List<RakNet::RakNetGUID>&,
        ::DataStructures::List<RakNet::RakNetStatistics>&
    );

    MCNAPI uint $GetReceiveBufferSize();

    MCNAPI bool $RunUpdateCycle(::RakNet::BitStream&);

    MCNAPI bool $SendOutOfBand(char const*, ushort, char const*, uint, uint);

    MCNAPI void $DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct*, char const*, uint);

    MCNAPI ::RakNet::RNS2RecvStruct* $AllocRNS2RecvStruct(char const*, uint);

    MCNAPI void $OnRNS2Recv(::RakNet::RNS2RecvStruct*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RakNet
