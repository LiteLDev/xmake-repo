#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpKeyValueData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTag0;
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTag1;
    ::ll::TypedStorage<4, 4, int>                    mValue0;
    ::ll::TypedStorage<8, 8, ulong>                  mValue1;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CrashDumpKeyValueData(::CrashDumpLogStringID, ::CrashDumpLogStringID, int, ulong);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[4]> kFormat();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CrashDumpLogStringID, ::CrashDumpLogStringID, int, ulong);
    // NOLINTEND
};
