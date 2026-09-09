#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ScalarOptional.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/storage/BlendingBlockType.h"

namespace ChunkBlenderUtil {

struct AttenuationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDistanceToBlendTarget;
    ::ll::UntypedStorage<4, 4>      mBlendTargetHeight;
    ::ll::UntypedStorage<4, 164>    mBlendTargetDensities;
    ::ll::UntypedStorage<2, 192>    mBiomes;
    ::ll::UntypedStorage<1, 41>     mBorderBlocks;
    // NOLINTEND
};

} // namespace ChunkBlenderUtil
