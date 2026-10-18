#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/CrashDumpRenderData.h"
#else // @header-generator platform
#endif // @header-generator platform

struct CrashDumpRenderDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 1024, ::CrashDumpRenderData[128]> mRenderData;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 1024> mUnk968c89;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashDumpRenderDataArray& operator=(CrashDumpRenderDataArray const&);
    CrashDumpRenderDataArray(CrashDumpRenderDataArray const&);
    CrashDumpRenderDataArray();
#endif // @header-generator platform
};
