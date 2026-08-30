#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::atlas {

struct PackerAllocId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mId;
    // NOLINTEND
};

} // namespace dragon::atlas
