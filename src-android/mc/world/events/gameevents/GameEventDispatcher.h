#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class GameEvent;
class IGameEventListener;
class Vec3;
struct GameEventContext;
// clang-format on

class GameEventDispatcher {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void post(::BlockSource&, ::Actor*, ::GameEvent const&, ::BlockPos const&, ::Block const*);

    MCNAPI void post(::BlockSource&, ::Actor*, ::GameEvent const&, ::Vec3 const&, ::Block const*);
    // NOLINTEND
};
