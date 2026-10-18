#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class InputEventType : uchar {
    Button                          = 0,
    PointerLocation                 = 1,
    TextChar                        = 2,
    Direction                       = 3,
    Vector                          = 4,
    RawInput                        = 5,
    AddClient                       = 6,
    ChangeUser                      = 7,
    ControllerConnectionStateChange = 8,
    PointerLocationWithId           = 9,
    ClearPointerLocationWithId      = 10,
    ClearPointerLocations           = 11,
    TouchPadTouch                   = 12,
    CustomZone                      = 13,
    ControlOption                   = 14,
    NumberOfEnabledControlOptions   = 15,
    OverlappingControls             = 16,
    PotentialOverlappingControls    = 17,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class InputEventType : schar {
    Button                          = 0,
    PointerLocation                 = 1,
    TextChar                        = 2,
    Direction                       = 3,
    Vector                          = 4,
    RawInput                        = 5,
    AddClient                       = 6,
    ChangeUser                      = 7,
    ControllerConnectionStateChange = 8,
    PointerLocationWithId           = 9,
    ClearPointerLocationWithId      = 10,
    ClearPointerLocations           = 11,
    TouchPadTouch                   = 12,
    CustomZone                      = 13,
    ControlOption                   = 14,
    NumberOfEnabledControlOptions   = 15,
    OverlappingControls             = 16,
    PotentialOverlappingControls    = 17,
};
#else // @header-generator platform
enum class InputEventType : schar {};
#endif // @header-generator platform
#endif // @header-generator platform
