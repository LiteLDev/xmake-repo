#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/raknet/BPSTracker.h"
#include "mc/deps/raknet/CCRakNetSlidingWindow.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/PacketReliability.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/raknet/RakNetStatistics.h"
#include "mc/deps/raknet/data_structures/Heap.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/raknet/data_structures/List.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/raknet/data_structures/MemoryPool.h"
#include "mc/deps/raknet/data_structures/OrderedList.h"
#include "mc/deps/raknet/data_structures/Queue.h"
#include "mc/deps/raknet/data_structures/RangeList.h"
#include "mc/deps/raknet/uint24_t.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class PluginInterface2; }
namespace RakNet { class RakNetRandom; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { struct InternalPacket; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { struct InternalPacketRefCountedData; }
namespace RakNet { struct SplitPacketChannel; }
#else // @header-generator platform
namespace RakNet { struct RakNetStatistics; }
#endif // @header-generator platform
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ReliabilityLayer {
public:
    // ReliabilityLayer inner types declare
    // clang-format off
    struct MessageNumberNode;
#if defined(LL_PLAT_A) // @header-generator platform
    struct UnreliableWithAckReceiptNode;
#else // @header-generator platform
#endif // @header-generator platform
    struct DatagramHistoryNode;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct UnreliableWithAckReceiptNode;
#endif // @header-generator platform
    // clang-format on

    // ReliabilityLayer inner types define
    struct MessageNumberNode {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>                             messageNumber;
        ::ll::TypedStorage<8, 8, ::RakNet::ReliabilityLayer::MessageNumberNode*> next;
        // NOLINTEND
    };

    struct UnreliableWithAckReceiptNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::RakNet::uint24_t> datagramNumber;
        ::ll::TypedStorage<4, 4, uint>               sendReceiptSerial;
        ::ll::TypedStorage<8, 8, ulong>              nextActionTime;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk3b91de;
        ::ll::UntypedStorage<8, 8> mUnk470a41;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
        UnreliableWithAckReceiptNode(UnreliableWithAckReceiptNode const&);
#else // @header-generator platform
        MessageNumberNode& operator=(MessageNumberNode const&);
        MessageNumberNode(MessageNumberNode const&);
        MessageNumberNode();
#endif // @header-generator platform
    };

    struct DatagramHistoryNode {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::RakNet::ReliabilityLayer::MessageNumberNode*> head;
        ::ll::TypedStorage<8, 8, ulong>                                          timeSent;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnkb2aca8;
        ::ll::UntypedStorage<8, 8> mUnk187106;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        DatagramHistoryNode& operator=(DatagramHistoryNode const&);
        DatagramHistoryNode(DatagramHistoryNode const&);
        DatagramHistoryNode();
    };

    struct UnreliableWithAckReceiptNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkced6ba;
        ::ll::UntypedStorage<4, 4> mUnkc09fef;
        ::ll::UntypedStorage<8, 8> mUnk5e6576;
        // NOLINTEND

    public:
        // prevent constructor by default
        UnreliableWithAckReceiptNode& operator=(UnreliableWithAckReceiptNode const&);
        UnreliableWithAckReceiptNode(UnreliableWithAckReceiptNode const&);
        UnreliableWithAckReceiptNode();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                  outputQueue;
    ::ll::TypedStorage<4, 4, int>                                splitMessageProgressInterval;
    ::ll::TypedStorage<8, 8, ulong>                              unreliableTimeout;
    ::ll::UntypedStorage<8, 24>                                  datagramHistory;
    ::ll::UntypedStorage<8, 32>                                  datagramHistoryMessagePool;
    ::ll::UntypedStorage<8, 16>                                  unreliableWithAckReceiptHistory;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>                 datagramHistoryPopCount;
    ::ll::UntypedStorage<8, 32>                                  internalPacketPool;
    ::ll::TypedStorage<8, 4096, ::RakNet::InternalPacket* [512]> resendBuffer;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>          resendLinkedListHead;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>          unreliableLinkedListHead;
    ::ll::TypedStorage<4, 4, uint>                               timeLastDatagramArrived;
    ::ll::UntypedStorage<8, 24>                                  outgoingPacketBuffer;
    ::ll::TypedStorage<8, 32, ulong[4]>                          outgoingPacketBufferNextWeights;
    ::ll::UntypedStorage<8, 16>                                  splitPacketChannelList;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>                 sendReliableMessageNumberIndex;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>                 internalOrderIndex;
    ::ll::TypedStorage<1, 1, bool>                               deadConnection;
    ::ll::TypedStorage<1, 1, bool>                               cheater;
    ::ll::TypedStorage<2, 2, ushort>                             splitPacketId;
    ::ll::TypedStorage<4, 4, uint>                               timeoutTime;
    ::ll::TypedStorage<8, 224, ::RakNet::RakNetStatistics>       statistics;
    ::ll::TypedStorage<4, 128, ::RakNet::uint24_t[32]>           orderedWriteIndex;
    ::ll::TypedStorage<4, 128, ::RakNet::uint24_t[32]>           sequencedWriteIndex;
    ::ll::TypedStorage<4, 128, ::RakNet::uint24_t[32]>           orderedReadIndex;
    ::ll::TypedStorage<4, 128, ::RakNet::uint24_t[32]>           highestSequencedReadIndex;
    ::ll::UntypedStorage<8, 768>                                 orderingHeaps;
    ::ll::TypedStorage<4, 128, ::RakNet::uint24_t[32]>           heapIndexOffsets;
    ::ll::UntypedStorage<8, 24>                                  hasReceivedPacketQueue;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>                 receivedPacketsBaseIndex;
    ::ll::TypedStorage<1, 1, bool>                               resetReceivedPackets;
    ::ll::TypedStorage<8, 8, ulong>                              lastUpdateTime;
    ::ll::TypedStorage<8, 8, ulong>                              timeBetweenPackets;
    ::ll::TypedStorage<8, 8, ulong>                              nextSendTime;
    ::ll::TypedStorage<8, 8, ulong>                              ackPingSum;
    ::ll::TypedStorage<1, 1, uchar>                              ackPingIndex;
    ::ll::TypedStorage<8, 8, ulong>                              remoteSystemTime;
    ::ll::TypedStorage<8, 8, ulong>                              nextAllowedThroughputSample;
    ::ll::TypedStorage<1, 1, bool>                               bandwidthExceededStatistic;
    ::ll::TypedStorage<8, 8, long long>                          throughputCapCountdown;
    ::ll::TypedStorage<4, 4, uint>                               receivePacketCount;
    ::ll::TypedStorage<8, 8, ulong>                              elapsedTimeSinceLastUpdate;
    ::ll::TypedStorage<8, 8, ulong>                              nextAckTimeToSend;
    ::ll::TypedStorage<8, 80, ::RakNet::CCRakNetSlidingWindow>   congestionManager;
    ::ll::TypedStorage<4, 4, uint>                               unacknowledgedBytes;
    ::ll::UntypedStorage<8, 16>                                  packetsToSendThisUpdate;
    ::ll::UntypedStorage<8, 16>                                  packetsToDeallocThisUpdate;
    ::ll::UntypedStorage<8, 16>                                  packetsToSendThisUpdateDatagramBoundaries;
    ::ll::UntypedStorage<8, 16>                                  datagramsToSendThisUpdateIsPair;
    ::ll::UntypedStorage<8, 16>                                  datagramSizesInBytes;
    ::ll::TypedStorage<4, 4, uint>                               datagramSizeSoFar;
    ::ll::TypedStorage<4, 4, uint>                               allDatagramSizesSoFar;
    ::ll::TypedStorage<8, 8, double>                             totalUserDataBytesAcked;
    ::ll::TypedStorage<8, 8, ulong>                              timeOfLastContinualSend;
    ::ll::TypedStorage<8, 8, ulong>                              timeToNextUnreliableCull;
    ::ll::UntypedStorage<8, 16>                                  incomingAcks;
    ::ll::TypedStorage<4, 4, int>                                countdownToNextPacketPair;
    ::ll::UntypedStorage<8, 16>                                  acknowlegements;
    ::ll::UntypedStorage<8, 16>                                  NAKs;
    ::ll::TypedStorage<1, 1, bool>                               remoteSystemNeedsBAndAS;
    ::ll::UntypedStorage<8, 32>                                  refCountedDataPool;
    ::ll::TypedStorage<8, 280, ::RakNet::BPSTracker[7]>          bpsMetrics;
    ::ll::TypedStorage<8, 8, ulong>                              lastBpsClear;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24>   mUnkb712df;
    ::ll::UntypedStorage<4, 4>    mUnk840b3d;
    ::ll::UntypedStorage<8, 8>    mUnkbf4abf;
    ::ll::UntypedStorage<8, 24>   mUnk4856bd;
    ::ll::UntypedStorage<8, 32>   mUnk25ac52;
    ::ll::UntypedStorage<8, 16>   mUnk65efb3;
    ::ll::UntypedStorage<4, 4>    mUnke0d0e4;
    ::ll::UntypedStorage<8, 32>   mUnk493899;
    ::ll::UntypedStorage<8, 4096> mUnk98ff56;
    ::ll::UntypedStorage<8, 8>    mUnkdbb8b1;
    ::ll::UntypedStorage<8, 8>    mUnk42c756;
    ::ll::UntypedStorage<4, 4>    mUnk4fce02;
    ::ll::UntypedStorage<8, 24>   mUnk3028f9;
    ::ll::UntypedStorage<8, 32>   mUnk5500c6;
    ::ll::UntypedStorage<8, 16>   mUnk7b00f9;
    ::ll::UntypedStorage<4, 4>    mUnk70b42d;
    ::ll::UntypedStorage<4, 4>    mUnke5db24;
    ::ll::UntypedStorage<1, 1>    mUnkd2c69a;
    ::ll::UntypedStorage<1, 1>    mUnk2b126c;
    ::ll::UntypedStorage<2, 2>    mUnked101a;
    ::ll::UntypedStorage<4, 4>    mUnk25583b;
    ::ll::UntypedStorage<8, 224>  mUnk312262;
    ::ll::UntypedStorage<4, 128>  mUnk2d6c36;
    ::ll::UntypedStorage<4, 128>  mUnkc9f6bc;
    ::ll::UntypedStorage<4, 128>  mUnkb1cd4b;
    ::ll::UntypedStorage<4, 128>  mUnk84e899;
    ::ll::UntypedStorage<8, 768>  mUnk624080;
    ::ll::UntypedStorage<4, 128>  mUnkf09dad;
    ::ll::UntypedStorage<8, 24>   mUnka55249;
    ::ll::UntypedStorage<4, 4>    mUnk4f040f;
    ::ll::UntypedStorage<1, 1>    mUnk68c359;
    ::ll::UntypedStorage<8, 8>    mUnkcaea37;
    ::ll::UntypedStorage<8, 8>    mUnkbf33ec;
    ::ll::UntypedStorage<8, 8>    mUnk1ea222;
    ::ll::UntypedStorage<8, 8>    mUnk5452b1;
    ::ll::UntypedStorage<1, 1>    mUnkc7aa05;
    ::ll::UntypedStorage<8, 8>    mUnka206a5;
    ::ll::UntypedStorage<8, 8>    mUnka0e4ac;
    ::ll::UntypedStorage<1, 1>    mUnk1bb973;
    ::ll::UntypedStorage<8, 8>    mUnkfd0cc0;
    ::ll::UntypedStorage<4, 4>    mUnkb6e824;
    ::ll::UntypedStorage<8, 8>    mUnka5fb46;
    ::ll::UntypedStorage<8, 8>    mUnkf2e3ac;
    ::ll::UntypedStorage<8, 80>   mUnkfdcab6;
    ::ll::UntypedStorage<4, 4>    mUnk14e142;
    ::ll::UntypedStorage<8, 16>   mUnkdd8076;
    ::ll::UntypedStorage<8, 16>   mUnkbcf583;
    ::ll::UntypedStorage<8, 16>   mUnkf29fc0;
    ::ll::UntypedStorage<8, 16>   mUnk95919f;
    ::ll::UntypedStorage<8, 16>   mUnk28c684;
    ::ll::UntypedStorage<4, 4>    mUnked8b3a;
    ::ll::UntypedStorage<4, 4>    mUnkce4201;
    ::ll::UntypedStorage<8, 8>    mUnkcac138;
    ::ll::UntypedStorage<8, 8>    mUnkf24c45;
    ::ll::UntypedStorage<8, 8>    mUnkbdacd7;
    ::ll::UntypedStorage<8, 16>   mUnkab6e9b;
    ::ll::UntypedStorage<4, 4>    mUnk17b738;
    ::ll::UntypedStorage<8, 16>   mUnk8683a4;
    ::ll::UntypedStorage<8, 16>   mUnk7a400d;
    ::ll::UntypedStorage<1, 1>    mUnk4ee7a5;
    ::ll::UntypedStorage<8, 32>   mUnkb4cedf;
    ::ll::UntypedStorage<8, 280>  mUnk1078b2;
    ::ll::UntypedStorage<8, 8>    mUnkf5fac4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ReliabilityLayer& operator=(ReliabilityLayer const&);
    ReliabilityLayer(ReliabilityLayer const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool AckTimeout(ulong);
#else // @header-generator platform
    MCAPI ::RakNet::InternalPacket* AllocateFromInternalPacketPool();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RakNet::InternalPacket* AllocateFromInternalPacketPool();
#else // @header-generator platform
    MCAPI void ClearPacketsAndDatagrams();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool AreAcksWaiting();
#else // @header-generator platform
    MCAPI ::RakNet::InternalPacket* CreateInternalPacketFromBitStream(::RakNet::BitStream* bitStream, uint64 time);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void ClearPacketsAndDatagrams();
#else // @header-generator platform
    MCAPI void FreeInternalPacketData(::RakNet::InternalPacket* internalPacket, char const* file, uint line);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RakNet::InternalPacket* CreateInternalPacketFromBitStream(::RakNet::BitStream*, ulong);
#else // @header-generator platform
    MCAPI void FreeThreadSafeMemory();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void FreeInternalPacketData(::RakNet::InternalPacket*, char const*, uint);
#else // @header-generator platform
    MCAPI ::RakNet::RakNetStatistics* GetStatistics(::RakNet::RakNetStatistics* rns);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void FreeThreadSafeMemory();

    MCNAPI ::RakNet::RakNetStatistics* GetStatistics(::RakNet::RakNetStatistics*);

    MCNAPI uint GetTimeoutTime();

    MCNAPI bool HandleSocketReceiveFromConnectedPlayer(
        char const*,
        uint,
        ::RakNet::SystemAddress&,
        ::DataStructures::List<RakNet::PluginInterface2*>&,
        int,
        ::RakNet::RakNetSocket2*,
        ::RakNet::RakNetRandom*,
        ulong,
        ::RakNet::BitStream&
#else // @header-generator platform
    MCAPI bool HandleSocketReceiveFromConnectedPlayer(
        char const*                                          buffer,
        uint                                                 length,
        ::RakNet::SystemAddress&                             systemAddress,
        ::DataStructures::List<::RakNet::PluginInterface2*>& messageHandlerList,
        int                                                  MTUSize,
        ::RakNet::RakNetSocket2*                             s,
        ::RakNet::RakNetRandom*                              rnr,
        uint64                                               timeRead,
        ::RakNet::BitStream&                                 updateBitStream
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void InitializeVariables();
#else // @header-generator platform
    MCAPI void InitializeVariables();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool IsDeadConnection() const;
#else // @header-generator platform
    MCAPI void PushDatagram();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool IsOutgoingDataWaiting();
#else // @header-generator platform
    MCAPI void PushPacket(uint64 time, ::RakNet::InternalPacket* internalPacket, bool isReliable);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void PushDatagram();
#else // @header-generator platform
    MCAPI ReliabilityLayer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void PushPacket(ulong, ::RakNet::InternalPacket*, bool);

    MCNAPI uint Receive(uchar**);

    MCNAPI ReliabilityLayer();

    MCNAPI void Reset(bool, int, bool);

    MCNAPI bool Send(char*, uint, ::PacketPriority, ::PacketReliability, uchar, bool, int, ulong, uint);

    MCNAPI void
    SendACKs(::RakNet::RakNetSocket2*, ::RakNet::SystemAddress&, ulong, ::RakNet::RakNetRandom*, ::RakNet::BitStream&);

    MCNAPI void SetSplitMessageProgressInterval(int);

    MCNAPI void SetTimeoutTime(uint);

    MCNAPI void SetUnreliableTimeout(uint);

    MCNAPI void Update(
        ::RakNet::RakNetSocket2*,
        ::RakNet::SystemAddress&,
        int,
        ulong,
        uint,
        ::DataStructures::List<RakNet::PluginInterface2*>&,
        ::RakNet::RakNetRandom*,
        ::RakNet::BitStream&
#else // @header-generator platform
    MCAPI bool Send(
        char*               data,
        uint                numberOfBitsToSend,
        ::PacketPriority    priority,
        ::PacketReliability reliability,
        uchar               orderingChannel,
        bool                makeDataCopy,
        int                 MTUSize,
        uint64              currentTime,
        uint                receipt
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ReliabilityLayer();
#else // @header-generator platform
    MCAPI void SendACKs(
        ::RakNet::RakNetSocket2* s,
        ::RakNet::SystemAddress& systemAddress,
        uint64                   time,
        ::RakNet::RakNetRandom*  rnr,
        ::RakNet::BitStream&     updateBitStream
    );

    MCAPI void Update(
        ::RakNet::RakNetSocket2*                             s,
        ::RakNet::SystemAddress&                             systemAddress,
        int                                                  MTUSize,
        uint64                                               time,
        uint                                                 bitsPerSecondLimit,
        ::DataStructures::List<::RakNet::PluginInterface2*>& messageHandlerList,
        ::RakNet::RakNetRandom*                              rnr,
        ::RakNet::BitStream&                                 updateBitStream
    );

    MCAPI ~ReliabilityLayer();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
