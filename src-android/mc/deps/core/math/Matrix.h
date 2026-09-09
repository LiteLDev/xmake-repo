#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Quaternion;
class Vec3;
// clang-format on

class Matrix {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> _m;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Matrix const& IDENTITY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::glm::qua<float, (glm::qualifier)0> const&);

    MCNAPI void* $ctor(
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&
    );
    // NOLINTEND
};
