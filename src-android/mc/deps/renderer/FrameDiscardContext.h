#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct FrameDiscardContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mPreventFrameDiscard;
    // NOLINTEND
};

} // namespace mce
