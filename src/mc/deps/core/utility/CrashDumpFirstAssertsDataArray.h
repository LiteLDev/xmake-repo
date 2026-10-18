#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/CrashDumpAssertData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

struct CrashDumpFirstAssertsDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 384, ::CrashDumpAssertData[3]> mAssertData;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 384> mUnk439f05;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashDumpFirstAssertsDataArray& operator=(CrashDumpFirstAssertsDataArray const&);
    CrashDumpFirstAssertsDataArray(CrashDumpFirstAssertsDataArray const&);
    CrashDumpFirstAssertsDataArray();
#endif // @header-generator platform
};
