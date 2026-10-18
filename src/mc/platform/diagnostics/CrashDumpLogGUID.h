#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpLogGUID {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>     Data1;
    ::ll::TypedStorage<2, 2, ushort>   Data2;
    ::ll::TypedStorage<2, 2, ushort>   Data3;
    ::ll::TypedStorage<1, 8, uchar[8]> Data4;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk106ad5;
    ::ll::UntypedStorage<2, 2> mUnk45d02a;
    ::ll::UntypedStorage<2, 2> mUnk7f0180;
    ::ll::UntypedStorage<1, 8> mUnk20aa0b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashDumpLogGUID& operator=(CrashDumpLogGUID const&);
    CrashDumpLogGUID(CrashDumpLogGUID const&);
    CrashDumpLogGUID();
#endif // @header-generator platform
};
