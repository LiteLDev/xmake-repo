#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetStatistics {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ulong[7]>  valueOverLastSecond;
    ::ll::TypedStorage<8, 56, ulong[7]>  runningTotal;
    ::ll::TypedStorage<8, 8, ulong>      connectionStartTime;
    ::ll::TypedStorage<1, 1, bool>       isLimitedByCongestionControl;
    ::ll::TypedStorage<8, 8, ulong>      BPSLimitByCongestionControl;
    ::ll::TypedStorage<1, 1, bool>       isLimitedByOutgoingBandwidthLimit;
    ::ll::TypedStorage<8, 8, ulong>      BPSLimitByOutgoingBandwidthLimit;
    ::ll::TypedStorage<4, 16, uint[4]>   messageInSendBuffer;
    ::ll::TypedStorage<8, 32, double[4]> bytesInSendBuffer;
    ::ll::TypedStorage<4, 4, uint>       messagesInResendBuffer;
    ::ll::TypedStorage<8, 8, ulong>      bytesInResendBuffer;
    ::ll::TypedStorage<4, 4, float>      packetlossLastSecond;
    ::ll::TypedStorage<4, 4, float>      packetlossTotal;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 56> mUnke60561;
    ::ll::UntypedStorage<8, 56> mUnk530045;
    ::ll::UntypedStorage<8, 8>  mUnkcc4458;
    ::ll::UntypedStorage<1, 1>  mUnk39ab85;
    ::ll::UntypedStorage<8, 8>  mUnkf792d4;
    ::ll::UntypedStorage<1, 1>  mUnkeec839;
    ::ll::UntypedStorage<8, 8>  mUnk352000;
    ::ll::UntypedStorage<4, 16> mUnkb4b977;
    ::ll::UntypedStorage<8, 32> mUnk1ef5fe;
    ::ll::UntypedStorage<4, 4>  mUnka93787;
    ::ll::UntypedStorage<8, 8>  mUnkc401a0;
    ::ll::UntypedStorage<4, 4>  mUnk182f23;
    ::ll::UntypedStorage<4, 4>  mUnkfc6056;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RakNetStatistics& operator=(RakNetStatistics const&);
    RakNetStatistics(RakNetStatistics const&);
    RakNetStatistics();
#endif // @header-generator platform
};

} // namespace RakNet
