#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DimensionType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isCustom() const;

    MCNAPI int value() const;
    // NOLINTEND
};
