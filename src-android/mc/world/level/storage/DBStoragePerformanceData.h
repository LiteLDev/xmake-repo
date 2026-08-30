#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/storage/db_helpers/Category.h"
#include "mc/world/level/storage/db_helpers/OperationType.h"

class DBStoragePerformanceData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DBStoragePerformanceData inner types declare
    // clang-format off
    class AtomicAccumulator;
    struct DBStorageAccumulator;
    // clang-format on

    // DBStoragePerformanceData inner types define
    class AtomicAccumulator {
    public:
        // AtomicAccumulator inner types declare
        // clang-format off
        struct Snapshot;
        // clang-format on

        // AtomicAccumulator inner types define
        struct Snapshot {
        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCaptureTime;
            ::ll::TypedStorage<8, 8, ulong> mVal;
            // clang-format on
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::atomic<ulong>>  mPeakValue;
        ::ll::TypedStorage<8, 8, std::atomic<double>> mPeakAveragePerSecond;
        ::ll::TypedStorage<8, 8, std::atomic<double>> mAverageValue;
        ::ll::TypedStorage<8, 8, std::atomic<double>> mAveragePerSecond;
        ::ll::TypedStorage<4, 4, std::atomic<int>>    mWindowInSeconds;
        ::ll::TypedStorage<8, 48, std::deque<DBStoragePerformanceData::AtomicAccumulator::Snapshot>> mSnapshots;
        ::ll::TypedStorage<4, 40, std::mutex>                                                        mMutex;
        // NOLINTEND
    };

    struct DBStorageAccumulator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 512, std::array<DBStoragePerformanceData::AtomicAccumulator, 4>> mAccumulators;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 512, ::DBStoragePerformanceData::DBStorageAccumulator>                mOverallStats;
    ::ll::TypedStorage<8, 7168, std::array<DBStoragePerformanceData::DBStorageAccumulator, 14>> mCategoryStats;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DBStoragePerformanceData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void resetAll();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<const char*, 14>& CATEGORY_NAMES();

    MCNAPI static std::array<const char*, 4>& OPERATION_NAMES();
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
