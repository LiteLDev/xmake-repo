#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DeviceButtonMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>          buttonNum;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceButtonMapping& operator=(DeviceButtonMapping const&);
    DeviceButtonMapping();
};
