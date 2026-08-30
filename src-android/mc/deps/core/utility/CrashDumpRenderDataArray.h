#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"
#include "mc/deps/core/utility/CrashDumpRenderData.h"

struct CrashDumpRenderDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 1024, ::CrashDumpRenderData[128]> mRenderData;
    // NOLINTEND
};
