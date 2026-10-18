#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogSectionHeader.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct CrashDumpLogSectionHeaderImpl : public ::CrashDumpLogSectionHeader {
public:
    // prevent constructor by default
    CrashDumpLogSectionHeaderImpl();
};
#else // @header-generator platform
struct CrashDumpLogSectionHeaderImpl : public ::CrashDumpLogSectionHeader {};
#endif // @header-generator platform
