#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DBStoragePerformanceTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mTotalWrites;
    ::ll::TypedStorage<8, 8, ulong> mTotalDataWritten;
    ::ll::TypedStorage<8, 8, ulong> mTotalWriteTime;
    ::ll::TypedStorage<8, 8, ulong> mTotalDeletes;
    ::ll::TypedStorage<8, 8, ulong> mTotalKeyLookUp;
    ::ll::TypedStorage<8, 8, ulong> mTotalKeyLookUpTime;
    ::ll::TypedStorage<8, 8, ulong> mTotalReads;
    ::ll::TypedStorage<8, 8, ulong> mNumReadsFailed;
    ::ll::TypedStorage<8, 8, ulong> mTotalDataRead;
    ::ll::TypedStorage<8, 8, ulong> mTotalReadTime;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkf0b49c;
    ::ll::UntypedStorage<8, 8> mUnk9b6364;
    ::ll::UntypedStorage<8, 8> mUnk103533;
    ::ll::UntypedStorage<8, 8> mUnk53c130;
    ::ll::UntypedStorage<8, 8> mUnke057b7;
    ::ll::UntypedStorage<8, 8> mUnk3b6b79;
    ::ll::UntypedStorage<8, 8> mUnkd52f50;
    ::ll::UntypedStorage<8, 8> mUnke3e97b;
    ::ll::UntypedStorage<8, 8> mUnkb009a4;
    ::ll::UntypedStorage<8, 8> mUnk498c7d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DBStoragePerformanceTelemetryData& operator=(DBStoragePerformanceTelemetryData const&);
    DBStoragePerformanceTelemetryData(DBStoragePerformanceTelemetryData const&);
    DBStoragePerformanceTelemetryData();
#endif // @header-generator platform
};
