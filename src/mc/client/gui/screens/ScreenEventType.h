#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ScreenEventType : int {
    Undefined                        = 0,
    ButtonEvent                      = 1,
    HoverEvent                       = 2,
    PointerMoveEvent                 = 3,
    PointerHeldEvent                 = 4,
    FocusMoveEvent                   = 5,
    PreCollectionRefresh             = 6,
    InputModeChangeEvent             = 7,
    ScreenViewRefresh                = 8,
    ScrollDirectionEvent             = 9,
    ScrollRequestEvent               = 10,
    TextEditChange                   = 11,
    ToggleChangeEvent                = 12,
    ControllerDirectionEvent         = 13,
    RawInputEvent                    = 14,
    SliderChangeEvent                = 15,
    AnimationEvent                   = 16,
    LockedStateEvent                 = 17,
    ClippedCollectionRange           = 18,
    ClipStateChangeEvent             = 19,
    TextEditSelectedStateChangeEvent = 20,
    CustomRendererEvent              = 21,
    ScreenEventTypeCount             = 22,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ScreenEventType : int {
    Undefined                        = 0,
    ButtonEvent                      = 1,
    HoverEvent                       = 2,
    PointerMoveEvent                 = 3,
    PointerHeldEvent                 = 4,
    FocusMoveEvent                   = 5,
    PreCollectionRefresh             = 6,
    InputModeChangeEvent             = 7,
    ScreenViewRefresh                = 8,
    ScrollDirectionEvent             = 9,
    ScrollRequestEvent               = 10,
    TextEditChange                   = 11,
    ToggleChangeEvent                = 12,
    ControllerDirectionEvent         = 13,
    RawInputEvent                    = 14,
    SliderChangeEvent                = 15,
    AnimationEvent                   = 16,
    LockedStateEvent                 = 17,
    ClippedCollectionRange           = 18,
    ClipStateChangeEvent             = 19,
    TextEditSelectedStateChangeEvent = 20,
    CustomRendererEvent              = 21,
    ScreenEventTypeCount             = 22,
};
#else // @header-generator platform
enum class ScreenEventType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
