#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framegraph::dependency {

#if defined(LL_PLAT_A) // @header-generator platform
struct BindTextureSliceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mip;
    ::ll::TypedStorage<1, 1, uchar> arrayIndex;
    // NOLINTEND
};
#else // @header-generator platform
struct BindTextureSliceData {};
#endif // @header-generator platform

} // namespace dragon::framegraph::dependency
