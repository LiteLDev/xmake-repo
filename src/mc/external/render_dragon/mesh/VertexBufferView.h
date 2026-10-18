#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct VertexBufferView {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VertexBufferView() = default;
    // NOLINTEND
};
#else // @header-generator platform
struct VertexBufferView {};
#endif // @header-generator platform

} // namespace dragon
