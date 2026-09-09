#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/EventModifiersState.h"
#include "mc/external/gameface/cohtml/EventMouseModifiersState.h"

namespace cohtml {

struct MouseEventData {
public:
    // MouseEventData inner types define
    enum EventType : uint {
        MouseMove  = 0,
        MouseDown  = 1,
        MouseUp    = 2,
        MouseWheel = 3,
        MouseLeave = 4,
    };

    enum MouseButton : uint {
        ButtonNone    = 0,
        ButtonLeft    = 0,
        ButtonMiddle  = 1,
        ButtonRight   = 2,
        ButtonBack    = 3,
        ButtonForward = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::cohtml::MouseEventData::EventType>   Type;
    ::ll::TypedStorage<4, 4, ::cohtml::MouseEventData::MouseButton> Button;
    ::ll::TypedStorage<4, 4, int>                                   X;
    ::ll::TypedStorage<4, 4, int>                                   Y;
    ::ll::TypedStorage<4, 4, float>                                 WheelX;
    ::ll::TypedStorage<4, 4, float>                                 WheelY;
    ::ll::TypedStorage<4, 4, int>                                   DeltaX;
    ::ll::TypedStorage<4, 4, int>                                   DeltaY;
    ::ll::TypedStorage<1, 7, ::cohtml::EventModifiersState>         Modifiers;
    ::ll::TypedStorage<1, 5, ::cohtml::EventMouseModifiersState>    MouseModifiers;
    // NOLINTEND
};

} // namespace cohtml
