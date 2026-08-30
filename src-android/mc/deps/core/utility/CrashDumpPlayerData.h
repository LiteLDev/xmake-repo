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
    ::ll::TypedStorage<1, 64, char[64]> mSceneStack;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[1]> kFormat();
    // NOLINTEND
};
