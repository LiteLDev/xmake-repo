#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpFrameData.h"
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

struct CrashDumpFrameDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 256, ::CrashDumpFrameData[8]> mFrameData;
    // NOLINTEND
};
