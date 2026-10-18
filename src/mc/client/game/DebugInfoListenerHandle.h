#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class DebugInfoListenerHandle {
public:
    // DebugInfoListenerHandle inner types define
    using ListenerId = int;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mListenerId;
    // NOLINTEND
};
#else // @header-generator platform
class DebugInfoListenerHandle {};
#endif // @header-generator platform
