#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"

// auto generated forward declare list
// clang-format off
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
// clang-format on

namespace Bedrock::Http {

class WebSocketInterface : public ::Bedrock::ImplBase<Bedrock::Http::WebSocketInterface> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WebSocketInterface() = default;

    virtual int connect(char const*, char const*, ::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::gsl::not_null<XAsyncBlock*>, ::HC_PERFORM_ENV*) = 0;

    virtual int sendMessage(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, std::string_view, ::gsl::not_null<XAsyncBlock*>) = 0;

    virtual int sendBinaryMessage(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::gsl::span<const uchar>, ::gsl::not_null<XAsyncBlock*>) = 0;

    virtual int disconnect(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::HCWebSocketCloseStatus) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock::Http
