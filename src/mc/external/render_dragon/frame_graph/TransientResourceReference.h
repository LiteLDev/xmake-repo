#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framegraph::detail {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct TransientResourceReference {};
#endif // @header-generator platform

} // namespace dragon::framegraph::detail
