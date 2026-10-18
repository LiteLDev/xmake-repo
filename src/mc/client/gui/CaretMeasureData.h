#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CaretMeasureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>  position;
    ::ll::TypedStorage<1, 1, bool const> shouldRender;
    // NOLINTEND
};
#else // @header-generator platform
struct CaretMeasureData {};
#endif // @header-generator platform
#endif // @header-generator platform
