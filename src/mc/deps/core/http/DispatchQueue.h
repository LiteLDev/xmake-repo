#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/Response.h"
#include "mc/deps/core/http/DispatcherProcess.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/http/Request.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncResultBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroup.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
// clang-format on
#endif // @header-generator platform

namespace Bedrock::Http {

class DispatchQueue : public ::Bedrock::Http::DispatcherProcess {
public:
    // DispatchQueue inner types declare
    // clang-format off
    class AsyncQueueResult;
    struct Compare;
    // clang-format on

    // DispatchQueue inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class AsyncQueueResult : public ::Bedrock::Threading::AsyncResultBase<Bedrock::Http::Response> {
#else // @header-generator platform
    class AsyncQueueResult : public ::Bedrock::Threading::AsyncResultBase<::Bedrock::Http::Response> {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool> mIsValid;
        ::ll::UntypedStorage<8, 16>    mAsyncResponse;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1>  mUnkc7d5ff;
        ::ll::UntypedStorage<8, 16> mUnk80bc96;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        AsyncQueueResult& operator=(AsyncQueueResult const&);
        AsyncQueueResult(AsyncQueueResult const&);
        AsyncQueueResult();
#endif // @header-generator platform

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~AsyncQueueResult();

        virtual void _cancel();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual void _cancel() /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $_cancel();
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
        // NOLINTEND
    };

    struct Compare {};

#if defined(LL_PLAT_A) // @header-generator platform
    using RequestHolder =
        std::pair<Bedrock::Http::Request, std::shared_ptr<Bedrock::Http::DispatchQueue::AsyncQueueResult>>;

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mLock;
    ::ll::TypedStorage<4, 4, uint> mMaxSimultaneousRequests;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mRequestTaskGroup;
    ::ll::UntypedStorage<8, 24> mInFlightRequests;
    ::ll::TypedStorage<8, 32, std::priority_queue<std::pair<Bedrock::Http::Request, std::shared_ptr<Bedrock::Http::DispatchQueue::AsyncQueueResult>>, std::vector<std::pair<Bedrock::Http::Request, std::shared_ptr<Bedrock::Http::DispatchQueue::AsyncQueueResult>>>, Bedrock::Http::DispatchQueue::Compare>> mSubmittedRequests;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80>  mUnked6186;
    ::ll::UntypedStorage<4, 4>   mUnkd0e8a3;
    ::ll::UntypedStorage<8, 336> mUnk88bbd3;
    ::ll::UntypedStorage<8, 24>  mUnk458717;
    ::ll::UntypedStorage<8, 32>  mUnk122c3e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DispatchQueue& operator=(DispatchQueue const&);
    DispatchQueue(DispatchQueue const&);
#endif // @header-generator platform
    DispatchQueue();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DispatchQueue();
#else // @header-generator platform
    virtual ~DispatchQueue() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(::Bedrock::Http::Request&&);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Response>
    send(::Bedrock::Http::Request&& request) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handlePendingRequest();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> $send(::Bedrock::Http::Request&&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Response> $send(::Bedrock::Http::Request&& request);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
