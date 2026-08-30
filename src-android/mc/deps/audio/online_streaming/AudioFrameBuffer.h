#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Audio {

class AudioFrameBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::span<float>> mSamples;
    ::ll::TypedStorage<1, 1, uchar>               mChannels;
    ::ll::TypedStorage<8, 8, ulong>               mMaxFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioFrameBuffer();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<Audio::AudioFrameBuffer, std::error_code> create(::gsl::span<float>, uchar, ulong);
    // NOLINTEND
};

} // namespace Audio
