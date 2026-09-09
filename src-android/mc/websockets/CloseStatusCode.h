#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CloseStatusCode : ushort {
    NORMAL                            = 1000,
    ENDPOINT_GOING_AWAY               = 1001,
    PROTOCOL_ERROR                    = 1002,
    UNSUPPORTED_DATA_TYPE             = 1003,
    RESERVED_1004                     = 1004,
    RESERVED_1005                     = 1005,
    RESERVED_1006                     = 1006,
    DATA_NOT_OF_EXPECTED_TYPE         = 1007,
    POLICY_VIOLATION                  = 1008,
    MESSAGE_TOO_BIG                   = 1009,
    SERVER_DOES_NOT_SUPPORT_EXTENSION = 1010,
    UNEXPECTED_ERROR                  = 1011,
    RESERVED_1015                     = 1015,
    INVALID_HANDSHAKE_REQUEST         = 4996,
    HANDSHAKE_KEY_NOT_FOUND           = 4997,
    HANDSHAKE_TIMEOUT                 = 4998,
    LOST_CONNECTION                   = 4999,
};
