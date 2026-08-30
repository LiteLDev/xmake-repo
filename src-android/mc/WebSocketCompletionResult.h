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
