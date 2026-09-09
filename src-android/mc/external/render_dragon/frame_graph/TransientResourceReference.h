#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framegraph::detail {

struct TransientResourceReference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mReference;
    ::ll::TypedStorage<1, 1, uchar> mMipLevel;
    ::ll::TypedStorage<1, 1, uchar> mArrayIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    TransientResourceReference();
};

} // namespace dragon::framegraph::detail
