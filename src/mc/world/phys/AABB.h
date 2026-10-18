#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/phys/AABBHitResult.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Matrix;
struct AABBHitResult;
struct ClipCollideResult;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class AABB {
#else // @header-generator platform
class BoundingBox;

class AABB : public ll::math::CommutativeGroup<AABB, Vec3, Vec3> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> min;
    ::ll::TypedStorage<4, 12, ::Vec3> max;
    // NOLINTEND
#else // @header-generator platform
    union {
        Vec3 min, x, r, s;
    };
    union {
        Vec3 max, y, g, t, z, b, p;
    };

    [[nodiscard]] constexpr AABB() noexcept : min(0), max(0) {}
    [[nodiscard]] constexpr AABB(class AABB const& k) noexcept : min(k.min), max(k.max) {}
    [[nodiscard]] constexpr AABB(class Vec3 const& min, class Vec3 const& max) noexcept : min(min), max(max) {}
    constexpr AABB& operator=(const AABB&) noexcept = default;

    inline AABB& merge(AABB const& a) noexcept {
        *this = AABB{ll::math::min(a.min, min), ll::math::max(a.max, max)};
        return *this;
    }

    inline AABB& merge(Vec3 const& a) noexcept {
        *this = AABB{ll::math::min(a, min), ll::math::max(a, max)};
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

    [[nodiscard]] constexpr bool contains(Vec3 const& a) const noexcept { return a.ge(min).all() && a.le(max).all(); }

    [[nodiscard]] constexpr bool contains(AABB const& a) const noexcept {
        return a.min.ge(min).all() && a.max.le(max).all();
    }

    LLAPI explicit operator BoundingBox() const;

    LLAPI bool intersects(::AABB const& c) const;

    [[nodiscard]] constexpr Vec3 center() const noexcept { return (min + max) * 0.5f; }

    [[nodiscard]] constexpr AABB& shrink(float f) noexcept {
        min += f;
        max -= f;
        return *this;
    }

    [[nodiscard]] constexpr AABB& shrink(Vec3 const& offset) noexcept {
        min += offset;
        max -= offset;

        Vec3::forEachComponent([&]<typename axis_type, size_t iter> {
            auto& newMin = min.get<axis_type, iter>();
            auto& newMax = max.get<axis_type, iter>();

            if (newMin > newMax) {
                auto mid = (newMin + newMax) * 0.5f;
                newMin   = mid;
                newMax   = mid;
            }
        });

        return *this;
    }
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AABB(::Vec3 const&, float);
#else // @header-generator platform
    MCAPI ::AABBHitResult clip(::Vec3 const& a, ::Vec3 const& b) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AABB(float, float, float, float, float, float);
#else // @header-generator platform
    MCAPI ::AABB cloneAndFloor(float offsetMin, float offsetMax) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 axisInside(::AABB const&, ::Vec3) const;
#else // @header-generator platform
    MCAPI ::AABB cloneAndGrow(::Vec3 const& distance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABBHitResult clip(::Vec3 const&, ::Vec3 const&) const;
#else // @header-generator platform
    MCAPI ::AABB cloneAndGrow(float radius) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 clipCollide(::AABB const&, ::Vec3 const&, bool, float*) const;
#else // @header-generator platform
    MCAPI ::AABB cloneAndShrink(::Vec3 const& offset) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float clipXCollide(::AABB const&, float, bool) const;
#else // @header-generator platform
    MCAPI ::AABB cloneAndTransformByMatrix(::Matrix const& transform) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float clipYCollide(::AABB const&, float, bool) const;
#else // @header-generator platform
    MCAPI ::AABB cloneAndTranslate(::Vec3 const& offset) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float clipZCollide(::AABB const&, float, bool) const;
#else // @header-generator platform
    MCAPI float distanceTo(::AABB const& aabb) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB cloneAndExpandAlongDirection(::Vec3 const&) const;
#else // @header-generator platform
    MCAPI bool intersectSegment(
        ::Vec3 const& segmentBegin,
        ::Vec3 const& segmentEnd,
        ::Vec3&       intersectPoint,
        ::Vec3&       intersectNorm
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB cloneAndFloor(float, float) const;
#else // @header-generator platform
    MCAPI bool intersects(::Vec3 const& segmentBegin, ::Vec3 const& segmentEnd) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB cloneAndFloorMinAndCeilingMax() const;

    MCNAPI ::AABB cloneAndGrow(::Vec3 const&) const;

    MCNAPI ::AABB cloneAndGrow(float) const;

    MCNAPI ::AABB cloneAndShrink(::Vec3 const&) const;

    MCNAPI ::AABB cloneAndTransformByMatrix(::Matrix const&) const;

    MCNAPI ::AABB cloneAndTranslate(::Vec3 const&) const;

    MCNAPI bool contains(::Vec3 const&) const;

    MCNAPI bool contains(::AABB const&) const;

    MCNAPI float distanceTo(::Vec3 const&) const;

    MCNAPI float distanceTo(::AABB const&) const;

    MCNAPI float distanceToSqr(::Vec3 const&) const;

    MCNAPI ::Vec3 getBottomCenter() const;

    MCNAPI ::Vec3 getBounds() const;

    MCNAPI ::Vec3 getCenter() const;

    MCNAPI float getSize() const;

    MCNAPI ::Vec3 getTopCenter() const;

    MCNAPI float getVolume() const;

    MCNAPI bool intersectSegment(::Vec3 const&, ::Vec3 const&, ::Vec3&, ::Vec3&) const;

    MCNAPI bool intersects(::AABB const&) const;

    MCNAPI bool intersects(::Vec3 const&, ::Vec3 const&) const;

    MCNAPI bool intersectsInner(::AABB const&) const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator!=(::AABB const&) const;

    MCNAPI bool operator==(::AABB const&) const;

    MCNAPI ::AABB& set(::AABB const&);

    MCNAPI ::AABB& set(::Vec3 const&, ::Vec3 const&);

    MCNAPI ::AABB& set(float, float, float, float, float, float);

    MCNAPI ::AABB& shrink(::Vec3 const&);

    MCNAPI ::AABB& translateCenterTo(::Vec3 const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool operator!=(::AABB const& rhs) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::AABB aroundRadius(::Vec3 const&, float);
#else // @header-generator platform
    MCAPI static ::AABB aroundRadius(::Vec3 const& point, float radius);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClipCollideResult clipCollide(::AABB const&, ::AABB const&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI static ::ClipCollideResult
    clipCollide(::AABB const& stationary, ::AABB const& moving, ::Vec3 const& velocity);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::AABB const& BLOCK_SHAPE();
#else // @header-generator platform
    MCAPI static ::AABB const& BLOCK_SHAPE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::AABB const& BOX_AT_ORIGIN_WITH_NO_VOLUME();
#else // @header-generator platform
    MCAPI static ::AABB const& BOX_AT_ORIGIN_WITH_NO_VOLUME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Vec3 const&, float);

    MCNAPI void* $ctor(float, float, float, float, float, float);
#else // @header-generator platform
    MCAPI void* $ctor(::Vec3 const& min, ::Vec3 const& max);
#endif // @header-generator platform
    // NOLINTEND
};
