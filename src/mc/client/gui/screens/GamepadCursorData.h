#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct GamepadCursorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mEnabled;
    ::ll::TypedStorage<1, 1, bool>  mTempDisabled;
    ::ll::TypedStorage<4, 4, float> mSensitivity;
    // NOLINTEND

public:
    // prevent constructor by default
    GamepadCursorData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GamepadCursorData(bool, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, float);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct GamepadCursorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mEnabled;
    ::ll::TypedStorage<1, 1, bool>  mTempDisabled;
    ::ll::TypedStorage<4, 4, float> mSensitivity;
    // NOLINTEND
};
#else // @header-generator platform
struct GamepadCursorData {};
#endif // @header-generator platform
#endif // @header-generator platform
