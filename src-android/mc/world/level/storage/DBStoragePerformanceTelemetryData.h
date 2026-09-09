#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DBStoragePerformanceTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
