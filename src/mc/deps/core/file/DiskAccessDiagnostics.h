#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core::WriteThrottledOS { class OSWriteThrottleTracker; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

class DiskAccessDiagnostics {
public:
    // DiskAccessDiagnostics inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct WriteBudgetTelemetryPeriodState;
#else // @header-generator platform
#endif // @header-generator platform
    struct WriteBudgetHistoryEntry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct WriteBudgetTelemetryPeriodState;
#endif // @header-generator platform
    // clang-format on

    // DiskAccessDiagnostics inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct WriteBudgetHistoryEntry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLogTime;
        ::ll::TypedStorage<8, 8, ulong> mWriteBudget;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk5ccd86;
        ::ll::UntypedStorage<8, 8> mUnk9efbce;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        WriteBudgetHistoryEntry& operator=(WriteBudgetHistoryEntry const&);
        WriteBudgetHistoryEntry(WriteBudgetHistoryEntry const&);
        WriteBudgetHistoryEntry();
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using OnBudgetBelowLowThreshold = std::function<void(ulong, double, double, const std::string&)>;
#else // @header-generator platform
    struct WriteBudgetTelemetryPeriodState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk799b8c;
        ::ll::UntypedStorage<8, 16> mUnk1c787a;
        ::ll::UntypedStorage<8, 16> mUnkcca2d0;
        ::ll::UntypedStorage<8, 8>  mUnk23685b;
        ::ll::UntypedStorage<8, 32> mUnk9a656c;
        ::ll::UntypedStorage<8, 16> mUnk268eb0;
        // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using OnBudgetAboveRecoverThreshold = std::function<void(
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        ulong,
        std::optional<ulong>,
        const std::string&
    )>;

    using ShouldRepeatLowTelemetryFunc =
        std::function<bool(Core::DiskAccessDiagnostics::WriteBudgetTelemetryPeriodState&)>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        WriteBudgetTelemetryPeriodState& operator=(WriteBudgetTelemetryPeriodState const&);
        WriteBudgetTelemetryPeriodState(WriteBudgetTelemetryPeriodState const&);
        WriteBudgetTelemetryPeriodState();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnkd9cddd;
    ::ll::UntypedStorage<8, 8>   mUnka49009;
    ::ll::UntypedStorage<8, 8>   mUnkf40863;
    ::ll::UntypedStorage<8, 8>   mUnk290b2b;
    ::ll::UntypedStorage<8, 8>   mUnk86b77f;
    ::ll::UntypedStorage<1, 1>   mUnk827706;
    ::ll::UntypedStorage<8, 64>  mUnkf026ca;
    ::ll::UntypedStorage<8, 64>  mUnk41af43;
    ::ll::UntypedStorage<8, 64>  mUnk76de62;
    ::ll::UntypedStorage<8, 16>  mUnk3728ac;
    ::ll::UntypedStorage<8, 40>  mUnk723655;
    ::ll::UntypedStorage<8, 104> mUnk62d933;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DiskAccessDiagnostics& operator=(DiskAccessDiagnostics const&);
    DiskAccessDiagnostics(DiskAccessDiagnostics const&);
#endif // @header-generator platform
    DiskAccessDiagnostics();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DiskAccessDiagnostics(::std::chrono::nanoseconds logInterval);

#ifdef LL_PLAT_C
    MCNAPI void update(
        uint64                     byteWrittenPerPeriod,
        ::std::chrono::nanoseconds byteWriteLimitPeriodDuration,
        uint64                     byteWriteLimitPerPeriod,
        uint                       writeCountPerPeriod,
        ::std::chrono::nanoseconds writeCountLimitPeriodDuration,
        uint                       writeCountLimitPerPeriod
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::chrono::nanoseconds logInterval);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Core
