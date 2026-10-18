#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::WriteThrottledOS {

class OSWriteThrottleTracker {
public:
    // OSWriteThrottleTracker inner types declare
    // clang-format off
    struct WriteThrottleTierInfo;
    struct OSWriteThrottleStats;
    // clang-format on

    // OSWriteThrottleTracker inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct WriteThrottleTierInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> mBudgetThresholdBytes;
        ::ll::TypedStorage<8, 8, ulong> mWriteSpeedBytes;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct WriteThrottleTierInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk3de7b2;
        ::ll::UntypedStorage<8, 8> mUnkedf517;
        // NOLINTEND
#else // @header-generator platform
    struct WriteThrottleTierInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct OSWriteThrottleStats {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 16, ::Core::WriteThrottledOS::OSWriteThrottleTracker::WriteThrottleTierInfo> mCurrentThrottleTier;
        ::ll::TypedStorage<8, 8, ulong> mBytesRemainingInBudget;
        ::ll::TypedStorage<8, 8, ulong> mBudgetBytesToMoveToNextLowerThrottleTier;
        ::ll::TypedStorage<8, 8, ulong> mBudgetBytesToMoveToNextHigherThrottleTier;
        ::ll::TypedStorage<1, 1, bool> mFailedRetrieval;
        // clang-format on
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~OSWriteThrottleTracker();

    virtual bool isWriteThrottledOS() const;

    virtual ::Core::WriteThrottledOS::OSWriteThrottleTracker::OSWriteThrottleStats getCurrentWriteThrottleStats(std::optional<ulong>) const;

    virtual ulong getEstimatedUnthrottledWriteSpeedBytes() const;

    virtual ulong getBudgetAccrualBytesPerSecond() const;

    virtual ulong getMaxBudgetBytes() const;

    virtual ulong getMinBudgetForPlayableExperience(int) const;

    virtual ulong getBudgetForWriteBudgetReplenished() const;

    virtual ulong getBudgetForWriteBudgetLow() const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isWriteThrottledOS() const;

    MCNAPI ::Core::WriteThrottledOS::OSWriteThrottleTracker::OSWriteThrottleStats
        $getCurrentWriteThrottleStats(std::optional<ulong>) const;

    MCNAPI ulong $getEstimatedUnthrottledWriteSpeedBytes() const;

    MCNAPI ulong $getBudgetAccrualBytesPerSecond() const;

    MCNAPI ulong $getMaxBudgetBytes() const;

    MCNAPI ulong $getMinBudgetForPlayableExperience(int) const;

    MCNAPI ulong $getBudgetForWriteBudgetReplenished() const;

    MCNAPI ulong $getBudgetForWriteBudgetLow() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    public:
        // prevent constructor by default
        WriteThrottleTierInfo& operator=(WriteThrottleTierInfo const&);
        WriteThrottleTierInfo(WriteThrottleTierInfo const&);
        WriteThrottleTierInfo();
    };

    struct OSWriteThrottleStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk4318ae;
        ::ll::UntypedStorage<8, 8>  mUnk5d8848;
        ::ll::UntypedStorage<8, 8>  mUnk6969bb;
        ::ll::UntypedStorage<8, 8>  mUnk8cb60b;
        ::ll::UntypedStorage<1, 1>  mUnk8c9cac;
        // NOLINTEND

    public:
        // prevent constructor by default
        OSWriteThrottleStats& operator=(OSWriteThrottleStats const&);
        OSWriteThrottleStats(OSWriteThrottleStats const&);
        OSWriteThrottleStats();
    };
#else // @header-generator platform
    struct OSWriteThrottleStats {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace Core::WriteThrottledOS
