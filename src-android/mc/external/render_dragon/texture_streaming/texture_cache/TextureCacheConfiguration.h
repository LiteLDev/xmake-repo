#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct TextureCacheConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         mFlushThreshold;
    ::ll::TypedStorage<4, 4, uint>         mMaxDefaultMipSize;
    ::ll::TypedStorage<4, 4, uint>         mMemoryBudget;
    ::ll::TypedStorage<4, 4, uint>         mFramesUnusedBeforePruning;
    ::ll::TypedStorage<4, 4, uint>         mFlushIntervalSeconds;
    ::ll::TypedStorage<4, 4, uint>         mMaxBytesPerInterval;
    ::ll::TypedStorage<8, 24, std::string> mFilePath;
    ::ll::TypedStorage<4, 4, uint>         mBlockSize;
    ::ll::TypedStorage<4, 4, uint>         mMaxSize;
    ::ll::TypedStorage<4, 4, uint>         mMaxMipSize;
    ::ll::TypedStorage<1, 1, bool>         mForceRestartCache;
    ::ll::TypedStorage<1, 1, uchar>        mMaxConcurrentFetches;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureCacheConfiguration& operator=(TextureCacheConfiguration const&);
};

} // namespace dragon::texturestreaming
