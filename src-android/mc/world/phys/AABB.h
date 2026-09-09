#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Matrix;
struct AABBHitResult;
struct ClipCollideResult;
// clang-format on

class AABB {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> min;
    ::ll::TypedStorage<4, 12, ::Vec3> max;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AABB(::Vec3 const&, float);

    MCNAPI AABB(float, float, float, float, float, float);

    MCNAPI ::Vec3 axisInside(::AABB const&, ::Vec3) const;

    MCNAPI ::AABBHitResult clip(::Vec3 const&, ::Vec3 const&) const;

    MCNAPI ::Vec3 clipCollide(::AABB const&, ::Vec3 const&, bool, float*) const;

    MCNAPI float clipXCollide(::AABB const&, float, bool) const;

    MCNAPI float clipYCollide(::AABB const&, float, bool) const;

    MCNAPI float clipZCollide(::AABB const&, float, bool) const;

    MCNAPI ::AABB cloneAndExpandAlongDirection(::Vec3 const&) const;

    MCNAPI ::AABB cloneAndFloor(float, float) const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::AABB aroundRadius(::Vec3 const&, float);

    MCNAPI static ::ClipCollideResult clipCollide(::AABB const&, ::AABB const&, ::Vec3 const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::AABB const& BLOCK_SHAPE();

    MCNAPI static ::AABB const& BOX_AT_ORIGIN_WITH_NO_VOLUME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const&, float);

    MCNAPI void* $ctor(float, float, float, float, float, float);
    // NOLINTEND
};
