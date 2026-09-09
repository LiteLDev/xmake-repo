#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"
#include "mc/deps/core/utility/CrashDumpPlayerData.h"

struct CrashDumpPlayerDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 256, ::CrashDumpPlayerData[4]> mPlayerData;
    // NOLINTEND
};
