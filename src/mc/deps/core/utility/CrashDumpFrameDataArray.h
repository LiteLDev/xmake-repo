#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/CrashDumpFrameData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

struct CrashDumpFrameDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 256, ::CrashDumpFrameData[8]> mFrameData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 256> mUnke28012;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashDumpFrameDataArray& operator=(CrashDumpFrameDataArray const&);
    CrashDumpFrameDataArray(CrashDumpFrameDataArray const&);
    CrashDumpFrameDataArray();
#endif // @header-generator platform
};
