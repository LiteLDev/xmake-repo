#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct AttributeLayerSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mPriority;
    ::ll::TypedStorage<4, 4, float> mWeight;
    ::ll::TypedStorage<1, 1, bool>  mEnabled;
    ::ll::TypedStorage<1, 1, bool>  mTransitionsPaused;
    // NOLINTEND
};

} // namespace EAS
