#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogSectionType.h"
#else // @header-generator platform
#endif // @header-generator platform

struct CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::CrashDumpLogSectionType> mType;
    ::ll::TypedStorage<4, 4, uint>                      mSize;
    ::ll::TypedStorage<4, 4, uint>                      mIndex;
    ::ll::TypedStorage<4, 4, uint>                      mFieldCount;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnke8fa56;
    ::ll::UntypedStorage<4, 4> mUnkde3bdb;
    ::ll::UntypedStorage<4, 4> mUnk1e219d;
    ::ll::UntypedStorage<4, 4> mUnk1ea33a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashDumpLogBlobHeader& operator=(CrashDumpLogBlobHeader const&);
    CrashDumpLogBlobHeader(CrashDumpLogBlobHeader const&);
    CrashDumpLogBlobHeader();
#endif // @header-generator platform
};
