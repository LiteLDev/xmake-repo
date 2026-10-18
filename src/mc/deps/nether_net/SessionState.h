#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct SessionState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkb87524;
    ::ll::UntypedStorage<1, 1> mUnkeb22ea;
    ::ll::UntypedStorage<1, 1> mUnkbe96ed;
    ::ll::UntypedStorage<1, 1> mUnkd3398c;
    ::ll::UntypedStorage<8, 8> mUnkfb86a9;
    ::ll::UntypedStorage<8, 8> mUnkb97b3b;
    ::ll::UntypedStorage<8, 8> mUnk35c5ce;
    ::ll::UntypedStorage<8, 8> mUnka71ed6;
    ::ll::UntypedStorage<8, 8> mUnk45282d;
    ::ll::UntypedStorage<8, 8> mUnk2365a9;
    ::ll::UntypedStorage<8, 8> mUnk14e0b6;
    ::ll::UntypedStorage<4, 4> mUnk619e2c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SessionState& operator=(SessionState const&);
    SessionState(SessionState const&);
    SessionState();
#endif // @header-generator platform
};

} // namespace NetherNet
