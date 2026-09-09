#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/http/WebSocket.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/threading/BasicLockbox.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class RetryPolicy; }
namespace Bedrock::Http { struct Url; }
// clang-format on

namespace Bedrock::Http {

class PersistentWebSocket : public ::Bedrock::Http::WebSocket {
public:
    // PersistentWebSocket inner types define
    using OptionalPromise =
        std::optional<Bedrock::Threading::AsyncPromise<nonstd::expected<Bedrock::Http::StatusCode, std::error_code>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>> const> mTaskGroup;
    ::ll::UntypedStorage<8, 96>                                                 mPendingConnect;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersistentWebSocket();

    virtual void onClose(uint);

    virtual bool shouldReconnect() const;

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Url> getUrl() = 0;

    virtual ::Bedrock::Threading::Async<Bedrock::Http::HeaderCollection> getHeaders();

    virtual ::Bedrock::Http::RetryPolicy getReconnectPolicy();

    virtual void onConnect();

    virtual void onDisconnect(bool, uint);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersistentWebSocket();

    MCNAPI void
    _onConnect(::nonstd::expected<Bedrock::Http::StatusCode, std::error_code>, ::Bedrock::Http::RetryPolicy&&);

    MCNAPI void
    _reconnect(::nonstd::expected<Bedrock::Http::StatusCode, std::error_code>, ::Bedrock::Http::RetryPolicy&&);

    MCNAPI ::Bedrock::Threading::Async<nonstd::expected<Bedrock::Http::StatusCode, std::error_code>> connect();

    MCNAPI ::Bedrock::Threading::Async<nonstd::expected<Bedrock::Http::StatusCode, std::error_code>>
    connectWithRetry(::Bedrock::Http::RetryPolicy&&);

    MCNAPI void disconnect();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onClose(uint);

    MCNAPI bool $shouldReconnect() const;

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::HeaderCollection> $getHeaders();

    MCNAPI ::Bedrock::Http::RetryPolicy $getReconnectPolicy();

    MCNAPI void $onConnect();

    MCNAPI void $onDisconnect(bool, uint);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
