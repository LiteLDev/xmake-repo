#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/chunk/LocalMobCapCalc.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
class LevelChunkVolumeData;
class Mob;
class WeakEntityRef;
// clang-format on

namespace br::spawn {

struct State {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mSpawnableChunkCount;
    ::ll::TypedStorage<4, 32, std::array<int, 8>>           mobCategoryCounts;
    ::ll::TypedStorage<8, 56, ::br::spawn::LocalMobCapCalc> mCalc;
    // NOLINTEND
};

} // namespace br::spawn
