#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLog.h"

// auto generated forward declare list
// clang-format off
struct CrashDump_AllData;
namespace google_breakpad { class ExceptionHandler; }
// clang-format on

class CrashDumpLog_android : public ::CrashDumpLog {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void initialize();

    MCNAPI static void registerWithExceptionHandler(::google_breakpad::ExceptionHandler*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::mutex& mInitMutex();

    MCNAPI static std::unique_ptr<CrashDump_AllData>& mStaticAllDataInstance();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
