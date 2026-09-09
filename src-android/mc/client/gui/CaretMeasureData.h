#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CaretMeasureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>  position;
    ::ll::TypedStorage<1, 1, bool const> shouldRender;
    // NOLINTEND

public:
    // prevent constructor by default
    CaretMeasureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CaretMeasureData(int, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, bool);
    // NOLINTEND
};
