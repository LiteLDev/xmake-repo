#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

#else // @header-generator platform
#endif // @header-generator platform
class Direction {
public:
    // Direction inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Type : uchar {
        SOUTH     = 0,
        WEST      = 1,
        NORTH     = 2,
        EAST      = 3,
        _Count    = 4,
        UNDEFINED = 255,
#else // @header-generator platform
    enum class Type : uchar {
        South     = 0,
        West      = 1,
        North     = 2,
        East      = 3,
        Count     = 4,
        Undefined = 255,
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Direction::Type convertFacingDirectionToDirection(uchar);

    MCNAPI static ::Direction::Type getDirection(float, float);

    MCNAPI static ::Direction::Type mirrorDirection(::Mirror, ::Direction::Type);

    MCNAPI static ::Direction::Type rotateDirection(::Direction::Type, ::Rotation);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[4]> DIRECTION_CLOCKWISE();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::Direction::Type const[]> DIRECTION_COUNTER_CLOCKWISE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[4]> DIRECTION_COUNTER_CLOCKWISE();
#else // @header-generator platform
    MCAPI static ::std::array<uchar, 4> const& DIRECTION_FACING();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<uchar, 4> const& DIRECTION_FACING();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::Direction::Type const[]> DIRECTION_OPPOSITE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[4]> DIRECTION_OPPOSITE();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::Direction::Type const[]> FACING_DIRECTION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[6]> FACING_DIRECTION();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, ::Direction::Type> const& FROM_STRING_MAP();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, Direction::Type> const& FROM_STRING_MAP();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<uchar[][6]> RELATIVE_DIRECTION_FACING();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<uchar const[4]> RELATIVE_DIRECTION_FACING();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<int const[]> STEP_X();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<int const[4]> STEP_X();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<int const[]> STEP_Z();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<int const[4]> STEP_Z();

    MCNAPI static std::unordered_map<uint, std::string> const& TO_STRING_MAP();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<uint, ::std::string> const& TO_STRING_MAP();
#endif // @header-generator platform
    // NOLINTEND
};
