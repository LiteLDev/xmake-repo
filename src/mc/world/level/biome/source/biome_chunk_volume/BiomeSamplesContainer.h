#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace BiomeChunkVolume {

struct BiomeSamplesContainer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<const Biome*>> mBiomeBuffer;
    ::ll::TypedStorage<4, 12, ::BlockPos const>          mBufferWorldOrigin;
    ::ll::TypedStorage<4, 4, int const>                  mBufferSizeY;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Biome const*>> mBiomeBuffer;
    ::ll::TypedStorage<4, 12, ::BlockPos const>              mBufferWorldOrigin;
    ::ll::TypedStorage<4, 4, int const>                      mBufferSizeY;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace BiomeChunkVolume
