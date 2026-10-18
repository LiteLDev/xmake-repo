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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mSecondsToWrite;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mSecondsToWaitForBudget;
        ::ll::TypedStorage<8, 8, ulong> mBudgetRemainingAfterOperation;
        ::ll::TypedStorage<1, 1, bool>  mWillBeImpactedByWriteThrottling;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk1ed76a;
        ::ll::UntypedStorage<8, 8> mUnk45cdca;
        ::ll::UntypedStorage<8, 8> mUnk9859d3;
        ::ll::UntypedStorage<1, 1> mUnkf4f881;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using Duration = std::chrono::duration<long long, std::ratio<1, 1000000000>>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        WriteTimeEstimate& operator=(WriteTimeEstimate const&);
        WriteTimeEstimate(WriteTimeEstimate const&);
        WriteTimeEstimate();
    };
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::Core::WriteThrottledOS::ThrottledFileWriteEstimator::WriteTimeEstimate getTimeToWrite(
        int                                                     recoverLeewayHintMb,
        ::Core::WriteThrottledOS::OSWriteThrottleTracker const& tracker,
        uint64                                                  size,
        ::std::optional<uint64>                                 startingBudget,
        ::std::optional<uint64>                                 maxWriteSpeedBytes,
        ::std::chrono::nanoseconds const&                       timeDiffbeforeImpacted,
        ::std::chrono::nanoseconds const&                       timeDiffbeforeImpactedWhileWaiting
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core::WriteThrottledOS
