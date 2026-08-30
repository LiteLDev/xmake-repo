#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpLogGUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>     Data1;
    ::ll::TypedStorage<2, 2, ushort>   Data2;
    ::ll::TypedStorage<2, 2, ushort>   Data3;
    ::ll::TypedStorage<1, 8, uchar[8]> Data4;
    // NOLINTEND
};
