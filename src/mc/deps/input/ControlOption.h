#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ControlOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mControlOptionId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ControlOption() = default;
    // NOLINTEND
};
#else // @header-generator platform
class ControlOption {};
#endif // @header-generator platform
#endif // @header-generator platform
