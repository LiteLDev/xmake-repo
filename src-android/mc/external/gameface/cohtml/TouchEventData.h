#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/EventModifiersState.h"

namespace cohtml {

struct TouchEventData {
public:
    // TouchEventData inner types define
    enum EventType : uint {
        TouchMove = 0,
        TouchDown = 1,
        TouchUp   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                 X;
    ::ll::TypedStorage<4, 4, int>                                 Y;
    ::ll::TypedStorage<4, 4, uint>                                Id;
    ::ll::TypedStorage<4, 4, ::cohtml::TouchEventData::EventType> Type;
    ::ll::TypedStorage<1, 7, ::cohtml::EventModifiersState>       Modifiers;
    // NOLINTEND
};

} // namespace cohtml
