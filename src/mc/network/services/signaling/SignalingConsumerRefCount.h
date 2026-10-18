#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class SignalingService;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class SignalingConsumerRefCount {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mSignalingService;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk7ef818;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SignalingConsumerRefCount& operator=(SignalingConsumerRefCount const&);
    SignalingConsumerRefCount(SignalingConsumerRefCount const&);
#endif // @header-generator platform
    SignalingConsumerRefCount();
};
