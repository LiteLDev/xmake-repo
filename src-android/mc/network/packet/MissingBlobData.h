#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MissingBlobData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>        mBlobId;
    ::ll::TypedStorage<8, 24, std::string> mBlobData;
    // NOLINTEND
};
