#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct BrpakIndexEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mDataOffset;
    ::ll::TypedStorage<8, 8, ulong> mSize;
    ::ll::TypedStorage<4, 4, uint>  mCrc;
    // NOLINTEND
};

} // namespace Bedrock::Resources
