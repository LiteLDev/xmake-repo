#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommonSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTotalCount;
    ::ll::TypedStorage<4, 4, int> mFilteredCount;
    ::ll::TypedStorage<4, 4, int> mUnfilteredDocumentCount;
    // NOLINTEND
};
