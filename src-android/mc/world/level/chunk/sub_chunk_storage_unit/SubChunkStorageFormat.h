#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SubChunkStorageUnit {

union SubChunkStorageFormat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>     mField_70223bec;
    ::ll::TypedStorage<1, 1, char> raw;
    // NOLINTEND
};
} // namespace SubChunkStorageUnit
