#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/world/level/storage/DBStoragePerformanceTelemetryData.h"

// auto generated forward declare list
// clang-format off
class LevelStorageEventing;
// clang-format on

class DBStoragePerformanceTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 80, ::DBStoragePerformanceTelemetryData> mPerfData;
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextCaptureTime;
    ::ll::UntypedStorage<8, 24> mEventing;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DBStoragePerformanceTelemetry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DBStoragePerformanceTelemetry(::Bedrock::NonOwnerPointer<LevelStorageEventing> const);

    MCNAPI void _fireEventLevelDBPerformanceData(::Bedrock::Threading::LockGuard<std::mutex>&, bool);

    MCNAPI void fireEventLevelDBPerformanceData(bool);

    MCNAPI void recordDeleteData();

    MCNAPI void recordLookUpData(std::chrono::duration<long long, std::ratio<1, 1000000000>>);

    MCNAPI void recordReadData(bool, ulong, std::chrono::duration<long long, std::ratio<1, 1000000000>>);

    MCNAPI void recordWriteData(ulong, ulong, std::chrono::duration<long long, std::ratio<1, 1000000000>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<LevelStorageEventing> const);
    // NOLINTEND
};
