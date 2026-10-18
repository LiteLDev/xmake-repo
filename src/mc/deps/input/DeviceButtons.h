#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/DeviceButtonState.h"

// auto generated forward declare list
// clang-format off
struct DeviceButtonEvent;
// clang-format on

class DeviceButtons {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void feedButton(int, ::DeviceButtonState);

    MCNAPI static ::DeviceButtonEvent getNextEvent();

    MCNAPI static bool next();

    MCNAPI static void rewind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int& _index();

    MCNAPI static std::vector<DeviceButtonEvent>& _inputs();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct DeviceButtonEvent;
// clang-format on

class DeviceButtons {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int& _index();

    MCAPI static ::std::vector<::DeviceButtonEvent>& _inputs();
    // NOLINTEND
};
#else // @header-generator platform
class DeviceButtons {};
#endif // @header-generator platform
#endif // @header-generator platform
