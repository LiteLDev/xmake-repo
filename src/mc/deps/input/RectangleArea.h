#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class RectangleArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> _x0;
    ::ll::TypedStorage<4, 4, float> _x1;
    ::ll::TypedStorage<4, 4, float> _y0;
    ::ll::TypedStorage<4, 4, float> _y1;
    // NOLINTEND

public:
    // prevent constructor by default
    RectangleArea(RectangleArea const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float centerX() const;

    MCNAPI float centerY() const;

    MCNAPI ::RectangleArea grow(float) const;

    MCNAPI ::RectangleArea grow(::glm::vec<2, float, (glm::qualifier)0> const&) const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool isInside(float, float) const;

    MCNAPI bool isOutsideOf(::RectangleArea const&) const;

    MCNAPI bool isOverlapping(::RectangleArea const&) const;

    MCNAPI ::RectangleArea leftHalf() const;

    MCNAPI float maxX() const;

    MCNAPI float maxY() const;

    MCNAPI float minX() const;

    MCNAPI float minY() const;

    MCNAPI bool operator!=(::RectangleArea const&) const;

    MCNAPI ::RectangleArea& operator=(::RectangleArea const&);

    MCNAPI ::RectangleArea rightHalf() const;

    MCNAPI ::RectangleArea scale(float) const;

    MCNAPI void set(float, float, float, float);

    MCNAPI ::RectangleArea translate(float, float) const;

    MCNAPI ::RectangleArea uniformScale(float) const;

    MCNAPI ::RectangleArea unionRects(::RectangleArea const&) const;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RectangleArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> _x0;
    ::ll::TypedStorage<4, 4, float> _x1;
    ::ll::TypedStorage<4, 4, float> _y0;
    ::ll::TypedStorage<4, 4, float> _y1;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isOverlapping(::RectangleArea const& rect) const;
    // NOLINTEND
};
#else // @header-generator platform
class RectangleArea {};
#endif // @header-generator platform
#endif // @header-generator platform
