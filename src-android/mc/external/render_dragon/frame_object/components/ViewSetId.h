#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components {

struct ViewSetId {
public:
    // ViewSetId inner types define
    using Id = ushort;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mValue;
    // NOLINTEND
};

} // namespace dragon::frameobject::components
