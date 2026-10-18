#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct HC_WEBSOCKET_OBSERVER;
// clang-format on

struct WebSocketCompletionResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HC_WEBSOCKET_OBSERVER*> websocket;
    ::ll::TypedStorage<4, 4, int>                      errorCode;
    ::ll::TypedStorage<4, 4, uint>                     platformErrorCode;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
