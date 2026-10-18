#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct IndexBufferView {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IndexBufferView() = default;
    // NOLINTEND
};
#else // @header-generator platform
struct IndexBufferView {};
#endif // @header-generator platform

} // namespace dragon
