#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class MouseAction;
class MouseDevice;
// clang-format on

class Multitouch {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void reset();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<int[]> _activePointerList();

    MCAPI static int& _activePointerThisUpdateCount();

    MCAPI static ::std::add_lvalue_reference_t<int[]> _activePointerThisUpdateList();

    MCAPI static ::std::vector<::MouseAction>& _inputs();

    MCAPI static ::std::add_lvalue_reference_t<::MouseDevice[]> _pointers();

    MCAPI static ::std::add_lvalue_reference_t<bool[]> _wasEdgeTouch();

    MCAPI static ::std::add_lvalue_reference_t<bool[]> _wasPressed();

    MCAPI static ::std::add_lvalue_reference_t<bool[]> _wasPressedThisUpdate();

    MCAPI static ::std::add_lvalue_reference_t<bool[]> _wasReleased();

    MCAPI static ::std::add_lvalue_reference_t<bool[]> _wasReleasedThisUpdate();
    // NOLINTEND
};
#else // @header-generator platform
class Multitouch {};
#endif // @header-generator platform
#endif // @header-generator platform
