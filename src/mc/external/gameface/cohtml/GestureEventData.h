#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct GestureEventData {
public:
    // GestureEventData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
    ::ll::UntypedStorage<4, 12> mUnkb77cd5;
    ::ll::UntypedStorage<4, 4>  mUnk451f1b;
    ::ll::UntypedStorage<4, 4>  mUnka68898;
    ::ll::UntypedStorage<4, 4>  mUnk7802a2;
    ::ll::UntypedStorage<4, 4>  mUnk43e686;
    ::ll::UntypedStorage<4, 4>  mUnkbaac84;
    // NOLINTEND

public:
    // prevent constructor by default
    GestureEventData& operator=(GestureEventData const&);
    GestureEventData(GestureEventData const&);
    GestureEventData();
#else // @header-generator platform
    enum class EventType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace cohtml
