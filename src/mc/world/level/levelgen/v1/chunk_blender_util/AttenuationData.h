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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mDistanceToBlendTarget;
    ::ll::UntypedStorage<4, 4>      mBlendTargetHeight;
    ::ll::UntypedStorage<4, 164>    mBlendTargetDensities;
    ::ll::UntypedStorage<2, 192>    mBiomes;
    ::ll::UntypedStorage<1, 41>     mBorderBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                    mDistanceToBlendTarget;
    ::ll::TypedStorage<4, 4, ::ScalarOptional<float>>                                  mBlendTargetHeight;
    ::ll::TypedStorage<4, 164, ::std::array<::ScalarOptional<float>, 41>>              mBlendTargetDensities;
    ::ll::TypedStorage<2, 192, ::std::array<::ScalarOptional<::BiomeIdType>, 96>>      mBiomes;
    ::ll::TypedStorage<1, 41, ::std::array<::ScalarOptional<::BlendingBlockType>, 41>> mBorderBlocks;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ChunkBlenderUtil
