#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/spawn_category/Type.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/chunk/LocalMobCapCalc.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
class LevelChunkVolumeData;
class Mob;
class WeakEntityRef;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace br::spawn {

struct State {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mSpawnableChunkCount;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 32, std::array<int, 8>>           mobCategoryCounts;
#else // @header-generator platform
    ::ll::TypedStorage<4, 32, ::std::array<int, 8>>         mobCategoryCounts;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 56, ::br::spawn::LocalMobCapCalc> mCalc;
    // NOLINTEND
};

} // namespace br::spawn
