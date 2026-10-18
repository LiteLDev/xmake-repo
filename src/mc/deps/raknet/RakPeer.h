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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct BanStruct;
#endif // @header-generator platform
    struct PingAndClockDifferential;
    struct RemoteSystemStruct;
#if defined(LL_PLAT_A) // @header-generator platform
    struct BanStruct;
    struct RequestedConnectionStruct;
#else // @header-generator platform
#endif // @header-generator platform
    struct BufferedCommandStruct;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct RequestedConnectionStruct;
#endif // @header-generator platform
    struct SocketQueryOutput;
    // clang-format on

    // RakPeer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum : int {
        RequestedConnectionListMutex = 0,
        OfflinePingResponseMutex     = 1,
        NumberOfRakpeerMutexes       = 2,
    };

    struct BanStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char*> IP;
        ::ll::TypedStorage<4, 4, uint>  timeout;
        // NOLINTEND
    };

#endif // @header-generator platform
    struct PingAndClockDifferential {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> pingTime;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>  clockDifferential;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64> clockDifferential;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct RemoteSystemStruct {
    public:
        // RemoteSystemStruct inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        enum ConnectMode : uint {
            NO_ACTION                   = 0,
            DISCONNECT_ASAP             = 1,
            DISCONNECT_ASAP_SILENTLY    = 2,
            DISCONNECT_ON_NO_ACK        = 3,
            REQUESTED_CONNECTION        = 4,
            HANDLING_CONNECTION_REQUEST = 5,
            UNVERIFIED_SENDER           = 6,
            CONNECTED                   = 7,
#else // @header-generator platform
        enum class ConnectMode : int {
            NoAction                  = 0,
            DisconnectAsap            = 1,
            DisconnectAsapSilently    = 2,
            DisconnectOnNoAck         = 3,
            RequestedConnection       = 4,
            HandlingConnectionRequest = 5,
            UnverifiedSender          = 6,
            Connected                 = 7,
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>                                              pingAndClockDifferentialWriteIndex;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64>                                             pingAndClockDifferentialWriteIndex;
#endif // @header-generator platform
        ::ll::TypedStorage<2, 2, ushort>                                             lowestPing;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>                                              nextPingTime;
        ::ll::TypedStorage<8, 8, ulong>                                              lastReliableSend;
        ::ll::TypedStorage<8, 8, ulong>                                              connectionTime;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64>                                             nextPingTime;
        ::ll::TypedStorage<8, 8, uint64>                                             lastReliableSend;
        ::ll::TypedStorage<8, 8, uint64>                                             connectionTime;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                              guid;
        ::ll::TypedStorage<4, 4, int>                                                MTUSize;
        ::ll::TypedStorage<8, 8, ::RakNet::RakNetSocket2*>                           rakNetSocket;
        ::ll::TypedStorage<2, 2, ushort>                                             remoteSystemIndex;
        ::ll::TypedStorage<4, 4, ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode> connectMode;
        ::ll::TypedStorage<1, 1, bool>                                               applicationHandshakeCompleted;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>                                              networkID;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64>                                             networkID;
#endif // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                                               blockingCommand;
        ::ll::TypedStorage<8, 8, char*>                                              data;
        ::ll::TypedStorage<1, 1, bool>                                               haveRakNetCloseSocket;
        ::ll::TypedStorage<4, 4, uint>                                               connectionSocketIndex;
        ::ll::TypedStorage<2, 2, ushort>                                             remotePortRakNetWasStartedOn_PS3;
        ::ll::TypedStorage<4, 4, uint>                                               extraSocketOptions;
        ::ll::TypedStorage<8, 8, ::RakNet::RakNetSocket2*>                           socket;
        ::ll::TypedStorage<2, 2, ushort>                                             port;
        ::ll::TypedStorage<4, 4, uint>                                               receipt;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<4, 4>                                                   command;
#else // @header-generator platform
        enum : int {
            Send                = 0,
            CloseConnection     = 1,
            GetSocket           = 2,
            ChangeSystemAddress = 3,
            DoNothing           = 4,
        } command;
        // NOLINTEND
    };

    struct RequestedConnectionStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
        ::ll::TypedStorage<8, 8, uint64>                    nextRequestTime;
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
        enum : int {
            Connect = 1,
        } actionToTake;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct SocketQueryOutput {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 16> sockets;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::RakNetSocket2*>> sockets;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool volatile>                                              endThreads;
    ::ll::TypedStorage<1, 1, bool volatile>                                              isMainLoopThreadActive;
    ::ll::TypedStorage<1, 1, bool>                                                       occasionalPing;
    ::ll::TypedStorage<4, 4, uint>                                                       maximumNumberOfPeers;
    ::ll::TypedStorage<4, 4, uint>                                                       maximumIncomingConnections;
    ::ll::TypedStorage<8, 288, ::RakNet::BitStream>                                      offlinePingResponse;
    ::ll::TypedStorage<1, 256, char[256]>                                                incomingPassword;
    ::ll::TypedStorage<1, 1, uchar>                                                      incomingPasswordLength;
    ::ll::TypedStorage<8, 8, ::RakNet::RakPeer::RemoteSystemStruct*>                     remoteSystemList;
    ::ll::TypedStorage<8, 8, ::RakNet::RakPeer::RemoteSystemStruct**>                    activeSystemList;
    ::ll::TypedStorage<4, 4, uint>                                                       activeSystemListSize;
    ::ll::TypedStorage<8, 8, ::RakNet::RemoteSystemIndex**>                              remoteSystemLookup;
    ::ll::TypedStorage<8, 32, ::DataStructures::MemoryPool<::RakNet::RemoteSystemIndex>> remoteSystemIndexPool;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RakNet::ShadowBanList>>                 shadowBanList;
    ::ll::TypedStorage<8, 80, ::RakNet::SimpleMutex[2]>                                  rakPeerMutexes;
    ::ll::TypedStorage<1, 1, bool>                                                       updateCycleIsRunning;
    ::ll::TypedStorage<4, 4, uint>                                                       bytesSentPerSecond;
    ::ll::TypedStorage<4, 4, uint>                                                       bytesReceivedPerSecond;
    ::ll::TypedStorage<4, 4, uint>                                                       validationInteger;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                                     incomingQueueMutex;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                                     banListMutex;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::RakPeer::BanStruct*>>     banList;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::PluginInterface2*>>       pluginListTS;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::PluginInterface2*>>       pluginListNTS;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::RakPeer::RequestedConnectionStruct*>>
                                                     requestedConnectionQueue;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex> requestedConnectionQueueMutex;
    ::ll::TypedStorage<8, 136, ::DataStructures::ThreadsafeAllocatingQueue<::RakNet::RakPeer::BufferedCommandStruct>>
                                                                                  bufferedCommands;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::RNS2RecvStruct*>> bufferedPacketsFreePool;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                              bufferedPacketsFreePoolMutex;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::RNS2RecvStruct*>> bufferedPacketsQueue;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                              bufferedPacketsQueueMutex;
    ::ll::TypedStorage<8, 136, ::DataStructures::ThreadsafeAllocatingQueue<::RakNet::RakPeer::SocketQueryOutput>>
                                                     socketQueryOutput;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex> securityExceptionMutex;
    ::ll::TypedStorage<4, 4, int>                    defaultMTUSize;
    ::ll::TypedStorage<1, 1, bool>                   trackFrequencyTable;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::std::shared_ptr<::RakNet::RakNetSocket2>>> socketList;
    ::ll::TypedStorage<8, 8, ::RakNet::BitStream*>                                                replyFromTargetBS;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                                           replyFromTargetPlayer;
    ::ll::TypedStorage<1, 1, bool>                                            replyFromTargetBroadcast;
    ::ll::TypedStorage<4, 4, uint>                                            defaultTimeoutTime;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                           myGuid;
    ::ll::TypedStorage<4, 4, uint>                                            maxOutgoingBPS;
    ::ll::TypedStorage<1, 1, bool>                                            allowConnectionResponseIPMigration;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                       firstExternalID;
    ::ll::TypedStorage<4, 4, int>                                             splitMessageProgressInterval;
    ::ll::TypedStorage<4, 4, uint>                                            unreliableTimeout;
    ::ll::TypedStorage<8, 8, bool (*)(::RakNet::RNS2RecvStruct*)>             incomingDatagramEventHandler;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::RakString>>    securityExceptionList;
    ::ll::TypedStorage<8, 2856, ::RakNet::SystemAddress[21]>                  ipList;
    ::ll::TypedStorage<8, 31592, ::RakNet::NetworkAdapter[11]>                adapterList;
    ::ll::TypedStorage<1, 1, bool>                                            allowInternalRouting;
    ::ll::TypedStorage<1, 1, bool>                                            allowUnconnectedPings;
    ::ll::TypedStorage<8, 8, void (*)(::RakNet::RakPeerInterface*, void*)>    userUpdateThreadPtr;
    ::ll::TypedStorage<8, 8, void*>                                           userUpdateThreadData;
    ::ll::TypedStorage<8, 8, ::RakNet::SignaledEvent>                         quitAndDataEvents;
    ::ll::TypedStorage<1, 1, bool>                                            limitConnectionFrequencyFromTheSameIP;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                          packetAllocationPoolMutex;
    ::ll::TypedStorage<8, 32, ::DataStructures::MemoryPool<::RakNet::Packet>> packetAllocationPool;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                          packetReturnMutex;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::Packet*>>     packetReturnQueue;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                          sendReceiptSerialMutex;
    ::ll::TypedStorage<4, 4, uint>                                            sendReceiptSerial;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~RakPeer();
#else // @header-generator platform
    virtual ~RakPeer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void InitializeConfiguration(std::unique_ptr<RakNet::ShadowBanList>);
#else // @header-generator platform
    virtual void InitializeConfiguration(::std::unique_ptr<::RakNet::ShadowBanList> banList) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::StartupResult Startup(uint, ::RakNet::SocketDescriptor*, uint, int);
#else // @header-generator platform
    virtual ::RakNet::StartupResult Startup(
        uint                        maxConnections,
        ::RakNet::SocketDescriptor* socketDescriptors,
        uint                        socketDescriptorCount,
        int                         threadPriority
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool InitializeSecurity(char const*, char const*, bool);
#else // @header-generator platform
    virtual bool
    InitializeSecurity(char const* public_key, char const* private_key, bool bRequireClientKey) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void DisableSecurity();
#else // @header-generator platform
    virtual void DisableSecurity() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void AddToSecurityExceptionList(char const*);
#else // @header-generator platform
    virtual void AddToSecurityExceptionList(char const* ip) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void RemoveFromSecurityExceptionList(char const*);
#else // @header-generator platform
    virtual void RemoveFromSecurityExceptionList(char const* ip) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool IsInSecurityExceptionList(char const*);
#else // @header-generator platform
    virtual bool IsInSecurityExceptionList(char const* ip) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetMaximumIncomingConnections(ushort);
#else // @header-generator platform
    virtual void SetMaximumIncomingConnections(ushort numberAllowed) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint GetMaximumIncomingConnections() const;
#else // @header-generator platform
    virtual uint GetMaximumIncomingConnections() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ushort NumberOfConnections() const;
#else // @header-generator platform
    virtual ushort NumberOfConnections() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetIncomingPassword(char const*, int);
#else // @header-generator platform
    virtual void SetIncomingPassword(char const* passwordData, int passwordDataLength) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void GetIncomingPassword(char*, int*);
#else // @header-generator platform
    virtual void GetIncomingPassword(char* passwordData, int* passwordDataLength) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::ConnectionAttemptResult Connect(char const*, ushort, char const*, int, ::RakNet::PublicKey*, uint, uint, uint, uint);
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
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::ConnectionAttemptResult ConnectWithSocket(char const*, ushort, char const*, int, ::RakNet::RakNetSocket2*, ::RakNet::PublicKey*, uint, uint, uint);
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
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void Shutdown(uint, uchar, ::PacketPriority);
#else // @header-generator platform
    virtual void Shutdown(
        uint             blockDuration,
        uchar            orderingChannel,
        ::PacketPriority disconnectionNotificationPriority
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID);
#else // @header-generator platform
    virtual bool SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID systemIdentifier) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool IsActive() const;
#else // @header-generator platform
    virtual bool IsActive() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool GetConnectionList(::RakNet::SystemAddress*, ushort*) const;
#else // @header-generator platform
    virtual bool GetConnectionList(::RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint GetNextSendReceipt();
#else // @header-generator platform
    virtual uint GetNextSendReceipt() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint IncrementNextSendReceipt();
#else // @header-generator platform
    virtual uint IncrementNextSendReceipt() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint Send(char const*, int const, ::PacketPriority, ::PacketReliability, char, ::RakNet::AddressOrGUID const, bool, uint);
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
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SendLoopback(char const*, int const);
#else // @header-generator platform
    virtual uint Send(
        ::RakNet::BitStream const*    bitStream,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint Send(::RakNet::BitStream const*, ::PacketPriority, ::PacketReliability, char, ::RakNet::AddressOrGUID const, bool, uint);
#else // @header-generator platform
    virtual void SendLoopback(char const* data, int const length) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint SendList(char const**, int const*, int const, ::PacketPriority, ::PacketReliability, char, ::RakNet::AddressOrGUID const, bool, uint);
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
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::Packet* Receive();
#else // @header-generator platform
    virtual ::RakNet::Packet* Receive() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void DeallocatePacket(::RakNet::Packet*);
#else // @header-generator platform
    virtual void DeallocatePacket(::RakNet::Packet* packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint GetMaximumNumberOfPeers() const;
#else // @header-generator platform
    virtual uint GetMaximumNumberOfPeers() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void CloseConnection(::RakNet::AddressOrGUID const, bool, uchar, ::PacketPriority);
#else // @header-generator platform
    virtual void CloseConnection(
        ::RakNet::AddressOrGUID const target,
        bool                          sendDisconnectionNotification,
        uchar                         orderingChannel,
        ::PacketPriority              disconnectionNotificationPriority
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::ConnectionState GetConnectionState(::RakNet::AddressOrGUID const);
#else // @header-generator platform
    virtual ::RakNet::ConnectionState GetConnectionState(::RakNet::AddressOrGUID const systemIdentifier) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int GetIndexFromSystemAddress(::RakNet::SystemAddress const) const;
#else // @header-generator platform
    virtual int GetIndexFromSystemAddress(::RakNet::SystemAddress const systemAddress) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::RakNetGUID GetGUIDFromIndex(uint);
#else // @header-generator platform
    virtual ::RakNet::RakNetGUID GetGUIDFromIndex(uint index) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void GetSystemList(::DataStructures::List<RakNet::SystemAddress>&, ::DataStructures::List<RakNet::RakNetGUID>&) const;
#else // @header-generator platform
    virtual void GetSystemList(
        ::DataStructures::List<::RakNet::SystemAddress>& addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&    guids
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void AddToBanList(char const*, uint);
#else // @header-generator platform
    virtual void AddToBanList(char const* IP, uint milliseconds) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void RemoveFromBanList(char const*);
#else // @header-generator platform
    virtual void RemoveFromBanList(char const* IP) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void ClearBanList();
#else // @header-generator platform
    virtual void ClearBanList() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool IsBanned(char const*);
#else // @header-generator platform
    virtual bool IsBanned(char const* IP) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool Ping(char const*, ushort, bool, uint);
#else // @header-generator platform
    virtual void Ping(::RakNet::SystemAddress const target) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void Ping(::RakNet::SystemAddress const);
#else // @header-generator platform
    virtual bool Ping(
        char const* host,
        ushort      remotePort,
        bool        onlyReplyOnAcceptingConnections,
        uint        connectionSocketIndex
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int GetAveragePing(::RakNet::AddressOrGUID const);
#else // @header-generator platform
    virtual int GetAveragePing(::RakNet::AddressOrGUID const systemIdentifier) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int GetLastPing(::RakNet::AddressOrGUID const) const;
#else // @header-generator platform
    virtual int GetLastPing(::RakNet::AddressOrGUID const systemIdentifier) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int GetLowestPing(::RakNet::AddressOrGUID const) const;
#else // @header-generator platform
    virtual int GetLowestPing(::RakNet::AddressOrGUID const systemIdentifier) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetOccasionalPing(bool);
#else // @header-generator platform
    virtual void SetOccasionalPing(bool doPing) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong GetClockDifferential(::RakNet::AddressOrGUID const);
#else // @header-generator platform
    virtual uint64 GetClockDifferential(::RakNet::AddressOrGUID const systemIdentifier) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetAllowUnconnectedPings(bool);
#else // @header-generator platform
    virtual void SetOfflinePingResponse(char const* data, uint const length) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool GetAllowUnconnectedPings() const;
#else // @header-generator platform
    virtual ::RakNet::SystemAddress GetInternalID(::RakNet::SystemAddress const systemAddress, int const index) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetOfflinePingResponse(char const*, uint const);
#else // @header-generator platform
    virtual ::RakNet::SystemAddress GetExternalID(::RakNet::SystemAddress const target) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress GetInternalID(::RakNet::SystemAddress const, int const) const;
#else // @header-generator platform
    virtual ::RakNet::RakNetGUID const GetMyGUID() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress GetExternalID(::RakNet::SystemAddress const) const;
#else // @header-generator platform
    virtual void resetMyGUID() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::RakNetGUID const GetMyGUID() const;
#else // @header-generator platform
    virtual ::RakNet::SystemAddress GetMyBoundAddress(int const socketIndex) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resetMyGUID();
#else // @header-generator platform
    virtual void SetAllowUnconnectedPings(bool unconnectedPings) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress GetMyBoundAddress(int const);
#else // @header-generator platform
    virtual bool GetAllowUnconnectedPings() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::RakNetGUID const& GetGuidFromSystemAddress(::RakNet::SystemAddress const) const;
#else // @header-generator platform
    virtual ::RakNet::RakNetGUID const& GetGuidFromSystemAddress(::RakNet::SystemAddress const input) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress GetSystemAddressFromGuid(::RakNet::RakNetGUID const) const;
#else // @header-generator platform
    virtual ::RakNet::SystemAddress GetSystemAddressFromGuid(::RakNet::RakNetGUID const input) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetTimeoutTime(uint, ::RakNet::SystemAddress const);
#else // @header-generator platform
    virtual void SetTimeoutTime(uint timeMS, ::RakNet::SystemAddress const target) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint GetTimeoutTime(::RakNet::SystemAddress const);
#else // @header-generator platform
    virtual uint GetTimeoutTime(::RakNet::SystemAddress const target) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int GetMTUSize(::RakNet::SystemAddress const) const;
#else // @header-generator platform
    virtual int GetMTUSize(::RakNet::SystemAddress const target) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint GetNumberOfAdapters();
#else // @header-generator platform
    virtual uint GetNumberOfAdapters() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::NetworkAdapter& GetLocalAdapter(uint);
#else // @header-generator platform
    virtual ::RakNet::NetworkAdapter& GetLocalAdapter(uint index) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint GetNumberOfAddresses();
#else // @header-generator platform
    virtual uint GetNumberOfAddresses() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual char const* GetLocalIP(uint);
#else // @header-generator platform
    virtual char const* GetLocalIP(uint index) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool IsLocalIP(char const*);
#else // @header-generator platform
    virtual bool IsLocalIP(char const* ip) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void AllowConnectionResponseIPMigration(bool);
#else // @header-generator platform
    virtual void AllowConnectionResponseIPMigration(bool allow) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool AdvertiseSystem(char const*, ushort, char const*, int, uint);
#else // @header-generator platform
    virtual bool AdvertiseSystem(
        char const* host,
        ushort      remotePort,
        char const* data,
        int         dataLength,
        uint        connectionSocketIndex
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetSplitMessageProgressInterval(int);
#else // @header-generator platform
    virtual void SetSplitMessageProgressInterval(int interval) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int GetSplitMessageProgressInterval() const;
#else // @header-generator platform
    virtual int GetSplitMessageProgressInterval() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetUnreliableTimeout(uint);
#else // @header-generator platform
    virtual void SetUnreliableTimeout(uint timeoutMS) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SendTTL(char const*, ushort, int, uint);
#else // @header-generator platform
    virtual void SendTTL(char const* host, ushort remotePort, int ttl, uint connectionSocketIndex) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void AttachPlugin(::RakNet::PluginInterface2*);
#else // @header-generator platform
    virtual void AttachPlugin(::RakNet::PluginInterface2* plugin) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void DetachPlugin(::RakNet::PluginInterface2*);
#else // @header-generator platform
    virtual void DetachPlugin(::RakNet::PluginInterface2* plugin) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void PushBackPacket(::RakNet::Packet*, bool);
#else // @header-generator platform
    virtual void PushBackPacket(::RakNet::Packet* packet, bool pushAtHead) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void ChangeSystemAddress(::RakNet::RakNetGUID, ::RakNet::SystemAddress const&);
#else // @header-generator platform
    virtual void
    ChangeSystemAddress(::RakNet::RakNetGUID guid, ::RakNet::SystemAddress const& systemAddress) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::Packet* AllocatePacket(uint);
#else // @header-generator platform
    virtual ::RakNet::Packet* AllocatePacket(uint dataSize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::RakNetSocket2* GetSocket(::RakNet::SystemAddress const);
#else // @header-generator platform
    virtual ::RakNet::RakNetSocket2* GetSocket(::RakNet::SystemAddress const target) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void GetSockets(::DataStructures::List<RakNet::RakNetSocket2*>&);
#else // @header-generator platform
    virtual void GetSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void ReleaseSockets(::DataStructures::List<RakNet::RakNetSocket2*>&);
#else // @header-generator platform
    virtual void ReleaseSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void WriteOutOfBandHeader(::RakNet::BitStream*);
#else // @header-generator platform
    virtual void WriteOutOfBandHeader(::RakNet::BitStream* bitStream) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetUserUpdateThread(void(*)(::RakNet::RakPeerInterface*, void*), void*);
#else // @header-generator platform
    virtual void SetUserUpdateThread(
        void (*_userUpdateThreadPtr)(::RakNet::RakPeerInterface*, void*),
        void* _userUpdateThreadData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetIncomingDatagramEventHandler(bool(*)(::RakNet::RNS2RecvStruct*));
#else // @header-generator platform
    virtual void
    SetIncomingDatagramEventHandler(bool (*_incomingDatagramEventHandler)(::RakNet::RNS2RecvStruct*)) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void ApplyNetworkSimulator(float, ushort, ushort);
#else // @header-generator platform
    virtual void ApplyNetworkSimulator(float packetloss, ushort minExtraPing, ushort extraPingVariance) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SetPerConnectionOutgoingBandwidthLimit(uint);
#else // @header-generator platform
    virtual void SetPerConnectionOutgoingBandwidthLimit(uint maxBitsPerSecond) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool IsNetworkSimulatorActive();
#else // @header-generator platform
    virtual bool IsNetworkSimulatorActive() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool GetStatistics(uint const, ::RakNet::RakNetStatistics*);
#else // @header-generator platform
    virtual ::RakNet::RakNetStatistics*
    GetStatistics(::RakNet::SystemAddress const systemAddress, ::RakNet::RakNetStatistics* rns) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::RakNetStatistics* GetStatistics(::RakNet::SystemAddress const, ::RakNet::RakNetStatistics*);
#else // @header-generator platform
    virtual bool GetStatistics(uint const index, ::RakNet::RakNetStatistics* rns) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void GetStatisticsList(::DataStructures::List<RakNet::SystemAddress>&, ::DataStructures::List<RakNet::RakNetGUID>&, ::DataStructures::List<RakNet::RakNetStatistics>&);
#else // @header-generator platform
    virtual void GetStatisticsList(
        ::DataStructures::List<::RakNet::SystemAddress>&    addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&       guids,
        ::DataStructures::List<::RakNet::RakNetStatistics>& statistics
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint GetReceiveBufferSize();
#else // @header-generator platform
    virtual uint GetReceiveBufferSize() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool RunUpdateCycle(::RakNet::BitStream&);
#else // @header-generator platform
    virtual bool RunUpdateCycle(::RakNet::BitStream& updateBitStream) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool SendOutOfBand(char const*, ushort, char const*, uint, uint);
#else // @header-generator platform
    virtual bool SendOutOfBand(
        char const* host,
        ushort      remotePort,
        char const* data,
        uint        dataLength,
        uint        connectionSocketIndex
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct*, char const*, uint);
#else // @header-generator platform
    virtual void DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct* s, char const* file, uint line) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const*, uint);
#else // @header-generator platform
    virtual ::RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const* file, uint line) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnRNS2Recv(::RakNet::RNS2RecvStruct*);
    // clang-format on
#else // @header-generator platform
    virtual void OnRNS2Recv(::RakNet::RNS2RecvStruct* recvStruct) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void AddPacketToProducer(::RakNet::Packet*);
#else // @header-generator platform
    MCAPI void AddPacketToProducer(::RakNet::Packet* p);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RakNet::Packet* AllocPacket(uint, char const*, uint);
#else // @header-generator platform
    MCAPI ::RakNet::Packet* AllocPacket(uint dataSize, char const* file, uint line);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool AllowIncomingConnections() const;
#else // @header-generator platform
    MCAPI bool AllowIncomingConnections() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RakNet::RakPeer::RemoteSystemStruct* AssignSystemAddressToRemoteSystemList(
        ::RakNet::SystemAddress const,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode,
        ::RakNet::RakNetSocket2*,
        bool*,
        ::RakNet::SystemAddress,
        int,
        ::RakNet::RakNetGUID,
        bool
#else // @header-generator platform
    MCAPI ::RakNet::RakPeer::RemoteSystemStruct* AssignSystemAddressToRemoteSystemList(
        ::RakNet::SystemAddress const                      systemAddress,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode connectionMode,
        ::RakNet::RakNetSocket2*                           incomingRakNetSocket,
        bool*                                              thisIPConnectedRecently,
        ::RakNet::SystemAddress                            bindingAddress,
        int                                                incomingMTU,
        ::RakNet::RakNetGUID                               guid,
        bool                                               useSecurity
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void CallPluginCallbacks(::DataStructures::List<RakNet::PluginInterface2*>&, ::RakNet::Packet*);
#else // @header-generator platform
    MCAPI void ClearBufferedCommands();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void ClearBufferedCommands();
#else // @header-generator platform
    MCAPI void ClearBufferedPackets();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void CloseConnectionInternal(
        ::RakNet::AddressOrGUID const& systemIdentifier,
        bool                           sendDisconnectionNotification,
        bool                           performImmediate,
        uchar                          orderingChannel,
        ::PacketPriority               disconnectionNotificationPriority
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void PingInternal(::RakNet::SystemAddress const, bool, ::PacketReliability);
#else // @header-generator platform
    MCAPI void DereferenceRemoteSystem(::RakNet::SystemAddress const& sa);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void PushBufferedPacket(::RakNet::RNS2RecvStruct*);
#else // @header-generator platform
    MCAPI void FillIPList();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RakPeer();
#else // @header-generator platform
    MCAPI int
    GetIndexFromSystemAddress(::RakNet::SystemAddress const systemAddress, bool calledFromNetworkThread) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void ReferenceRemoteSystem(::RakNet::SystemAddress const&, uint);
#else // @header-generator platform
    MCAPI ::RakNet::RakPeer::RemoteSystemStruct* GetRemoteSystemFromSystemAddress(
        ::RakNet::SystemAddress const systemAddress,
        bool                          calledFromNetworkThread,
        bool                          onlyActive
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI uint GetRemoteSystemIndex(::RakNet::SystemAddress const& sa) const;

    MCAPI bool IsLoopbackAddress(::RakNet::AddressOrGUID const& systemIdentifier, bool matchPort) const;

    MCAPI void NotifyAndFlagForShutdown(
        ::RakNet::SystemAddress const systemAddress,
        bool                          performImmediate,
        uchar                         orderingChannel,
        ::PacketPriority              disconnectionNotificationPriority
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void OnConnectionRequest(::RakNet::RakPeer::RemoteSystemStruct* remoteSystem, uint64 incomingTimestamp);

    MCAPI void ParseConnectionRequestPacket(
        ::RakNet::RakPeer::RemoteSystemStruct* remoteSystem,
        ::RakNet::SystemAddress const&         systemAddress,
        char const*                            data,
        int                                    byteSize
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCAPI void
    PingInternal(::RakNet::SystemAddress const target, bool performImmediate, ::PacketReliability reliability);

    MCAPI RakPeer();

    MCAPI void ReferenceRemoteSystem(::RakNet::SystemAddress const& sa, uint remoteSystemListIndex);

    MCAPI void SendBuffered(
        char const*                                        data,
        uint                                               numberOfBitsToSend,
        ::PacketPriority                                   priority,
        ::PacketReliability                                reliability,
        char                                               orderingChannel,
        ::RakNet::AddressOrGUID const                      systemIdentifier,
        bool                                               broadcast,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode connectionMode,
        uint                                               receipt
    );

    MCAPI bool SendImmediate(
        char*                         data,
        uint                          numberOfBitsToSend,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        bool                          useCallerDataAllocation,
        uint64                        currentTime,
        uint                          receipt
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    CallPluginCallbacks(::DataStructures::List<::RakNet::PluginInterface2*>& pluginList, ::RakNet::Packet* packet);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $InitializeConfiguration(std::unique_ptr<RakNet::ShadowBanList>);
#else // @header-generator platform
    MCAPI void $InitializeConfiguration(::std::unique_ptr<::RakNet::ShadowBanList> banList);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::RakNet::StartupResult $Startup(
        uint                        maxConnections,
        ::RakNet::SocketDescriptor* socketDescriptors,
        uint                        socketDescriptorCount,
        int                         threadPriority
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $Shutdown(uint, uchar, ::PacketPriority);
#else // @header-generator platform
    MCFOLD bool $InitializeSecurity(char const* public_key, char const* private_key, bool bRequireClientKey);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID);
#else // @header-generator platform
    MCFOLD void $DisableSecurity();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $IsActive() const;
#else // @header-generator platform
    MCAPI void $AddToSecurityExceptionList(char const* ip);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $GetConnectionList(::RakNet::SystemAddress*, ushort*) const;
#else // @header-generator platform
    MCAPI void $RemoveFromSecurityExceptionList(char const* ip);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $GetNextSendReceipt();
#else // @header-generator platform
    MCAPI bool $IsInSecurityExceptionList(char const* ip);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $IncrementNextSendReceipt();
#else // @header-generator platform
    MCAPI void $SetMaximumIncomingConnections(ushort numberAllowed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $Send(
        char const*,
        int const,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        uint
#else // @header-generator platform
    MCFOLD uint $GetMaximumIncomingConnections() const;

    MCAPI ushort $NumberOfConnections() const;

    MCAPI void $SetIncomingPassword(char const* passwordData, int passwordDataLength);

    MCAPI void $GetIncomingPassword(char* passwordData, int* passwordDataLength);

    MCAPI ::RakNet::ConnectionAttemptResult $Connect(
        char const*          host,
        ushort               remotePort,
        char const*          passwordData,
        int                  passwordDataLength,
        ::RakNet::PublicKey* publicKey,
        uint                 connectionSocketIndex,
        uint                 sendConnectionAttemptCount,
        uint                 timeBetweenSendConnectionAttemptsMS,
        uint                 timeoutTime
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $SendLoopback(char const*, int const);

    MCNAPI uint $Send(
        ::RakNet::BitStream const*,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        uint
#else // @header-generator platform
    MCAPI ::RakNet::ConnectionAttemptResult $ConnectWithSocket(
        char const*              host,
        ushort                   remotePort,
        char const*              passwordData,
        int                      passwordDataLength,
        ::RakNet::RakNetSocket2* socket,
        ::RakNet::PublicKey*     publicKey,
        uint                     sendConnectionAttemptCount,
        uint                     timeBetweenSendConnectionAttemptsMS,
        uint                     timeoutTime
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $Shutdown(uint blockDuration, uchar orderingChannel, ::PacketPriority disconnectionNotificationPriority);

    MCAPI bool $SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID systemIdentifier);

    MCAPI bool $IsActive() const;

    MCAPI bool $GetConnectionList(::RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const;

    MCAPI uint $GetNextSendReceipt();

    MCAPI uint $IncrementNextSendReceipt();

    MCAPI uint $Send(
        char const*                   data,
        int const                     length,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI uint $Send(
        ::RakNet::BitStream const*    bitStream,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $GetReceiveBufferSize();
#else // @header-generator platform
    MCAPI void $SendLoopback(char const* data, int const length);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $RunUpdateCycle(::RakNet::BitStream&);
#else // @header-generator platform
    MCAPI uint $SendList(
        char const**                  data,
        int const*                    lengths,
        int const                     numParameters,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $SendOutOfBand(char const*, ushort, char const*, uint, uint);
#else // @header-generator platform
    MCAPI ::RakNet::Packet* $Receive();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct*, char const*, uint);
#else // @header-generator platform
    MCAPI void $DeallocatePacket(::RakNet::Packet* packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RakNet::RNS2RecvStruct* $AllocRNS2RecvStruct(char const*, uint);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI uint $GetMaximumNumberOfPeers() const;
#else // LL_PLAT_C
    MCFOLD uint $GetMaximumNumberOfPeers() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $OnRNS2Recv(::RakNet::RNS2RecvStruct*);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $CloseConnection(
        ::RakNet::AddressOrGUID const target,
        bool                          sendDisconnectionNotification,
        uchar                         orderingChannel,
        ::PacketPriority              disconnectionNotificationPriority
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI ::RakNet::ConnectionState $GetConnectionState(::RakNet::AddressOrGUID const systemIdentifier);

    MCAPI int $GetIndexFromSystemAddress(::RakNet::SystemAddress const systemAddress) const;

    MCAPI ::RakNet::RakNetGUID $GetGUIDFromIndex(uint index);

    MCAPI void $GetSystemList(
        ::DataStructures::List<::RakNet::SystemAddress>& addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&    guids
    ) const;

    MCAPI void $AddToBanList(char const* IP, uint milliseconds);

    MCAPI void $RemoveFromBanList(char const* IP);

    MCAPI void $ClearBanList();

    MCAPI bool $IsBanned(char const* IP);

    MCAPI void $Ping(::RakNet::SystemAddress const target);

    MCAPI bool
    $Ping(char const* host, ushort remotePort, bool onlyReplyOnAcceptingConnections, uint connectionSocketIndex);

    MCAPI int $GetAveragePing(::RakNet::AddressOrGUID const systemIdentifier);

    MCAPI int $GetLastPing(::RakNet::AddressOrGUID const systemIdentifier) const;

    MCAPI int $GetLowestPing(::RakNet::AddressOrGUID const systemIdentifier) const;

    MCAPI void $SetOccasionalPing(bool doPing);

    MCAPI uint64 $GetClockDifferential(::RakNet::AddressOrGUID const systemIdentifier);

    MCAPI void $SetOfflinePingResponse(char const* data, uint const length);

    MCAPI ::RakNet::SystemAddress $GetInternalID(::RakNet::SystemAddress const systemAddress, int const index) const;

    MCAPI ::RakNet::SystemAddress $GetExternalID(::RakNet::SystemAddress const target) const;

    MCAPI ::RakNet::RakNetGUID const $GetMyGUID() const;

    MCAPI void $resetMyGUID();

    MCAPI ::RakNet::SystemAddress $GetMyBoundAddress(int const socketIndex);

    MCAPI void $SetAllowUnconnectedPings(bool unconnectedPings);

    MCAPI bool $GetAllowUnconnectedPings() const;

    MCAPI ::RakNet::RakNetGUID const& $GetGuidFromSystemAddress(::RakNet::SystemAddress const input) const;

    MCAPI ::RakNet::SystemAddress $GetSystemAddressFromGuid(::RakNet::RakNetGUID const input) const;

    MCAPI void $SetTimeoutTime(uint timeMS, ::RakNet::SystemAddress const target);

    MCAPI uint $GetTimeoutTime(::RakNet::SystemAddress const target);

    MCAPI int $GetMTUSize(::RakNet::SystemAddress const target) const;

    MCAPI uint $GetNumberOfAdapters();

    MCAPI ::RakNet::NetworkAdapter& $GetLocalAdapter(uint index);

    MCAPI uint $GetNumberOfAddresses();

    MCAPI char const* $GetLocalIP(uint index);

    MCAPI bool $IsLocalIP(char const* ip);

    MCAPI void $AllowConnectionResponseIPMigration(bool allow);

    MCAPI bool
    $AdvertiseSystem(char const* host, ushort remotePort, char const* data, int dataLength, uint connectionSocketIndex);

    MCAPI void $SetSplitMessageProgressInterval(int interval);

    MCAPI int $GetSplitMessageProgressInterval() const;

    MCAPI void $SetUnreliableTimeout(uint timeoutMS);

    MCAPI void $SendTTL(char const* host, ushort remotePort, int ttl, uint connectionSocketIndex);

    MCAPI void $AttachPlugin(::RakNet::PluginInterface2* plugin);

    MCAPI void $DetachPlugin(::RakNet::PluginInterface2* plugin);

    MCAPI void $PushBackPacket(::RakNet::Packet* packet, bool pushAtHead);

    MCAPI void $ChangeSystemAddress(::RakNet::RakNetGUID guid, ::RakNet::SystemAddress const& systemAddress);

    MCAPI ::RakNet::Packet* $AllocatePacket(uint dataSize);

    MCAPI ::RakNet::RakNetSocket2* $GetSocket(::RakNet::SystemAddress const target);

    MCAPI void $GetSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets);

    MCAPI void $ReleaseSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets);

    MCAPI void $WriteOutOfBandHeader(::RakNet::BitStream* bitStream);

    MCAPI void
    $SetUserUpdateThread(void (*_userUpdateThreadPtr)(::RakNet::RakPeerInterface*, void*), void* _userUpdateThreadData);

    MCAPI void $SetIncomingDatagramEventHandler(bool (*_incomingDatagramEventHandler)(::RakNet::RNS2RecvStruct*));

    MCFOLD void $ApplyNetworkSimulator(float packetloss, ushort minExtraPing, ushort extraPingVariance);

    MCAPI void $SetPerConnectionOutgoingBandwidthLimit(uint maxBitsPerSecond);

    MCFOLD bool $IsNetworkSimulatorActive();

    MCAPI ::RakNet::RakNetStatistics*
    $GetStatistics(::RakNet::SystemAddress const systemAddress, ::RakNet::RakNetStatistics* rns);

    MCAPI bool $GetStatistics(uint const index, ::RakNet::RakNetStatistics* rns);

    MCAPI void $GetStatisticsList(
        ::DataStructures::List<::RakNet::SystemAddress>&    addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&       guids,
        ::DataStructures::List<::RakNet::RakNetStatistics>& statistics
    );

    MCAPI uint $GetReceiveBufferSize();

    MCAPI bool $RunUpdateCycle(::RakNet::BitStream& updateBitStream);

    MCAPI bool
    $SendOutOfBand(char const* host, ushort remotePort, char const* data, uint dataLength, uint connectionSocketIndex);

    MCAPI void $DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct* s, char const* file, uint line);

    MCAPI ::RakNet::RNS2RecvStruct* $AllocRNS2RecvStruct(char const* file, uint line);

    MCAPI void $OnRNS2Recv(::RakNet::RNS2RecvStruct* recvStruct);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
