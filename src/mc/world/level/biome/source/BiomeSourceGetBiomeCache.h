#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

struct BiomeSourceGetBiomeCache {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, const Biome*>> mMap;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                             mLock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::Biome const*>> mMap;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                   mLock;
#endif // @header-generator platform
    // NOLINTEND
};
