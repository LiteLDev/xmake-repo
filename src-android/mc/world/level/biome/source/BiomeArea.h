#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
class BoundingBox;
struct BiomeIdType;
// clang-format on

class BiomeArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                       mStrideX;
    ::ll::TypedStorage<4, 4, uint>                       mStrideY;
    ::ll::TypedStorage<8, 24, std::vector<const Biome*>> mBiomes;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeArea();
};
