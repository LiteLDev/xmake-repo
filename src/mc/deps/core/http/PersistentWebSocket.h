#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/http/WebSocket.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/BasicLockbox.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class RetryPolicy; }
namespace Bedrock::Http { struct Url; }
// clang-format on

namespace Bedrock::Http {

class PersistentWebSocket : public ::Bedrock::Http::WebSocket {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // PersistentWebSocket inner types define
    using OptionalPromise =
        std::optional<Bedrock::Threading::AsyncPromise<nonstd::expected<Bedrock::Http::StatusCode, std::error_code>>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>> const> mTaskGroup;
    ::ll::UntypedStorage<8, 96>                                                 mPendingConnect;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk13cdc9;
    ::ll::UntypedStorage<8, 136> mUnkd613a3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PersistentWebSocket& operator=(PersistentWebSocket const&);
    PersistentWebSocket(PersistentWebSocket const&);
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PersistentWebSocket();

    virtual void onClose(uint);
#else // @header-generator platform
    virtual ~PersistentWebSocket() /*override*/;
#endif // @header-generator platform

    virtual bool shouldReconnect() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::Http::Url> getUrl() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Url> getUrl() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::Http::HeaderCollection> getHeaders();
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Http::HeaderCollection> getHeaders();
#endif // @header-generator platform

    virtual ::Bedrock::Http::RetryPolicy getReconnectPolicy();

    virtual void onConnect();

    virtual void onDisconnect(bool, uint);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual void onClose(uint status) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersistentWebSocket();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _onConnect(::nonstd::expected<Bedrock::Http::StatusCode, std::error_code>, ::Bedrock::Http::RetryPolicy&&);
#else // @header-generator platform
    MCNAPI void _onConnect(
        ::nonstd::expected<::Bedrock::Http::StatusCode, ::std::error_code> result,
        ::Bedrock::Http::RetryPolicy&&                                     retry
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _reconnect(::nonstd::expected<Bedrock::Http::StatusCode, std::error_code>, ::Bedrock::Http::RetryPolicy&&);
#else // @header-generator platform
    MCNAPI void _reconnect(
        ::nonstd::expected<::Bedrock::Http::StatusCode, ::std::error_code> lastResult,
        ::Bedrock::Http::RetryPolicy&&                                     retry
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<nonstd::expected<Bedrock::Http::StatusCode, std::error_code>> connect();

    MCNAPI ::Bedrock::Threading::Async<nonstd::expected<Bedrock::Http::StatusCode, std::error_code>>
    connectWithRetry(::Bedrock::Http::RetryPolicy&&);
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<::nonstd::expected<::Bedrock::Http::StatusCode, ::std::error_code>>
    connectWithRetry(::Bedrock::Http::RetryPolicy&& retry);
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onClose(uint);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI bool $shouldReconnect() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::HeaderCollection> $getHeaders();
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::HeaderCollection> $getHeaders();
#endif // @header-generator platform

    MCNAPI ::Bedrock::Http::RetryPolicy $getReconnectPolicy();

    MCNAPI void $onConnect();

    MCNAPI void $onDisconnect(bool, uint);
#if defined(LL_PLAT_A) // @header-generator platform
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
