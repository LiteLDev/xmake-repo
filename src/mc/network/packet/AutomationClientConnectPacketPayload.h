#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/WebSocketPacketData.h"

struct AutomationClientConnectPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WebSocketPacketData> mWebSocketData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::WebSocketPacketData> mWebSocketData;
#endif // @header-generator platform
    // NOLINTEND
};
