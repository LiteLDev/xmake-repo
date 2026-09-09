#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class SamplerGroupCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mCache;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear();
    // NOLINTEND
};

} // namespace mce
