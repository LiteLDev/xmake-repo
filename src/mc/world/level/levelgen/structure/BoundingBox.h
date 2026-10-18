#pragma once

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "ll/api/coro/Generator.h"
#endif // @header-generator platform
#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IntArrayTag;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
class BoundingBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> min;
    ::ll::TypedStorage<4, 12, ::BlockPos> max;
    // NOLINTEND
#else // @header-generator platform
class AABB;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BoundingBox : public ll::math::CommutativeGroup<BoundingBox, BlockPos, BlockPos> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BoundingBox& operator=(BoundingBox const&);
#else // @header-generator platform
    union {
        BlockPos min, x, r, s;
    };
    union {
        BlockPos max, y, g, t, z, b, p;
    };

    [[nodiscard]] constexpr BoundingBox() noexcept : min(0), max(0) {}
    [[nodiscard]] constexpr BoundingBox(class BoundingBox const& k) noexcept = default;
    constexpr BoundingBox& operator=(class BoundingBox const& k) noexcept    = default;
    [[nodiscard]] constexpr BoundingBox(BlockPos const& min, BlockPos const& max) noexcept : min(min), max(max) {}

    ll::coro::Generator<BlockPos> forEachPos() const {
        for (int dy = min.y; dy <= max.y; ++dy)
            for (int dx = min.x; dx <= max.x; ++dx)
                for (int dz = min.z; dz <= max.z; ++dz) {
                    co_yield BlockPos{dx, dy, dz};
                }
    }

    constexpr BoundingBox& merge(BoundingBox const& a) noexcept {
        *this = BoundingBox{ll::math::min(a.min, min), ll::math::max(a.max, max)};
        return *this;
    }

    constexpr BoundingBox& merge(BlockPos const& a) noexcept {
        *this = BoundingBox{ll::math::min(a, min), ll::math::max(a, max)};
        return *this;
    }

    template <typename T, size_t N>
    [[nodiscard]] constexpr T& get() noexcept {
        if constexpr (N == 0) {
            return x;
        } else if constexpr (N == 1) {
            return y;
        } else {
            static_assert(ll::traits::always_false<T>);
        }
    }

    template <typename T, size_t N>
    [[nodiscard]] constexpr T const& get() const noexcept {
        if constexpr (N == 0) {
            return x;
        } else if constexpr (N == 1) {
            return y;
        } else {
            static_assert(ll::traits::always_false<T>);
        }
    }

    [[nodiscard]] bool contains(BlockPos const& a) const noexcept { return a.ge(min).all() && a.le(max).all(); }

    [[nodiscard]] bool contains(BoundingBox const& a) const noexcept {
        return a.min.ge(min).all() && a.max.le(max).all();
    }

    [[nodiscard]] BlockPos getSideLength() const noexcept { return max - min + 1; }

    LLNDAPI operator class AABB() const;
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BoundingBox(::BlockPos const&, ::BlockPos const&, ::Rotation const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, ::BlockPos const&, ::Rotation const);
#else // @header-generator platform
    MCAPI void applyTransformation(::BlockPos const& pivot, ::Rotation rotationXZ, bool mirrorX, bool mirrorZ);
#endif // @header-generator platform
    // NOLINTEND
};
