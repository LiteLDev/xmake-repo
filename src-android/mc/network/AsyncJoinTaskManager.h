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
        ::ll::UntypedStorage<8, 16>                  pendingVerdict;
        ::ll::TypedStorage<1, 1, bool>               disconnected;
        ::ll::TypedStorage<8, 8, ::SourceClientHash> sourceClientHash;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingVerdictEntry& operator=(PendingVerdictEntry const&);
        PendingVerdictEntry(PendingVerdictEntry const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>     mAsyncJoinCallbacks;
    ::ll::TypedStorage<8, 8, ulong> mNextAsyncJoinCallbackId;
    ::ll::UntypedStorage<1, 144>    mAsyncJoinCallbacksMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, AsyncJoinTaskManager::PendingVerdictEntry>> mPendingVerdicts;
    ::ll::TypedStorage<8, 8, ulong>                                                                 mNextVerdictID;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>>                           mAsyncJoinTaskGroup;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>>           mVerdictTimeout;
    ::ll::TypedStorage<8, 48, ::nonstd::expected<AsyncJoinAllow, AsyncJoinDeny>>                    mDefaultVerdict;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncJoinTaskManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncJoinTaskManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    );

    MCNAPI void removeExistingPendingVerdictIfPresent(::SourceClientHash);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // NOLINTEND
};
