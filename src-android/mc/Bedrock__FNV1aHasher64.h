#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class FNV1aHasher64 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mHash;
    // NOLINTEND
};

} // namespace Bedrock
