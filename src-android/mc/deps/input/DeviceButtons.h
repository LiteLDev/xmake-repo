#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
