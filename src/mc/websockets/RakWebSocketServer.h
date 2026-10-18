#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/RakWebSocket.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class HttpHeaders;
class TcpProxy;
namespace RakNet { class BitStream; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
            Unknown   = -1,
            Text_Html = 0,
#else // @header-generator platform
            Unknown  = -1,
            TextHtml = 0,
#endif // @header-generator platform
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                                                              payload;
        ::ll::TypedStorage<4, 4, ::RakWebSocketServer::WebsocketServerMetaDataPayload::MetaDataPayloadType> type;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk28f5aa;
        ::ll::UntypedStorage<4, 4>  mUnk25d36e;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        WebsocketServerMetaDataPayload& operator=(WebsocketServerMetaDataPayload const&);
        WebsocketServerMetaDataPayload(WebsocketServerMetaDataPayload const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        WebsocketServerMetaDataPayload();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::RakWebSocketServer::WebsocketServerMetaDataPayload const> mMetaDataPayload;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnkd9873e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RakWebSocketServer& operator=(RakWebSocketServer const&);
    RakWebSocketServer(RakWebSocketServer const&);
#endif // @header-generator platform
    RakWebSocketServer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isReady() const;
#else // @header-generator platform
    virtual bool isReady() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _updateState();
#else // @header-generator platform
    virtual void _updateState() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint _genMaskingKey() const;
#else // @header-generator platform
    virtual uint _genMaskingKey() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
