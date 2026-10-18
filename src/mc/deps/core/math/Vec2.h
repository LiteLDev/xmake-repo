#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class Vec2 {
#else // @header-generator platform
class Vec2 : public ll::math::floatN2<Vec2> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    using floatN2::floatN2;
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec2 const& LOWEST();
#else // @header-generator platform
    MCAPI static ::Vec2 const& ONE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec2 const& MAX();

    MCNAPI static ::Vec2 const& MIN();

    MCNAPI static ::Vec2 const& NEG_UNIT_X();

    MCNAPI static ::Vec2 const& NEG_UNIT_Y();

    MCNAPI static ::Vec2 const& ONE();

    MCNAPI static ::Vec2 const& UNIT_X();

    MCNAPI static ::Vec2 const& UNIT_Y();

    MCNAPI static ::Vec2 const& ZERO();
#else // @header-generator platform
    MCAPI static ::Vec2 const& ZERO();
#endif // @header-generator platform
    // NOLINTEND
};
