#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Color {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> r;
    ::ll::TypedStorage<4, 4, float> g;
    ::ll::TypedStorage<4, 4, float> b;
    ::ll::TypedStorage<4, 4, float> a;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Color(::glm::vec<4, float, (glm::qualifier)0> const&);

    MCNAPI Color(::glm::vec<3, float, (glm::qualifier)0> const&, float);

    MCNAPI void add(float, bool);

    MCNAPI ::mce::Color brighter(float) const;

    MCNAPI void clamp();

    MCNAPI ::mce::Color clamped() const;

    MCNAPI ::mce::Color darker(float) const;

    MCNAPI float distanceFrom(::mce::Color const&) const;

    MCNAPI bool isNan() const;

    MCNAPI void mul(float, bool);

    MCNAPI bool operator!=(::mce::Color const&) const;

    MCNAPI ::mce::Color& operator*=(float);

    MCNAPI ::mce::Color& operator+=(::mce::Color const&);

    MCNAPI ::mce::Color& operator-=(float const);

    MCNAPI bool operator<(::mce::Color const&) const;

    MCNAPI bool operator==(::mce::Color const&) const;

    MCNAPI float const& operator[](int) const;

    MCNAPI float& operator[](int);

    MCNAPI void setARGB(int);

    MCNAPI int toABGR() const;

    MCNAPI int toARGB() const;

    MCNAPI std::string toHexString() const;

    MCNAPI ::glm::vec<3, float, (glm::qualifier)0> toVec3() const;

    MCNAPI ::glm::vec<4, float, (glm::qualifier)0> toVec4() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::Color
    bilinear(::mce::Color const&, ::mce::Color const&, ::mce::Color const&, ::mce::Color const&, float, float);

    MCNAPI static ::mce::Color fromARGB(int);

    MCNAPI static ::mce::Color fromHSB(float, float, float);

    MCNAPI static ::mce::Color fromHexString(std::string const&);

    MCNAPI static ::mce::Color fromRGBHexString(std::string const&);

    MCNAPI static ::mce::Color lerp(::mce::Color const&, ::mce::Color const&, float);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::Color const& BLACK();

    MCNAPI static ::mce::Color const& BLUE();

    MCNAPI static ::mce::Color const& CYAN();

    MCNAPI static ::mce::Color const& GREEN();

    MCNAPI static ::mce::Color const& GREY();

    MCNAPI static ::mce::Color const& MINECOIN_GOLD();

    MCNAPI static ::mce::Color const& NIL();

    MCNAPI static ::mce::Color const& ORANGE();

    MCNAPI static ::mce::Color const& PARTY_BLUE();

    MCNAPI static ::mce::Color const& PINK();

    MCNAPI static ::mce::Color const& PURPLE();

    MCNAPI static ::mce::Color const& REBECCA_PURPLE();

    MCNAPI static ::mce::Color const& RED();

    MCNAPI static ::mce::Color const& SHADE_DOWN();

    MCNAPI static ::mce::Color const& SHADE_NORTH_SOUTH();

    MCNAPI static ::mce::Color const& SHADE_UP();

    MCNAPI static ::mce::Color const& SHADE_WEST_EAST();

    MCNAPI static ::mce::Color const& WHITE();

    MCNAPI static ::mce::Color const& YELLOW();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::glm::vec<4, float, (glm::qualifier)0> const&);

    MCNAPI void* $ctor(::glm::vec<3, float, (glm::qualifier)0> const&, float);
    // NOLINTEND
};

} // namespace mce
