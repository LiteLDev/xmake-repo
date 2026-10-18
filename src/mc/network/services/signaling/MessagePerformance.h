#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MessagePerformance {
public:
    // MessagePerformance inner types define
    enum class Status : uchar {
        Success                = 0,
        FailedToSend           = 1,
        FailedToDeliver        = 2,
        FailedWaitingToSend    = 3,
        FailedWaitingToAccept  = 4,
        FailedWaitingToDeliver = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                          mMessageId;
    ::ll::TypedStorage<1, 1, ::MessagePerformance::Status>                                          mResult;
    ::ll::TypedStorage<1, 1, bool>                                                                  mIsP2P;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1000>>>> mTimeToAccept;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1000>>>> mTimeToDeliver;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk885f91;
    ::ll::UntypedStorage<1, 1>  mUnk694795;
    ::ll::UntypedStorage<1, 1>  mUnkc9271b;
    ::ll::UntypedStorage<8, 16> mUnk4dbff2;
    ::ll::UntypedStorage<8, 16> mUnkb42124;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MessagePerformance& operator=(MessagePerformance const&);
    MessagePerformance(MessagePerformance const&);
    MessagePerformance();
};
