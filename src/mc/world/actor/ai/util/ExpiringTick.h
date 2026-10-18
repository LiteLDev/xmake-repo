#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Tick.h"

class ExpiringTick {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick> mExpireAtTick;
    ::ll::TypedStorage<2, 2, ushort> mTicksUntilExpire;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Tick getExpireAtTick() const;

    MCNAPI float getNormalizedElapsedTime(::Tick const&) const;

    MCNAPI bool isActive(::Tick) const;

    MCNAPI bool isExpired(::Tick) const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
