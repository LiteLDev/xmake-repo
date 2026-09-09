#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct unz_file_info64_internal_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, unsigned long long> offset_curfile;
    // NOLINTEND
};
