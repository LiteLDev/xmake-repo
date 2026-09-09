#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components {

struct SortIndex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mIndex;
    // NOLINTEND
};

} // namespace dragon::frameobject::components
