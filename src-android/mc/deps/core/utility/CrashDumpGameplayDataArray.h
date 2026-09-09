#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpGameplayData.h"
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

struct CrashDumpGameplayDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 1536, ::CrashDumpGameplayData[128]> mGameplayData;
    // NOLINTEND
};
