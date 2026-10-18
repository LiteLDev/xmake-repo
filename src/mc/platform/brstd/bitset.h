#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/brstd/detail/bitset_base.h"
#endif // @header-generator platform

namespace brstd {

#if defined(LL_PLAT_A) // @header-generator platform
template <int T0, typename T1>
class bitset {};
#else // @header-generator platform
template <std::size_t Bits, typename UnderlyingType>
constexpr std::size_t get_num_values() {
    static_assert(std::is_integral_v<UnderlyingType>, "UnderlyingType must be an integral type.");
    static_assert(Bits > 0, "Bits must be greater than zero.");
    constexpr std::size_t bits_per_type = sizeof(UnderlyingType) * 8;
    return (Bits + bits_per_type - 1) / bits_per_type;
}

template <std::size_t Bits, typename UnderlyingType>
class bitset
: public detail::
      bitset_base<bitset<Bits, UnderlyingType>, std::array<UnderlyingType, get_num_values<Bits, UnderlyingType>()>> {
    static constexpr size_t num_values = get_num_values<Bits, UnderlyingType>();
    using underlying_type =
        typename detail::bitset_base<bitset, std::array<UnderlyingType, num_values>>::underlying_type;
};
#endif // @header-generator platform

} // namespace brstd
