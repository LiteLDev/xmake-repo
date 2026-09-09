#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct TextureStreamingPerformanceTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mTotalMipUploadBytes;
    ::ll::TypedStorage<8, 8, ulong> mTotalMipUploadTime;
    ::ll::TypedStorage<8, 8, ulong> mNumCacheHits;
    ::ll::TypedStorage<8, 8, ulong> mNumCacheMisses;
    ::ll::TypedStorage<8, 8, ulong> mTotalCacheHitTime;
    ::ll::TypedStorage<8, 8, ulong> mTotalCacheHitBytes;
    ::ll::TypedStorage<8, 8, ulong> mTotalCacheMissTime;
    ::ll::TypedStorage<8, 8, ulong> mTotalCacheMissBytes;
    ::ll::TypedStorage<8, 8, ulong> mTotalTexturesTracked;
    ::ll::TypedStorage<8, 8, ulong> mPeakTextureMemoryUsage;
    // NOLINTEND
};

} // namespace dragon::texturestreaming
