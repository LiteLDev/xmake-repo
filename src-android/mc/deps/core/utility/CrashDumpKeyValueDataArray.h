#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpKeyValueData.h"
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

struct CrashDumpKeyValueDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8192, ::CrashDumpKeyValueData[512]> mKeyValueData;
    // NOLINTEND
};
