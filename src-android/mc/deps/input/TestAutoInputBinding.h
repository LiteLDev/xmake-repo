#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TestAutoInputBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>          actionValue;
    // NOLINTEND

public:
    // prevent constructor by default
    TestAutoInputBinding& operator=(TestAutoInputBinding const&);
    TestAutoInputBinding();
};
