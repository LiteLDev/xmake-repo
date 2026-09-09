#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct unz64_file_pos_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, unsigned long long> pos_in_zip_directory;
    ::ll::TypedStorage<8, 8, unsigned long long> num_of_file;
    // NOLINTEND
};
