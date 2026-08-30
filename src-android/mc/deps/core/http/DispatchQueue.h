#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/Response.h"
#include "mc/deps/core/http/DispatcherProcess.h"
#include "mc/deps/core/http/Request.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncResultBase.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroup.h"

namespace Bedrock::Http {

class DispatchQueue : public ::Bedrock::Http::DispatcherProcess {
public:
    // DispatchQueue inner types declare
    // clang-format off
    class AsyncQueueResult;
    struct Compare;
    // clang-format on

    // DispatchQueue inner types define
    class AsyncQueueResult : public ::Bedrock::Threading::AsyncResultBase<Bedrock::Http::Response> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mIsValid;
        ::ll::UntypedStorage<8, 16>    mAsyncResponse;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~AsyncQueueResult();

        virtual void _cancel();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $_cancel();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct Compare {};

    using RequestHolder =
        std::pair<Bedrock::Http::Request, std::shared_ptr<Bedrock::Http::DispatchQueue::AsyncQueueResult>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mLock;
    ::ll::TypedStorage<4, 4, uint> mMaxSimultaneousRequests;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mRequestTaskGroup;
    ::ll::UntypedStorage<8, 24> mInFlightRequests;
    ::ll::TypedStorage<8, 32, std::priority_queue<std::pair<Bedrock::Http::Request, std::shared_ptr<Bedrock::Http::DispatchQueue::AsyncQueueResult>>, std::vector<std::pair<Bedrock::Http::Request, std::shared_ptr<Bedrock::Http::DispatchQueue::AsyncQueueResult>>>, Bedrock::Http::DispatchQueue::Compare>> mSubmittedRequests;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DispatchQueue();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DispatchQueue();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(::Bedrock::Http::Request&&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handlePendingRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> $send(::Bedrock::Http::Request&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
