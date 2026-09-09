#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/write_throttledos/ThrottledFileWriteEstimator.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class TaskGroup;
namespace Core::WriteThrottledOS { class OSWriteThrottleTracker; }
// clang-format on

class ThrottledFileWriteManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ThrottledFileWriteManager inner types declare
    // clang-format off
    struct TransactionContext;
    struct TelemetryOperationInProgress;
    // clang-format on

    // ThrottledFileWriteManager inner types define
    struct TransactionContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::string>> associatedContentIDs;
        // NOLINTEND

    public:
        // prevent constructor by default
        TransactionContext(TransactionContext const&);
        TransactionContext();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::ThrottledFileWriteManager::TransactionContext&
        operator=(::ThrottledFileWriteManager::TransactionContext const&);

        MCNAPI ~TransactionContext();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct TelemetryOperationInProgress {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> totalWriteSizeBytes;
        ::ll::TypedStorage<8, 24, ::ThrottledFileWriteManager::TransactionContext> context;
        ::ll::TypedStorage<8, 8, ulong> budgetBytesAtStartOfOperation;
        ::ll::UntypedStorage<8, 32> originalEstimate;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> writeStartTimestamp;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> writeCompleteAndWaitStartTimestamp;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        TelemetryOperationInProgress(TelemetryOperationInProgress const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~TelemetryOperationInProgress();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using PushOSWriteThrottleScreen =
        ::brstd::move_only_function<void(std::chrono::duration<double, std::ratio<1, 1>>, std::shared_ptr<bool>)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 64> mPushOSWriteThrottleScreen;
    ::ll::UntypedStorage<8, 24> mAppPlatform;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ThrottledFileWriteManager::TelemetryOperationInProgress>> mTelemetryInProgress;
    ::ll::TypedStorage<4, 40, std::mutex> mTelemetryMutex;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTelemetryLastLargeFileTransactionCompleteTimestamp;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::WriteThrottledOS::OSWriteThrottleTracker>> mOSWriteThrottleTracker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mWriteThrottleTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::WriteThrottledOS::OSWriteThrottleTracker>> mOSWriteThrottleTrackerTestOverride;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mTimeDiffBeforeImpacted;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mTimeDiffBeforeImpactedWhileWaiting;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ThrottledFileWriteManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThrottledFileWriteManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
        Init(::brstd::move_only_function<void(std::chrono::duration<double, std::ratio<1, 1>>, std::shared_ptr<bool>)>);

    MCNAPI ThrottledFileWriteManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        std::shared_ptr<Core::WriteThrottledOS::OSWriteThrottleTracker>
    );

    MCNAPI ::Bedrock::Threading::Async<bool>
    beginLargeFileTransaction(ulong, std::string const&, ::ThrottledFileWriteManager::TransactionContext&&);

    MCNAPI void emitTelemetryEvent(
        std::string const&,
        bool,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI ::Bedrock::Threading::Async<void> endLargeFileTransaction(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& defaultTimeDiff();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        std::shared_ptr<Core::WriteThrottledOS::OSWriteThrottleTracker>
    );
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
