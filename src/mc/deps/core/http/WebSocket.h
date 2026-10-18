#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/future.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Http { class HeaderCollection; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct HC_WEBSOCKET_OBSERVER;
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Http {

#if defined(LL_PLAT_A) // @header-generator platform
class WebSocket : public ::std::enable_shared_from_this<Bedrock::Http::WebSocket> {
public:
    // WebSocket inner types define
    using AsyncConnectPromise =
        ::Bedrock::Threading::AsyncPromise<nonstd::expected<Bedrock::Http::StatusCode, std::error_code>>;

    using AsyncPromise = ::Bedrock::Threading::AsyncPromise<std::error_code>;

    using ConnectResult = ::nonstd::expected<Bedrock::Http::StatusCode, std::error_code>;

#else // @header-generator platform
class WebSocket : public ::std::enable_shared_from_this<::Bedrock::Http::WebSocket> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>                                        mHandleMutex;
    ::ll::TypedStorage<8, 8, ::HC_WEBSOCKET_OBSERVER*>                           mHandle;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mPingInterval;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk59fcc6;
    ::ll::UntypedStorage<8, 8>  mUnk2d81af;
    ::ll::UntypedStorage<8, 8>  mUnk5cda29;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WebSocket& operator=(WebSocket const&);
    WebSocket(WebSocket const&);
    WebSocket();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WebSocket();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<std::error_code> send(std::string const&) const;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::std::error_code> send(::std::string const& message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMessage(std::string_view);
#else // @header-generator platform
    virtual void onMessage(::std::string_view message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBinaryMessage(::gsl::span<const uchar>);
#else // @header-generator platform
    virtual void onBinaryMessage(::gsl::span<uchar const>);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onClose(uint);
#else // @header-generator platform
    virtual void onClose(uint status);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<nonstd::expected<Bedrock::Http::StatusCode, std::error_code>>
    connect(std::string const&, ::Bedrock::Http::HeaderCollection const&);

    MCNAPI bool isConnected() const;

    MCNAPI void setPingInterval(std::chrono::duration<long long, std::ratio<1, 1>>);
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<::nonstd::expected<::Bedrock::Http::StatusCode, ::std::error_code>>
    connect(::std::string const& uri, ::Bedrock::Http::HeaderCollection const& headers);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _deallocateSocketAsync(::HC_WEBSOCKET_OBSERVER*);
#else // @header-generator platform
    MCNAPI static void _deallocateSocketAsync(::HC_WEBSOCKET_OBSERVER* handle);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<std::error_code> $send(std::string const&) const;
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<::std::error_code> $send(::std::string const& message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onMessage(std::string_view);
#else // @header-generator platform
    MCNAPI void $onMessage(::std::string_view message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBinaryMessage(::gsl::span<const uchar>);
#else // @header-generator platform
    MCNAPI void $onBinaryMessage(::gsl::span<uchar const>);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onClose(uint);
#else // @header-generator platform
    MCNAPI void $onClose(uint status);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
