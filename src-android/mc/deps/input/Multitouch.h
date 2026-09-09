#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MouseAction;
class MouseDevice;
// clang-format on

class Multitouch {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void commit();

    MCNAPI static void feed(char, char, short, short, int);

    MCNAPI static int getActivePointerIdsThisUpdate(int const** const);

    MCNAPI static bool isEdgeTouch(int);

    MCNAPI static bool isPointerDown(int);

    MCNAPI static bool isPressed(int);

    MCNAPI static void reset();

    MCNAPI static void resetThisUpdate();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int& _activePointerCount();

    MCNAPI static ::std::add_lvalue_reference_t<int[12]> _activePointerList();

    MCNAPI static int& _activePointerThisUpdateCount();

    MCNAPI static ::std::add_lvalue_reference_t<int[12]> _activePointerThisUpdateList();

    MCNAPI static int& _index();

    MCNAPI static std::vector<MouseAction>& _inputs();

    MCNAPI static ::std::add_lvalue_reference_t<::MouseDevice[12]> _pointers();

    MCNAPI static ::std::add_lvalue_reference_t<bool[12]> _wasEdgeTouch();

    MCNAPI static ::std::add_lvalue_reference_t<bool[12]> _wasPressed();

    MCNAPI static ::std::add_lvalue_reference_t<bool[12]> _wasPressedThisUpdate();

    MCNAPI static ::std::add_lvalue_reference_t<bool[12]> _wasReleased();

    MCNAPI static ::std::add_lvalue_reference_t<bool[12]> _wasReleasedThisUpdate();
    // NOLINTEND
};
