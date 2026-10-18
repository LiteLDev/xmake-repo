#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/websockets/OpCode.h"
#else // @header-generator platform
#endif // @header-generator platform

struct RakWebSocketDataFrameHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar> mHeaderByte0;
    ::ll::TypedStorage<1, 1, uchar> mHeaderByte1;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkc92c3e;
    ::ll::UntypedStorage<1, 1> mUnk8d03d2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RakWebSocketDataFrameHeader& operator=(RakWebSocketDataFrameHeader const&);
    RakWebSocketDataFrameHeader(RakWebSocketDataFrameHeader const&);
    RakWebSocketDataFrameHeader();
#endif // @header-generator platform
};
