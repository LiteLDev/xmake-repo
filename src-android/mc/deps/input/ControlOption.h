#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ControlOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mControlOptionId;
    // NOLINTEND

public:
    // prevent constructor by default
    ControlOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ControlOption() = default;
    // NOLINTEND
};
