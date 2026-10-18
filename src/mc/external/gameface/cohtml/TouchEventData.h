#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/gameface/cohtml/EventModifiersState.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace cohtml {

struct TouchEventData {
public:
    // TouchEventData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
    ::ll::UntypedStorage<4, 4> mUnk2c2108;
    ::ll::UntypedStorage<4, 4> mUnk8967ed;
    ::ll::UntypedStorage<4, 4> mUnk1d254f;
    ::ll::UntypedStorage<4, 4> mUnkee1a09;
    ::ll::UntypedStorage<1, 7> mUnk478d1b;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchEventData& operator=(TouchEventData const&);
    TouchEventData(TouchEventData const&);
    TouchEventData();
#else // @header-generator platform
    enum class EventType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace cohtml
