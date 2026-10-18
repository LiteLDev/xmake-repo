#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Audio {

class AudioFrameBuffer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::span<float>> mSamples;
    ::ll::TypedStorage<1, 1, uchar>               mChannels;
    ::ll::TypedStorage<8, 8, ulong>               mMaxFrames;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkf87a71;
    ::ll::UntypedStorage<1, 1>  mUnk2c257a;
    ::ll::UntypedStorage<8, 8>  mUnk1aadea;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AudioFrameBuffer& operator=(AudioFrameBuffer const&);
    AudioFrameBuffer(AudioFrameBuffer const&);
#endif // @header-generator platform
    AudioFrameBuffer();

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<Audio::AudioFrameBuffer, std::error_code> create(::gsl::span<float>, uchar, ulong);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::Bedrock::Result<::Audio::AudioFrameBuffer>
    create(::gsl::span<float> samples, uchar channels, uint64 maxFrames);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Audio
