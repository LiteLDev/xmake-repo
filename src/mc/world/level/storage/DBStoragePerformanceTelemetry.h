#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/LockGuard.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/DBStoragePerformanceTelemetryData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class LevelStorageEventing;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
// clang-format on

class DBStoragePerformanceTelemetry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 80, ::DBStoragePerformanceTelemetryData> mPerfData;
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextCaptureTime;
    ::ll::UntypedStorage<8, 24> mEventing;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk98c37d;
    ::ll::UntypedStorage<8, 80> mUnkb28d92;
    ::ll::UntypedStorage<8, 8>  mUnk932436;
    ::ll::UntypedStorage<8, 24> mUnkeb0085;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DBStoragePerformanceTelemetry& operator=(DBStoragePerformanceTelemetry const&);
    DBStoragePerformanceTelemetry(DBStoragePerformanceTelemetry const&);
#endif // @header-generator platform
    DBStoragePerformanceTelemetry();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DBStoragePerformanceTelemetry(::Bedrock::NonOwnerPointer<LevelStorageEventing> const);
#else // @header-generator platform
    MCNAPI explicit DBStoragePerformanceTelemetry(::Bedrock::NonOwnerPointer<::LevelStorageEventing> eventing);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _fireEventLevelDBPerformanceData(::Bedrock::Threading::LockGuard<std::mutex>&, bool);
#else // @header-generator platform
    MCNAPI void
    _fireEventLevelDBPerformanceData(::Bedrock::Threading::LockGuard<::Bedrock::Threading::Mutex>&, bool force);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fireEventLevelDBPerformanceData(bool);
#else // @header-generator platform
    MCNAPI void fireEventLevelDBPerformanceData(bool force);
#endif // @header-generator platform

    MCNAPI void recordDeleteData();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void recordLookUpData(std::chrono::duration<long long, std::ratio<1, 1000000000>>);
#else // @header-generator platform
    MCNAPI void recordLookUpData(::std::chrono::nanoseconds lookUpTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void recordReadData(bool, ulong, std::chrono::duration<long long, std::ratio<1, 1000000000>>);
#else // @header-generator platform
    MCNAPI void recordReadData(bool successfulRead, uint64 bytesRead, ::std::chrono::nanoseconds readTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void recordWriteData(ulong, ulong, std::chrono::duration<long long, std::ratio<1, 1000000000>>);
#else // @header-generator platform
    MCNAPI void recordWriteData(uint64 numWrites, uint64 bytesWritten, ::std::chrono::nanoseconds writeTime);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<LevelStorageEventing> const);
#else // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::LevelStorageEventing> eventing);
#endif // @header-generator platform
    // NOLINTEND
};
