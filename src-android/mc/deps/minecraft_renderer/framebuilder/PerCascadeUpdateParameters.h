#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct PerCascadeUpdateParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mUpdateFrequency;
    ::ll::TypedStorage<4, 4, int> mUpdateOffset;
    // NOLINTEND
};

} // namespace mce::framebuilder
