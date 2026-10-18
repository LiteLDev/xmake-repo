#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

#if defined(LL_PLAT_A) // @header-generator platform
class WebSocketInterface : public ::Bedrock::ImplBase<Bedrock::Http::WebSocketInterface> {
#else // @header-generator platform
class WebSocketInterface : public ::Bedrock::ImplBase<::Bedrock::Http::WebSocketInterface> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~WebSocketInterface() = default;
#else // @header-generator platform
    virtual ~WebSocketInterface() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int connect(char const*, char const*, ::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::gsl::not_null<XAsyncBlock*>, ::HC_PERFORM_ENV*) = 0;
#else // @header-generator platform
    virtual HRESULT connect(
        char const*,
        char const*,
        ::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>,
        ::gsl::not_null<::XAsyncBlock*>,
        ::HC_PERFORM_ENV*
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int sendMessage(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, std::string_view, ::gsl::not_null<XAsyncBlock*>) = 0;
#else // @header-generator platform
    virtual HRESULT
        sendMessage(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::std::string_view, ::gsl::not_null<::XAsyncBlock*>) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int sendBinaryMessage(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::gsl::span<const uchar>, ::gsl::not_null<XAsyncBlock*>) = 0;
#else // @header-generator platform
    virtual HRESULT sendBinaryMessage(
        ::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>,
        ::gsl::span<uchar const>,
        ::gsl::not_null<::XAsyncBlock*>
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int disconnect(::gsl::not_null<HC_WEBSOCKET_OBSERVER*>, ::HCWebSocketCloseStatus) = 0;
    // clang-format on
#else // @header-generator platform
    virtual HRESULT disconnect(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::HCWebSocketCloseStatus) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
