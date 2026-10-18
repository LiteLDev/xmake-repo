#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

struct CrashDumpLogUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CrashDumpLogStringID getTagFromOptions(ulong, ::gsl::span<const CrashDumpLogStringID> const);
    // NOLINTEND
};
#else // @header-generator platform
struct CrashDumpLogUtils {};
#endif // @header-generator platform
