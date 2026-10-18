#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class GamepadButton : uchar {
    A_BUTTON                 = 0,
    B_BUTTON                 = 1,
    X_BUTTON                 = 2,
    Y_BUTTON                 = 3,
    DPAD_UP                  = 4,
    DPAD_DOWN                = 5,
    DPAD_LEFT                = 6,
    DPAD_RIGHT               = 7,
    LEFT_STICK               = 8,
    RIGHT_STICK              = 9,
    LEFT_SHOULDER_1          = 10,
    RIGHT_SHOULDER_1         = 11,
    BACK_BUTTON              = 12,
    START_BUTTON             = 13,
    HEADSET_TAP              = 14,
    LEFT_SHOULDER_2          = 15,
    RIGHT_SHOULDER_2         = 16,
    GENERIC_BUTTON_1         = 17,
    GENERIC_BUTTON_2         = 18,
    GENERIC_BUTTON_3         = 19,
    GENERIC_BUTTON_4         = 20,
    GENERIC_BUTTON_5         = 21,
    GENERIC_BUTTON_6         = 22,
    GENERIC_BUTTON_7         = 23,
    GENERIC_BUTTON_8         = 24,
    GENERIC_BUTTON_9         = 25,
    GENERIC_BUTTON_10        = 26,
    GENERIC_BUTTON_11        = 27,
    GENERIC_BUTTON_12        = 28,
    GENERIC_BUTTON_13        = 29,
    GENERIC_BUTTON_14        = 30,
    GENERIC_BUTTON_15        = 31,
    LEFT_STICK_AS_DPAD_UP    = 32,
    LEFT_STICK_AS_DPAD_DOWN  = 33,
    LEFT_STICK_AS_DPAD_LEFT  = 34,
    LEFT_STICK_AS_DPAD_RIGHT = 35,
    _count                   = 36,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class GamepadButton : uchar {
    AButton              = 0,
    BButton              = 1,
    XButton              = 2,
    YButton              = 3,
    DpadUp               = 4,
    DpadDown             = 5,
    DpadLeft             = 6,
    DpadRight            = 7,
    LeftStick            = 8,
    RightStick           = 9,
    LeftShoulder1        = 10,
    RightShoulder1       = 11,
    BackButton           = 12,
    StartButton          = 13,
    HeadsetTap           = 14,
    LeftShoulder2        = 15,
    RightShoulder2       = 16,
    GenericButton1       = 17,
    GenericButton2       = 18,
    GenericButton3       = 19,
    GenericButton4       = 20,
    GenericButton5       = 21,
    GenericButton6       = 22,
    GenericButton7       = 23,
    GenericButton8       = 24,
    GenericButton9       = 25,
    GenericButton10      = 26,
    GenericButton11      = 27,
    GenericButton12      = 28,
    GenericButton13      = 29,
    GenericButton14      = 30,
    GenericButton15      = 31,
    LeftStickAsDpadUp    = 32,
    LeftStickAsDpadDown  = 33,
    LeftStickAsDpadLeft  = 34,
    LeftStickAsDpadRight = 35,
    Count                = 36,
};
#else // @header-generator platform
enum class GamepadButton : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
