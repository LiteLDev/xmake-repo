#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/gameface/cohtml/EventModifiersState.h"
#include "mc/external/gameface/cohtml/EventMouseModifiersState.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace cohtml {

struct MouseEventData {
public:
    // MouseEventData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum EventType : uint {
        MouseMove  = 0,
        MouseDown  = 1,
        MouseUp    = 2,
        MouseWheel = 3,
        MouseLeave = 4,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class EventType : int {
        MouseMove  = 0,
        MouseDown  = 1,
        MouseUp    = 2,
        MouseWheel = 3,
        MouseLeave = 4,
    };
#else // @header-generator platform
    enum class EventType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class MouseButton : int {
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
    ::ll::UntypedStorage<4, 4> mUnk7e1623;
    ::ll::UntypedStorage<4, 4> mUnk9203d7;
    ::ll::UntypedStorage<4, 4> mUnk340791;
    ::ll::UntypedStorage<4, 4> mUnk2490bc;
    ::ll::UntypedStorage<4, 4> mUnk3fa94e;
    ::ll::UntypedStorage<4, 4> mUnk58890a;
    ::ll::UntypedStorage<4, 4> mUnk8a94da;
    ::ll::UntypedStorage<4, 4> mUnkfd65b6;
    ::ll::UntypedStorage<1, 7> mUnke2d279;
    ::ll::UntypedStorage<1, 5> mUnk5849fe;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseEventData& operator=(MouseEventData const&);
    MouseEventData(MouseEventData const&);
    MouseEventData();
#else // @header-generator platform
    enum class MouseButton : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace cohtml
