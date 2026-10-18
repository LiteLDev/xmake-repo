#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace EAS {

class BiomeSample {
public:
    // BiomeSample inner types declare
    // clang-format off
    struct BiomeWithWeight;
    // clang-format on

    // BiomeSample inner types define
    struct BiomeWithWeight {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Biome const&> mBiome;
        ::ll::TypedStorage<4, 4, float>          mWeight;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeWithWeight& operator=(BiomeWithWeight const&);
        BiomeWithWeight(BiomeWithWeight const&);
        BiomeWithWeight();
    };
};

} // namespace EAS
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
