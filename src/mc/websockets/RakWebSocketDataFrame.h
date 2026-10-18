#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/raknet/BitStream.h"
#include "mc/websockets/CloseStatusCode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/websockets/OpCode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/websockets/RakWebSocketDataFrameHeader.h"
#include "mc/websockets/WebSocketMessageType.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on
#endif // @header-generator platform

class RakWebSocketDataFrame {
public:
    // RakWebSocketDataFrame inner types define
    enum class ParseState : int {
#if defined(LL_PLAT_A) // @header-generator platform
        PS_AWAITING_HEADER     = 0,
        PS_PAYLOAD_LENGTH_EX   = 1,
        PS_PAYLOAD_MASKING_KEY = 2,
        PS_PAYLOAD_CLOSING     = 3,
        PS_PAYLOAD             = 4,
        PS_DONE                = 5,
        PS_ABORT               = 6,
#else // @header-generator platform
        AwaitingHeader    = 0,
        PayloadLengthEx   = 1,
        PayloadMaskingKey = 2,
        PayloadClosing    = 3,
        Payload           = 4,
        Done              = 5,
        Abort             = 6,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, ::RakWebSocketDataFrameHeader>       mHeader;
    ::ll::TypedStorage<8, 288, ::RakNet::BitStream>               mPayload;
    ::ll::TypedStorage<8, 8, ulong>                               mPayloadLength;
    ::ll::TypedStorage<4, 4, uint>                                mMaskedKey;
    ::ll::TypedStorage<2, 2, ushort>                              mCloseStatus;
    ::ll::TypedStorage<1, 1, uchar>                               mBytesForPayloadLength;
    ::ll::TypedStorage<1, 1, uchar>                               mBytesForMaskedKey;
    ::ll::TypedStorage<1, 1, uchar>                               mBytesForStatusCode;
    ::ll::TypedStorage<4, 4, ::RakWebSocketDataFrame::ParseState> mParseState;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 2>   mUnk61d632;
    ::ll::UntypedStorage<8, 288> mUnk892763;
    ::ll::UntypedStorage<8, 8>   mUnk998e6c;
    ::ll::UntypedStorage<4, 4>   mUnk670dec;
    ::ll::UntypedStorage<2, 2>   mUnk2f8588;
    ::ll::UntypedStorage<1, 1>   mUnk380434;
    ::ll::UntypedStorage<1, 1>   mUnkf19b36;
    ::ll::UntypedStorage<1, 1>   mUnk22558c;
    ::ll::UntypedStorage<4, 4>   mUnk226a4a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RakWebSocketDataFrame& operator=(RakWebSocketDataFrame const&);
    RakWebSocketDataFrame(RakWebSocketDataFrame const&);
    RakWebSocketDataFrame();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void writeFrameToStream(::RakNet::BitStream&, uchar const*, uint, ::OpCode, bool, uint);
#else // @header-generator platform
    MCNAPI static void writeFrameToStream(
        ::RakNet::BitStream& stream,
        uchar const*         payload,
        uint                 size,
        ::OpCode             opCode,
        bool                 isFin,
        uint                 maskKey
    );
#endif // @header-generator platform
    // NOLINTEND
};
