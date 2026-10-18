#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/db_helpers/Category.h"
#include "mc/world/level/storage/db_helpers/OperationType.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
            // clang-format off
            ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCaptureTime;
            ::ll::TypedStorage<8, 8, ulong> mVal;
            // clang-format on
#else // @header-generator platform
            ::ll::UntypedStorage<8, 8> mUnkd7bb17;
            ::ll::UntypedStorage<8, 8> mUnkca0f5b;
#endif // @header-generator platform
            // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
        };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        public:
            // prevent constructor by default
            Snapshot& operator=(Snapshot const&);
            Snapshot(Snapshot const&);
            Snapshot();
        };
#endif // @header-generator platform
    };

    struct DBStorageAccumulator {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 512, std::array<DBStoragePerformanceData::AtomicAccumulator, 4>> mAccumulators;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 640> mUnk7892b7;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        DBStorageAccumulator& operator=(DBStorageAccumulator const&);
        DBStorageAccumulator(DBStorageAccumulator const&);
        DBStorageAccumulator();
#endif // @header-generator platform
    };

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 512, ::DBStoragePerformanceData::DBStorageAccumulator>                mOverallStats;
    ::ll::TypedStorage<8, 7168, std::array<DBStoragePerformanceData::DBStorageAccumulator, 14>> mCategoryStats;
#else // @header-generator platform
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
    ::ll::UntypedStorage<8, 640>  mUnka7e208;
    ::ll::UntypedStorage<8, 8960> mUnk5cba27;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~DBStoragePerformanceData();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    DBStoragePerformanceData& operator=(DBStoragePerformanceData const&);
    DBStoragePerformanceData(DBStoragePerformanceData const&);
    DBStoragePerformanceData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void resetAll();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
