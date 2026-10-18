#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class Vec3 {
#else // @header-generator platform
class Vec3 : public ll::math::floatN3<Vec3> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> x;
    ::ll::TypedStorage<4, 4, float> y;
    ::ll::TypedStorage<4, 4, float> z;
    // NOLINTEND
#else // @header-generator platform
    using floatN3::floatN3;
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::std::string toString() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 clamp(::Vec3 const&, ::Vec3 const&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI static ::Vec3 directionFromRotation(::Vec2 const& rot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 directionFromRotation(::Vec2 const&);
#else // @header-generator platform
    MCAPI static ::Vec3 directionFromRotation(float rotX, float rotY);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 directionFromRotation(float, float);

    MCNAPI static ::Vec3 fromXZ(::Vec2 const&, float);

    MCNAPI static std::optional<Vec3> getIntersection(::Vec3 const&, ::Vec3 const&, ::Vec3 const&, ::Vec3 const&, bool);

    MCNAPI static ::Vec2 rotationFromDirection(::Vec3 const&);

    MCNAPI static ::Vec2 toXZ(::Vec3 const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::Vec3> getIntersection(
        ::Vec3 const& lineOrigin,
        ::Vec3 const& lineDirectionUnit,
        ::Vec3 const& pointOnPlane,
        ::Vec3 const& planeNormal,
        bool          allowBehind
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& HALF();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Vec3 const& HALF();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& MAX();
#else // @header-generator platform
    MCAPI static ::Vec3 const& MAX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& MIN();
#else // @header-generator platform
    MCAPI static ::Vec3 const& MIN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& NEG_UNIT_X();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Vec3 const& NEG_UNIT_X();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& NEG_UNIT_Y();
#else // @header-generator platform
    MCAPI static ::Vec3 const& NEG_UNIT_Y();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& NEG_UNIT_Z();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Vec3 const& NEG_UNIT_Z();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& ONE();
#else // @header-generator platform
    MCAPI static ::Vec3 const& ONE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& TWO();
#else // @header-generator platform
    MCAPI static ::Vec3 const& UNIT_X();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& UNIT_X();
#else // @header-generator platform
    MCAPI static ::Vec3 const& UNIT_Y();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& UNIT_Y();
#else // @header-generator platform
    MCAPI static ::Vec3 const& UNIT_Z();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& UNIT_Z();

    MCNAPI static ::Vec3 const& ZERO();
#else // @header-generator platform
    MCAPI static ::Vec3 const& ZERO();
#endif // @header-generator platform
    // NOLINTEND
};
