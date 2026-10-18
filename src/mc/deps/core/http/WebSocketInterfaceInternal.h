#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/WebSocketInterface.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"

// auto generated forward declare list
// clang-format off
struct HC_PERFORM_ENV;
#if defined(LL_PLAT_A) // @header-generator platform
struct HC_WEBSOCKET_OBSERVER;
#else // @header-generator platform
#endif // @header-generator platform
struct XAsyncBlock;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct HC_WEBSOCKET_OBSERVER;
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Http {

class WebSocketInterfaceInternal : public ::Bedrock::Http::WebSocketInterface {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~WebSocketInterfaceInternal();
#else // @header-generator platform
    virtual ~WebSocketInterfaceInternal() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int connect(char const*, char const*, ::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::gsl::not_null<XAsyncBlock*>, ::HC_PERFORM_ENV*);
#else // @header-generator platform
    virtual HRESULT connect(
        char const*,
        char const*,
        ::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>,
        ::gsl::not_null<::XAsyncBlock*>,
        ::HC_PERFORM_ENV*
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int sendMessage(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, std::string_view, ::gsl::not_null<XAsyncBlock*>);
#else // @header-generator platform
    virtual HRESULT sendMessage(
        ::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>,
        ::std::string_view,
        ::gsl::not_null<::XAsyncBlock*>
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int sendBinaryMessage(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::gsl::span<const uchar>, ::gsl::not_null<XAsyncBlock*>);
#else // @header-generator platform
    virtual HRESULT sendBinaryMessage(
        ::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>,
        ::gsl::span<uchar const>,
        ::gsl::not_null<::XAsyncBlock*>
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int disconnect(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::HCWebSocketCloseStatus);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual HRESULT disconnect(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::HCWebSocketCloseStatus) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $connect(
#else // @header-generator platform
    MCNAPI HRESULT $connect(
#endif // @header-generator platform
        char const*,
        char const*,
#if defined(LL_PLAT_A) // @header-generator platform
        ::gsl::not_null<HC_WEBSOCKET_OBSERVER*>,
        ::gsl::not_null<XAsyncBlock*>,
#else // @header-generator platform
        ::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>,
        ::gsl::not_null<::XAsyncBlock*>,
#endif // @header-generator platform
        ::HC_PERFORM_ENV*
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $sendMessage(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, std::string_view, ::gsl::not_null<XAsyncBlock*>);
#else // @header-generator platform
    MCNAPI HRESULT
        $sendMessage(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::std::string_view, ::gsl::not_null<::XAsyncBlock*>);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $sendBinaryMessage(
        ::gsl::not_null<HC_WEBSOCKET_OBSERVER*>,
        ::gsl::span<const uchar>,
        ::gsl::not_null<XAsyncBlock*>
#else // @header-generator platform
    MCNAPI HRESULT $sendBinaryMessage(
        ::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>,
        ::gsl::span<uchar const>,
        ::gsl::not_null<::XAsyncBlock*>
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $disconnect(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::HCWebSocketCloseStatus);
#else // @header-generator platform
    MCNAPI HRESULT $disconnect(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::HCWebSocketCloseStatus);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
