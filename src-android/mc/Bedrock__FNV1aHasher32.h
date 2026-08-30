#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class FNV1aHasher32 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mHash;
    // NOLINTEND
};

} // namespace Bedrock
