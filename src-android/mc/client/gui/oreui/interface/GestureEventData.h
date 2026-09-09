#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

namespace OreUI {

struct GestureEventData {
public:
    // GestureEventData inner types define
    enum class EventType : int {
        Unknown  = 0,
        Fling    = 1,
        PanStart = 2,
        PanEnd   = 3,
        Tap      = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>                                     panDetails;
    ::ll::UntypedStorage<8, 8>                                     flingDetails;
    ::ll::TypedStorage<4, 8, ::Vec2>                               currentLocation;
    ::ll::TypedStorage<4, 8, ::Vec2>                               startLocation;
    ::ll::TypedStorage<4, 4, ::OreUI::GestureEventData::EventType> type;
    // NOLINTEND
};

} // namespace OreUI
