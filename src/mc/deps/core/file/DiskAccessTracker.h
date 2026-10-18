#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DiskAccessDiagnostics.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/WriteOperation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/write_throttledos/OSWriteThrottleTracker.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class DiskAccessDiagnostics; }
namespace Core { class PathView; }
namespace Core::WriteThrottledOS { class OSWriteThrottleTracker; }
// clang-format on

namespace Core {

class DiskAccessTracker {
public:
    // DiskAccessTracker inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct WriteOperation;
#else // @header-generator platform
#endif // @header-generator platform
    struct TrackerStats;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct WriteOperation;
#endif // @header-generator platform
    // clang-format on

    // DiskAccessTracker inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct TrackerStats {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong> totalBytesWritten;
        ::ll::TypedStorage<4, 4, uint>  totalWriteCount;
        ::ll::TypedStorage<1, 1, bool>  isOverBudget;
        ::ll::TypedStorage<1, 1, bool>  isByteHintValid;
        ::ll::TypedStorage<1, 1, bool>  isCountHintValid;
        ::ll::TypedStorage<8, 8, ulong> byteHint;
        ::ll::TypedStorage<8, 8, ulong> countHint;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk7f81a1;
        ::ll::UntypedStorage<4, 4> mUnkbd5b4c;
        ::ll::UntypedStorage<1, 1> mUnkf1891e;
        ::ll::UntypedStorage<1, 1> mUnk268666;
        ::ll::UntypedStorage<1, 1> mUnk700cbe;
        ::ll::UntypedStorage<8, 8> mUnke2d2e0;
        ::ll::UntypedStorage<8, 8> mUnk19960e;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        TrackerStats& operator=(TrackerStats const&);
        TrackerStats(TrackerStats const&);
        TrackerStats();
    };

    struct WriteOperation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk45f898;
        ::ll::UntypedStorage<8, 8> mUnkdacc78;
        ::ll::UntypedStorage<8, 8> mUnk8312bc;
        // NOLINTEND

    public:
        // prevent constructor by default
        WriteOperation& operator=(WriteOperation const&);
        WriteOperation(WriteOperation const&);
        WriteOperation();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnk23c562;
    ::ll::UntypedStorage<8, 32> mUnke3c629;
    ::ll::UntypedStorage<8, 8>  mUnk4dcf2e;
    ::ll::UntypedStorage<8, 8>  mUnk8b0df6;
    ::ll::UntypedStorage<8, 8>  mUnkec4b4c;
    ::ll::UntypedStorage<8, 16> mUnk70b829;
    ::ll::UntypedStorage<8, 16> mUnk81e3dd;
    ::ll::UntypedStorage<8, 16> mUnk164044;
    ::ll::UntypedStorage<8, 56> mUnk893e32;
    ::ll::UntypedStorage<8, 8>  mUnkdb336a;
    ::ll::UntypedStorage<8, 8>  mUnk4b0c78;
    ::ll::UntypedStorage<8, 80> mUnka734d7;
    ::ll::UntypedStorage<8, 80> mUnk37a284;
    ::ll::UntypedStorage<1, 1>  mUnk51bb1c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DiskAccessTracker& operator=(DiskAccessTracker const&);
    DiskAccessTracker(DiskAccessTracker const&);
    DiskAccessTracker();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DiskAccessTracker();
#else // @header-generator platform
    MCNAPI explicit DiskAccessTracker(::std::unique_ptr<::Core::DiskAccessDiagnostics> diagnostics);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DiskAccessTracker(std::unique_ptr<Core::DiskAccessDiagnostics>);
#else // @header-generator platform
    MCNAPI void _addNewWriteOperation(uint64 amount, ::Core::WriteOperation writeOperation, ::Core::PathView path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addNewWriteOperation(ulong, ::Core::WriteOperation, ::Core::PathView);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void _computeTrackerStats(
        ::Core::DiskAccessTracker::TrackerStats& trackerStats,
        ::std::chrono::steady_clock::time_point  byteWriteCalculationWindow,
        ::std::chrono::steady_clock::time_point  writeCountCalculationWindow
    );

    MCNAPI void _setCurrentWriteThrottleTracker(
        ::std::shared_ptr<::Core::WriteThrottledOS::OSWriteThrottleTracker> osWriteThrottleTracker
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _computeTrackerStats(
        ::Core::DiskAccessTracker::TrackerStats&,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );
#else // @header-generator platform
    MCNAPI void addIgnoredPath(::Core::PathView path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Core::DiskAccessTracker::TrackerStats computeMainTrackerStats(
        ::std::chrono::nanoseconds byteWriteCalculationWindow,
        ::std::chrono::nanoseconds writeCountCalculationWindow
    );

    MCNAPI void computeTrackerStats(
        ::Core::DiskAccessTracker::TrackerStats& trackerStats,
        ::std::chrono::nanoseconds               byteWriteCalculationWindow,
        ::std::chrono::nanoseconds               writeCountCalculationWindow
    );

    MCNAPI void setOSWriteThrottleTracker(
        ::std::shared_ptr<::Core::WriteThrottledOS::OSWriteThrottleTracker> osWriteThrottleTracker
    );

    MCNAPI void setOnBudgetAboveRecoverThreshold(
        ::std::function<void(::std::chrono::nanoseconds, uint64, ::std::optional<uint64>, ::std::string const&)>
            onBudgetAboveRecoverThreshold
    );

    MCNAPI void setOnBudgetBelowLowThreshold(
        ::std::function<void(uint64, double, double, ::std::string const&)> onBudgetBelowLowThreshold
    );

    MCNAPI void setShouldRepeatLowTelemetryFunc(
        ::std::function<bool(::Core::DiskAccessDiagnostics::WriteBudgetTelemetryPeriodState&)>
            shouldRepeatLowTelemetryFunc
    );

    MCNAPI void update();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::unique_ptr<Core::DiskAccessDiagnostics>);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::unique_ptr<::Core::DiskAccessDiagnostics> diagnostics);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
