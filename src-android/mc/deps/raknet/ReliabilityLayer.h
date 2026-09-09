#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/BPSTracker.h"
#include "mc/deps/raknet/CCRakNetSlidingWindow.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/RakNetStatistics.h"
#include "mc/deps/raknet/data_structures/Heap.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/MemoryPool.h"
#include "mc/deps/raknet/data_structures/OrderedList.h"
#include "mc/deps/raknet/data_structures/Queue.h"
#include "mc/deps/raknet/data_structures/RangeList.h"
#include "mc/deps/raknet/uint24_t.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class PluginInterface2; }
namespace RakNet { class RakNetRandom; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { struct InternalPacket; }
namespace RakNet { struct InternalPacketRefCountedData; }
namespace RakNet { struct SplitPacketChannel; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ReliabilityLayer {
public:
    // ReliabilityLayer inner types declare
    // clang-format off
    struct MessageNumberNode;
    struct UnreliableWithAckReceiptNode;
    struct DatagramHistoryNode;
    // clang-format on

    // ReliabilityLayer inner types define
    struct MessageNumberNode {
    public:
        // member variables
        // NOLINTBEGIN
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
        // NOLINTEND

    public:
        // prevent constructor by default
        UnreliableWithAckReceiptNode(UnreliableWithAckReceiptNode const&);
    };

    struct DatagramHistoryNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::ReliabilityLayer::MessageNumberNode*> head;
        ::ll::TypedStorage<8, 8, ulong>                                          timeSent;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AckTimeout(ulong);

    MCNAPI ::RakNet::InternalPacket* AllocateFromInternalPacketPool();

    MCNAPI bool AreAcksWaiting();

    MCNAPI void ClearPacketsAndDatagrams();

    MCNAPI ::RakNet::InternalPacket* CreateInternalPacketFromBitStream(::RakNet::BitStream*, ulong);

    MCNAPI void FreeInternalPacketData(::RakNet::InternalPacket*, char const*, uint);

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
    );

    MCNAPI void InitializeVariables();

    MCNAPI bool IsDeadConnection() const;

    MCNAPI bool IsOutgoingDataWaiting();

    MCNAPI void PushDatagram();

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
    );

    MCNAPI ~ReliabilityLayer();
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
};

} // namespace RakNet
