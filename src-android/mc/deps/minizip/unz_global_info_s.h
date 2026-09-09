#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct unz_global_info_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> number_entry;
    ::ll::TypedStorage<8, 8, ulong> size_comment;
    // NOLINTEND
};
