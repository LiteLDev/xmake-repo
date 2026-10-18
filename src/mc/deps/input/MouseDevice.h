#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/MouseAction.h"

class MouseDevice {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                       _index;
    ::ll::TypedStorage<2, 2, short>                     _x;
    ::ll::TypedStorage<2, 2, short>                     _y;
    ::ll::TypedStorage<2, 2, short>                     _dx;
    ::ll::TypedStorage<2, 2, short>                     _dy;
    ::ll::TypedStorage<2, 2, short>                     _xOld;
    ::ll::TypedStorage<2, 2, short>                     _yOld;
    ::ll::TypedStorage<1, 5, char[5]>                   _buttonStates;
    ::ll::TypedStorage<8, 24, std::vector<MouseAction>> _inputs;
    ::ll::TypedStorage<4, 4, int>                       _firstMovementType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void feed(char, schar, short, short, short, short, bool);

    MCNAPI short getX();

    MCNAPI short getY();

    MCNAPI ~MouseDevice();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class MouseAction;
// clang-format on

class MouseDevice {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           _index;
    ::ll::TypedStorage<2, 2, short>                         _x;
    ::ll::TypedStorage<2, 2, short>                         _y;
    ::ll::TypedStorage<2, 2, short>                         _dx;
    ::ll::TypedStorage<2, 2, short>                         _dy;
    ::ll::TypedStorage<2, 2, short>                         _xOld;
    ::ll::TypedStorage<2, 2, short>                         _yOld;
    ::ll::TypedStorage<1, 5, char[5]>                       _buttonStates;
    ::ll::TypedStorage<8, 24, ::std::vector<::MouseAction>> _inputs;
    ::ll::TypedStorage<4, 4, int>                           _firstMovementType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    feed(char actionButtonId, schar buttonData, short x, short y, short dx, short dy, bool forceMotionlessPointer);
    // NOLINTEND
};
#else // @header-generator platform
class MouseDevice {};
#endif // @header-generator platform
#endif // @header-generator platform
