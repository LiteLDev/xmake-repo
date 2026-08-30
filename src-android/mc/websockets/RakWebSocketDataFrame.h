#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/BitStream.h"
#include "mc/websockets/CloseStatusCode.h"
#include "mc/websockets/OpCode.h"
#include "mc/websockets/RakWebSocketDataFrameHeader.h"
#include "mc/websockets/WebSocketMessageType.h"

class RakWebSocketDataFrame {
public:
    // RakWebSocketDataFrame inner types define
    enum class ParseState : int {
        PS_AWAITING_HEADER     = 0,
        PS_PAYLOAD_LENGTH_EX   = 1,
        PS_PAYLOAD_MASKING_KEY = 2,
        PS_PAYLOAD_CLOSING     = 3,
        PS_PAYLOAD             = 4,
        PS_DONE                = 5,
        PS_ABORT               = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::RakWebSocketDataFrameHeader>       mHeader;
    ::ll::TypedStorage<8, 288, ::RakNet::BitStream>               mPayload;
    ::ll::TypedStorage<8, 8, ulong>                               mPayloadLength;
    ::ll::TypedStorage<4, 4, uint>                                mMaskedKey;
    ::ll::TypedStorage<2, 2, ushort>                              mCloseStatus;
    ::ll::TypedStorage<1, 1, uchar>                               mBytesForPayloadLength;
    ::ll::TypedStorage<1, 1, uchar>                               mBytesForMaskedKey;
    ::ll::TypedStorage<1, 1, uchar>                               mBytesForStatusCode;
    ::ll::TypedStorage<4, 4, ::RakWebSocketDataFrame::ParseState> mParseState;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void writeFrameToStream(::RakNet::BitStream&, uchar const*, uint, ::OpCode, bool, uint);
    // NOLINTEND
};
