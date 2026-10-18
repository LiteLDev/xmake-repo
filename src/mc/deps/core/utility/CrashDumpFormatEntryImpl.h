#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogFieldFormat.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/diagnostics/CrashDumpLogFormatCode.h"
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
struct CrashDumpFormatEntryImpl : public ::CrashDumpLogFieldFormat {
public:
    // prevent constructor by default
    CrashDumpFormatEntryImpl();
};
#else // @header-generator platform
struct CrashDumpFormatEntryImpl : public ::CrashDumpLogFieldFormat {};
#endif // @header-generator platform
