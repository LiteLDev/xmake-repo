#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/BitStream.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/websockets/CloseStatusCode.h"
#include "mc/websockets/HttpHeaders.h"
#include "mc/websockets/OpCode.h"
#include "mc/websockets/RakWebSocketDataFrameParser.h"
#include "mc/websockets/WSConnectionResult.h"

// auto generated forward declare list
// clang-format off
class AsyncTracker;
class RakWebSocketDataFrame;
class TcpProxy;
// clang-format on

class RakWebSocket {
public:
    // RakWebSocket inner types define
    enum class ConnectionState : int {
        CS_NONE                 = 0,
        CS_CLOSE_HANDSHAKE      = 1,
        CS_STARTING             = 2,
        CS_CONNECTING           = 3,
        CS_OPEN_HANDSHAKE_INIT  = 4,
        CS_OPEN_HANDSHAKE_AWAIT = 5,
        CS_OPEN_AND_PROCESSING  = 6,
    };

    enum PacketDirection : uint {
        INWARD   = 1,
        OUTWARD  = 2,
        BOTHWAYS = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    RakWebSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RakWebSocket();

    virtual ::WSConnectionResult connect(std::string const&);

    virtual ::WSConnectionResult connect(std::string const&, std::vector<std::string> const&);

    virtual bool isReady() const;

    virtual void setOnMessageReceivedHandler(std::function<void(const RakWebSocketDataFrame&)> const&);

    virtual void setOnCloseHandler(std::function<void(CloseStatusCode, const std::string&)> const&);

    virtual void setOnConnectedHandler(std::function<void(const std::string&)> const&);

    virtual void tick();

    virtual void _updateState() = 0;

    virtual uint _genMaskingKey() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _close(::CloseStatusCode);

    MCNAPI void _fail(std::string const&, ::CloseStatusCode);

    MCNAPI bool _processPacket(std::function<void(RakNet::BitStream&)> const&, bool);

    MCNAPI void _reset();

    MCNAPI bool _sendCloseFrame(::CloseStatusCode, std::string const&);

    MCNAPI bool _sendNonControlFrame(uchar const*, ulong, ::OpCode);

    MCNAPI bool _sendTextFrame(std::string const&);

    MCNAPI void _subProcessHttpResponse(::RakNet::BitStream&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::WSConnectionResult $connect(std::string const&);

    MCNAPI ::WSConnectionResult $connect(std::string const&, std::vector<std::string> const&);

    MCNAPI bool $isReady() const;

    MCNAPI void $setOnMessageReceivedHandler(std::function<void(const RakWebSocketDataFrame&)> const&);

    MCNAPI void $setOnCloseHandler(std::function<void(CloseStatusCode, const std::string&)> const&);

    MCNAPI void $setOnConnectedHandler(std::function<void(const std::string&)> const&);

    MCNAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
