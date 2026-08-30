#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/WebSocketInterface.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"

// auto generated forward declare list
// clang-format off
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
// clang-format on

namespace Bedrock::Http {

class WebSocketInterfaceInternal : public ::Bedrock::Http::WebSocketInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WebSocketInterfaceInternal();

    virtual int connect(char const*, char const*, ::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::gsl::not_null<XAsyncBlock*>, ::HC_PERFORM_ENV*);

    virtual int sendMessage(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, std::string_view, ::gsl::not_null<XAsyncBlock*>);

    virtual int sendBinaryMessage(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::gsl::span<const uchar>, ::gsl::not_null<XAsyncBlock*>);

    virtual int disconnect(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::HCWebSocketCloseStatus);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $connect(
        char const*,
        char const*,
        ::gsl::not_null<HC_WEBSOCKET_OBSERVER*>,
        ::gsl::not_null<XAsyncBlock*>,
        ::HC_PERFORM_ENV*
    );

    MCNAPI int $sendMessage(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, std::string_view, ::gsl::not_null<XAsyncBlock*>);

    MCNAPI int $sendBinaryMessage(
        ::gsl::not_null<HC_WEBSOCKET_OBSERVER*>,
        ::gsl::span<const uchar>,
        ::gsl::not_null<XAsyncBlock*>
    );

    MCNAPI int $disconnect(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::HCWebSocketCloseStatus);
    // NOLINTEND
};

} // namespace Bedrock::Http
