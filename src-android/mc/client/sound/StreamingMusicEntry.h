#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
