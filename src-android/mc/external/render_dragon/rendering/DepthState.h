#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/ComparisonFunction.h"

namespace dragon::rendering {

struct DepthState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mWriteDepth;
    ::ll::TypedStorage<1, 1, ::dragon::rendering::ComparisonFunction> mComparisonFunction;
    // NOLINTEND
};

} // namespace dragon::rendering
