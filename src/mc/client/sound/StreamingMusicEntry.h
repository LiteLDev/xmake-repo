#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct StreamingMusicEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mUrl;
    ::ll::TypedStorage<8, 8, ulong>        mTotalSamples;
    ::ll::TypedStorage<4, 4, uint>         mSampleRate;
    ::ll::TypedStorage<4, 4, uint>         mChannels;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamingMusicEntry& operator=(StreamingMusicEntry const&);
    StreamingMusicEntry(StreamingMusicEntry const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct StreamingMusicEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mUrl;
    ::ll::TypedStorage<8, 8, uint64>         mTotalSamples;
    ::ll::TypedStorage<4, 4, uint>           mSampleRate;
    ::ll::TypedStorage<4, 4, uint>           mChannels;
    // NOLINTEND
};
#else // @header-generator platform
struct StreamingMusicEntry {};
#endif // @header-generator platform
#endif // @header-generator platform
