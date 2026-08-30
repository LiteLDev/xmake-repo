#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkMemoryEstimateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>  mTotalLevelChunkSize;
    ::ll::TypedStorage<8, 8, ulong>  mSubChunkLightDataSize;
    ::ll::TypedStorage<8, 8, ulong>  mSubChunkBlockDataSize;
    ::ll::TypedStorage<8, 8, ulong>  mBiomeData3DSize;
    ::ll::TypedStorage<8, 8, ulong>  mBlockTickingQueueSize;
    ::ll::TypedStorage<8, 8, ulong>  mMinSubChunkPaletteSize;
    ::ll::TypedStorage<8, 8, double> mAverageSubChunkPaletteSize;
    ::ll::TypedStorage<8, 8, ulong>  mMaxSubChunkPaletteSize;
    ::ll::TypedStorage<8, 8, ulong>  mMinBiomePaletteSize;
    ::ll::TypedStorage<8, 8, double> mAverageBiomePaletteSize;
    ::ll::TypedStorage<8, 8, ulong>  mMaxBiomePaletteSize;
    // NOLINTEND
};
