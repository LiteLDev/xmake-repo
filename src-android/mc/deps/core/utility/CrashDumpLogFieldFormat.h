#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/diagnostics/CrashDumpLogFormatCode.h"

struct CrashDumpLogFieldFormat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, char[24]>                mMemberName;
    ::ll::TypedStorage<4, 4, uint>                     mMemberSize;
    ::ll::TypedStorage<4, 4, ::CrashDumpLogFormatCode> mMemberFormatCode;
    // NOLINTEND
};
