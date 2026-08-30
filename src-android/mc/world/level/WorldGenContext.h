#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Aquifer;
class Block;
class BlockPos;
class IPreliminarySurfaceProvider;
// clang-format on

struct WorldGenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mAquifer;
    ::ll::UntypedStorage<8, 48> mTickUpdateFn;
    ::ll::UntypedStorage<8, 16> mPreliminarySurfaceProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldGenContext& operator=(WorldGenContext const&);
};
