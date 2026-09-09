#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchEventResult.h"
#include "mc/deps/input/TouchPoint.h"
#include "mc/deps/input/TouchState.h"

class TouchPointResults {
public:
    // TouchPointResults inner types define
    using TouchEventResults = std::vector<std::pair<TouchPoint, TouchEventResult>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<TouchPoint, TouchEventResult>>> _touchEventResults;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addPointer(int, ::TouchState, float, float, bool, bool);
    // NOLINTEND
};
