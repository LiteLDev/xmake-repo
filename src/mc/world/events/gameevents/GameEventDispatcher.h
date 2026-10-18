#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class GameEvent;
#if defined(LL_PLAT_A) // @header-generator platform
class IGameEventListener;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct GameEventContext;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class GameEventDispatcher {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void post(::BlockSource&, ::Actor*, ::GameEvent const&, ::BlockPos const&, ::Block const*);

    MCNAPI void post(::BlockSource&, ::Actor*, ::GameEvent const&, ::Vec3 const&, ::Block const*);
#else // @header-generator platform
    MCAPI void post(
        ::BlockSource&     region,
        ::Actor*           source,
        ::GameEvent const& gameEvent,
        ::Vec3 const&      originPos,
        ::Block const*     affectedBlock
    );
#endif // @header-generator platform
    // NOLINTEND
};
