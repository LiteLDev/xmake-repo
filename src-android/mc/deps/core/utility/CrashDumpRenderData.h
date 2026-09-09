#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTag;
    ::ll::TypedStorage<2, 2, short>                  mPad;
    ::ll::TypedStorage<4, 4, int>                    mObjectId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CrashDumpRenderData(::CrashDumpLogStringID, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[3]> kFormat();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CrashDumpLogStringID, int);
    // NOLINTEND
};
