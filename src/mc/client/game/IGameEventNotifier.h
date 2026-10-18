#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"

class IGameEventNotifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameEventNotifier() = default;

    virtual void onGameEventNotification(::ui::GameEventNotification) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"

class IGameEventNotifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameEventNotifier() = default;

    virtual void onGameEventNotification(::ui::GameEventNotification notification) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IGameEventNotifier {};
#endif // @header-generator platform
#endif // @header-generator platform
