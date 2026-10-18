#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
class BufferUsage : public ::std::bitset<2> {
public:
    // BufferUsage inner types define
    using Inner = std::bitset<2>;

public:
    // prevent constructor by default
    BufferUsage();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::bitset<2> const& Default();
    // NOLINTEND
};
#else // @header-generator platform
class BufferUsage {};
#endif // @header-generator platform

} // namespace dragon
