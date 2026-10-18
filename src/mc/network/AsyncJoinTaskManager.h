#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/AsyncJoinAllow.h"
#include "mc/network/AsyncJoinDeny.h"
#include "mc/network/SourceClientHash.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
class NetworkIdentifier;
class TaskGroup;
struct PlayerAuthenticationInfo;
// clang-format on

class AsyncJoinTaskManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // AsyncJoinTaskManager inner types declare
    // clang-format off
    struct PendingVerdictEntry;
    // clang-format on

    // AsyncJoinTaskManager inner types define
    struct PendingVerdictEntry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 16>                  pendingVerdict;
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            16,
            ::Bedrock::Threading::Async<::std::vector<::Bedrock::Threading::SharedAsync<
                ::std::variant<::std::monostate, ::AsyncJoinAllow, ::AsyncJoinDeny>>>>>
                                                     pendingVerdict;
#endif // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>               disconnected;
        ::ll::TypedStorage<8, 8, ::SourceClientHash> sourceClientHash;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        PendingVerdictEntry& operator=(PendingVerdictEntry const&);
        PendingVerdictEntry(PendingVerdictEntry const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>     mAsyncJoinCallbacks;
    ::ll::TypedStorage<8, 8, ulong> mNextAsyncJoinCallbackId;
    ::ll::UntypedStorage<1, 144>    mAsyncJoinCallbacksMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, AsyncJoinTaskManager::PendingVerdictEntry>> mPendingVerdicts;
    ::ll::TypedStorage<8, 8, ulong>                                                                 mNextVerdictID;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>>                           mAsyncJoinTaskGroup;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>>           mVerdictTimeout;
    ::ll::TypedStorage<8, 48, ::nonstd::expected<AsyncJoinAllow, AsyncJoinDeny>>                    mDefaultVerdict;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<
            uint64,
            ::brstd::move_only_function<void(
                ::NetworkIdentifier const&,
                ::PlayerAuthenticationInfo const&,
                ::SubClientId,
                ::std::shared_ptr<::AsyncVerdictPromise>
            )>>>
                                                  mAsyncJoinCallbacks;
    ::ll::TypedStorage<8, 8, uint64>              mNextAsyncJoinCallbackId;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mAsyncJoinCallbacksMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::AsyncJoinTaskManager::PendingVerdictEntry>>
                                                                                     mPendingVerdicts;
    ::ll::TypedStorage<8, 8, uint64>                                                 mNextVerdictID;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>>        mAsyncJoinTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                             mVerdictTimeout;
    ::ll::TypedStorage<8, 56, ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny>> mDefaultVerdict;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncJoinTaskManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AsyncJoinTaskManager();
#else // @header-generator platform
    virtual ~AsyncJoinTaskManager() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AsyncJoinTaskManager(std::unique_ptr<TaskGroup>, ::nonstd::expected<AsyncJoinAllow, AsyncJoinDeny>);

    MCNAPI ::Bedrock::Threading::Async<nonstd::expected<AsyncJoinAllow, AsyncJoinDeny>>
    handleAsyncJoinCallbacks(::NetworkIdentifier const&, ::PlayerAuthenticationInfo const&, ::SubClientId);

    MCNAPI std::unique_ptr<ulong, std::function<void(ulong*)>> registerAsyncJoinCallback(
        ::brstd::move_only_function<void(
            const NetworkIdentifier&,
            const PlayerAuthenticationInfo&,
            SubClientId,
            std::shared_ptr<AsyncVerdictPromise>
        )>
#else // @header-generator platform
    MCAPI AsyncJoinTaskManager(
        ::std::unique_ptr<::TaskGroup>                        taskGroup,
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> defaultJoinVerdict
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removeExistingPendingVerdictIfPresent(::SourceClientHash);
#else // @header-generator platform
    MCAPI ::Bedrock::Threading::Async<::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny>> handleAsyncJoinCallbacks(
        ::NetworkIdentifier const&        source,
        ::PlayerAuthenticationInfo const& playerInfo,
        ::SubClientId                     subClientId
    );

    MCAPI ::std::unique_ptr<uint64, ::std::function<void(uint64*)>> registerAsyncJoinCallback(
        ::brstd::move_only_function<void(
            ::NetworkIdentifier const&,
            ::PlayerAuthenticationInfo const&,
            ::SubClientId,
            ::std::shared_ptr<::AsyncVerdictPromise>
        )> callback
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::unique_ptr<TaskGroup>, ::nonstd::expected<AsyncJoinAllow, AsyncJoinDeny>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::TaskGroup>                        taskGroup,
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> defaultJoinVerdict
    );
#endif // @header-generator platform
    // NOLINTEND
};
