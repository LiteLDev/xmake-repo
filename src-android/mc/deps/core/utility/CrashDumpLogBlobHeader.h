#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogSectionType.h"

struct CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CrashDumpLogSectionType> mType;
    ::ll::TypedStorage<4, 4, uint>                      mSize;
    ::ll::TypedStorage<4, 4, uint>                      mIndex;
    ::ll::TypedStorage<4, 4, uint>                      mFieldCount;
    // NOLINTEND
};
