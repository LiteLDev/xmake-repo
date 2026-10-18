#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/raknet/BitStream.h"
#include "mc/deps/raknet/SystemAddress.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/websockets/CloseStatusCode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/websockets/HttpHeaders.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/websockets/OpCode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/websockets/RakWebSocketDataFrameParser.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/websockets/WSConnectionResult.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AsyncTracker;
#else // @header-generator platform
#endif // @header-generator platform
class RakWebSocketDataFrame;
#if defined(LL_PLAT_A) // @header-generator platform
class TcpProxy;
#else // @header-generator platform
namespace RakNet { class BitStream; }
#endif // @header-generator platform
// clang-format on

class RakWebSocket {
public:
    // RakWebSocket inner types define
    enum class ConnectionState : int {
#if defined(LL_PLAT_A) // @header-generator platform
        CS_NONE                 = 0,
        CS_CLOSE_HANDSHAKE      = 1,
        CS_STARTING             = 2,
        CS_CONNECTING           = 3,
        CS_OPEN_HANDSHAKE_INIT  = 4,
        CS_OPEN_HANDSHAKE_AWAIT = 5,
        CS_OPEN_AND_PROCESSING  = 6,
#else // @header-generator platform
        None               = 0,
        CloseHandshake     = 1,
        Starting           = 2,
        Connecting         = 3,
        OpenHandshakeInit  = 4,
        OpenHandshakeAwait = 5,
        OpenAndProcessing  = 6,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum PacketDirection : uint {
        INWARD   = 1,
        OUTWARD  = 2,
        BOTHWAYS = 3,
#else // @header-generator platform
    enum class PacketDirection : int {
        Inward   = 1,
        Outward  = 2,
        Bothways = 3,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<TcpProxy>>       mTcpProxy;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>       mServerConnection;
    ::ll::TypedStorage<8, 288, ::RakNet::BitStream>           mIncomingData;
    ::ll::TypedStorage<8, 24, std::string>                    mLastErrorResponse;
    ::ll::TypedStorage<2, 2, ::CloseStatusCode>               mLastCloseCode;
    ::ll::TypedStorage<1, 1, bool>                            mClosedOnError;
    ::ll::UntypedStorage<4, 12>                               mMaxFrameSize;
    ::ll::UntypedStorage<8, 96>                               mDataFrameParser;
    ::ll::TypedStorage<8, 24, std::string>                    mActiveSubProtocol;
    ::ll::TypedStorage<1, 1, bool>                            mVerboseLogging;
    ::ll::UntypedStorage<8, 48>                               mMessageReceivedHandler;
    ::ll::UntypedStorage<8, 48>                               mCloseHandler;
    ::ll::UntypedStorage<8, 48>                               mConnectedHandler;
    ::ll::TypedStorage<8, 24, std::string>                    mUri;
    ::ll::TypedStorage<8, 24, std::string>                    mScheme;
    ::ll::TypedStorage<8, 24, std::string>                    mDomain;
    ::ll::TypedStorage<8, 24, std::string>                    mDomainNoPort;
    ::ll::TypedStorage<8, 24, std::string>                    mResource;
    ::ll::TypedStorage<2, 2, ushort>                          mPort;
    ::ll::TypedStorage<1, 1, bool>                            mIsSecure;
    ::ll::TypedStorage<8, 24, std::string>                    mBase64Key;
    ::ll::TypedStorage<8, 24, std::string>                    mOpenHandshakeRequest;
    ::ll::TypedStorage<8, 24, std::string>                    mHandshakeCode;
    ::ll::TypedStorage<8, 112, ::HttpHeaders>                 mHandshakeFields;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AsyncTracker>>   mAsyncTracker;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mSubProtocols;
    ::ll::TypedStorage<4, 4, ::RakWebSocket::ConnectionState> mConnectionState;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnka772bf;
    ::ll::UntypedStorage<8, 136> mUnk33094b;
    ::ll::UntypedStorage<8, 288> mUnkf81a14;
    ::ll::UntypedStorage<8, 32>  mUnka2158e;
    ::ll::UntypedStorage<2, 2>   mUnkd89728;
    ::ll::UntypedStorage<1, 1>   mUnk21496a;
    ::ll::UntypedStorage<4, 4>   mUnk353334;
    ::ll::UntypedStorage<8, 104> mUnk36f6f3;
    ::ll::UntypedStorage<8, 32>  mUnkfd1b73;
    ::ll::UntypedStorage<1, 1>   mUnkecfccb;
    ::ll::UntypedStorage<8, 64>  mUnkbc67d8;
    ::ll::UntypedStorage<8, 64>  mUnk5ab490;
    ::ll::UntypedStorage<8, 64>  mUnk3451d4;
    ::ll::UntypedStorage<8, 32>  mUnk722d36;
    ::ll::UntypedStorage<8, 32>  mUnk24ea95;
    ::ll::UntypedStorage<8, 32>  mUnk22fe6e;
    ::ll::UntypedStorage<8, 32>  mUnk17ce67;
    ::ll::UntypedStorage<8, 32>  mUnkc727dd;
    ::ll::UntypedStorage<2, 2>   mUnkc7a25d;
    ::ll::UntypedStorage<1, 1>   mUnk67328e;
    ::ll::UntypedStorage<8, 32>  mUnk51b0b7;
    ::ll::UntypedStorage<8, 32>  mUnkdcfdfe;
    ::ll::UntypedStorage<8, 32>  mUnk11427b;
    ::ll::UntypedStorage<8, 128> mUnk6c717f;
    ::ll::UntypedStorage<8, 8>   mUnk9078fa;
    ::ll::UntypedStorage<8, 24>  mUnkbcc85b;
    ::ll::UntypedStorage<4, 4>   mUnk8a7ba4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RakWebSocket& operator=(RakWebSocket const&);
    RakWebSocket(RakWebSocket const&);
#endif // @header-generator platform
    RakWebSocket();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RakWebSocket();
#else // @header-generator platform
    virtual ~RakWebSocket() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WSConnectionResult connect(std::string const&);
#else // @header-generator platform
    virtual ::WSConnectionResult connect(::std::string const& uri, ::std::vector<::std::string> const& subProtocols);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WSConnectionResult connect(std::string const&, std::vector<std::string> const&);
#else // @header-generator platform
    virtual ::WSConnectionResult connect(::std::string const& uri);
#endif // @header-generator platform

    virtual bool isReady() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setOnMessageReceivedHandler(std::function<void(const RakWebSocketDataFrame&)> const&);
#else // @header-generator platform
    virtual void setOnMessageReceivedHandler(::std::function<void(::RakWebSocketDataFrame const&)> const& handler);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setOnCloseHandler(std::function<void(CloseStatusCode, const std::string&)> const&);
#else // @header-generator platform
    virtual void setOnCloseHandler(::std::function<void(::CloseStatusCode, ::std::string const&)> const& handler);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setOnConnectedHandler(std::function<void(const std::string&)> const&);
#else // @header-generator platform
    virtual void setOnConnectedHandler(::std::function<void(::std::string const&)> const& handler);
#endif // @header-generator platform

    virtual void tick();

    virtual void _updateState() = 0;

    virtual uint _genMaskingKey() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _close(::CloseStatusCode);
#else // @header-generator platform
    MCNAPI void _close(::CloseStatusCode code);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _fail(std::string const&, ::CloseStatusCode);
#else // @header-generator platform
    MCNAPI void _fail(::std::string const& error, ::CloseStatusCode code);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _processPacket(std::function<void(RakNet::BitStream&)> const&, bool);
#else // @header-generator platform
    MCNAPI bool
    _processPacket(::std::function<void(::RakNet::BitStream&)> const& processStep, bool acceptNewConnection);
#endif // @header-generator platform

    MCNAPI void _reset();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _sendCloseFrame(::CloseStatusCode, std::string const&);
#else // @header-generator platform
    MCNAPI bool _sendCloseFrame(::CloseStatusCode code, ::std::string const& reason);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _sendNonControlFrame(uchar const*, ulong, ::OpCode);
#else // @header-generator platform
    MCNAPI bool _sendNonControlFrame(uchar const* payload, uint64 size, ::OpCode opCode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _sendTextFrame(std::string const&);

    MCNAPI void _subProcessHttpResponse(::RakNet::BitStream&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI bool _sendTextFrame(::std::string const& text);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WSConnectionResult $connect(std::string const&);
#else // @header-generator platform
    MCNAPI ::WSConnectionResult $connect(::std::string const& uri, ::std::vector<::std::string> const& subProtocols);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WSConnectionResult $connect(std::string const&, std::vector<std::string> const&);
#else // @header-generator platform
    MCNAPI ::WSConnectionResult $connect(::std::string const& uri);
#endif // @header-generator platform

    MCNAPI bool $isReady() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setOnMessageReceivedHandler(std::function<void(const RakWebSocketDataFrame&)> const&);
#else // @header-generator platform
    MCNAPI void $setOnMessageReceivedHandler(::std::function<void(::RakWebSocketDataFrame const&)> const& handler);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setOnCloseHandler(std::function<void(CloseStatusCode, const std::string&)> const&);
#else // @header-generator platform
    MCNAPI void $setOnCloseHandler(::std::function<void(::CloseStatusCode, ::std::string const&)> const& handler);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setOnConnectedHandler(std::function<void(const std::string&)> const&);
#else // @header-generator platform
    MCNAPI void $setOnConnectedHandler(::std::function<void(::std::string const&)> const& handler);
#endif // @header-generator platform

    MCNAPI void $tick();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
