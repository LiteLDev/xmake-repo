#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/uint24_t.h"

namespace RakNet {

class CCRakNetSlidingWindow {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>               MAXIMUM_MTU_INCLUDING_UDP_HEADER;
    ::ll::TypedStorage<8, 8, double>             cwnd;
    ::ll::TypedStorage<8, 8, double>             ssThresh;
    ::ll::TypedStorage<8, 8, ulong>              oldestUnsentAck;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t> nextDatagramSequenceNumber;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t> nextCongestionControlBlock;
    ::ll::TypedStorage<1, 1, bool>               backoffThisBlock;
    ::ll::TypedStorage<1, 1, bool>               speedUpThisBlock;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t> expectedNextSequenceNumber;
    ::ll::TypedStorage<1, 1, bool>               _isContinuousSend;
    ::ll::TypedStorage<8, 8, double>             lastRtt;
    ::ll::TypedStorage<8, 8, double>             estimatedRTT;
    ::ll::TypedStorage<8, 8, double>             deviationRtt;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CCRakNetSlidingWindow();

    MCNAPI ::RakNet::uint24_t GetAndIncrementNextDatagramSequenceNumber();

    MCNAPI ulong GetBytesPerSecondLimitByCongestionControl() const;

    MCNAPI uint GetMTU() const;

    MCNAPI ::RakNet::uint24_t GetNextDatagramSequenceNumber();

    MCNAPI ulong GetRTOForRetransmission(uchar) const;

    MCNAPI int GetTransmissionBandwidth(ulong, ulong, uint, bool);

    MCNAPI void Init(ulong, uint);

    MCNAPI bool IsInSlowStart() const;

    MCNAPI void OnAck(ulong, ulong, bool, double, double, double, bool, ::RakNet::uint24_t);

    MCNAPI bool OnGotPacket(::RakNet::uint24_t, bool, ulong, uint, uint*);

    MCNAPI void OnNAK(ulong, ::RakNet::uint24_t);

    MCNAPI void OnResend(ulong, ulong);

    MCNAPI void OnSendAck(ulong, uint);

    MCNAPI void OnSendAckGetBAndAS(ulong, bool*, double*, double*);

    MCNAPI bool ShouldSendACKs(ulong, ulong);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool LessThan(::RakNet::uint24_t, ::RakNet::uint24_t);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace RakNet
