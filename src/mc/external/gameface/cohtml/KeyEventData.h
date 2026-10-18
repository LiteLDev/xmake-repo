#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/gameface/cohtml/EventModifiersState.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace cohtml {

struct KeyEventData {
public:
    // KeyEventData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum EventType : uint {
        Unknown = 0,
        KeyDown = 1,
        KeyUp   = 2,
        Char    = 3,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class EventType : int {
        Unknown = 0,
        KeyDown = 1,
        KeyUp   = 2,
        Char    = 3,
    };
#else // @header-generator platform
    enum class EventType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class EventLocation : int {
        Standard = 0,
        Left     = 1,
        Right    = 2,
        Numpad   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk203d66;
    ::ll::UntypedStorage<4, 4> mUnk2dad26;
    ::ll::UntypedStorage<1, 7> mUnk84e76f;
    ::ll::UntypedStorage<4, 4> mUnkc8fa02;
    ::ll::UntypedStorage<1, 1> mUnk339782;
    ::ll::UntypedStorage<1, 1> mUnke1cd3d;
    ::ll::UntypedStorage<1, 1> mUnk1cea41;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyEventData& operator=(KeyEventData const&);
    KeyEventData(KeyEventData const&);
    KeyEventData();
#else // @header-generator platform
    enum class EventLocation : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace cohtml
