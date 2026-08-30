#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VertIndices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> vrt_i;
    ::ll::TypedStorage<4, 4, int> tex_i;
    ::ll::TypedStorage<4, 4, int> nrm_i;
    // NOLINTEND
};
