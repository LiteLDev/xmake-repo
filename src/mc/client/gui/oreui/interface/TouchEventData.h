#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI {

struct TouchEventData {
public:
    // TouchEventData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class EventType : int {
        TouchMove = 0,
        TouchDown = 1,
        TouchUp   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>                             pos;
    ::ll::TypedStorage<4, 4, uint>                               id;
    ::ll::TypedStorage<4, 4, ::OreUI::TouchEventData::EventType> type;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchEventData(TouchEventData const&);
    TouchEventData();
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class EventType : int {
        TouchMove = 0,
        TouchDown = 1,
        TouchUp   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>                             pos;
    ::ll::TypedStorage<4, 4, uint>                               id;
    ::ll::TypedStorage<4, 4, ::OreUI::TouchEventData::EventType> type;
    // NOLINTEND
#else // @header-generator platform
    enum class EventType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
