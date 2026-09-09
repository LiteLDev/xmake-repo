#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/platform/brstd/future.h"

// auto generated forward declare list
// clang-format off
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
namespace Bedrock::Http { class HeaderCollection; }
// clang-format on

namespace Bedrock::Http {

class WebSocket : public ::std::enable_shared_from_this<Bedrock::Http::WebSocket> {
public:
    // WebSocket inner types define
    using AsyncConnectPromise =
        ::Bedrock::Threading::AsyncPromise<nonstd::expected<Bedrock::Http::StatusCode, std::error_code>>;

    using AsyncPromise = ::Bedrock::Threading::AsyncPromise<std::error_code>;

    using ConnectResult = ::nonstd::expected<Bedrock::Http::StatusCode, std::error_code>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                                        mHandleMutex;
    ::ll::TypedStorage<8, 8, ::HC_WEBSOCKET_OBSERVER*>                           mHandle;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mPingInterval;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WebSocket();

    virtual ::Bedrock::Threading::Async<std::error_code> send(std::string const&) const;

    virtual void onMessage(std::string_view);

    virtual void onBinaryMessage(::gsl::span<const uchar>);

    virtual void onClose(uint);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<nonstd::expected<Bedrock::Http::StatusCode, std::error_code>>
    connect(std::string const&, ::Bedrock::Http::HeaderCollection const&);

    MCNAPI bool isConnected() const;

    MCNAPI void setPingInterval(std::chrono::duration<long long, std::ratio<1, 1>>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _deallocateSocketAsync(::HC_WEBSOCKET_OBSERVER*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<std::error_code> $send(std::string const&) const;

    MCNAPI void $onMessage(std::string_view);

    MCNAPI void $onBinaryMessage(::gsl::span<const uchar>);

    MCNAPI void $onClose(uint);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
