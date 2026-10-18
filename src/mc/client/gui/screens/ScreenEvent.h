#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenEventData.h"
#include "mc/client/gui/screens/ScreenEventScope.h"
#include "mc/client/gui/screens/ScreenEventType.h"

struct ScreenEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScreenEventType>    type;
    ::ll::TypedStorage<8, 40, ::ScreenEventData>   data;
    ::ll::TypedStorage<1, 1, ::ScreenEventScope>   scope;
    ::ll::TypedStorage<1, 1, bool>                 localEvent;
    ::ll::TypedStorage<8, 16, std::weak_ptr<void>> lifetimeCheck;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenEvent& operator=(ScreenEvent const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenEventData.h"
#include "mc/client/gui/screens/ScreenEventScope.h"
#include "mc/client/gui/screens/ScreenEventType.h"

struct ScreenEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScreenEventType>      type;
    ::ll::TypedStorage<8, 40, ::ScreenEventData>     data;
    ::ll::TypedStorage<1, 1, ::ScreenEventScope>     scope;
    ::ll::TypedStorage<1, 1, bool>                   localEvent;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<void>> lifetimeCheck;
    // NOLINTEND
};
#else // @header-generator platform
struct ScreenEvent {};
#endif // @header-generator platform
#endif // @header-generator platform
