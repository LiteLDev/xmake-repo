#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkPos;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
// clang-format on

namespace br::spawn {

struct LocalMobCapCalc {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // LocalMobCapCalc inner types define
    using MobCounts = ::std::array<int, 8>;

    using PlayerList = ::std::vector<::Player const*>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                              mRegion;
    ::ll::TypedStorage<8, 24, std::vector<std::tuple<long, std::vector<const Player*>>>>  mPlayersNearChunk;
    ::ll::TypedStorage<8, 24, std::vector<std::tuple<const Player*, std::array<int, 8>>>> mMobCounts;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                                      mRegion;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::tuple<int64, ::std::vector<::Player const*>>>> mPlayersNearChunk;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::tuple<::Player const*, ::std::array<int, 8>>>> mMobCounts;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::spawn
