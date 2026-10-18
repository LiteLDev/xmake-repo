#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkMemoryEstimateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>  mTotalLevelChunkSize;
    ::ll::TypedStorage<8, 8, ulong>  mSubChunkLightDataSize;
    ::ll::TypedStorage<8, 8, ulong>  mSubChunkBlockDataSize;
    ::ll::TypedStorage<8, 8, ulong>  mBiomeData3DSize;
    ::ll::TypedStorage<8, 8, ulong>  mBlockTickingQueueSize;
    ::ll::TypedStorage<8, 8, ulong>  mMinSubChunkPaletteSize;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mTotalLevelChunkSize;
    ::ll::TypedStorage<8, 8, uint64> mSubChunkLightDataSize;
    ::ll::TypedStorage<8, 8, uint64> mSubChunkBlockDataSize;
    ::ll::TypedStorage<8, 8, uint64> mBiomeData3DSize;
    ::ll::TypedStorage<8, 8, uint64> mBlockTickingQueueSize;
    ::ll::TypedStorage<8, 8, uint64> mMinSubChunkPaletteSize;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, double> mAverageSubChunkPaletteSize;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>  mMaxSubChunkPaletteSize;
    ::ll::TypedStorage<8, 8, ulong>  mMinBiomePaletteSize;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mMaxSubChunkPaletteSize;
    ::ll::TypedStorage<8, 8, uint64> mMinBiomePaletteSize;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, double> mAverageBiomePaletteSize;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>  mMaxBiomePaletteSize;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mMaxBiomePaletteSize;
#endif // @header-generator platform
    // NOLINTEND
};
