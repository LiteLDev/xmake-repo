#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioFrameBuffer; }
// clang-format on

namespace Audio {

class IAudioDecoder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAudioDecoder() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> initialize() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> initialize() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<gsl::span<float>, std::error_code> decodeInto(::Audio::AudioFrameBuffer&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<::gsl::span<float>> decodeInto(::Audio::AudioFrameBuffer& outputBuffer) = 0;
#endif // @header-generator platform

    virtual uchar getChannels() const = 0;

    virtual int getSampleRate() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual long getCurrentFramePosition() const = 0;
#else // @header-generator platform
    virtual int64 getCurrentFramePosition() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTotalSamples(ulong) = 0;
#else // @header-generator platform
    virtual void setTotalSamples(uint64 totalSamples) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<ulong> getTotalSamples() const = 0;
#else // @header-generator platform
    virtual ::std::optional<uint64> getTotalSamples() const = 0;
#endif // @header-generator platform

    virtual bool isFinished() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getFileReadPosition() const = 0;
#else // @header-generator platform
    virtual uint64 getFileReadPosition() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSafeConsumePosition() const = 0;
#else // @header-generator platform
    virtual uint64 getSafeConsumePosition() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Audio
