#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/EventModifiersState.h"

namespace cohtml {

struct KeyEventData {
public:
    // KeyEventData inner types define
    enum EventType : uint {
        Unknown = 0,
        KeyDown = 1,
        KeyUp   = 2,
        Char    = 3,
    };

    enum EventLocation : uint {
        Standard = 0,
        Left     = 1,
        Right    = 2,
        Numpad   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                   KeyCode;
    ::ll::TypedStorage<4, 4, ::cohtml::KeyEventData::EventType>     Type;
    ::ll::TypedStorage<1, 7, ::cohtml::EventModifiersState>         Modifiers;
    ::ll::TypedStorage<4, 4, ::cohtml::KeyEventData::EventLocation> Location;
    ::ll::TypedStorage<1, 1, bool>                                  IsAutoRepeat;
    ::ll::TypedStorage<1, 1, bool>                                  IsNumPad;
    ::ll::TypedStorage<1, 1, bool>                                  IsSystemKey;
    // NOLINTEND
};

} // namespace cohtml
