#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class BoundingBox;
struct BiomeIdType;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BiomeArea {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                       mStrideX;
    ::ll::TypedStorage<4, 4, uint>                       mStrideY;
    ::ll::TypedStorage<8, 24, std::vector<const Biome*>> mBiomes;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                           mStrideX;
    ::ll::TypedStorage<4, 4, uint>                           mStrideY;
    ::ll::TypedStorage<8, 24, ::std::vector<::Biome const*>> mBiomes;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BiomeArea();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI ~BiomeArea();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
