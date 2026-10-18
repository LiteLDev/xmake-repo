#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class TickNextTickData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>    pos;
    ::ll::TypedStorage<4, 4, int>            priorityOffset;
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
    ::ll::TypedStorage<8, 8, ::Tick>         tick;
#else // @header-generator platform
    ::BlockPos     pos;
    int            priorityOffset;
    ::Block const* mBlock;
    ::Tick         tick;

#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    TickNextTickData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TickNextTickData(::BlockPos const&, ::Block const&, ::Tick const&, int);

    MCNAPI bool operator==(::TickNextTickData const&) const;

    MCNAPI bool operator>(::TickNextTickData const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, ::Block const&, ::Tick const&, int);
    // NOLINTEND
#else // @header-generator platform
    bool operator>(TickNextTickData const& tnd) const {
        if (tick != tnd.tick) {
            return tick > tnd.tick;
        }
        return priorityOffset > tnd.priorityOffset;
    }
#endif // @header-generator platform
};
