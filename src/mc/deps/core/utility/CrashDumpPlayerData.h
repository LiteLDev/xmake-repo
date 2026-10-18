#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpPlayerData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 64, char[64]> mSceneStack;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 64> mUnk59f85e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashDumpPlayerData& operator=(CrashDumpPlayerData const&);
    CrashDumpPlayerData(CrashDumpPlayerData const&);
    CrashDumpPlayerData();
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[1]> kFormat();
    // NOLINTEND
};
