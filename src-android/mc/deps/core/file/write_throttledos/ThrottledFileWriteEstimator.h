#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core::WriteThrottledOS { class OSWriteThrottleTracker; }
// clang-format on

namespace Core::WriteThrottledOS {

class ThrottledFileWriteEstimator {
public:
    // ThrottledFileWriteEstimator inner types declare
    // clang-format off
    struct WriteTimeEstimate;
    // clang-format on

    // ThrottledFileWriteEstimator inner types define
    struct WriteTimeEstimate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mSecondsToWrite;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mSecondsToWaitForBudget;
        ::ll::TypedStorage<8, 8, ulong> mBudgetRemainingAfterOperation;
        ::ll::TypedStorage<1, 1, bool>  mWillBeImpactedByWriteThrottling;
        // NOLINTEND
    };

    using Duration = std::chrono::duration<long long, std::ratio<1, 1000000000>>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::WriteThrottledOS::ThrottledFileWriteEstimator::WriteTimeEstimate getTimeForBudget(
        int,
        ::Core::WriteThrottledOS::OSWriteThrottleTracker const&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>> const&
    );

    MCNAPI static ::Core::WriteThrottledOS::ThrottledFileWriteEstimator::WriteTimeEstimate getTimeToWrite(
        int,
        ::Core::WriteThrottledOS::OSWriteThrottleTracker const&,
        ulong,
        std::optional<ulong>,
        std::optional<ulong>,
        std::chrono::duration<long long, std::ratio<1, 1000000000>> const&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>> const&
    );
    // NOLINTEND
};

} // namespace Core::WriteThrottledOS
