#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
class Player;
// clang-format on

namespace br::spawn {

struct LocalMobCapCalc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                              mRegion;
    ::ll::TypedStorage<8, 24, std::vector<std::tuple<long, std::vector<const Player*>>>>  mPlayersNearChunk;
    ::ll::TypedStorage<8, 24, std::vector<std::tuple<const Player*, std::array<int, 8>>>> mMobCounts;
    // NOLINTEND
};

} // namespace br::spawn
