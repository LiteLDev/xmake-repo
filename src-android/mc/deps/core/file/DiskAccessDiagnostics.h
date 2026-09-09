#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core::WriteThrottledOS { class OSWriteThrottleTracker; }
// clang-format on

namespace Core {

class DiskAccessDiagnostics {
public:
    // DiskAccessDiagnostics inner types declare
    // clang-format off
    struct WriteBudgetTelemetryPeriodState;
    struct WriteBudgetHistoryEntry;
    // clang-format on

    // DiskAccessDiagnostics inner types define
    struct WriteBudgetTelemetryPeriodState {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> mLowestBudget;
        ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mLastWriteBudgetLowTime;
        ::ll::TypedStorage<8, 16, std::optional<ulong>> mLowestOSMaxWriteSpeed;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mTotalThrottledTime;
        ::ll::TypedStorage<8, 24, std::string> mCorrelationId;
        ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mLastWorldIdGen;
        // clang-format on
        // NOLINTEND
    };

    struct WriteBudgetHistoryEntry {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLogTime;
        ::ll::TypedStorage<8, 8, ulong> mWriteBudget;
        // clang-format on
        // NOLINTEND
    };

    using OnBudgetBelowLowThreshold = std::function<void(ulong, double, double, const std::string&)>;

    using OnBudgetAboveRecoverThreshold = std::function<void(
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        ulong,
        std::optional<ulong>,
        const std::string&
    )>;

    using ShouldRepeatLowTelemetryFunc =
        std::function<bool(Core::DiskAccessDiagnostics::WriteBudgetTelemetryPeriodState&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mLogInterval;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastLogTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mFirstLogTime;
    ::ll::TypedStorage<8, 8, double> mWriteMBPerMinuteHWM;
    ::ll::TypedStorage<8, 8, double> mWriteCountPerMinuteHWM;
    ::ll::TypedStorage<1, 1, bool> mShowVerboseLogs;
    ::ll::UntypedStorage<8, 48> mOnBudgetBelowLowThreshold;
    ::ll::UntypedStorage<8, 48> mOnBudgetAboveRecoverThreshold;
    ::ll::UntypedStorage<8, 48> mShouldRepeatLowTelemetry;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::WriteThrottledOS::OSWriteThrottleTracker>> mOSWriteThrottleTracker;
    ::ll::TypedStorage<8, 48, std::deque<Core::DiskAccessDiagnostics::WriteBudgetHistoryEntry>> mWriteBudgetHistory;
    ::ll::TypedStorage<8, 96, std::optional<Core::DiskAccessDiagnostics::WriteBudgetTelemetryPeriodState>> mWriteBudgetTelemetryPeriodState;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DiskAccessDiagnostics();
};

} // namespace Core
