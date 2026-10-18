#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTag0;
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTag1;
    ::ll::TypedStorage<4, 4, int>                    mEventThreadId;
    ::ll::TypedStorage<4, 4, uint>                   mTimeStamp;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    CrashDumpEventData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CrashDumpEventData(::CrashDumpLogStringID tag0, ::CrashDumpLogStringID tag1);
    // NOLINTEND

public:
#endif // @header-generator platform
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[4]> kFormat();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CrashDumpLogStringID tag0, ::CrashDumpLogStringID tag1);
    // NOLINTEND
#endif // @header-generator platform
};
