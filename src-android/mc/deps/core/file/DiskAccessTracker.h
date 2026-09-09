#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DiskAccessDiagnostics.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/WriteOperation.h"
#include "mc/deps/core/file/write_throttledos/OSWriteThrottleTracker.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class DiskAccessDiagnostics; }
namespace Core { class PathView; }
namespace Core::WriteThrottledOS { class OSWriteThrottleTracker; }
// clang-format on

namespace Core {

class DiskAccessTracker {
public:
    // DiskAccessTracker inner types declare
    // clang-format off
    struct WriteOperation;
    struct TrackerStats;
    // clang-format on

    // DiskAccessTracker inner types define
    struct WriteOperation {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> writeAmount;
        ::ll::TypedStorage<8, 8, ulong> writeCount;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> timePoint;
        // clang-format on
        // NOLINTEND
    };

    struct TrackerStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> totalBytesWritten;
        ::ll::TypedStorage<4, 4, uint>  totalWriteCount;
        ::ll::TypedStorage<1, 1, bool>  isOverBudget;
        ::ll::TypedStorage<1, 1, bool>  isByteHintValid;
        ::ll::TypedStorage<1, 1, bool>  isCountHintValid;
        ::ll::TypedStorage<8, 8, ulong> byteHint;
        ::ll::TypedStorage<8, 8, ulong> countHint;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 48, std::deque<Core::DiskAccessTracker::WriteOperation>> mWriteOperations;
    ::ll::TypedStorage<8, 32, ::Core::DiskAccessTracker::TrackerStats> mMainTrackerStats;
    ::ll::TypedStorage<8, 8, ulong> mWriteOperationCount;
    ::ll::TypedStorage<8, 8, ulong> mTotalBytesWritten;
    ::ll::TypedStorage<8, 8, ulong> mTotalWriteCount;
    ::ll::UntypedStorage<8, 24> mIgnoredPaths;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::WriteThrottledOS::OSWriteThrottleTracker>> mCurrentWriteThrottleTracker;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::WriteThrottledOS::OSWriteThrottleTracker>> mOSWriteThrottleTracker;
    ::ll::UntypedStorage<8, 56> mCachedOSWriteStats;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::DiskAccessDiagnostics>> mDiskAccessDiagnostics;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (Core::PathView), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mOnSetFileSizeWriteOperation;
    ::ll::TypedStorage<4, 40, std::mutex> mWriteOpsMutex;
    ::ll::TypedStorage<4, 40, std::mutex> mOSStatsMutex;
    ::ll::TypedStorage<1, 1, bool> mShowVerboseLogs;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DiskAccessTracker();

    MCNAPI explicit DiskAccessTracker(std::unique_ptr<Core::DiskAccessDiagnostics>);

    MCNAPI void _addNewWriteOperation(ulong, ::Core::WriteOperation, ::Core::PathView);

    MCNAPI void _computeTrackerStats(
        ::Core::DiskAccessTracker::TrackerStats&,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI std::__deque_iterator<
        Core::DiskAccessTracker::WriteOperation,
        const Core::DiskAccessTracker::WriteOperation*,
        const Core::DiskAccessTracker::WriteOperation&,
        const Core::DiskAccessTracker::WriteOperation* const*,
        long,
        170>
        _findOldestWriteOperation(
            std::chrono::
                time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>,
            ulong
        ) const;

    MCNAPI void _setCurrentWriteThrottleTracker(std::shared_ptr<Core::WriteThrottledOS::OSWriteThrottleTracker>);

    MCNAPI void addIgnoredPath(::Core::PathView);

    MCNAPI ::Core::DiskAccessTracker::TrackerStats computeMainTrackerStats(
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>
    );

    MCNAPI void setOSWriteThrottleTracker(std::shared_ptr<Core::WriteThrottledOS::OSWriteThrottleTracker>);

    MCNAPI void setOnBudgetAboveRecoverThreshold(
        std::function<void(
            std::chrono::duration<long long, std::ratio<1, 1000000000>>,
            ulong,
            std::optional<ulong>,
            const std::string&
        )>
    );

    MCNAPI void setOnBudgetBelowLowThreshold(std::function<void(ulong, double, double, const std::string&)>);

    MCNAPI void setShouldRepeatLowTelemetryFunc(
        std::function<bool(Core::DiskAccessDiagnostics::WriteBudgetTelemetryPeriodState&)>
    );

    MCNAPI void showVerboseLogs(bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::DiskAccessTracker& getDiskAccessTracker();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& BYTE_WRITE_LIMIT_PERIOD_DURATION();

    MCNAPI static ulong const& BYTE_WRITE_LIMIT_PER_PERIOD();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& TOTAL_WRITE_BUFFER_DURATION();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const&
    WRITE_COUNT_LIMIT_PERIOD_DURATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::unique_ptr<Core::DiskAccessDiagnostics>);
    // NOLINTEND
};

} // namespace Core
