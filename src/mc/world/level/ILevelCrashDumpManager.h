#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

class ILevelCrashDumpManager {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILevelCrashDumpManager() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCrashDumpLogStringID(::CrashDumpLogStringID) const = 0;
#else // @header-generator platform
    virtual void setCrashDumpLogStringID(::CrashDumpLogStringID crashDumpLogStringID) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
