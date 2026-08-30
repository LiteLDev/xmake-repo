#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class Vec2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> x;
    ::ll::TypedStorage<4, 4, float> y;
    // NOLINTEND

public:
    // prevent constructor by default
    Vec2(Vec2 const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isNan() const;

    MCNAPI std::string toJsonString() const;

    MCNAPI std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec2 rotate(::Vec2 const&, float const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec2 const& LOWEST();

    MCNAPI static ::Vec2 const& MAX();

    MCNAPI static ::Vec2 const& MIN();

    MCNAPI static ::Vec2 const& NEG_UNIT_X();

    MCNAPI static ::Vec2 const& NEG_UNIT_Y();

    MCNAPI static ::Vec2 const& ONE();

    MCNAPI static ::Vec2 const& UNIT_X();

    MCNAPI static ::Vec2 const& UNIT_Y();

    MCNAPI static ::Vec2 const& ZERO();
    // NOLINTEND
};
