#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class PathBuffer {};
#else // @header-generator platform
class PathBuffer {
public:
    T0       value;
    T0&      get() { return value; }
    explicit operator T0&() noexcept { return value; }
    explicit operator T0 const&() const noexcept { return value; }
};
#endif // @header-generator platform

} // namespace Core
