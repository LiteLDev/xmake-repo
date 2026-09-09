#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct SessionState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                  mConnectionActive;
    ::ll::TypedStorage<1, 1, bool>                                                  mConnecting;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasSessionError;
    ::ll::TypedStorage<1, 1, bool>                                                  mUsingRelay;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mCurrentRTT;
    ::ll::TypedStorage<8, 8, ulong>                                                 mBytesSendBuffer;
    ::ll::TypedStorage<8, 8, ulong>                                                 mTotalBytesSent;
    ::ll::TypedStorage<8, 8, ulong>                                                 mTotalBytesSentPerSecond;
    ::ll::TypedStorage<8, 8, ulong>                                                 mTotalBytesReceived;
    ::ll::TypedStorage<8, 8, ulong>                                                 mTotalPacketsSent;
    ::ll::TypedStorage<8, 8, ulong>                                                 mTotalPacketsLost;
    ::ll::TypedStorage<4, 4, int>                                                   mIceConnectionState;
    // NOLINTEND
};

} // namespace NetherNet
