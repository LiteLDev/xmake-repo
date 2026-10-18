#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/dimension/DimensionType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/ChunkGenPlayerSnapshot.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Dimension;
class Player;
#else // @header-generator platform
struct ChunkGenPlayerSnapshot;
#endif // @header-generator platform
// clang-format on

struct ChunkGenSessionContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ChunkGenPlayerSnapshot>> mPlayers;
    ::ll::TypedStorage<4, 4, ::DimensionType>                      mDimension;
    ::ll::TypedStorage<8, 8, ::LevelSeed64>                        mWorldSeed;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkGenPlayerSnapshot>> mPlayers;
    ::ll::TypedStorage<4, 4, ::DimensionType>                          mDimension;
    ::ll::TypedStorage<8, 8, ::LevelSeed64>                            mWorldSeed;
#endif // @header-generator platform
    // NOLINTEND
};
