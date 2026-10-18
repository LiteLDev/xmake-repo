#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

#if defined(LL_PLAT_A) // @header-generator platform
struct NullType {};
#else // @header-generator platform
struct NullType {
    [[nodiscard]] constexpr bool operator==(NullType const&) const noexcept = default;
};
#endif // @header-generator platform

} // namespace cereal
