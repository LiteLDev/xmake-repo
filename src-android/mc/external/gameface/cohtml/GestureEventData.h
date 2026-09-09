#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct GestureEventData {
public:
    // GestureEventData inner types define
    enum EventType : uint {
        Unknown  = 0,
        Fling    = 1,
        PanStart = 2,
        PanEnd   = 3,
        Tap      = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>                                     Details;
    ::ll::TypedStorage<4, 4, float>                                 CurrentLocationX;
    ::ll::TypedStorage<4, 4, float>                                 CurrentLocationY;
    ::ll::TypedStorage<4, 4, float>                                 StartLocationX;
    ::ll::TypedStorage<4, 4, float>                                 StartLocationY;
    ::ll::TypedStorage<4, 4, ::cohtml::GestureEventData::EventType> Type;
    // NOLINTEND
};

} // namespace cohtml
