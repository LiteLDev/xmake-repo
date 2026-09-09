#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpAssertData.h"
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

struct CrashDumpLastAssertsDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 384, ::CrashDumpAssertData[3]> mAssertData;
    // NOLINTEND
};
