#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/CrashDumpGameplayData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

struct CrashDumpGameplayDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 1536, ::CrashDumpGameplayData[128]> mGameplayData;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 1536> mUnk5e51ca;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashDumpGameplayDataArray& operator=(CrashDumpGameplayDataArray const&);
    CrashDumpGameplayDataArray(CrashDumpGameplayDataArray const&);
    CrashDumpGameplayDataArray();
#endif // @header-generator platform
};
