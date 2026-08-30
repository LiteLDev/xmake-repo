#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct unz_file_pos_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> pos_in_zip_directory;
    ::ll::TypedStorage<8, 8, ulong> num_of_file;
    // NOLINTEND
};
