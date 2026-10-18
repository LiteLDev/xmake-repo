#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/render_dragon/texture_streaming/texture_cache/CacheFetchResult.h"
#include "mc/platform/brstd/promise.h"
#include "mc/platform/brstd/shared_future.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::texturestreaming {

struct HighResDispatcher {
public:
    // HighResDispatcher inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct PendingFetch;
#else // @header-generator platform
#endif // @header-generator platform
    struct ActivePendingFetchEntry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PendingFetch;
#endif // @header-generator platform
    // clang-format on

    // HighResDispatcher inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PendingFetch {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 16, std::shared_ptr<brstd::promise<std::optional<dragon::texturestreaming::CacheFetchResult>>>> mPromise;
        ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mValid;
        ::ll::TypedStorage<8, 8, ulong> mKey;
        ::ll::TypedStorage<1, 1, uchar> mPriority;
        // clang-format on
        // NOLINTEND
#else // @header-generator platform
    struct ActivePendingFetchEntry {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        PendingFetch& operator=(PendingFetch const&);
        PendingFetch();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingFetch();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ActivePendingFetchEntry {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mValid;
        ::ll::TypedStorage<8, 16, std::shared_ptr<brstd::promise<std::optional<dragon::texturestreaming::CacheFetchResult>>>> mPromise;
        ::ll::UntypedStorage<8, 8> mFuture;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        ActivePendingFetchEntry& operator=(ActivePendingFetchEntry const&);
        ActivePendingFetchEntry(ActivePendingFetchEntry const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ActivePendingFetchEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mPendingFetchMutex;
    ::ll::TypedStorage<8, 32, std::priority_queue<dragon::texturestreaming::HighResDispatcher::PendingFetch, std::vector<dragon::texturestreaming::HighResDispatcher::PendingFetch>, std::greater<dragon::texturestreaming::HighResDispatcher::PendingFetch>>> mPendingFetches;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, dragon::texturestreaming::HighResDispatcher::ActivePendingFetchEntry>> mActivePendingFetches;
    ::ll::TypedStorage<4, 4, uint> mActiveFetchCount;
    ::ll::TypedStorage<4, 4, uint> mMaxConcurrentFetches;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    HighResDispatcher();
#else // @header-generator platform
    struct PendingFetch {};
#endif // @header-generator platform
};

} // namespace dragon::texturestreaming
