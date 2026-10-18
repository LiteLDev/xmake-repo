#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, int T1, int T2, int T3>
class MultidimensionalArray {};
#else // @header-generator platform
template <typename T, size_t... Ns>
class MultidimensionalArray : public std::array<T, [] {
    size_t v = 1;
    ((v *= Ns), ...);
    return v;
}()> {
public:
    consteval size_t dim() const { return sizeof...(Ns); }
};
#endif // @header-generator platform

} // namespace Util
