#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/CrashDumpKeyValueData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

struct CrashDumpKeyValueDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8192, ::CrashDumpKeyValueData[512]> mKeyValueData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8192> mUnk5e3f0c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashDumpKeyValueDataArray& operator=(CrashDumpKeyValueDataArray const&);
    CrashDumpKeyValueDataArray(CrashDumpKeyValueDataArray const&);
    CrashDumpKeyValueDataArray();
#endif // @header-generator platform
};
