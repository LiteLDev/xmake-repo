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

struct GestureEventData {
public:
    // GestureEventData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    struct {
        ::ll::TypedStorage<4, 8, ::Vec2> delta;
    } panDetails;
    struct {
        ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds> duration;
    } flingDetails;
    ::ll::TypedStorage<4, 8, ::Vec2>                               currentLocation;
    ::ll::TypedStorage<4, 8, ::Vec2>                               startLocation;
    ::ll::TypedStorage<4, 4, ::OreUI::GestureEventData::EventType> type;
    // NOLINTEND
#else // @header-generator platform
    enum class EventType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
