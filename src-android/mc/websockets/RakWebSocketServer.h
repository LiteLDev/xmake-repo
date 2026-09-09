#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/RakWebSocket.h"

// auto generated forward declare list
// clang-format off
class HttpHeaders;
class TcpProxy;
namespace RakNet { class BitStream; }
// clang-format on

class RakWebSocketServer : public ::RakWebSocket {
public:
    // RakWebSocketServer inner types declare
    // clang-format off
    struct WebsocketServerMetaDataPayload;
    // clang-format on

    // RakWebSocketServer inner types define
    struct WebsocketServerMetaDataPayload {
    public:
        // WebsocketServerMetaDataPayload inner types define
        enum class MetaDataPayloadType : int {
            Unknown   = -1,
            Text_Html = 0,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                                              payload;
        ::ll::TypedStorage<4, 4, ::RakWebSocketServer::WebsocketServerMetaDataPayload::MetaDataPayloadType> type;
        // NOLINTEND

    public:
        // prevent constructor by default
        WebsocketServerMetaDataPayload& operator=(WebsocketServerMetaDataPayload const&);
        WebsocketServerMetaDataPayload(WebsocketServerMetaDataPayload const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::RakWebSocketServer::WebsocketServerMetaDataPayload const> mMetaDataPayload;
    // NOLINTEND

public:
    // prevent constructor by default
    RakWebSocketServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isReady() const;

    virtual void tick();

    virtual void _updateState();

    virtual uint _genMaskingKey() const;
    // NOLINTEND
};
