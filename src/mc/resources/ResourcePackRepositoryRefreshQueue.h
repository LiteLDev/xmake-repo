#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/threading/SharedAsync.h"
#else // @header-generator platform
#include "mc/deps/core/threading/IAsyncResult.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 16>    mTask;
        ::ll::TypedStorage<1, 1, bool> mIsInitialized;
        ::ll::TypedStorage<1, 1, bool> mRefreshPacksRequested;
        ::ll::TypedStorage<1, 1, bool> mReloadUserPacksRequested;
        ::ll::TypedStorage<1, 1, bool> mCancelInitialization;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnk29b357;
        ::ll::UntypedStorage<1, 1>  mUnk3395ad;
        ::ll::UntypedStorage<1, 1>  mUnkd0e979;
        ::ll::UntypedStorage<1, 1>  mUnkb4cbcb;
        ::ll::UntypedStorage<1, 1>  mUnk79b162;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        PreviousTasks& operator=(PreviousTasks const&);
        PreviousTasks(PreviousTasks const&);
        PreviousTasks();
#endif // @header-generator platform
    };

    struct RefreshResult {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 16> mImmediateAwait;
        ::ll::UntypedStorage<8, 16> mFullTask;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnkdb5a08;
        ::ll::UntypedStorage<8, 16> mUnk9ad35f;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RefreshResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
        // prevent constructor by default
        RefreshResult& operator=(RefreshResult const&);
        RefreshResult(RefreshResult const&);
        RefreshResult();
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using RefreshTaskHandle = ::Bedrock::Threading::Async<void>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Bedrock::Threading::BasicLockbox<ResourcePackRepositoryRefreshQueue::PreviousTasks, std::mutex>>>> mPreviousTask;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IResourcePackRepositoryRefresher>>> mRefresher;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk6f9588;
    ::ll::UntypedStorage<8, 8> mUnk34f403;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ResourcePackRepositoryRefreshQueue& operator=(ResourcePackRepositoryRefreshQueue const&);
    ResourcePackRepositoryRefreshQueue(ResourcePackRepositoryRefreshQueue const&);
#endif // @header-generator platform
    ResourcePackRepositoryRefreshQueue();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> _tryCompleteInitialization(::TaskGroup&);
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> _tryCompleteInitialization(::TaskGroup& taskGroup);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI ::ResourcePackRepositoryRefreshQueue::RefreshResult refreshPacks(::TaskGroup& taskGroup);
#endif // @header-generator platform
    // NOLINTEND
};
