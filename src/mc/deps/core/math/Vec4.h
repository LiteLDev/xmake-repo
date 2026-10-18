#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class Vec4 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> x;
    ::ll::TypedStorage<4, 4, float> y;
    ::ll::TypedStorage<4, 4, float> z;
    ::ll::TypedStorage<4, 4, float> w;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI float dot(::Vec3 const&) const;
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec4 const& MAX();
#else // @header-generator platform
    MCAPI static ::Vec4 const& MAX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec4 const& MIN();
#else // @header-generator platform
    MCAPI static ::Vec4 const& MIN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec4 const& ONE();

    MCNAPI static ::Vec4 const& ZERO();
#else // @header-generator platform
    MCAPI static ::Vec4 const& ONE();
#endif // @header-generator platform
    // NOLINTEND
};
