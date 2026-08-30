#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct tm_zip_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> tm_sec;
    ::ll::TypedStorage<4, 4, uint> tm_min;
    ::ll::TypedStorage<4, 4, uint> tm_hour;
    ::ll::TypedStorage<4, 4, uint> tm_mday;
    ::ll::TypedStorage<4, 4, uint> tm_mon;
    ::ll::TypedStorage<4, 4, uint> tm_year;
    // NOLINTEND
};
