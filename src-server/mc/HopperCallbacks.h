#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HopperCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbbc24f;
    ::ll::UntypedStorage<8, 64> mUnkd1ed92;
    // NOLINTEND

public:
    // prevent constructor by default
    HopperCallbacks& operator=(HopperCallbacks const&);
    HopperCallbacks(HopperCallbacks const&);
    HopperCallbacks();
};
