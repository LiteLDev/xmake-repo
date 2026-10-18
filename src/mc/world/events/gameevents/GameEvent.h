#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/events/gameevents/game_event_config/GameEventCategory.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/gameevents/game_event_config/GameEventType.h"

class GameEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameEventConfig::GameEventType const> mType;
    ::ll::TypedStorage<1, 1, uchar const>                            mCategories;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    GameEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getRadius() const;

    MCNAPI float getRadiusSqrd() const;

    MCNAPI ::GameEventConfig::GameEventType const getType() const;

    MCNAPI bool isCategory(::GameEventConfig::GameEventCategory) const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
