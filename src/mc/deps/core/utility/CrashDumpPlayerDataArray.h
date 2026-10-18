#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/CrashDumpPlayerData.h"
#else // @header-generator platform
#endif // @header-generator platform

struct CrashDumpPlayerDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 256, ::CrashDumpPlayerData[4]> mPlayerData;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 256> mUnk69c1ae;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashDumpPlayerDataArray& operator=(CrashDumpPlayerDataArray const&);
    CrashDumpPlayerDataArray(CrashDumpPlayerDataArray const&);
    CrashDumpPlayerDataArray();
#endif // @header-generator platform
};
