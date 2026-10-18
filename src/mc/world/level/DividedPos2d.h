#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/Pos2d.h"
#endif // @header-generator platform

template <int T0>
#if defined(LL_PLAT_A) // @header-generator platform
class DividedPos2d {};
#else // @header-generator platform
class DividedPos2d : public ::Pos2d {
public:
    [[nodiscard]] constexpr DividedPos2d() noexcept                        = default;
    [[nodiscard]] constexpr DividedPos2d(DividedPos2d&&) noexcept          = default;
    LL_MAY_CONSTEXPR DividedPos2d& operator=(DividedPos2d&&) noexcept      = default;
    [[nodiscard]] constexpr DividedPos2d(DividedPos2d const&) noexcept     = default;
    LL_MAY_CONSTEXPR DividedPos2d& operator=(DividedPos2d const&) noexcept = default;

    [[nodiscard]] constexpr DividedPos2d(int x, int z) noexcept : Pos2d(x, z) {}

    template <class T>
    [[nodiscard]] constexpr DividedPos2d(T const& vec) noexcept
        requires(requires(T const& t) {
            { t.x } -> std::same_as<int>;
            { t.z } -> std::same_as<int>;
        })
    : Pos2d((vec.x >> 31) - ((vec.x >> 31) - vec.x) / T0, (vec.x >> 31) - ((vec.x >> 31) - vec.x) / T0) {}
};
#endif // @header-generator platform
