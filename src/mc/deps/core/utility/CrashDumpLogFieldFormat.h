#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/diagnostics/CrashDumpLogFormatCode.h"
#else // @header-generator platform
#endif // @header-generator platform

struct CrashDumpLogFieldFormat {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, char[24]>                mMemberName;
    ::ll::TypedStorage<4, 4, uint>                     mMemberSize;
    ::ll::TypedStorage<4, 4, ::CrashDumpLogFormatCode> mMemberFormatCode;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 24> mUnkf4b19b;
    ::ll::UntypedStorage<4, 4>  mUnka73ee0;
    ::ll::UntypedStorage<4, 4>  mUnkae313d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashDumpLogFieldFormat& operator=(CrashDumpLogFieldFormat const&);
    CrashDumpLogFieldFormat(CrashDumpLogFieldFormat const&);
    CrashDumpLogFieldFormat();
#endif // @header-generator platform
};
