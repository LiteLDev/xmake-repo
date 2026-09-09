#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

class Vec3 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> x;
    ::ll::TypedStorage<4, 4, float> y;
    ::ll::TypedStorage<4, 4, float> z;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Vec3 abs() const;

    MCNAPI ::Vec3 ceil() const;

    MCNAPI float distanceToLineSquared(::Vec3 const&, ::Vec3 const&) const;

    MCNAPI ::Vec3 floor(float) const;

    MCNAPI bool isFinite() const;

    MCNAPI bool isNan() const;

    MCNAPI float maxComponent() const;

    MCNAPI std::string toJsonString() const;

    MCNAPI std::string toString() const;

    MCNAPI ::Vec3 xz() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3 clamp(::Vec3 const&, ::Vec3 const&, ::Vec3 const&);

    MCNAPI static ::Vec3 directionFromRotation(::Vec2 const&);

    MCNAPI static ::Vec3 directionFromRotation(float, float);

    MCNAPI static ::Vec3 fromXZ(::Vec2 const&, float);

    MCNAPI static std::optional<Vec3> getIntersection(::Vec3 const&, ::Vec3 const&, ::Vec3 const&, ::Vec3 const&, bool);

    MCNAPI static ::Vec2 rotationFromDirection(::Vec3 const&);

    MCNAPI static ::Vec2 toXZ(::Vec3 const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& HALF();

    MCNAPI static ::Vec3 const& MAX();

    MCNAPI static ::Vec3 const& MIN();

    MCNAPI static ::Vec3 const& NEG_UNIT_X();

    MCNAPI static ::Vec3 const& NEG_UNIT_Y();

    MCNAPI static ::Vec3 const& NEG_UNIT_Z();

    MCNAPI static ::Vec3 const& ONE();

    MCNAPI static ::Vec3 const& TWO();

    MCNAPI static ::Vec3 const& UNIT_X();

    MCNAPI static ::Vec3 const& UNIT_Y();

    MCNAPI static ::Vec3 const& UNIT_Z();

    MCNAPI static ::Vec3 const& ZERO();
    // NOLINTEND
};
