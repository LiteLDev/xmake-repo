#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CloseStatusCode : ushort {
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    Normal                        = 1000,
    EndpointGoingAway             = 1001,
    ProtocolError                 = 1002,
    UnsupportedDataType           = 1003,
    Reserved1004                  = 1004,
    Reserved1005                  = 1005,
    Reserved1006                  = 1006,
    DataNotOfExpectedType         = 1007,
    PolicyViolation               = 1008,
    MessageTooBig                 = 1009,
    ServerDoesNotSupportExtension = 1010,
    UnexpectedError               = 1011,
    Reserved1015                  = 1015,
    InvalidHandshakeRequest       = 4996,
    HandshakeKeyNotFound          = 4997,
    HandshakeTimeout              = 4998,
    LostConnection                = 4999,
#endif // @header-generator platform
};
