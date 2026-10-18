#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Quaternion;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
// clang-format on

class Matrix {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> _m;
#else // @header-generator platform
    ::ll::TypedStorage<4, 64, ::glm::mat4x4> _m;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Matrix();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Matrix();

    MCNAPI explicit Matrix(::glm::qua<float, (glm::qualifier)0> const&);

    MCNAPI Matrix(
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&
    );

    MCNAPI ::Matrix& operator=(::Matrix const&);

    MCNAPI bool operator==(::Matrix const&) const;

    MCNAPI void rotate(float, ::glm::vec<3, float, (glm::qualifier)0> const&);

    MCNAPI void rotate(float, float, float, float);

    MCNAPI void rotateXYZ(::Vec3 const&);

    MCNAPI void scale(float);

    MCNAPI void scale(float, float, float);

    MCNAPI void translate(::glm::vec<3, float, (glm::qualifier)0> const&);

    MCNAPI void translate(float, float, float);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI Matrix(::glm::vec4 const& row0, ::glm::vec4 const& row1, ::glm::vec4 const& row2, ::glm::vec4 const& row3);

    MCAPI bool operator==(::Matrix const& rhs) const;

    MCAPI void rotate(float a, ::glm::vec3 const& axis);

    MCAPI void rotate(float a, float x, float y, float z);

    MCAPI void rotateXYZ(::Vec3 const& rotation);

    MCAPI void scale(float x);

    MCAPI void scale(float x, float y, float z);

    MCAPI void translate(::glm::vec3 const& t);

    MCAPI void translate(float x, float y, float z);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Matrix const& IDENTITY();
#else // @header-generator platform
    MCAPI static ::Matrix const& IDENTITY();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::glm::qua<float, (glm::qualifier)0> const&);

    MCNAPI void* $ctor(
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void*
    $ctor(::glm::vec4 const& row0, ::glm::vec4 const& row1, ::glm::vec4 const& row2, ::glm::vec4 const& row3);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
