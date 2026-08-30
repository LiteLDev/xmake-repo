#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Traits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTypeName;
    ::ll::TypedStorage<4, 4, int>          mCount;
    // NOLINTEND

public:
    // prevent constructor by default
    Traits& operator=(Traits const&);
    Traits();
};
