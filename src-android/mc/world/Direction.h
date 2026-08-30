#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

class Direction {
public:
    // Direction inner types define
    enum Type : uchar {
        SOUTH     = 0,
        WEST      = 1,
        NORTH     = 2,
        EAST      = 3,
        _Count    = 4,
        UNDEFINED = 255,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Direction::Type convertFacingDirectionToDirection(uchar);

    MCNAPI static ::Direction::Type getDirection(float, float);

    MCNAPI static ::Direction::Type mirrorDirection(::Mirror, ::Direction::Type);

    MCNAPI static ::Direction::Type rotateDirection(::Direction::Type, ::Rotation);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[4]> DIRECTION_CLOCKWISE();

    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[4]> DIRECTION_COUNTER_CLOCKWISE();

    MCNAPI static std::array<uchar, 4> const& DIRECTION_FACING();

    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[4]> DIRECTION_OPPOSITE();

    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[6]> FACING_DIRECTION();

    MCNAPI static std::unordered_map<std::string, Direction::Type> const& FROM_STRING_MAP();

    MCNAPI static ::std::add_lvalue_reference_t<uchar const[4]> RELATIVE_DIRECTION_FACING();

    MCNAPI static ::std::add_lvalue_reference_t<int const[4]> STEP_X();

    MCNAPI static ::std::add_lvalue_reference_t<int const[4]> STEP_Z();

    MCNAPI static std::unordered_map<uint, std::string> const& TO_STRING_MAP();
    // NOLINTEND
};
