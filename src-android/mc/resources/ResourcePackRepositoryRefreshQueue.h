#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/threading/SharedAsync.h"

// auto generated forward declare list
// clang-format off
class IResourcePackRepositoryRefresher;
class TaskGroup;
// clang-format on

class ResourcePackRepositoryRefreshQueue {
public:
    // ResourcePackRepositoryRefreshQueue inner types declare
    // clang-format off
    struct PreviousTasks;
    struct RefreshResult;
    // clang-format on

    // ResourcePackRepositoryRefreshQueue inner types define
    struct PreviousTasks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>    mTask;
        ::ll::TypedStorage<1, 1, bool> mIsInitialized;
        ::ll::TypedStorage<1, 1, bool> mRefreshPacksRequested;
        ::ll::TypedStorage<1, 1, bool> mReloadUserPacksRequested;
        ::ll::TypedStorage<1, 1, bool> mCancelInitialization;
        // NOLINTEND
    };

    struct RefreshResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mImmediateAwait;
        ::ll::UntypedStorage<8, 16> mFullTask;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RefreshResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using RefreshTaskHandle = ::Bedrock::Threading::Async<void>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Bedrock::Threading::BasicLockbox<ResourcePackRepositoryRefreshQueue::PreviousTasks, std::mutex>>>> mPreviousTask;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IResourcePackRepositoryRefresher>>> mRefresher;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackRepositoryRefreshQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<void> _tryCompleteInitialization(::TaskGroup&);

    MCNAPI ::ResourcePackRepositoryRefreshQueue::RefreshResult refreshPacks(::TaskGroup&);

    MCNAPI ~ResourcePackRepositoryRefreshQueue();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void awaitResult(::TaskGroup&, ::Bedrock::Threading::Async<void>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
