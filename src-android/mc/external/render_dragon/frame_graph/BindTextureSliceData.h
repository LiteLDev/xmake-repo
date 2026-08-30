#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framegraph::dependency {

struct BindTextureSliceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mip;
    ::ll::TypedStorage<1, 1, uchar> arrayIndex;
    // NOLINTEND
};

} // namespace dragon::framegraph::dependency
