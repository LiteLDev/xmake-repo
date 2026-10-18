#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct TextureStreamingPerformanceTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk91695c;
    ::ll::UntypedStorage<8, 8> mUnkb5897d;
    ::ll::UntypedStorage<8, 8> mUnkda4fde;
    ::ll::UntypedStorage<8, 8> mUnke7347c;
    ::ll::UntypedStorage<8, 8> mUnkbad9ac;
    ::ll::UntypedStorage<8, 8> mUnkd13bac;
    ::ll::UntypedStorage<8, 8> mUnkc38570;
    ::ll::UntypedStorage<8, 8> mUnkccc224;
    ::ll::UntypedStorage<8, 8> mUnk1ea615;
    ::ll::UntypedStorage<8, 8> mUnk5eba7d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TextureStreamingPerformanceTelemetryData& operator=(TextureStreamingPerformanceTelemetryData const&);
    TextureStreamingPerformanceTelemetryData(TextureStreamingPerformanceTelemetryData const&);
    TextureStreamingPerformanceTelemetryData();
#endif // @header-generator platform
};

} // namespace dragon::texturestreaming
